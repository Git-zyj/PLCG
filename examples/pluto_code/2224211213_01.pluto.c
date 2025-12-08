#include <stdio.h>
#include <unistd.h>
#include <string.h>
#include <math.h>
#include "polybench.h"
#include <time.h>
#include <stdlib.h>
#include "2224211213_01.h"
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
arg_bounds_coef: 1
arg_avg_ndeps_read_per_stmt: 2
arg_bounds_distance: 1
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
static void init_array(int xa,DATA_TYPE POLYBENCH_1D(A,xA,xa),int xc,DATA_TYPE POLYBENCH_1D(C,xC,xc),int xd,int yd,DATA_TYPE POLYBENCH_2D(D,xD,yD,xd,yd),int seed)
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
}
static void print_array(int xa,DATA_TYPE POLYBENCH_1D(A,xA,xa),int xc,DATA_TYPE POLYBENCH_1D(C,xC,xc),int xd,int yd,DATA_TYPE POLYBENCH_2D(D,xD,yD,xd,yd))
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
#endif
POLYBENCH_DUMP_FINISH;
}
void kernel_2224211213_01(int xa,DATA_TYPE POLYBENCH_1D(A,xA,xa),int xc,DATA_TYPE POLYBENCH_1D(C,xC,xc),int xd,int yd,DATA_TYPE POLYBENCH_2D(D,xD,yD,xd,yd)){
polybench_start_instruments;
  int t1, t2, t3, t4;
 int lb, ub, lbp, ubp, lb2, ub2;
 register int lbv, ubv;
/* Start of CLooG code */
if (PB_L >= 3) {
  for (t1=-1;t1<=floord(PB_L-2,8);t1++) {
    lbp=ceild(t1,2);
    ubp=min(min(floord(3*PB_L-4,32),floord(16*t1+PB_L+14,32)),floord(32*t1+PB_L+27,32));
#pragma omp parallel for private(lbv,ubv,t3,t4)
    for (t2=lbp;t2<=ubp;t2++) {
      for (t3=8*t1;t3<=min(min(PB_L-2,8*t1+15),32*t1-32*t2-1);t3++) {
        for (t4=max(max(32*t2,2*t3+1),-32*t1+32*t2+4*t3-29);t4<=min(32*t2+31,-32*t1+32*t2+4*t3+2);t4++) {
          A[(-2*t3+t4-1)] = D[t3][0] + 1;;
        }
      }
      for (t3=max(max(1,ceild(32*t2-PB_L,2)),8*t1);t3<=min(floord(32*t2-1,3),32*t1-32*t2+31);t3++) {
        for (t4=32*t2;t4<=min(2*t3+PB_L,-32*t1+32*t2+4*t3+2);t4++) {
          A[(-2*t3+t4-1)] = D[t3][0] + 1;;
        }
      }
      for (t3=max(max(1,ceild(32*t2,3)),32*t1-32*t2);t3<=min(min(floord(32*t2+31,3),PB_L-2),32*t1-32*t2+31);t3++) {
        if ((t1 <= floord(t3-14,8)) && (3*t1 == 4*t2-2)) {
          if ((t1+2)%4 == 0) {
            A[t3] = C[t3] - A[t3-1] + A[t3+1] * 5;;
          }
        }
        for (t4=max(max(32*t2,2*t3+1),-32*t1+32*t2+4*t3-29);t4<=3*t3-1;t4++) {
          A[(-2*t3+t4-1)] = D[t3][0] + 1;;
        }
        if (t1 >= ceild(32*t2+t3-29,32)) {
          A[t3] = C[t3] - A[t3-1] + A[t3+1] * 5;;
          A[(t3-1)] = D[t3][0] + 1;;
        }
        for (t4=max(3*t3+1,-32*t1+32*t2+4*t3-29);t4<=min(min(32*t2+31,2*t3+PB_L),-32*t1+32*t2+4*t3+2);t4++) {
          A[(-2*t3+t4-1)] = D[t3][0] + 1;;
        }
      }
      for (t3=max(max(max(1,ceild(32*t2-PB_L,2)),8*t1),32*t1-32*t2+32);t3<=min(floord(32*t1-32*t2+PB_L+29,2),8*t1+15);t3++) {
        for (t4=max(32*t2,-32*t1+32*t2+4*t3-29);t4<=min(min(32*t2+31,2*t3+PB_L),-32*t1+32*t2+4*t3+2);t4++) {
          A[(-2*t3+t4-1)] = D[t3][0] + 1;;
        }
      }
      for (t3=max(ceild(32*t2+32,3),32*t1-32*t2);t3<=min(PB_L-2,8*t1+15);t3++) {
        for (t4=max(2*t3+1,-32*t1+32*t2+4*t3-29);t4<=32*t2+31;t4++) {
          A[(-2*t3+t4-1)] = D[t3][0] + 1;;
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
POLYBENCH_1D_ARRAY_DECL(A, DATA_TYPE, xA,xa);
POLYBENCH_1D_ARRAY_DECL(C, DATA_TYPE, xC,xc);
POLYBENCH_2D_ARRAY_DECL(D, DATA_TYPE, xD,yD,xd,yd);
init_array(xa,POLYBENCH_ARRAY(A), xc,POLYBENCH_ARRAY(C), xd,yd,POLYBENCH_ARRAY(D), INIT_SEED);
kernel_2224211213_01(xa,POLYBENCH_ARRAY(A), xc,POLYBENCH_ARRAY(C), xd,yd,POLYBENCH_ARRAY(D));
polybench_prevent_dce(print_array(xa,POLYBENCH_ARRAY(A), xc,POLYBENCH_ARRAY(C), xd,yd,POLYBENCH_ARRAY(D)));
POLYBENCH_FREE_ARRAY(A);
POLYBENCH_FREE_ARRAY(C);
POLYBENCH_FREE_ARRAY(D);
return 0;
}
