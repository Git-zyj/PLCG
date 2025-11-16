#include <stdio.h>
#include <unistd.h>
#include <string.h>
#include <math.h>
#include "polybench.h"
#include <time.h>
#include <stdlib.h>
#include "2224212221_00.h"
#include <omp.h>
#define ceild(n,d)  ceil(((double)(n))/((double)(d)))
#define floord(n,d) floor(((double)(n))/((double)(d)))
/*
arg_depth: 2
arg_nstmts: 2
arg_bounds_index: 2
arg_prob_bounds_exist: 4
arg_narrays_per_dim: 2
arg_avg_narrays_read_per_stmt: 1
arg_bounds_coef: 2
arg_avg_ndeps_read_per_stmt: 2
arg_bounds_distance: 2
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
static void init_array(int xa,DATA_TYPE POLYBENCH_1D(A,xA,xa),int xb,int yb,DATA_TYPE POLYBENCH_2D(B,xB,yB,xb,yb),int xc,DATA_TYPE POLYBENCH_1D(C,xC,xc),int seed)
{
srand(seed);
int i_0, i_1;
for (i_0 = 0; i_0 < xa; i_0++) {
    A[i_0] = 0.9 + (rand() / (DATA_TYPE)RAND_MAX) * (1.1 - 0.9);
}
for (i_0 = 0; i_0 < xb; i_0++) {
    for (i_1 = 0; i_1 < yb; i_1++) {
        B[i_0][i_1] = 0.9 + (rand() / (DATA_TYPE)RAND_MAX) * (1.1 - 0.9);
    }
}
for (i_0 = 0; i_0 < xc; i_0++) {
    C[i_0] = 0.9 + (rand() / (DATA_TYPE)RAND_MAX) * (1.1 - 0.9);
}
}
static void print_array(int xa,DATA_TYPE POLYBENCH_1D(A,xA,xa),int xb,int yb,DATA_TYPE POLYBENCH_2D(B,xB,yB,xb,yb),int xc,DATA_TYPE POLYBENCH_1D(C,xC,xc))
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
        for (i_1 = 0; i_1 < yb; i_1++) {
            fprintf(POLYBENCH_DUMP_TARGET, "\n");
            fprintf (POLYBENCH_DUMP_TARGET, DATA_PRINTF_MODIFIER, B[i_0][i_1]);
        }
    }
    POLYBENCH_DUMP_END("B");
    POLYBENCH_DUMP_BEGIN("C");
    for (i_0 = 0; i_0 < xc; i_0++) {
        fprintf(POLYBENCH_DUMP_TARGET, "\n");
        fprintf (POLYBENCH_DUMP_TARGET, DATA_PRINTF_MODIFIER, C[i_0]);
    }
    POLYBENCH_DUMP_END("C");
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
        for (i_1 = 0; i_1 < yb; i_1++) {
            sum_B += B[i_0][i_1];
        }
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
#endif
POLYBENCH_DUMP_FINISH;
}
void kernel_2224212221_00(int xa,DATA_TYPE POLYBENCH_1D(A,xA,xa),int xb,int yb,DATA_TYPE POLYBENCH_2D(B,xB,yB,xb,yb),int xc,DATA_TYPE POLYBENCH_1D(C,xC,xc)){
polybench_start_instruments;
  int t1, t2, t3, t4;
 int lb, ub, lbp, ubp, lb2, ub2;
 register int lbv, ubv;
/* Start of CLooG code */
if ((PB_M >= max(0,ceild(-PB_P+4,2))) && (PB_P >= 0)) {
  for (t1=0;t1<=floord(PB_M+PB_P-2,32);t1++) {
    for (t2=max(max(0,ceild(32*t1-PB_M,16)),ceild(64*t1-2*PB_M-PB_P+4,32));t2<=min(min(min(floord(3*PB_P,32),floord(64*t1+PB_P+59,32)),floord(7*PB_M+6*PB_P-14,64)),floord(56*t1+23*PB_P,264));t2++) {
      if ((PB_P >= 4) && (t1 == 0) && (t2 == 0)) {
        for (t3=0;t3<=min(min(15,PB_M-2),PB_P-2);t3++) {
          A[t3] = C[t3] - C[t3] + A[t3+1] * 3;;
          for (t4=2*t3+1;t4<=min(31,2*t3+PB_P-3);t4++) {
            B[t3][(-2*t3+t4)] = B[(-2*t3+t4)][t3+1] + B[t3+2][(-2*t3+t4)+2] + B[t3][(-2*t3+t4)-1] * 5;;
          }
        }
      }
      if ((PB_P <= 3) && (t2 == 0)) {
        for (t3=32*t1;t3<=min(PB_M-2,32*t1+31);t3++) {
          A[t3] = C[t3] - C[t3] + A[t3+1] * 3;;
        }
      }
      if ((PB_P >= 4) && (t1 == 0) && (t2 == 0)) {
        for (t3=PB_P-1;t3<=min(15,PB_M-2);t3++) {
          A[t3] = C[t3] - C[t3] + A[t3+1] * 3;;
        }
      }
      if (t2 >= 1) {
        for (t3=max(ceild(32*t2-PB_P+3,2),32*t1);t3<=min(min(PB_P-2,32*t1+31),16*t2+15);t3++) {
          for (t4=max(32*t2,2*t3+1);t4<=min(32*t2+31,2*t3+PB_P-3);t4++) {
            B[t3][(-2*t3+t4)] = B[(-2*t3+t4)][t3+1] + B[t3+2][(-2*t3+t4)+2] + B[t3][(-2*t3+t4)-1] * 5;;
          }
        }
      }
      if ((PB_P >= 4) && (t1 == 0) && (t2 == 0)) {
        for (t3=max(0,PB_M-1);t3<=min(15,PB_P-2);t3++) {
          for (t4=2*t3+1;t4<=min(31,2*t3+PB_P-3);t4++) {
            B[t3][(-2*t3+t4)] = B[(-2*t3+t4)][t3+1] + B[t3+2][(-2*t3+t4)+2] + B[t3][(-2*t3+t4)-1] * 5;;
          }
        }
      }
      if ((PB_P >= 4) && (t2 == 0)) {
        for (t3=max(16,32*t1);t3<=min(PB_M-2,32*t1+31);t3++) {
          A[t3] = C[t3] - C[t3] + A[t3+1] * 3;;
        }
      }
    }
  }
}
if (PB_P <= -1) {
  for (t1=0;t1<=floord(PB_M-2,32);t1++) {
    for (t3=32*t1;t3<=min(PB_M-2,32*t1+31);t3++) {
      A[t3] = C[t3] - C[t3] + A[t3+1] * 3;;
    }
  }
}
if ((PB_M <= -1) && (PB_P >= 4)) {
  for (t1=0;t1<=floord(PB_P-2,32);t1++) {
    for (t2=2*t1;t2<=min(floord(3*PB_P-7,32),floord(64*t1+PB_P+59,32));t2++) {
      for (t3=max(ceild(32*t2-PB_P+3,2),32*t1);t3<=min(min(PB_P-2,32*t1+31),16*t2+15);t3++) {
        for (t4=max(32*t2,2*t3+1);t4<=min(32*t2+31,2*t3+PB_P-3);t4++) {
          B[t3][(-2*t3+t4)] = B[(-2*t3+t4)][t3+1] + B[t3+2][(-2*t3+t4)+2] + B[t3][(-2*t3+t4)-1] * 5;;
        }
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
int yb = yB;
int xc = xC;
POLYBENCH_1D_ARRAY_DECL(A, DATA_TYPE, xA,xa);
POLYBENCH_2D_ARRAY_DECL(B, DATA_TYPE, xB,yB,xb,yb);
POLYBENCH_1D_ARRAY_DECL(C, DATA_TYPE, xC,xc);
init_array(xa,POLYBENCH_ARRAY(A), xb,yb,POLYBENCH_ARRAY(B), xc,POLYBENCH_ARRAY(C), INIT_SEED);
kernel_2224212221_00(xa,POLYBENCH_ARRAY(A), xb,yb,POLYBENCH_ARRAY(B), xc,POLYBENCH_ARRAY(C));
polybench_prevent_dce(print_array(xa,POLYBENCH_ARRAY(A), xb,yb,POLYBENCH_ARRAY(B), xc,POLYBENCH_ARRAY(C)));
POLYBENCH_FREE_ARRAY(A);
POLYBENCH_FREE_ARRAY(B);
POLYBENCH_FREE_ARRAY(C);
return 0;
}
