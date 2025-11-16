#include <stdio.h>
#include <unistd.h>
#include <string.h>
#include <math.h>
#include "polybench.h"
#include <time.h>
#include <stdlib.h>
#include "2222231113_00.h"
#include <omp.h>
#define ceild(n,d)  ceil(((double)(n))/((double)(d)))
#define floord(n,d) floor(((double)(n))/((double)(d)))
/*
arg_depth: 2
arg_nstmts: 2
arg_bounds_index: 2
arg_prob_bounds_exist: 2
arg_narrays_per_dim: 2
arg_avg_narrays_read_per_stmt: 3
arg_bounds_coef: 1
arg_avg_ndeps_read_per_stmt: 1
arg_bounds_distance: 1
arg_prob_dep_write_exist: 3
id: 0
*/
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
#ifndef USE_INIT_SEED
#define INIT_SEED time(NULL)
#else
#define INIT_SEED atoi(argv[1])
#endif
static void init_array(int xa,DATA_TYPE POLYBENCH_1D(A,xA,xa),int xb,DATA_TYPE POLYBENCH_1D(B,xB,xb),int xc,DATA_TYPE POLYBENCH_1D(C,xC,xc),int xd,DATA_TYPE POLYBENCH_1D(D,xD,xd),int xe,int ye,DATA_TYPE POLYBENCH_2D(E,xE,yE,xe,ye),int xf,int yf,DATA_TYPE POLYBENCH_2D(F,xF,yF,xf,yf),int seed)
{
srand(seed);
int i_0, i_1;
for (i_0 = 0; i_0 < xa; i_0++) {
    A[i_0] = 0.9 + (rand() / (DATA_TYPE)RAND_MAX) * (1.1 - 0.9);
}
for (i_0 = 0; i_0 < xb; i_0++) {
    B[i_0] = 0.9 + (rand() / (DATA_TYPE)RAND_MAX) * (1.1 - 0.9);
}
for (i_0 = 0; i_0 < xc; i_0++) {
    C[i_0] = 0.9 + (rand() / (DATA_TYPE)RAND_MAX) * (1.1 - 0.9);
}
for (i_0 = 0; i_0 < xd; i_0++) {
    D[i_0] = 0.9 + (rand() / (DATA_TYPE)RAND_MAX) * (1.1 - 0.9);
}
for (i_0 = 0; i_0 < xe; i_0++) {
    for (i_1 = 0; i_1 < ye; i_1++) {
        E[i_0][i_1] = 0.9 + (rand() / (DATA_TYPE)RAND_MAX) * (1.1 - 0.9);
    }
}
for (i_0 = 0; i_0 < xf; i_0++) {
    for (i_1 = 0; i_1 < yf; i_1++) {
        F[i_0][i_1] = 0.9 + (rand() / (DATA_TYPE)RAND_MAX) * (1.1 - 0.9);
    }
}
}
static void print_array(int xa,DATA_TYPE POLYBENCH_1D(A,xA,xa),int xb,DATA_TYPE POLYBENCH_1D(B,xB,xb),int xc,DATA_TYPE POLYBENCH_1D(C,xC,xc),int xd,DATA_TYPE POLYBENCH_1D(D,xD,xd),int xe,int ye,DATA_TYPE POLYBENCH_2D(E,xE,yE,xe,ye),int xf,int yf,DATA_TYPE POLYBENCH_2D(F,xF,yF,xf,yf))
{
int i_0, i_1;
POLYBENCH_DUMP_START;
#ifdef CHECKELEM
    POLYBENCH_DUMP_BEGIN("A");
    for (i_0 = 0; i_0 < xa; i_0++) {
        fprintf(POLYBENCH_DUMP_TARGET, "\n");
        fprintf (POLYBENCH_DUMP_TARGET, DATA_PRINTF_MODIFIER, A[i_0]);
    }
    POLYBENCH_DUMP_END("A");
    POLYBENCH_DUMP_BEGIN("B");
    for (i_0 = 0; i_0 < xb; i_0++) {
        fprintf(POLYBENCH_DUMP_TARGET, "\n");
        fprintf (POLYBENCH_DUMP_TARGET, DATA_PRINTF_MODIFIER, B[i_0]);
    }
    POLYBENCH_DUMP_END("B");
    POLYBENCH_DUMP_BEGIN("C");
    for (i_0 = 0; i_0 < xc; i_0++) {
        fprintf(POLYBENCH_DUMP_TARGET, "\n");
        fprintf (POLYBENCH_DUMP_TARGET, DATA_PRINTF_MODIFIER, C[i_0]);
    }
    POLYBENCH_DUMP_END("C");
    POLYBENCH_DUMP_BEGIN("D");
    for (i_0 = 0; i_0 < xd; i_0++) {
        fprintf(POLYBENCH_DUMP_TARGET, "\n");
        fprintf (POLYBENCH_DUMP_TARGET, DATA_PRINTF_MODIFIER, D[i_0]);
    }
    POLYBENCH_DUMP_END("D");
    POLYBENCH_DUMP_BEGIN("E");
    for (i_0 = 0; i_0 < xe; i_0++) {
        for (i_1 = 0; i_1 < ye; i_1++) {
            fprintf(POLYBENCH_DUMP_TARGET, "\n");
            fprintf (POLYBENCH_DUMP_TARGET, DATA_PRINTF_MODIFIER, E[i_0][i_1]);
        }
    }
    POLYBENCH_DUMP_END("E");
    POLYBENCH_DUMP_BEGIN("F");
    for (i_0 = 0; i_0 < xf; i_0++) {
        for (i_1 = 0; i_1 < yf; i_1++) {
            fprintf(POLYBENCH_DUMP_TARGET, "\n");
            fprintf (POLYBENCH_DUMP_TARGET, DATA_PRINTF_MODIFIER, F[i_0][i_1]);
        }
    }
    POLYBENCH_DUMP_END("F");
#endif
#ifdef CHECKSUM
    POLYBENCH_DUMP_BEGIN("A");
    DATA_TYPE sum_A = 0;
    for (i_0 = 0; i_0 < xa; i_0++) {
        sum_A += A[i_0];
    }
    fprintf(POLYBENCH_DUMP_TARGET, "\nsum: ");
    fprintf (POLYBENCH_DUMP_TARGET, DATA_PRINTF_MODIFIER, sum_A);
    POLYBENCH_DUMP_END("A");
    POLYBENCH_DUMP_BEGIN("B");
    DATA_TYPE sum_B = 0;
    for (i_0 = 0; i_0 < xb; i_0++) {
        sum_B += B[i_0];
    }
    fprintf(POLYBENCH_DUMP_TARGET, "\nsum: ");
    fprintf (POLYBENCH_DUMP_TARGET, DATA_PRINTF_MODIFIER, sum_B);
    POLYBENCH_DUMP_END("B");
    POLYBENCH_DUMP_BEGIN("C");
    DATA_TYPE sum_C = 0;
    for (i_0 = 0; i_0 < xc; i_0++) {
        sum_C += C[i_0];
    }
    fprintf(POLYBENCH_DUMP_TARGET, "\nsum: ");
    fprintf (POLYBENCH_DUMP_TARGET, DATA_PRINTF_MODIFIER, sum_C);
    POLYBENCH_DUMP_END("C");
    POLYBENCH_DUMP_BEGIN("D");
    DATA_TYPE sum_D = 0;
    for (i_0 = 0; i_0 < xd; i_0++) {
        sum_D += D[i_0];
    }
    fprintf(POLYBENCH_DUMP_TARGET, "\nsum: ");
    fprintf (POLYBENCH_DUMP_TARGET, DATA_PRINTF_MODIFIER, sum_D);
    POLYBENCH_DUMP_END("D");
    POLYBENCH_DUMP_BEGIN("E");
    DATA_TYPE sum_E = 0;
    for (i_0 = 0; i_0 < xe; i_0++) {
        for (i_1 = 0; i_1 < ye; i_1++) {
            sum_E += E[i_0][i_1];
        }
    }
    fprintf(POLYBENCH_DUMP_TARGET, "\nsum: ");
    fprintf (POLYBENCH_DUMP_TARGET, DATA_PRINTF_MODIFIER, sum_E);
    POLYBENCH_DUMP_END("E");
    POLYBENCH_DUMP_BEGIN("F");
    DATA_TYPE sum_F = 0;
    for (i_0 = 0; i_0 < xf; i_0++) {
        for (i_1 = 0; i_1 < yf; i_1++) {
            sum_F += F[i_0][i_1];
        }
    }
    fprintf(POLYBENCH_DUMP_TARGET, "\nsum: ");
    fprintf (POLYBENCH_DUMP_TARGET, DATA_PRINTF_MODIFIER, sum_F);
    POLYBENCH_DUMP_END("F");
#endif
POLYBENCH_DUMP_FINISH;
}
void kernel_2222231113_00(int xa,DATA_TYPE POLYBENCH_1D(A,xA,xa),int xb,DATA_TYPE POLYBENCH_1D(B,xB,xb),int xc,DATA_TYPE POLYBENCH_1D(C,xC,xc),int xd,DATA_TYPE POLYBENCH_1D(D,xD,xd),int xe,int ye,DATA_TYPE POLYBENCH_2D(E,xE,yE,xe,ye),int xf,int yf,DATA_TYPE POLYBENCH_2D(F,xF,yF,xf,yf)){
polybench_start_instruments;
  int t1, t2, t3, t4, t5;
 int lb, ub, lbp, ubp, lb2, ub2;
 register int lbv, ubv;
/* Start of CLooG code */
if (PB_P >= 1) {
  if (PB_M >= 0) {
    for (t1=0;t1<=floord(2*PB_P+PB_M-2,32);t1++) {
      lbp=max(0,ceild(32*t1-PB_M,64));
      ubp=min(floord(PB_P-1,32),t1);
#pragma omp parallel for private(lbv,ubv,t3,t4,t5)
      for (t2=lbp;t2<=ubp;t2++) {
        if (t1 == 2*t2) {
          for (t3=16*t1;t3<=min(min(PB_M-1,PB_P-1),16*t1+31);t3++) {
            for (t4=16*t1;t4<=t3-1;t4++) {
              if (t1%2 == 0) {
                B[t3] = E[t3][t4] * E[t3][t4] - F[t4+1][t4] + D[t4] - A[t3] + 5;;
              }
            }
            if (t1%2 == 0) {
              A[t3] = C[0] + D[t3] - A[t3+1] * 3;;
            }
            if (t1%2 == 0) {
              B[t3] = E[t3][t3] * E[t3][t3] - F[t3+1][t3] + D[t3] - A[t3] + 5;;
            }
            for (t4=t3+1;t4<=min(PB_P-1,16*t1+31);t4++) {
              if (t1%2 == 0) {
                B[t3] = E[t3][t4] * E[t3][t4] - F[t4+1][t4] + D[t4] - A[t3] + 5;;
              }
            }
          }
        }
        if (t1 == 2*t2) {
          for (t3=max(PB_M,16*t1);t3<=(min(PB_P-1,16*t1+31))-7;t3+=8) {
            if (t1%2 == 0) {
              A[t3] = C[0] + D[t3] - A[t3+1] * 3;;
              A[(t3+1)] = C[0] + D[(t3+1)] - A[(t3+1)+1] * 3;;
              A[(t3+2)] = C[0] + D[(t3+2)] - A[(t3+2)+1] * 3;;
              A[(t3+3)] = C[0] + D[(t3+3)] - A[(t3+3)+1] * 3;;
              A[(t3+4)] = C[0] + D[(t3+4)] - A[(t3+4)+1] * 3;;
              A[(t3+5)] = C[0] + D[(t3+5)] - A[(t3+5)+1] * 3;;
              A[(t3+6)] = C[0] + D[(t3+6)] - A[(t3+6)+1] * 3;;
              A[(t3+7)] = C[0] + D[(t3+7)] - A[(t3+7)+1] * 3;;
            }
          }
          for (;t3<=min(PB_P-1,16*t1+31);t3++) {
            if (t1%2 == 0) {
              A[t3] = C[0] + D[t3] - A[t3+1] * 3;;
            }
          }
        }
        if (t1 >= 2*t2+1) {
          for (t3=32*t1-32*t2;t3<=(min(PB_M-1,32*t1-32*t2+31))-7;t3+=8) {
            for (t4=32*t2;t4<=min(PB_P-1,32*t2+31);t4++) {
              B[t3] = E[t3][t4] * E[t3][t4] - F[t4+1][t4] + D[t4] - A[t3] + 5;;
              B[(t3+1)] = E[(t3+1)][t4] * E[(t3+1)][t4] - F[t4+1][t4] + D[t4] - A[(t3+1)] + 5;;
              B[(t3+2)] = E[(t3+2)][t4] * E[(t3+2)][t4] - F[t4+1][t4] + D[t4] - A[(t3+2)] + 5;;
              B[(t3+3)] = E[(t3+3)][t4] * E[(t3+3)][t4] - F[t4+1][t4] + D[t4] - A[(t3+3)] + 5;;
              B[(t3+4)] = E[(t3+4)][t4] * E[(t3+4)][t4] - F[t4+1][t4] + D[t4] - A[(t3+4)] + 5;;
              B[(t3+5)] = E[(t3+5)][t4] * E[(t3+5)][t4] - F[t4+1][t4] + D[t4] - A[(t3+5)] + 5;;
              B[(t3+6)] = E[(t3+6)][t4] * E[(t3+6)][t4] - F[t4+1][t4] + D[t4] - A[(t3+6)] + 5;;
              B[(t3+7)] = E[(t3+7)][t4] * E[(t3+7)][t4] - F[t4+1][t4] + D[t4] - A[(t3+7)] + 5;;
            }
          }
          for (;t3<=min(PB_M-1,32*t1-32*t2+31);t3++) {
            for (t4=32*t2;t4<=min(PB_P-1,32*t2+31);t4++) {
              B[t3] = E[t3][t4] * E[t3][t4] - F[t4+1][t4] + D[t4] - A[t3] + 5;;
            }
          }
        }
        if (t1 <= 2*t2-1) {
          for (t3=32*t1-32*t2;t3<=(min(PB_M-1,32*t1-32*t2+31))-7;t3+=8) {
            for (t4=32*t2;t4<=min(PB_P-1,32*t2+31);t4++) {
              B[t3] = E[t3][t4] * E[t3][t4] - F[t4+1][t4] + D[t4] - A[t3] + 5;;
              B[(t3+1)] = E[(t3+1)][t4] * E[(t3+1)][t4] - F[t4+1][t4] + D[t4] - A[(t3+1)] + 5;;
              B[(t3+2)] = E[(t3+2)][t4] * E[(t3+2)][t4] - F[t4+1][t4] + D[t4] - A[(t3+2)] + 5;;
              B[(t3+3)] = E[(t3+3)][t4] * E[(t3+3)][t4] - F[t4+1][t4] + D[t4] - A[(t3+3)] + 5;;
              B[(t3+4)] = E[(t3+4)][t4] * E[(t3+4)][t4] - F[t4+1][t4] + D[t4] - A[(t3+4)] + 5;;
              B[(t3+5)] = E[(t3+5)][t4] * E[(t3+5)][t4] - F[t4+1][t4] + D[t4] - A[(t3+5)] + 5;;
              B[(t3+6)] = E[(t3+6)][t4] * E[(t3+6)][t4] - F[t4+1][t4] + D[t4] - A[(t3+6)] + 5;;
              B[(t3+7)] = E[(t3+7)][t4] * E[(t3+7)][t4] - F[t4+1][t4] + D[t4] - A[(t3+7)] + 5;;
            }
          }
          for (;t3<=min(PB_M-1,32*t1-32*t2+31);t3++) {
            for (t4=32*t2;t4<=min(PB_P-1,32*t2+31);t4++) {
              B[t3] = E[t3][t4] * E[t3][t4] - F[t4+1][t4] + D[t4] - A[t3] + 5;;
            }
          }
        }
        if (t1 == 2*t2) {
          for (t3=PB_P;t3<=(min(PB_M-1,16*t1+31))-7;t3+=8) {
            for (t4=16*t1;t4<=PB_P-1;t4++) {
              if (t1%2 == 0) {
                B[t3] = E[t3][t4] * E[t3][t4] - F[t4+1][t4] + D[t4] - A[t3] + 5;;
                B[(t3+1)] = E[(t3+1)][t4] * E[(t3+1)][t4] - F[t4+1][t4] + D[t4] - A[(t3+1)] + 5;;
                B[(t3+2)] = E[(t3+2)][t4] * E[(t3+2)][t4] - F[t4+1][t4] + D[t4] - A[(t3+2)] + 5;;
                B[(t3+3)] = E[(t3+3)][t4] * E[(t3+3)][t4] - F[t4+1][t4] + D[t4] - A[(t3+3)] + 5;;
                B[(t3+4)] = E[(t3+4)][t4] * E[(t3+4)][t4] - F[t4+1][t4] + D[t4] - A[(t3+4)] + 5;;
                B[(t3+5)] = E[(t3+5)][t4] * E[(t3+5)][t4] - F[t4+1][t4] + D[t4] - A[(t3+5)] + 5;;
                B[(t3+6)] = E[(t3+6)][t4] * E[(t3+6)][t4] - F[t4+1][t4] + D[t4] - A[(t3+6)] + 5;;
                B[(t3+7)] = E[(t3+7)][t4] * E[(t3+7)][t4] - F[t4+1][t4] + D[t4] - A[(t3+7)] + 5;;
              }
            }
          }
          for (;t3<=min(PB_M-1,16*t1+31);t3++) {
            for (t4=16*t1;t4<=PB_P-1;t4++) {
              if (t1%2 == 0) {
                B[t3] = E[t3][t4] * E[t3][t4] - F[t4+1][t4] + D[t4] - A[t3] + 5;;
              }
            }
          }
        }
      }
    }
  }
  if (PB_M <= -1) {
    for (t1=0;t1<=floord(PB_P-1,16);t1+=2) {
      for (t3=16*t1;t3<=(min(PB_P-1,16*t1+31))-7;t3+=8) {
        A[t3] = C[0] + D[t3] - A[t3+1] * 3;;
        A[(t3+1)] = C[0] + D[(t3+1)] - A[(t3+1)+1] * 3;;
        A[(t3+2)] = C[0] + D[(t3+2)] - A[(t3+2)+1] * 3;;
        A[(t3+3)] = C[0] + D[(t3+3)] - A[(t3+3)+1] * 3;;
        A[(t3+4)] = C[0] + D[(t3+4)] - A[(t3+4)+1] * 3;;
        A[(t3+5)] = C[0] + D[(t3+5)] - A[(t3+5)+1] * 3;;
        A[(t3+6)] = C[0] + D[(t3+6)] - A[(t3+6)+1] * 3;;
        A[(t3+7)] = C[0] + D[(t3+7)] - A[(t3+7)+1] * 3;;
      }
      for (;t3<=min(PB_P-1,16*t1+31);t3++) {
        A[t3] = C[0] + D[t3] - A[t3+1] * 3;;
      }
    }
  }
}
/* End of CLooG code */
polybench_stop_instruments;
polybench_print_instruments;
}
int main(int argc, char** argv)
{
int xa = xA;
int xb = xB;
int xc = xC;
int xd = xD;
int xe = xE;
int ye = yE;
int xf = xF;
int yf = yF;
POLYBENCH_1D_ARRAY_DECL(A, DATA_TYPE, xA,xa);
POLYBENCH_1D_ARRAY_DECL(B, DATA_TYPE, xB,xb);
POLYBENCH_1D_ARRAY_DECL(C, DATA_TYPE, xC,xc);
POLYBENCH_1D_ARRAY_DECL(D, DATA_TYPE, xD,xd);
POLYBENCH_2D_ARRAY_DECL(E, DATA_TYPE, xE,yE,xe,ye);
POLYBENCH_2D_ARRAY_DECL(F, DATA_TYPE, xF,yF,xf,yf);
init_array(xa,POLYBENCH_ARRAY(A), xb,POLYBENCH_ARRAY(B), xc,POLYBENCH_ARRAY(C), xd,POLYBENCH_ARRAY(D), xe,ye,POLYBENCH_ARRAY(E), xf,yf,POLYBENCH_ARRAY(F), INIT_SEED);
kernel_2222231113_00(xa,POLYBENCH_ARRAY(A), xb,POLYBENCH_ARRAY(B), xc,POLYBENCH_ARRAY(C), xd,POLYBENCH_ARRAY(D), xe,ye,POLYBENCH_ARRAY(E), xf,yf,POLYBENCH_ARRAY(F));
polybench_prevent_dce(print_array(xa,POLYBENCH_ARRAY(A), xb,POLYBENCH_ARRAY(B), xc,POLYBENCH_ARRAY(C), xd,POLYBENCH_ARRAY(D), xe,ye,POLYBENCH_ARRAY(E), xf,yf,POLYBENCH_ARRAY(F)));
POLYBENCH_FREE_ARRAY(A);
POLYBENCH_FREE_ARRAY(B);
POLYBENCH_FREE_ARRAY(C);
POLYBENCH_FREE_ARRAY(D);
POLYBENCH_FREE_ARRAY(E);
POLYBENCH_FREE_ARRAY(F);
return 0;
}
