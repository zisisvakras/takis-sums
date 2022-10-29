#include <stdio.h>                       /* Header file for standard I/O library */
#include <math.h>                                /* Header file for math library */

int main()
{ long i;
  double sum, current, sign, pi;
  i = 1;                                          /* Denominator of current term */
  sum = 0.0;                                                       /* So far sum */
  sign = 1.0;                                       /* Sign of current number */        
  do {
    current = 1/(((double)i) * ((double) i));                    /* Current term */
    sum = sum + current* sign;                   /* Add current term to sum */
    i++;                                                        /* Next term now */
    sign = sign *(-1.0);                               /* Sign of next term */
  } while (i < 31622777);            /* Stop if current term is very small */
  pi = sqrt(sum * 12) ;                           /* Compute approximation of pi */   
  printf("Summed %d terms, sum is %10.16f\n Pi is %1.16f", i-1, sum , pi);
  
}