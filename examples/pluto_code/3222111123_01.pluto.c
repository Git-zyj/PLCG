#include <stdio.h>
#include <unistd.h>
#include <string.h>
#include <math.h>
#include "polybench.h"
#include <time.h>
#include <stdlib.h>
#include "3222111123_01.h"
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
void kernel_3222111123_01(int xa,DATA_TYPE POLYBENCH_1D(A,xA,xa),int xb,int yb,DATA_TYPE POLYBENCH_2D(B,xB,yB,xb,yb),int xc,DATA_TYPE POLYBENCH_1D(C,xC,xc)){
polybench_start_instruments;
  int t1, t2, t3, t4;
 int lb, ub, lbp, ubp, lb2, ub2;
 register int lbv, ubv;
/* Start of CLooG code */
if ((PB_L >= 0) && (PB_M >= max(0,ceild(-4*PB_L+12,3)))) {
  for (t1=0;t1<=min(floord(PB_M+2*PB_L-2,32),floord(3*PB_M+4*PB_L-8,64));t1++) {
    for (t2=max(max(0,ceild(32*t1-PB_M-PB_L-30,32)),ceild(544*t1-17*PB_M-33*PB_L+34,32));t2<=min(min(floord(PB_L,32),floord(3*PB_M+4*PB_L-12,128)),t1);t2++) {
      if ((PB_L >= 3) && (PB_M >= 4) && (t1 <= min(floord(PB_L-1,32),floord(PB_M-2,32))) && (t2 == 0)) {
        for (t4=max(2,32*t1);t4<=min(min(PB_L-1,PB_M-2),32*t1+31);t4++) {
          A[t4] = C[t4+1] + A[t4-2] - 1;;
          B[0][t4] = B[t4-2][0 +2] + 2;;
        }
        for (t4=PB_L;t4<=min(PB_M-2,32*t1+31);t4++) {
          A[t4] = C[t4+1] + A[t4-2] - 1;;
        }
        for (t4=PB_M-1;t4<=min(PB_L-1,32*t1+31);t4++) {
          B[0][t4] = B[t4-2][0 +2] + 2;;
        }
      }
      if ((t1 <= floord(PB_M-2,32)) && (t1 >= ceild(PB_L,32)) && (t2 == 0)) {
        for (t4=max(2,32*t1);t4<=min(PB_M-2,32*t1+31);t4++) {
          A[t4] = C[t4+1] + A[t4-2] - 1;;
        }
      }
      if ((PB_L >= 1) && (PB_L <= 2) && (PB_M >= 4) && (t1 == 0) && (t2 == 0)) {
        for (t4=2;t4<=min(31,PB_M-2);t4++) {
          A[t4] = C[t4+1] + A[t4-2] - 1;;
        }
      }
      if ((PB_L >= 3) && (PB_M <= 3) && (t1 <= floord(PB_L-1,32)) && (t2 == 0)) {
        for (t4=max(2,32*t1);t4<=min(PB_L-1,32*t1+31);t4++) {
          B[0][t4] = B[t4-2][0 +2] + 2;;
        }
      }
      if ((PB_M >= 4) && (t1 <= floord(PB_L-1,32)) && (t1 >= ceild(PB_M-1,32)) && (t2 == 0)) {
        for (t4=32*t1;t4<=min(PB_L-1,32*t1+31);t4++) {
          B[0][t4] = B[t4-2][0 +2] + 2;;
        }
      }
      for (t3=max(max(1,32*t2),32*t1-PB_L+1);t3<=min(min(PB_L-3,32*t1+29),32*t2+31);t3++) {
        for (t4=max(32*t1,t3+2);t4<=min(32*t1+31,t3+PB_L-1);t4++) {
          B[t3][(-t3+t4)] = B[(-t3+t4)-2][t3+2] + 2;;
        }
      }
    }
  }
}
if ((PB_L <= -1) && (PB_M >= 4)) {
  for (t1=0;t1<=floord(PB_M-2,32);t1++) {
    for (t4=max(2,32*t1);t4<=min(PB_M-2,32*t1+31);t4++) {
      A[t4] = C[t4+1] + A[t4-2] - 1;;
    }
  }
}
if ((PB_L >= 3) && (PB_M <= -1)) {
  for (t1=0;t1<=floord(PB_L-2,16);t1++) {
    for (t2=max(0,ceild(32*t1-PB_L-30,32));t2<=min(floord(PB_L-3,32),t1);t2++) {
      for (t3=max(32*t2,32*t1-PB_L+1);t3<=min(min(PB_L-3,32*t1+29),32*t2+31);t3++) {
        for (t4=max(32*t1,t3+2);t4<=min(32*t1+31,t3+PB_L-1);t4++) {
          B[t3][(-t3+t4)] = B[(-t3+t4)-2][t3+2] + 2;;
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
kernel_3222111123_01(xa,POLYBENCH_ARRAY(A), xb,yb,POLYBENCH_ARRAY(B), xc,POLYBENCH_ARRAY(C));
polybench_prevent_dce(print_array(xa,POLYBENCH_ARRAY(A), xb,yb,POLYBENCH_ARRAY(B), xc,POLYBENCH_ARRAY(C)));
POLYBENCH_FREE_ARRAY(A);
POLYBENCH_FREE_ARRAY(B);
POLYBENCH_FREE_ARRAY(C);
return 0;
}
