#include <stdio.h>
#include <unistd.h>
#include <string.h>
#include <math.h>
#include "polybench.h"
#include <time.h>
#include <stdlib.h>
#include "2222111123_00.h"
#include <omp.h>
#define ceild(n,d)  ceil(((double)(n))/((double)(d)))
#define floord(n,d) floor(((double)(n))/((double)(d)))
/*
arg_depth: 2
arg_nstmts: 2
arg_bounds_index: 2
arg_prob_bounds_exist: 2
arg_narrays_per_dim: 1
arg_avg_narrays_read_per_stmt: 1
arg_bounds_coef: 1
arg_avg_ndeps_read_per_stmt: 1
arg_bounds_distance: 2
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
static void init_array(int xa,int ya,DATA_TYPE POLYBENCH_2D(A,xA,yA,xa,ya),int xc,DATA_TYPE POLYBENCH_1D(C,xC,xc),int seed)
{
srand(seed);
int i_0, i_1;
for (i_0 = 0; i_0 < xa; i_0++) {
    for (i_1 = 0; i_1 < ya; i_1++) {
        A[i_0][i_1] = 0.9 + (rand() / (DATA_TYPE)RAND_MAX) * (1.1 - 0.9);
    }
}
for (i_0 = 0; i_0 < xc; i_0++) {
    C[i_0] = 0.9 + (rand() / (DATA_TYPE)RAND_MAX) * (1.1 - 0.9);
}
}
static void print_array(int xa,int ya,DATA_TYPE POLYBENCH_2D(A,xA,yA,xa,ya),int xc,DATA_TYPE POLYBENCH_1D(C,xC,xc))
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
        for (i_1 = 0; i_1 < ya; i_1++) {
            sum_A += A[i_0][i_1];
        }
    }
    fprintf(POLYBENCH_DUMP_TARGET, "\nsum: ");
    fprintf (POLYBENCH_DUMP_TARGET, DATA_PRINTF_MODIFIER, sum_A);
    POLYBENCH_DUMP_END("A");
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
void kernel_2222111123_00(int xa,int ya,DATA_TYPE POLYBENCH_2D(A,xA,yA,xa,ya),int xc,DATA_TYPE POLYBENCH_1D(C,xC,xc)){
polybench_start_instruments;
  int t1, t2, t3, t4, t5;
 int lb, ub, lbp, ubp, lb2, ub2;
 register int lbv, ubv;
/* Start of CLooG code */
if (PB_M >= 2) {
  if (PB_L >= 0) {
    for (t1=0;t1<=floord(PB_L+5*PB_M-7,32);t1++) {
      lbp=max(max(max(0,ceild(32*t1-PB_L-2*PB_M+2,32)),ceild(32*t1-PB_L-32,64)),ceild(64*t1-2*PB_L-PB_M-32,96));
      ubp=min(floord(3*t1+2,5),floord(3*PB_M-5,32));
#pragma omp parallel for private(lbv,ubv,t3,t4,t5)
      for (t2=lbp;t2<=ubp;t2++) {
        for (t3=max(max(1,32*t2),32*t1-32*t2-PB_L+1);t3<=min(min(PB_M-1,32*t2+31),32*t1-32*t2-2);t3++) {
          for (t4=32*t1-32*t2;t4<=min(32*t1-32*t2+31,t3+PB_L-1);t4++) {
            A[t3][(-t3+t4)] = C[t3-1] - 2;;
          }
        }
        if (PB_L == 0) {
          for (t3=max(max(max(1,32*t2),32*t1-32*t2-1),64*t1-64*t2-PB_M-1);t3<=min(min(3*PB_M-5,32*t2+31),48*t1-48*t2+44);t3++) {
            for (t4=max(ceild(2*t3+4,3),32*t1-32*t2);t4<=min(min(floord(t3+PB_M+1,2),t3+1),32*t1-32*t2+31);t4++) {
              A[(t3-t4+1)+1][(-t3+2*t4-2)] = A[(-t3+2*t4-2)][(t3-t4+1)] * 2;;
            }
          }
        }
        if ((PB_L == 1) && (t1 == 2*t2+1) && (t1 <= floord(PB_M-16,16))) {
          if ((t1+1)%2 == 0) {
            A[0 +1][(16*t1+15)] = A[(16*t1+15)][0] * 2;;
          }
        }
        if (PB_L >= 1) {
          for (t3=max(max(max(1,32*t2),32*t1-32*t2-1),32*t1-32*t2-PB_L+1);t3<=min(min(PB_M-1,32*t2+31),32*t1-32*t2+31);t3++) {
            if ((t1 == 0) && (t2 == 0) && (t3 <= 3)) {
              A[t3][0] = C[t3-1] - 2;;
            }
            if (t1 == 2*t2) {
              for (t4=max(ceild(2*t3+4,3),16*t1);t4<=t3-1;t4++) {
                if (t1%2 == 0) {
                  A[(t3-t4+1)+1][(-t3+2*t4-2)] = A[(-t3+2*t4-2)][(t3-t4+1)] * 2;;
                }
              }
            }
            for (t4=max(max(ceild(2*t3+4,3),t3),32*t1-32*t2);t4<=min(min(t3+1,32*t1-32*t2+31),t3+PB_L-1);t4++) {
              A[t3][(-t3+t4)] = C[t3-1] - 2;;
              A[(t3-t4+1)+1][(-t3+2*t4-2)] = A[(-t3+2*t4-2)][(t3-t4+1)] * 2;;
            }
            for (t4=t3+2;t4<=min(32*t1-32*t2+31,t3+PB_L-1);t4++) {
              A[t3][(-t3+t4)] = C[t3-1] - 2;;
            }
            if ((PB_L == 1) && (t1 == 2*t2) && (t1 >= ceild(t3-30,16))) {
              if (t1%2 == 0) {
                A[0 +1][t3] = A[t3][0] * 2;;
              }
            }
          }
        }
        if (PB_L >= 1) {
          for (t3=max(max(32*t2,32*t1-32*t2+32),64*t1-64*t2-PB_M-1);t3<=min(min(3*PB_M-5,32*t2+31),48*t1-48*t2+44);t3++) {
            for (t4=max(ceild(2*t3+4,3),32*t1-32*t2);t4<=min(floord(t3+PB_M+1,2),32*t1-32*t2+31);t4++) {
              A[(t3-t4+1)+1][(-t3+2*t4-2)] = A[(-t3+2*t4-2)][(t3-t4+1)] * 2;;
            }
          }
        }
        if ((PB_L >= 1) && (t1 == 2*t2)) {
          for (t3=max(PB_M,32*t1-PB_M-1);t3<=min(3*PB_M-5,16*t1+31);t3++) {
            for (t4=max(ceild(2*t3+4,3),16*t1);t4<=floord(t3+PB_M+1,2);t4++) {
              if (t1%2 == 0) {
                A[(t3-t4+1)+1][(-t3+2*t4-2)] = A[(-t3+2*t4-2)][(t3-t4+1)] * 2;;
              }
            }
          }
        }
      }
    }
  }
  if (PB_L <= -1) {
    for (t1=0;t1<=floord(5*PB_M-7,32);t1++) {
      lbp=max(max(ceild(t1-1,2),ceild(16*t1-PB_M+1,16)),ceild(64*t1-PB_M-32,96));
      ubp=min(floord(3*t1+2,5),floord(3*PB_M-5,32));
#pragma omp parallel for private(lbv,ubv,t3,t4,t5)
      for (t2=lbp;t2<=ubp;t2++) {
        for (t3=max(max(max(1,32*t2),32*t1-32*t2-1),64*t1-64*t2-PB_M-1);t3<=min(min(3*PB_M-5,32*t2+31),48*t1-48*t2+44);t3++) {
          for (t4=max(ceild(2*t3+4,3),32*t1-32*t2);t4<=min(min(floord(t3+PB_M+1,2),t3+1),32*t1-32*t2+31);t4++) {
            A[(t3-t4+1)+1][(-t3+2*t4-2)] = A[(-t3+2*t4-2)][(t3-t4+1)] * 2;;
          }
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
int ya = yA;
int xc = xC;
POLYBENCH_2D_ARRAY_DECL(A, DATA_TYPE, xA,yA,xa,ya);
POLYBENCH_1D_ARRAY_DECL(C, DATA_TYPE, xC,xc);
init_array(xa,ya,POLYBENCH_ARRAY(A), xc,POLYBENCH_ARRAY(C), INIT_SEED);
kernel_2222111123_00(xa,ya,POLYBENCH_ARRAY(A), xc,POLYBENCH_ARRAY(C));
polybench_prevent_dce(print_array(xa,ya,POLYBENCH_ARRAY(A), xc,POLYBENCH_ARRAY(C)));
POLYBENCH_FREE_ARRAY(A);
POLYBENCH_FREE_ARRAY(C);
return 0;
}
