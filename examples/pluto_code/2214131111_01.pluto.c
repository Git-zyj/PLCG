#include <stdio.h>
#include <unistd.h>
#include <string.h>
#include <math.h>
#include "polybench.h"
#include <time.h>
#include <stdlib.h>
#include "2214131111_01.h"
#include <omp.h>
#define ceild(n,d)  ceil(((double)(n))/((double)(d)))
#define floord(n,d) floor(((double)(n))/((double)(d)))
/*
arg_depth: 2
arg_nstmts: 2
arg_bounds_index: 1
arg_prob_bounds_exist: 4
arg_narrays_per_dim: 1
arg_avg_narrays_read_per_stmt: 3
arg_bounds_coef: 1
arg_avg_ndeps_read_per_stmt: 1
arg_bounds_distance: 1
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
static void init_array(int xa,int ya,DATA_TYPE POLYBENCH_2D(A,xA,yA,xa,ya),int xb,DATA_TYPE POLYBENCH_1D(B,xB,xb),int xc,DATA_TYPE POLYBENCH_1D(C,xC,xc),int seed)
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
}
static void print_array(int xa,int ya,DATA_TYPE POLYBENCH_2D(A,xA,yA,xa,ya),int xb,DATA_TYPE POLYBENCH_1D(B,xB,xb),int xc,DATA_TYPE POLYBENCH_1D(C,xC,xc))
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
#endif
POLYBENCH_DUMP_FINISH;
}
void kernel_2214131111_01(int xa,int ya,DATA_TYPE POLYBENCH_2D(A,xA,yA,xa,ya),int xb,DATA_TYPE POLYBENCH_1D(B,xB,xb),int xc,DATA_TYPE POLYBENCH_1D(C,xC,xc)){
polybench_start_instruments;
  int t1, t2, t3, t4, t5;
 int lb, ub, lbp, ubp, lb2, ub2;
 register int lbv, ubv;
/* Start of CLooG code */
if (PB_M >= 3) {
  for (t1=ceild(-PB_M-46,32);t1<=floord(PB_M-3,16);t1++) {
    lbp=max(max(ceild(-PB_M-14,16),ceild(32*t1-PB_M+2,16)),ceild(32*t1-PB_M,32));
    ubp=min(t1,2*t1+2);
#pragma omp parallel for private(lbv,ubv,t3,t4,t5)
    for (t2=lbp;t2<=ubp;t2++) {
      if (t2 == 0) {
        for (t3=max(1,32*t1);t3<=min(min(min(min(floord(PB_L+15,2),PB_L-1),PB_M-2),-32*t1+PB_L),32*t1+31);t3++) {
          lbv=max(max(1,32*t1),t3-15);
          ubv=min(t3,-t3+PB_L);
#pragma ivdep
#pragma vector always
          for (t4=lbv;t4<=ubv;t4++) {
            A[t3+1][t4-1] = C[t3] + C[t4+t3-1] + B[t4-1] * 6;;
          }
          B[t3-1] = C[t3] + C[t3] + C[t3-1] * B[t3] * 2;;
        }
      }
      if (t2 <= -1) {
        for (t3=max(1,32*t1-16*t2);t3<=min(min(min(min(floord(16*t2+PB_L+15,2),PB_M-2),-32*t1+32*t2+PB_L),32*t1-16*t2+46),16*t2+PB_M+15);t3++) {
          lbv=max(32*t1-32*t2,-16*t2+t3-15);
          ubv=min(min(min(PB_M,-16*t2+t3),-t3+PB_L),32*t1-32*t2+31);
#pragma ivdep
#pragma vector always
          for (t4=lbv;t4<=ubv;t4++) {
            A[t3+1][t4-1] = C[t3] + C[t4+t3-1] + B[t4-1] * 6;;
          }
        }
      }
      if (t2 >= 1) {
        for (t3=max(32*t1-16*t2,16*t2+1);t3<=min(min(min(min(floord(16*t2+PB_L+15,2),PB_L-1),PB_M-2),-32*t1+32*t2+PB_L),32*t1-16*t2+46);t3++) {
          lbv=max(max(1,32*t1-32*t2),-16*t2+t3-15);
          ubv=min(min(-16*t2+t3,-t3+PB_L),32*t1-32*t2+31);
#pragma ivdep
#pragma vector always
          for (t4=lbv;t4<=ubv;t4++) {
            A[t3+1][t4-1] = C[t3] + C[t4+t3-1] + B[t4-1] * 6;;
          }
        }
      }
      if (t2 == 0) {
        for (t3=32*t1+32;t3<=min(min(floord(PB_L+15,2),PB_M-2),32*t1+46);t3++) {
          lbv=t3-15;
          ubv=min(32*t1+31,-t3+PB_L);
#pragma ivdep
#pragma vector always
          for (t4=lbv;t4<=ubv;t4++) {
            A[t3+1][t4-1] = C[t3] + C[t4+t3-1] + B[t4-1] * 6;;
          }
        }
      }
      if (t2 == 0) {
        for (t3=ceild(PB_L+16,2);t3<=(min(min(min(PB_L-1,PB_M-2),-32*t1+PB_L),32*t1+31))-7;t3+=8) {
          B[t3-1] = C[t3] + C[t3] + C[t3-1] * B[t3] * 2;;
          B[(t3+1)-1] = C[(t3+1)] + C[(t3+1)] + C[(t3+1)-1] * B[(t3+1)] * 2;;
          B[(t3+2)-1] = C[(t3+2)] + C[(t3+2)] + C[(t3+2)-1] * B[(t3+2)] * 2;;
          B[(t3+3)-1] = C[(t3+3)] + C[(t3+3)] + C[(t3+3)-1] * B[(t3+3)] * 2;;
          B[(t3+4)-1] = C[(t3+4)] + C[(t3+4)] + C[(t3+4)-1] * B[(t3+4)] * 2;;
          B[(t3+5)-1] = C[(t3+5)] + C[(t3+5)] + C[(t3+5)-1] * B[(t3+5)] * 2;;
          B[(t3+6)-1] = C[(t3+6)] + C[(t3+6)] + C[(t3+6)-1] * B[(t3+6)] * 2;;
          B[(t3+7)-1] = C[(t3+7)] + C[(t3+7)] + C[(t3+7)-1] * B[(t3+7)] * 2;;
        }
        for (;t3<=min(min(min(PB_L-1,PB_M-2),-32*t1+PB_L),32*t1+31);t3++) {
          B[t3-1] = C[t3] + C[t3] + C[t3-1] * B[t3] * 2;;
        }
      }
      if ((PB_L >= 1) && (PB_L <= 31) && (PB_M >= PB_L+2) && (t1 == 0) && (t2 == 0)) {
        B[PB_L-1] = C[PB_L] + C[PB_L] + C[PB_L-1] * B[PB_L] * 2;;
      }
      if (t2 == 0) {
        for (t3=max(max(1,32*t1),-32*t1+PB_L+1);t3<=(min(PB_M-2,32*t1+31))-7;t3+=8) {
          B[t3-1] = C[t3] + C[t3] + C[t3-1] * B[t3] * 2;;
          B[(t3+1)-1] = C[(t3+1)] + C[(t3+1)] + C[(t3+1)-1] * B[(t3+1)] * 2;;
          B[(t3+2)-1] = C[(t3+2)] + C[(t3+2)] + C[(t3+2)-1] * B[(t3+2)] * 2;;
          B[(t3+3)-1] = C[(t3+3)] + C[(t3+3)] + C[(t3+3)-1] * B[(t3+3)] * 2;;
          B[(t3+4)-1] = C[(t3+4)] + C[(t3+4)] + C[(t3+4)-1] * B[(t3+4)] * 2;;
          B[(t3+5)-1] = C[(t3+5)] + C[(t3+5)] + C[(t3+5)-1] * B[(t3+5)] * 2;;
          B[(t3+6)-1] = C[(t3+6)] + C[(t3+6)] + C[(t3+6)-1] * B[(t3+6)] * 2;;
          B[(t3+7)-1] = C[(t3+7)] + C[(t3+7)] + C[(t3+7)-1] * B[(t3+7)] * 2;;
        }
        for (;t3<=min(PB_M-2,32*t1+31);t3++) {
          B[t3-1] = C[t3] + C[t3] + C[t3-1] * B[t3] * 2;;
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
int xb = xB;
int xc = xC;
POLYBENCH_2D_ARRAY_DECL(A, DATA_TYPE, xA,yA,xa,ya);
POLYBENCH_1D_ARRAY_DECL(B, DATA_TYPE, xB,xb);
POLYBENCH_1D_ARRAY_DECL(C, DATA_TYPE, xC,xc);
init_array(xa,ya,POLYBENCH_ARRAY(A), xb,POLYBENCH_ARRAY(B), xc,POLYBENCH_ARRAY(C), INIT_SEED);
kernel_2214131111_01(xa,ya,POLYBENCH_ARRAY(A), xb,POLYBENCH_ARRAY(B), xc,POLYBENCH_ARRAY(C));
polybench_prevent_dce(print_array(xa,ya,POLYBENCH_ARRAY(A), xb,POLYBENCH_ARRAY(B), xc,POLYBENCH_ARRAY(C)));
POLYBENCH_FREE_ARRAY(A);
POLYBENCH_FREE_ARRAY(B);
POLYBENCH_FREE_ARRAY(C);
return 0;
}
