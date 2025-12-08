#include <stdio.h>
#include <unistd.h>
#include <string.h>
#include <math.h>
#include "polybench.h"
#include <time.h>
#include <stdlib.h>
#include "2214112123_01.h"
#include <omp.h>
#define ceild(n,d)  ceil(((double)(n))/((double)(d)))
#define floord(n,d) floor(((double)(n))/((double)(d)))
/*
arg_depth: 2
arg_nstmts: 2
arg_bounds_index: 1
arg_prob_bounds_exist: 4
arg_narrays_per_dim: 1
arg_avg_narrays_read_per_stmt: 1
arg_bounds_coef: 2
arg_avg_ndeps_read_per_stmt: 1
arg_bounds_distance: 2
arg_prob_dep_write_exist: 3
id: 1
*/
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
#ifndef USE_INIT_SEED
#define INIT_SEED time(NULL)
#else
#define INIT_SEED atoi(argv[1])
#endif
static void init_array(int xa,int ya,DATA_TYPE POLYBENCH_2D(A,xA,yA,xa,ya),int xb,DATA_TYPE POLYBENCH_1D(B,xB,xb),int xc,int yc,DATA_TYPE POLYBENCH_2D(C,xC,yC,xc,yc),int xd,DATA_TYPE POLYBENCH_1D(D,xD,xd),int seed)
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
}
static void print_array(int xa,int ya,DATA_TYPE POLYBENCH_2D(A,xA,yA,xa,ya),int xb,DATA_TYPE POLYBENCH_1D(B,xB,xb),int xc,int yc,DATA_TYPE POLYBENCH_2D(C,xC,yC,xc,yc),int xd,DATA_TYPE POLYBENCH_1D(D,xD,xd))
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
#endif
POLYBENCH_DUMP_FINISH;
}
void kernel_2214112123_01(int xa,int ya,DATA_TYPE POLYBENCH_2D(A,xA,yA,xa,ya),int xb,DATA_TYPE POLYBENCH_1D(B,xB,xb),int xc,int yc,DATA_TYPE POLYBENCH_2D(C,xC,yC,xc,yc),int xd,DATA_TYPE POLYBENCH_1D(D,xD,xd)){
polybench_start_instruments;
  int t1, t2, t3, t4;
 int lb, ub, lbp, ubp, lb2, ub2;
 register int lbv, ubv;
/* Start of CLooG code */
if ((PB_L >= 0) && (PB_N >= max(0,-PB_L+3))) {
  for (t1=0;t1<=min(floord(PB_N+PB_L-1,32),floord(3*PB_N+4*PB_L-6,96));t1++) {
    for (t2=max(max(max(0,ceild(96*t1-3*PB_L,32)),ceild(96*t1-PB_N-3*PB_L+3,32)),ceild(192*t1-3*PB_N-6*PB_L+6,32));t2<=min(min(min(floord(3*PB_N,32),floord(3*PB_N+2*PB_L-6,32)),floord(64*t1+PB_N+60,32)),floord(64*t1+31*PB_N,352));t2++) {
      if (t2 >= 1) {
        for (t3=max(max(1,ceild(32*t2-PB_N+2,2)),32*t1);t3<=min(min(floord(32*t2+31,3),PB_N-2),32*t1+31);t3++) {
          for (t4=max(32*t2,3*t3);t4<=min(32*t2+31,2*t3+PB_N-2);t4++) {
            A[(-3*t3+t4)+t3-1][0] = C[(-3*t3+t4)][t3] * A[(-3*t3+t4)+t3+1][0] + 2;;
          }
        }
      }
      if ((PB_N >= 3) && (t1 == 0) && (t2 == 0)) {
        for (t4=3;t4<=min(31,PB_N);t4++) {
          A[(t4-3)+1 -1][0] = C[(t4-3)][1] * A[(t4-3)+1 +1][0] + 2;;
        }
      }
      if ((t1 == 0) && (t2 == 0)) {
        for (t3=2;t3<=min(min(10,PB_L-1),PB_N-2);t3++) {
          B[t3-2] = D[t3] + B[t3] * 4;;
          for (t4=3*t3;t4<=min(31,2*t3+PB_N-2);t4++) {
            A[(-3*t3+t4)+t3-1][0] = C[(-3*t3+t4)][t3] * A[(-3*t3+t4)+t3+1][0] + 2;;
          }
        }
      }
      if ((t1 == 0) && (t2 == 0)) {
        for (t3=max(2,PB_L);t3<=min(10,PB_N-2);t3++) {
          for (t4=3*t3;t4<=min(31,2*t3+PB_N-2);t4++) {
            A[(-3*t3+t4)+t3-1][0] = C[(-3*t3+t4)][t3] * A[(-3*t3+t4)+t3+1][0] + 2;;
          }
        }
      }
      if (t2 == 0) {
        for (t3=max(11,32*t1);t3<=min(min(PB_L-1,PB_N-2),32*t1+31);t3++) {
          B[t3-2] = D[t3] + B[t3] * 4;;
        }
      }
      if (t2 == 0) {
        for (t3=max(max(2,32*t1),PB_N-1);t3<=min(PB_L-1,32*t1+31);t3++) {
          B[t3-2] = D[t3] + B[t3] * 4;;
        }
      }
    }
  }
}
if ((PB_L <= -1) && (PB_N >= 3)) {
  for (t1=0;t1<=floord(PB_N-2,32);t1++) {
    for (t2=3*t1;t2<=min(floord(3*PB_N-6,32),floord(64*t1+PB_N+60,32));t2++) {
      for (t3=max(max(1,ceild(32*t2-PB_N+2,2)),32*t1);t3<=min(min(floord(32*t2+31,3),PB_N-2),32*t1+31);t3++) {
        for (t4=max(32*t2,3*t3);t4<=min(32*t2+31,2*t3+PB_N-2);t4++) {
          A[(-3*t3+t4)+t3-1][0] = C[(-3*t3+t4)][t3] * A[(-3*t3+t4)+t3+1][0] + 2;;
        }
      }
    }
  }
}
if ((PB_L >= 3) && (PB_N <= -1)) {
  for (t1=0;t1<=floord(PB_L-1,32);t1++) {
    for (t3=max(2,32*t1);t3<=min(PB_L-1,32*t1+31);t3++) {
      B[t3-2] = D[t3] + B[t3] * 4;;
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
POLYBENCH_2D_ARRAY_DECL(A, DATA_TYPE, xA,yA,xa,ya);
POLYBENCH_1D_ARRAY_DECL(B, DATA_TYPE, xB,xb);
POLYBENCH_2D_ARRAY_DECL(C, DATA_TYPE, xC,yC,xc,yc);
POLYBENCH_1D_ARRAY_DECL(D, DATA_TYPE, xD,xd);
init_array(xa,ya,POLYBENCH_ARRAY(A), xb,POLYBENCH_ARRAY(B), xc,yc,POLYBENCH_ARRAY(C), xd,POLYBENCH_ARRAY(D), INIT_SEED);
kernel_2214112123_01(xa,ya,POLYBENCH_ARRAY(A), xb,POLYBENCH_ARRAY(B), xc,yc,POLYBENCH_ARRAY(C), xd,POLYBENCH_ARRAY(D));
polybench_prevent_dce(print_array(xa,ya,POLYBENCH_ARRAY(A), xb,POLYBENCH_ARRAY(B), xc,yc,POLYBENCH_ARRAY(C), xd,POLYBENCH_ARRAY(D)));
POLYBENCH_FREE_ARRAY(A);
POLYBENCH_FREE_ARRAY(B);
POLYBENCH_FREE_ARRAY(C);
POLYBENCH_FREE_ARRAY(D);
return 0;
}
