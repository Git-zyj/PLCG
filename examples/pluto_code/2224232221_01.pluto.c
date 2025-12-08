#include <stdio.h>
#include <unistd.h>
#include <string.h>
#include <math.h>
#include "polybench.h"
#include <time.h>
#include <stdlib.h>
#include "2224232221_01.h"
#include <omp.h>
#define ceild(n,d)  ceil(((double)(n))/((double)(d)))
#define floord(n,d) floor(((double)(n))/((double)(d)))
/*
arg_depth: 2
arg_nstmts: 2
arg_bounds_index: 2
arg_prob_bounds_exist: 4
arg_narrays_per_dim: 2
arg_avg_narrays_read_per_stmt: 3
arg_bounds_coef: 2
arg_avg_ndeps_read_per_stmt: 2
arg_bounds_distance: 2
arg_prob_dep_write_exist: 1
id: 1
*/
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
#ifndef USE_INIT_SEED
#define INIT_SEED time(NULL)
#else
#define INIT_SEED atoi(argv[1])
#endif
static void init_array(int xa,DATA_TYPE POLYBENCH_1D(A,xA,xa),int xc,DATA_TYPE POLYBENCH_1D(C,xC,xc),int xd,int yd,DATA_TYPE POLYBENCH_2D(D,xD,yD,xd,yd),int xe,int ye,DATA_TYPE POLYBENCH_2D(E,xE,yE,xe,ye),int seed)
{
srand(seed);
int i_0, i_1;
for (i_0 = 0; i_0 < xa; i_0++) {
    A[i_0] = 0.9 + (rand() / (DATA_TYPE)RAND_MAX) * (1.1 - 0.9);
}
for (i_0 = 0; i_0 < xc; i_0++) {
    C[i_0] = 0.9 + (rand() / (DATA_TYPE)RAND_MAX) * (1.1 - 0.9);
}
for (i_0 = 0; i_0 < xd; i_0++) {
    for (i_1 = 0; i_1 < yd; i_1++) {
        D[i_0][i_1] = 0.9 + (rand() / (DATA_TYPE)RAND_MAX) * (1.1 - 0.9);
    }
}
for (i_0 = 0; i_0 < xe; i_0++) {
    for (i_1 = 0; i_1 < ye; i_1++) {
        E[i_0][i_1] = 0.9 + (rand() / (DATA_TYPE)RAND_MAX) * (1.1 - 0.9);
    }
}
}
static void print_array(int xa,DATA_TYPE POLYBENCH_1D(A,xA,xa),int xc,DATA_TYPE POLYBENCH_1D(C,xC,xc),int xd,int yd,DATA_TYPE POLYBENCH_2D(D,xD,yD,xd,yd),int xe,int ye,DATA_TYPE POLYBENCH_2D(E,xE,yE,xe,ye))
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
    POLYBENCH_DUMP_BEGIN("E");
    for (i_0 = 0; i_0 < xe; i_0++) {
        for (i_1 = 0; i_1 < ye; i_1++) {
            fprintf(POLYBENCH_DUMP_TARGET, "\n");
            fprintf (POLYBENCH_DUMP_TARGET, DATA_PRINTF_MODIFIER, E[i_0][i_1]);
        }
    }
    POLYBENCH_DUMP_END("E");
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
#endif
POLYBENCH_DUMP_FINISH;
}
void kernel_2224232221_01(int xa,DATA_TYPE POLYBENCH_1D(A,xA,xa),int xc,DATA_TYPE POLYBENCH_1D(C,xC,xc),int xd,int yd,DATA_TYPE POLYBENCH_2D(D,xD,yD,xd,yd),int xe,int ye,DATA_TYPE POLYBENCH_2D(E,xE,yE,xe,ye)){
polybench_start_instruments;
  int t1, t2, t3, t4;
 int lb, ub, lbp, ubp, lb2, ub2;
 register int lbv, ubv;
/* Start of CLooG code */
if (PB_L >= 5) {
  for (t1=0;t1<=floord(PB_L-1,4);t1++) {
    if (PB_M <= -1) {
      t2 = max(ceild(5*t1-2,8),ceild(32*t1-3*PB_L+3,32));
      if (t2 <= min(floord(5*t1+4,8),floord(5*PB_L-5,32))) {
        for (t3=max(max(4,ceild(32*t1-32*t2,3)),ceild(32*t2,5));t3<=min(min(floord(32*t1-32*t2+31,3),floord(32*t2+31,5)),PB_L-1);t3++) {
          A[t3-2] = C[t3] - C[t3] + C[t3] - A[t3] * A[t3-4] - 3;;
        }
      }
    }
    if (PB_M >= 0) {
      lbp=max(ceild(2*t1-1,4),ceild(40*t1-5*PB_L-PB_M+10,40));
      ubp=min(floord(5*PB_L+PB_M-5,32),floord(20*t1+PB_M+16,32));
#pragma omp parallel for private(lbv,ubv,t3,t4)
      for (t2=lbp;t2<=ubp;t2++) {
        if (PB_M <= 4) {
          for (t3=max(max(4,ceild(32*t1-32*t2,3)),ceild(32*t2,5));t3<=min(min(floord(32*t1-32*t2+31,3),floord(32*t2+31,5)),PB_L-1);t3++) {
            A[t3-2] = C[t3] - C[t3] + C[t3] - A[t3] * A[t3-4] - 3;;
          }
        }
        if (PB_M >= 5) {
          for (t3=max(ceild(32*t1-32*t2,3),ceild(32*t2,5));t3<=min(min(min(floord(32*t1-32*t2+31,3),floord(32*t2-PB_M,4)),floord(32*t2+31,5)),PB_L-1);t3++) {
            A[t3-2] = C[t3] - C[t3] + C[t3] - A[t3] * A[t3-4] - 3;;
          }
        }
        if (PB_M >= 5) {
          for (t3=max(ceild(32*t2-PB_M+1,4),4*t1);t3<=min(min(min(min(floord(32*t1-32*t2-1,3),floord(32*t1-32*t2+PB_M+26,4)),PB_L-1),4*t1+7),8*t2+6);t3++) {
            for (t4=max(max(32*t2,4*t3+4),-32*t1+32*t2+8*t3-27);t4<=min(min(32*t2+31,4*t3+PB_M-1),-32*t1+32*t2+8*t3+4);t4++) {
              A[(-4*t3+t4)-4] = D[(-4*t3+t4)][t3] - E[(-4*t3+t4)][t3] * 3;;
            }
          }
        }
        for (t3=max(ceild(32*t2-PB_M+1,4),4*t1);t3<=min(min(floord(32*t1-32*t2+31,3),floord(32*t2-1,5)),PB_L-1);t3++) {
          for (t4=32*t2;t4<=min(4*t3+PB_M-1,-32*t1+32*t2+8*t3+4);t4++) {
            A[(-4*t3+t4)-4] = D[(-4*t3+t4)][t3] - E[(-4*t3+t4)][t3] * 3;;
          }
        }
        if (PB_M >= 5) {
          for (t3=max(max(max(4,ceild(32*t1-32*t2,3)),ceild(32*t2-PB_M+1,4)),ceild(32*t2,5));t3<=min(min(min(floord(32*t1-32*t2+31,3),floord(32*t1-32*t2+PB_M+26,4)),floord(32*t2+31,5)),PB_L-1);t3++) {
            if (t1 <= floord(32*t2+3*t3-28,32)) {
              A[t3-2] = C[t3] - C[t3] + C[t3] - A[t3] * A[t3-4] - 3;;
            }
            for (t4=max(max(32*t2,4*t3+4),-32*t1+32*t2+8*t3-27);t4<=min(5*t3-1,4*t3+PB_M-1);t4++) {
              A[(-4*t3+t4)-4] = D[(-4*t3+t4)][t3] - E[(-4*t3+t4)][t3] * 3;;
            }
            if ((t1 >= ceild(32*t2+3*t3-27,32)) && (t3 <= PB_M-1)) {
              A[t3-2] = C[t3] - C[t3] + C[t3] - A[t3] * A[t3-4] - 3;;
              A[t3-4] = D[t3][t3] - E[t3][t3] * 3;;
            }
            if (t3 >= PB_M) {
              A[t3-2] = C[t3] - C[t3] + C[t3] - A[t3] * A[t3-4] - 3;;
            }
            for (t4=max(5*t3+1,-32*t1+32*t2+8*t3-27);t4<=min(min(32*t2+31,4*t3+PB_M-1),-32*t1+32*t2+8*t3+4);t4++) {
              A[(-4*t3+t4)-4] = D[(-4*t3+t4)][t3] - E[(-4*t3+t4)][t3] * 3;;
            }
          }
        }
        if (PB_M >= 5) {
          for (t3=max(ceild(32*t2-PB_M+1,4),ceild(32*t1-32*t2+PB_M+27,4));t3<=min(min(floord(32*t1-32*t2+31,3),floord(32*t2+31,5)),PB_L-1);t3++) {
            A[t3-2] = C[t3] - C[t3] + C[t3] - A[t3] * A[t3-4] - 3;;
          }
        }
        for (t3=max(max(max(4,ceild(32*t1-32*t2+32,3)),ceild(32*t2-PB_M+1,4)),4*t1);t3<=min(min(floord(32*t1-32*t2+PB_M+26,4),PB_L-1),4*t1+7);t3++) {
          for (t4=max(32*t2,-32*t1+32*t2+8*t3-27);t4<=min(min(32*t2+31,4*t3+PB_M-1),-32*t1+32*t2+8*t3+4);t4++) {
            A[(-4*t3+t4)-4] = D[(-4*t3+t4)][t3] - E[(-4*t3+t4)][t3] * 3;;
          }
        }
        if (PB_M >= 5) {
          for (t3=max(ceild(32*t1-32*t2,3),ceild(32*t2+32,5));t3<=min(min(min(floord(32*t1-32*t2+PB_M+26,4),PB_L-1),4*t1+7),8*t2+6);t3++) {
            for (t4=max(4*t3+4,-32*t1+32*t2+8*t3-27);t4<=min(32*t2+31,4*t3+PB_M-1);t4++) {
              A[(-4*t3+t4)-4] = D[(-4*t3+t4)][t3] - E[(-4*t3+t4)][t3] * 3;;
            }
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
int xc = xC;
int xd = xD;
int yd = yD;
int xe = xE;
int ye = yE;
POLYBENCH_1D_ARRAY_DECL(A, DATA_TYPE, xA,xa);
POLYBENCH_1D_ARRAY_DECL(C, DATA_TYPE, xC,xc);
POLYBENCH_2D_ARRAY_DECL(D, DATA_TYPE, xD,yD,xd,yd);
POLYBENCH_2D_ARRAY_DECL(E, DATA_TYPE, xE,yE,xe,ye);
init_array(xa,POLYBENCH_ARRAY(A), xc,POLYBENCH_ARRAY(C), xd,yd,POLYBENCH_ARRAY(D), xe,ye,POLYBENCH_ARRAY(E), INIT_SEED);
kernel_2224232221_01(xa,POLYBENCH_ARRAY(A), xc,POLYBENCH_ARRAY(C), xd,yd,POLYBENCH_ARRAY(D), xe,ye,POLYBENCH_ARRAY(E));
polybench_prevent_dce(print_array(xa,POLYBENCH_ARRAY(A), xc,POLYBENCH_ARRAY(C), xd,yd,POLYBENCH_ARRAY(D), xe,ye,POLYBENCH_ARRAY(E)));
POLYBENCH_FREE_ARRAY(A);
POLYBENCH_FREE_ARRAY(C);
POLYBENCH_FREE_ARRAY(D);
POLYBENCH_FREE_ARRAY(E);
return 0;
}
