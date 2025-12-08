#include <stdio.h>
#include <unistd.h>
#include <string.h>
#include <math.h>
#include "polybench.h"
#include <time.h>
#include <stdlib.h>
#include "3212232111_00.h"
#include <omp.h>
#define ceild(n,d)  ceil(((double)(n))/((double)(d)))
#define floord(n,d) floor(((double)(n))/((double)(d)))
/*
arg_depth: 3
arg_nstmts: 2
arg_bounds_index: 1
arg_prob_bounds_exist: 2
arg_narrays_per_dim: 2
arg_avg_narrays_read_per_stmt: 3
arg_bounds_coef: 2
arg_avg_ndeps_read_per_stmt: 1
arg_bounds_distance: 1
arg_prob_dep_write_exist: 1
id: 0
*/
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
#ifndef USE_INIT_SEED
#define INIT_SEED time(NULL)
#else
#define INIT_SEED atoi(argv[1])
#endif
static void init_array(int xa,int ya,DATA_TYPE POLYBENCH_2D(A,xA,yA,xa,ya),int xb,DATA_TYPE POLYBENCH_1D(B,xB,xb),int xc,int yc,DATA_TYPE POLYBENCH_2D(C,xC,yC,xc,yc),int xd,DATA_TYPE POLYBENCH_1D(D,xD,xd),int xe,DATA_TYPE POLYBENCH_1D(E,xE,xe),int seed)
{
srand(seed);
int i_0, i_1;
for (i_0 = 0; i_0 < xa; i_0++) {
    for (i_1 = 0; i_1 < ya; i_1++) {
        A[i_0][i_1] = 0.9 + (rand() / (DATA_TYPE)RAND_MAX) * (1.1 - 0.9);
    }
}
for (i_0 = 0; i_0 < xb; i_0++) {
    B[i_0] = 0.9 + (rand() / (DATA_TYPE)RAND_MAX) * (1.1 - 0.9);
}
for (i_0 = 0; i_0 < xc; i_0++) {
    for (i_1 = 0; i_1 < yc; i_1++) {
        C[i_0][i_1] = 0.9 + (rand() / (DATA_TYPE)RAND_MAX) * (1.1 - 0.9);
    }
}
for (i_0 = 0; i_0 < xd; i_0++) {
    D[i_0] = 0.9 + (rand() / (DATA_TYPE)RAND_MAX) * (1.1 - 0.9);
}
for (i_0 = 0; i_0 < xe; i_0++) {
    E[i_0] = 0.9 + (rand() / (DATA_TYPE)RAND_MAX) * (1.1 - 0.9);
}
}
static void print_array(int xa,int ya,DATA_TYPE POLYBENCH_2D(A,xA,yA,xa,ya),int xb,DATA_TYPE POLYBENCH_1D(B,xB,xb),int xc,int yc,DATA_TYPE POLYBENCH_2D(C,xC,yC,xc,yc),int xd,DATA_TYPE POLYBENCH_1D(D,xD,xd),int xe,DATA_TYPE POLYBENCH_1D(E,xE,xe))
{
int i_0, i_1;
POLYBENCH_DUMP_START;
#ifdef CHECKELEM
    POLYBENCH_DUMP_BEGIN("A");
    for (i_0 = 0; i_0 < xa; i_0++) {
        for (i_1 = 0; i_1 < ya; i_1++) {
            fprintf(POLYBENCH_DUMP_TARGET, "\n");
            fprintf (POLYBENCH_DUMP_TARGET, DATA_PRINTF_MODIFIER, A[i_0][i_1]);
        }
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
        for (i_1 = 0; i_1 < yc; i_1++) {
            fprintf(POLYBENCH_DUMP_TARGET, "\n");
            fprintf (POLYBENCH_DUMP_TARGET, DATA_PRINTF_MODIFIER, C[i_0][i_1]);
        }
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
        fprintf(POLYBENCH_DUMP_TARGET, "\n");
        fprintf (POLYBENCH_DUMP_TARGET, DATA_PRINTF_MODIFIER, E[i_0]);
    }
    POLYBENCH_DUMP_END("E");
#endif
#ifdef CHECKSUM
    POLYBENCH_DUMP_BEGIN("A");
    DATA_TYPE sum_A = 0;
    for (i_0 = 0; i_0 < xa; i_0++) {
        for (i_1 = 0; i_1 < ya; i_1++) {
            sum_A += A[i_0][i_1];
        }
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
        for (i_1 = 0; i_1 < yc; i_1++) {
            sum_C += C[i_0][i_1];
        }
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
        sum_E += E[i_0];
    }
    fprintf(POLYBENCH_DUMP_TARGET, "\nsum: ");
    fprintf (POLYBENCH_DUMP_TARGET, DATA_PRINTF_MODIFIER, sum_E);
    POLYBENCH_DUMP_END("E");
#endif
POLYBENCH_DUMP_FINISH;
}
void kernel_3212232111_00(int xa,int ya,DATA_TYPE POLYBENCH_2D(A,xA,yA,xa,ya),int xb,DATA_TYPE POLYBENCH_1D(B,xB,xb),int xc,int yc,DATA_TYPE POLYBENCH_2D(C,xC,yC,xc,yc),int xd,DATA_TYPE POLYBENCH_1D(D,xD,xd),int xe,DATA_TYPE POLYBENCH_1D(E,xE,xe)){
polybench_start_instruments;
  int t1, t2, t3, t4, t5;
 int lb, ub, lbp, ubp, lb2, ub2;
 register int lbv, ubv;
/* Start of CLooG code */
if (PB_L >= 2) {
  for (t1=0;t1<=floord(PB_L-1,32);t1++) {
    for (t2=0;t2<=min(floord(PB_L-1,32),floord(-32*t1+2*PB_L-3,32));t2++) {
      if (t2 >= 1) {
        lbp=32*t1;
        ubp=min(min(PB_L-2,PB_M-1),32*t1+31);
#pragma omp parallel for private(lbv,ubv,t4,t5)
        for (t3=lbp;t3<=ubp;t3++) {
          for (t4=t3;t4<=PB_M-1-7;t4+=8) {
            lbv=32*t2;
            ubv=min(PB_L-1,32*t2+31);
#pragma ivdep
#pragma vector always
            for (t5=lbv;t5<=ubv;t5++) {
              A[t3+1][t5] = C[t4][t5] * A[t3][t5] + 6;;
              A[t3+1][t5] = C[(t4+1)][t5] * A[t3][t5] + 6;;
              A[t3+1][t5] = C[(t4+2)][t5] * A[t3][t5] + 6;;
              A[t3+1][t5] = C[(t4+3)][t5] * A[t3][t5] + 6;;
              A[t3+1][t5] = C[(t4+4)][t5] * A[t3][t5] + 6;;
              A[t3+1][t5] = C[(t4+5)][t5] * A[t3][t5] + 6;;
              A[t3+1][t5] = C[(t4+6)][t5] * A[t3][t5] + 6;;
              A[t3+1][t5] = C[(t4+7)][t5] * A[t3][t5] + 6;;
            }
          }
          for (;t4<=PB_M-1;t4++) {
            lbv=32*t2;
            ubv=min(PB_L-1,32*t2+31);
#pragma ivdep
#pragma vector always
            for (t5=lbv;t5<=ubv;t5++) {
              A[t3+1][t5] = C[t4][t5] * A[t3][t5] + 6;;
            }
          }
        }
      }
      if ((PB_M >= 1) && (t1 == 0) && (t2 == 0)) {
        for (t4=0;t4<=PB_M-1-7;t4+=8) {
          lbv=0;
          ubv=min(31,PB_L-1);
#pragma ivdep
#pragma vector always
          for (t5=lbv;t5<=ubv;t5++) {
            A[0 +1][t5] = C[t4][t5] * A[0][t5] + 6;;
            A[0 +1][t5] = C[(t4+1)][t5] * A[0][t5] + 6;;
            A[0 +1][t5] = C[(t4+2)][t5] * A[0][t5] + 6;;
            A[0 +1][t5] = C[(t4+3)][t5] * A[0][t5] + 6;;
            A[0 +1][t5] = C[(t4+4)][t5] * A[0][t5] + 6;;
            A[0 +1][t5] = C[(t4+5)][t5] * A[0][t5] + 6;;
            A[0 +1][t5] = C[(t4+6)][t5] * A[0][t5] + 6;;
            A[0 +1][t5] = C[(t4+7)][t5] * A[0][t5] + 6;;
          }
        }
        for (;t4<=PB_M-1;t4++) {
          lbv=0;
          ubv=min(31,PB_L-1);
#pragma ivdep
#pragma vector always
          for (t5=lbv;t5<=ubv;t5++) {
            A[0 +1][t5] = C[t4][t5] * A[0][t5] + 6;;
          }
        }
      }
      if (t2 == 0) {
        for (t3=max(1,32*t1);t3<=min(min(PB_L-2,PB_M-1),32*t1+31);t3++) {
          B[0] = C[t3][1] + D[t3-1] * D[t3] * D[t3] - E[t3] - 3;;
          for (t4=t3;t4<=PB_M-1-7;t4+=8) {
            lbv=0;
            ubv=min(31,PB_L-1);
#pragma ivdep
#pragma vector always
            for (t5=lbv;t5<=ubv;t5++) {
              A[t3+1][t5] = C[t4][t5] * A[t3][t5] + 6;;
              A[t3+1][t5] = C[(t4+1)][t5] * A[t3][t5] + 6;;
              A[t3+1][t5] = C[(t4+2)][t5] * A[t3][t5] + 6;;
              A[t3+1][t5] = C[(t4+3)][t5] * A[t3][t5] + 6;;
              A[t3+1][t5] = C[(t4+4)][t5] * A[t3][t5] + 6;;
              A[t3+1][t5] = C[(t4+5)][t5] * A[t3][t5] + 6;;
              A[t3+1][t5] = C[(t4+6)][t5] * A[t3][t5] + 6;;
              A[t3+1][t5] = C[(t4+7)][t5] * A[t3][t5] + 6;;
            }
          }
          for (;t4<=PB_M-1;t4++) {
            lbv=0;
            ubv=min(31,PB_L-1);
#pragma ivdep
#pragma vector always
            for (t5=lbv;t5<=ubv;t5++) {
              A[t3+1][t5] = C[t4][t5] * A[t3][t5] + 6;;
            }
          }
        }
      }
      if (t2 == 0) {
        for (t3=max(max(1,PB_M),32*t1);t3<=(min(PB_L-1,32*t1+31))-7;t3+=8) {
          B[0] = C[t3][1] + D[t3-1] * D[t3] * D[t3] - E[t3] - 3;;
          B[0] = C[(t3+1)][1] + D[(t3+1)-1] * D[(t3+1)] * D[(t3+1)] - E[(t3+1)] - 3;;
          B[0] = C[(t3+2)][1] + D[(t3+2)-1] * D[(t3+2)] * D[(t3+2)] - E[(t3+2)] - 3;;
          B[0] = C[(t3+3)][1] + D[(t3+3)-1] * D[(t3+3)] * D[(t3+3)] - E[(t3+3)] - 3;;
          B[0] = C[(t3+4)][1] + D[(t3+4)-1] * D[(t3+4)] * D[(t3+4)] - E[(t3+4)] - 3;;
          B[0] = C[(t3+5)][1] + D[(t3+5)-1] * D[(t3+5)] * D[(t3+5)] - E[(t3+5)] - 3;;
          B[0] = C[(t3+6)][1] + D[(t3+6)-1] * D[(t3+6)] * D[(t3+6)] - E[(t3+6)] - 3;;
          B[0] = C[(t3+7)][1] + D[(t3+7)-1] * D[(t3+7)] * D[(t3+7)] - E[(t3+7)] - 3;;
        }
        for (;t3<=min(PB_L-1,32*t1+31);t3++) {
          B[0] = C[t3][1] + D[t3-1] * D[t3] * D[t3] - E[t3] - 3;;
        }
      }
      if ((PB_L <= PB_M) && (t1 >= ceild(PB_L-32,32)) && (t2 == 0)) {
        B[0] = C[(PB_L-1)][1] + D[(PB_L-1)-1] * D[(PB_L-1)] * D[(PB_L-1)] - E[(PB_L-1)] - 3;;
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
int ya = yA;
int xb = xB;
int xc = xC;
int yc = yC;
int xd = xD;
int xe = xE;
POLYBENCH_2D_ARRAY_DECL(A, DATA_TYPE, xA,yA,xa,ya);
POLYBENCH_1D_ARRAY_DECL(B, DATA_TYPE, xB,xb);
POLYBENCH_2D_ARRAY_DECL(C, DATA_TYPE, xC,yC,xc,yc);
POLYBENCH_1D_ARRAY_DECL(D, DATA_TYPE, xD,xd);
POLYBENCH_1D_ARRAY_DECL(E, DATA_TYPE, xE,xe);
init_array(xa,ya,POLYBENCH_ARRAY(A), xb,POLYBENCH_ARRAY(B), xc,yc,POLYBENCH_ARRAY(C), xd,POLYBENCH_ARRAY(D), xe,POLYBENCH_ARRAY(E), INIT_SEED);
kernel_3212232111_00(xa,ya,POLYBENCH_ARRAY(A), xb,POLYBENCH_ARRAY(B), xc,yc,POLYBENCH_ARRAY(C), xd,POLYBENCH_ARRAY(D), xe,POLYBENCH_ARRAY(E));
polybench_prevent_dce(print_array(xa,ya,POLYBENCH_ARRAY(A), xb,POLYBENCH_ARRAY(B), xc,yc,POLYBENCH_ARRAY(C), xd,POLYBENCH_ARRAY(D), xe,POLYBENCH_ARRAY(E)));
POLYBENCH_FREE_ARRAY(A);
POLYBENCH_FREE_ARRAY(B);
POLYBENCH_FREE_ARRAY(C);
POLYBENCH_FREE_ARRAY(D);
POLYBENCH_FREE_ARRAY(E);
return 0;
}
