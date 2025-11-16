#include <stdio.h>
#include <unistd.h>
#include <string.h>
#include <math.h>
#include "polybench.h"
#include <time.h>
#include <stdlib.h>
#include "3222111211_00.h"
#include <omp.h>
#define ceild(n,d)  ceil(((double)(n))/((double)(d)))
#define floord(n,d) floor(((double)(n))/((double)(d)))
/*
arg_depth: 3
arg_nstmts: 2
arg_bounds_index: 2
arg_prob_bounds_exist: 2
arg_narrays_per_dim: 1
arg_avg_narrays_read_per_stmt: 1
arg_bounds_coef: 1
arg_avg_ndeps_read_per_stmt: 2
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
static void init_array(int xa,int ya,DATA_TYPE POLYBENCH_2D(A,xA,yA,xa,ya),int xb,DATA_TYPE POLYBENCH_1D(B,xB,xb),int xc,DATA_TYPE POLYBENCH_1D(C,xC,xc),int xd,int yd,DATA_TYPE POLYBENCH_2D(D,xD,yD,xd,yd),int seed)
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
    C[i_0] = 0.9 + (rand() / (DATA_TYPE)RAND_MAX) * (1.1 - 0.9);
}
for (i_0 = 0; i_0 < xd; i_0++) {
    for (i_1 = 0; i_1 < yd; i_1++) {
        D[i_0][i_1] = 0.9 + (rand() / (DATA_TYPE)RAND_MAX) * (1.1 - 0.9);
    }
}
}
static void print_array(int xa,int ya,DATA_TYPE POLYBENCH_2D(A,xA,yA,xa,ya),int xb,DATA_TYPE POLYBENCH_1D(B,xB,xb),int xc,DATA_TYPE POLYBENCH_1D(C,xC,xc),int xd,int yd,DATA_TYPE POLYBENCH_2D(D,xD,yD,xd,yd))
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
        fprintf(POLYBENCH_DUMP_TARGET, "\n");
        fprintf (POLYBENCH_DUMP_TARGET, DATA_PRINTF_MODIFIER, C[i_0]);
    }
    POLYBENCH_DUMP_END("C");
    POLYBENCH_DUMP_BEGIN("D");
    for (i_0 = 0; i_0 < xd; i_0++) {
        for (i_1 = 0; i_1 < yd; i_1++) {
            fprintf(POLYBENCH_DUMP_TARGET, "\n");
            fprintf (POLYBENCH_DUMP_TARGET, DATA_PRINTF_MODIFIER, D[i_0][i_1]);
        }
    }
    POLYBENCH_DUMP_END("D");
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
        sum_C += C[i_0];
    }
    fprintf(POLYBENCH_DUMP_TARGET, "\nsum: ");
    fprintf (POLYBENCH_DUMP_TARGET, DATA_PRINTF_MODIFIER, sum_C);
    POLYBENCH_DUMP_END("C");
    POLYBENCH_DUMP_BEGIN("D");
    DATA_TYPE sum_D = 0;
    for (i_0 = 0; i_0 < xd; i_0++) {
        for (i_1 = 0; i_1 < yd; i_1++) {
            sum_D += D[i_0][i_1];
        }
    }
    fprintf(POLYBENCH_DUMP_TARGET, "\nsum: ");
    fprintf (POLYBENCH_DUMP_TARGET, DATA_PRINTF_MODIFIER, sum_D);
    POLYBENCH_DUMP_END("D");
#endif
POLYBENCH_DUMP_FINISH;
}
void kernel_3222111211_00(int xa,int ya,DATA_TYPE POLYBENCH_2D(A,xA,yA,xa,ya),int xb,DATA_TYPE POLYBENCH_1D(B,xB,xb),int xc,DATA_TYPE POLYBENCH_1D(C,xC,xc),int xd,int yd,DATA_TYPE POLYBENCH_2D(D,xD,yD,xd,yd)){
polybench_start_instruments;
  int t1, t2, t3, t4;
 int lb, ub, lbp, ubp, lb2, ub2;
 register int lbv, ubv;
/* Start of CLooG code */
if ((PB_M >= 0) && (PB_Q >= max(0,ceild(-PB_M+3,3)))) {
  for (t1=0;t1<=min(floord(PB_Q+PB_M-1,32),floord(2*PB_Q+PB_M-2,32));t1++) {
    if ((PB_M >= 3) && (t1 <= floord(PB_M-2,32))) {
      for (t4=max(1,32*t1);t4<=min(PB_M-2,32*t1+31);t4++) {
        B[t4] = B[t4+1] * B[t4-1] + B[t4+1] * 5;;
      }
    }
    if ((PB_L >= 3) && (t1 <= floord(PB_Q-1,32))) {
      for (t2=0;t2<=floord(PB_L-1,32);t2++) {
        for (t3=max(2,32*t2);t3<=(min(PB_L-1,32*t2+31))-7;t3+=8) {
          for (t4=32*t1;t4<=min(PB_Q-1,32*t1+31);t4++) {
            A[t3-1][t4] = C[t4] - D[t3][t4] * A[t3-2][t4] - 6;;
            A[(t3+1)-1][t4] = C[t4] - D[(t3+1)][t4] * A[(t3+1)-2][t4] - 6;;
            A[(t3+2)-1][t4] = C[t4] - D[(t3+2)][t4] * A[(t3+2)-2][t4] - 6;;
            A[(t3+3)-1][t4] = C[t4] - D[(t3+3)][t4] * A[(t3+3)-2][t4] - 6;;
            A[(t3+4)-1][t4] = C[t4] - D[(t3+4)][t4] * A[(t3+4)-2][t4] - 6;;
            A[(t3+5)-1][t4] = C[t4] - D[(t3+5)][t4] * A[(t3+5)-2][t4] - 6;;
            A[(t3+6)-1][t4] = C[t4] - D[(t3+6)][t4] * A[(t3+6)-2][t4] - 6;;
            A[(t3+7)-1][t4] = C[t4] - D[(t3+7)][t4] * A[(t3+7)-2][t4] - 6;;
          }
        }
        for (;t3<=min(PB_L-1,32*t2+31);t3++) {
          for (t4=32*t1;t4<=min(PB_Q-1,32*t1+31);t4++) {
            A[t3-1][t4] = C[t4] - D[t3][t4] * A[t3-2][t4] - 6;;
          }
        }
      }
    }
  }
}
if ((PB_L >= 3) && (PB_M <= -1)) {
  for (t1=0;t1<=floord(PB_Q-1,32);t1++) {
    for (t2=0;t2<=floord(PB_L-1,32);t2++) {
      for (t3=max(2,32*t2);t3<=(min(PB_L-1,32*t2+31))-7;t3+=8) {
        for (t4=32*t1;t4<=min(PB_Q-1,32*t1+31);t4++) {
          A[t3-1][t4] = C[t4] - D[t3][t4] * A[t3-2][t4] - 6;;
          A[(t3+1)-1][t4] = C[t4] - D[(t3+1)][t4] * A[(t3+1)-2][t4] - 6;;
          A[(t3+2)-1][t4] = C[t4] - D[(t3+2)][t4] * A[(t3+2)-2][t4] - 6;;
          A[(t3+3)-1][t4] = C[t4] - D[(t3+3)][t4] * A[(t3+3)-2][t4] - 6;;
          A[(t3+4)-1][t4] = C[t4] - D[(t3+4)][t4] * A[(t3+4)-2][t4] - 6;;
          A[(t3+5)-1][t4] = C[t4] - D[(t3+5)][t4] * A[(t3+5)-2][t4] - 6;;
          A[(t3+6)-1][t4] = C[t4] - D[(t3+6)][t4] * A[(t3+6)-2][t4] - 6;;
          A[(t3+7)-1][t4] = C[t4] - D[(t3+7)][t4] * A[(t3+7)-2][t4] - 6;;
        }
      }
      for (;t3<=min(PB_L-1,32*t2+31);t3++) {
        for (t4=32*t1;t4<=min(PB_Q-1,32*t1+31);t4++) {
          A[t3-1][t4] = C[t4] - D[t3][t4] * A[t3-2][t4] - 6;;
        }
      }
    }
  }
}
if ((PB_M >= 3) && (PB_Q <= -1)) {
  for (t1=0;t1<=floord(PB_M-2,32);t1++) {
    for (t4=max(1,32*t1);t4<=min(PB_M-2,32*t1+31);t4++) {
      B[t4] = B[t4+1] * B[t4-1] + B[t4+1] * 5;;
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
int xd = xD;
int yd = yD;
POLYBENCH_2D_ARRAY_DECL(A, DATA_TYPE, xA,yA,xa,ya);
POLYBENCH_1D_ARRAY_DECL(B, DATA_TYPE, xB,xb);
POLYBENCH_1D_ARRAY_DECL(C, DATA_TYPE, xC,xc);
POLYBENCH_2D_ARRAY_DECL(D, DATA_TYPE, xD,yD,xd,yd);
init_array(xa,ya,POLYBENCH_ARRAY(A), xb,POLYBENCH_ARRAY(B), xc,POLYBENCH_ARRAY(C), xd,yd,POLYBENCH_ARRAY(D), INIT_SEED);
kernel_3222111211_00(xa,ya,POLYBENCH_ARRAY(A), xb,POLYBENCH_ARRAY(B), xc,POLYBENCH_ARRAY(C), xd,yd,POLYBENCH_ARRAY(D));
polybench_prevent_dce(print_array(xa,ya,POLYBENCH_ARRAY(A), xb,POLYBENCH_ARRAY(B), xc,POLYBENCH_ARRAY(C), xd,yd,POLYBENCH_ARRAY(D)));
POLYBENCH_FREE_ARRAY(A);
POLYBENCH_FREE_ARRAY(B);
POLYBENCH_FREE_ARRAY(C);
POLYBENCH_FREE_ARRAY(D);
return 0;
}
