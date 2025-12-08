#include <stdio.h>
#include <unistd.h>
#include <string.h>
#include <math.h>
#include "polybench.h"
#include <time.h>
#include <stdlib.h>
#include "3224132111_01.h"
#include <omp.h>
#define ceild(n,d)  ceil(((double)(n))/((double)(d)))
#define floord(n,d) floor(((double)(n))/((double)(d)))
/*
arg_depth: 3
arg_nstmts: 2
arg_bounds_index: 2
arg_prob_bounds_exist: 4
arg_narrays_per_dim: 1
arg_avg_narrays_read_per_stmt: 3
arg_bounds_coef: 2
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
static void init_array(int xb,DATA_TYPE POLYBENCH_1D(B,xB,xb),int xc,int yc,int zc,DATA_TYPE POLYBENCH_3D(C,xC,yC,zC,xc,yc,zc),int xd,int yd,DATA_TYPE POLYBENCH_2D(D,xD,yD,xd,yd),int xe,DATA_TYPE POLYBENCH_1D(E,xE,xe),int seed)
{
srand(seed);
int i_0, i_1, i_2;
for (i_0 = 0; i_0 < xb; i_0++) {
    B[i_0] = 0.9 + (rand() / (DATA_TYPE)RAND_MAX) * (1.1 - 0.9);
}
for (i_0 = 0; i_0 < xc; i_0++) {
    for (i_1 = 0; i_1 < yc; i_1++) {
        for (i_2 = 0; i_2 < zc; i_2++) {
            C[i_0][i_1][i_2] = 0.9 + (rand() / (DATA_TYPE)RAND_MAX) * (1.1 - 0.9);
        }
    }
}
for (i_0 = 0; i_0 < xd; i_0++) {
    for (i_1 = 0; i_1 < yd; i_1++) {
        D[i_0][i_1] = 0.9 + (rand() / (DATA_TYPE)RAND_MAX) * (1.1 - 0.9);
    }
}
for (i_0 = 0; i_0 < xe; i_0++) {
    E[i_0] = 0.9 + (rand() / (DATA_TYPE)RAND_MAX) * (1.1 - 0.9);
}
}
static void print_array(int xb,DATA_TYPE POLYBENCH_1D(B,xB,xb),int xc,int yc,int zc,DATA_TYPE POLYBENCH_3D(C,xC,yC,zC,xc,yc,zc),int xd,int yd,DATA_TYPE POLYBENCH_2D(D,xD,yD,xd,yd),int xe,DATA_TYPE POLYBENCH_1D(E,xE,xe))
{
int i_0, i_1, i_2;
POLYBENCH_DUMP_START;
#ifdef CHECKELEM
    POLYBENCH_DUMP_BEGIN("B");
    for (i_0 = 0; i_0 < xb; i_0++) {
        fprintf(POLYBENCH_DUMP_TARGET, "\n");
        fprintf (POLYBENCH_DUMP_TARGET, DATA_PRINTF_MODIFIER, B[i_0]);
    }
    POLYBENCH_DUMP_END("B");
    POLYBENCH_DUMP_BEGIN("C");
    for (i_0 = 0; i_0 < xc; i_0++) {
        for (i_1 = 0; i_1 < yc; i_1++) {
            for (i_2 = 0; i_2 < zc; i_2++) {
                fprintf(POLYBENCH_DUMP_TARGET, "\n");
                fprintf (POLYBENCH_DUMP_TARGET, DATA_PRINTF_MODIFIER, C[i_0][i_1][i_2]);
            }
        }
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
        fprintf(POLYBENCH_DUMP_TARGET, "\n");
        fprintf (POLYBENCH_DUMP_TARGET, DATA_PRINTF_MODIFIER, E[i_0]);
    }
    POLYBENCH_DUMP_END("E");
#endif
#ifdef CHECKSUM
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
            for (i_2 = 0; i_2 < zc; i_2++) {
                sum_C += C[i_0][i_1][i_2];
            }
        }
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
        sum_E += E[i_0];
    }
    fprintf(POLYBENCH_DUMP_TARGET, "\nsum: ");
    fprintf (POLYBENCH_DUMP_TARGET, DATA_PRINTF_MODIFIER, sum_E);
    POLYBENCH_DUMP_END("E");
#endif
POLYBENCH_DUMP_FINISH;
}
void kernel_3224132111_01(int xb,DATA_TYPE POLYBENCH_1D(B,xB,xb),int xc,int yc,int zc,DATA_TYPE POLYBENCH_3D(C,xC,yC,zC,xc,yc,zc),int xd,int yd,DATA_TYPE POLYBENCH_2D(D,xD,yD,xd,yd),int xe,DATA_TYPE POLYBENCH_1D(E,xE,xe)){
polybench_start_instruments;
  int t1, t2, t3, t4, t5, t6;
 int lb, ub, lbp, ubp, lb2, ub2;
 register int lbv, ubv;
/* Start of CLooG code */
if (PB_Q >= 3) {
  if (PB_L >= 3) {
    for (t2=0;t2<=floord(PB_Q+PB_L-2,32);t2++) {
      lbp=max(0,ceild(32*t2-PB_Q+1,32));
      ubp=min(floord(PB_L-1,32),t2);
#pragma omp parallel for private(lbv,ubv,t4,t5,t6)
      for (t3=lbp;t3<=ubp;t3++) {
        for (t4=max(2,32*t2-32*t3);t4<=(min(PB_Q-1,32*t2-32*t3+31))-7;t4+=8) {
          for (t5=0;t5<=PB_Q-1-7;t5+=8) {
            lbv=max(2,32*t3);
            ubv=min(PB_L-1,32*t3+31);
#pragma ivdep
#pragma vector always
            for (t6=lbv;t6<=ubv;t6++) {
              B[t6-1] = C[t5][t6][t4-2] + C[t6-2][t4][t5] + C[t5][t6][t4] - 1;;
              B[t6-1] = C[t5][t6][(t4+1)-2] + C[t6-2][(t4+1)][t5] + C[t5][t6][(t4+1)] - 1;;
              B[t6-1] = C[t5][t6][(t4+2)-2] + C[t6-2][(t4+2)][t5] + C[t5][t6][(t4+2)] - 1;;
              B[t6-1] = C[t5][t6][(t4+3)-2] + C[t6-2][(t4+3)][t5] + C[t5][t6][(t4+3)] - 1;;
              B[t6-1] = C[t5][t6][(t4+4)-2] + C[t6-2][(t4+4)][t5] + C[t5][t6][(t4+4)] - 1;;
              B[t6-1] = C[t5][t6][(t4+5)-2] + C[t6-2][(t4+5)][t5] + C[t5][t6][(t4+5)] - 1;;
              B[t6-1] = C[t5][t6][(t4+6)-2] + C[t6-2][(t4+6)][t5] + C[t5][t6][(t4+6)] - 1;;
              B[t6-1] = C[t5][t6][(t4+7)-2] + C[t6-2][(t4+7)][t5] + C[t5][t6][(t4+7)] - 1;;
              B[t6-1] = C[(t5+1)][t6][t4-2] + C[t6-2][t4][(t5+1)] + C[(t5+1)][t6][t4] - 1;;
              B[t6-1] = C[(t5+1)][t6][(t4+1)-2] + C[t6-2][(t4+1)][(t5+1)] + C[(t5+1)][t6][(t4+1)] - 1;;
              B[t6-1] = C[(t5+1)][t6][(t4+2)-2] + C[t6-2][(t4+2)][(t5+1)] + C[(t5+1)][t6][(t4+2)] - 1;;
              B[t6-1] = C[(t5+1)][t6][(t4+3)-2] + C[t6-2][(t4+3)][(t5+1)] + C[(t5+1)][t6][(t4+3)] - 1;;
              B[t6-1] = C[(t5+1)][t6][(t4+4)-2] + C[t6-2][(t4+4)][(t5+1)] + C[(t5+1)][t6][(t4+4)] - 1;;
              B[t6-1] = C[(t5+1)][t6][(t4+5)-2] + C[t6-2][(t4+5)][(t5+1)] + C[(t5+1)][t6][(t4+5)] - 1;;
              B[t6-1] = C[(t5+1)][t6][(t4+6)-2] + C[t6-2][(t4+6)][(t5+1)] + C[(t5+1)][t6][(t4+6)] - 1;;
              B[t6-1] = C[(t5+1)][t6][(t4+7)-2] + C[t6-2][(t4+7)][(t5+1)] + C[(t5+1)][t6][(t4+7)] - 1;;
              B[t6-1] = C[(t5+2)][t6][t4-2] + C[t6-2][t4][(t5+2)] + C[(t5+2)][t6][t4] - 1;;
              B[t6-1] = C[(t5+2)][t6][(t4+1)-2] + C[t6-2][(t4+1)][(t5+2)] + C[(t5+2)][t6][(t4+1)] - 1;;
              B[t6-1] = C[(t5+2)][t6][(t4+2)-2] + C[t6-2][(t4+2)][(t5+2)] + C[(t5+2)][t6][(t4+2)] - 1;;
              B[t6-1] = C[(t5+2)][t6][(t4+3)-2] + C[t6-2][(t4+3)][(t5+2)] + C[(t5+2)][t6][(t4+3)] - 1;;
              B[t6-1] = C[(t5+2)][t6][(t4+4)-2] + C[t6-2][(t4+4)][(t5+2)] + C[(t5+2)][t6][(t4+4)] - 1;;
              B[t6-1] = C[(t5+2)][t6][(t4+5)-2] + C[t6-2][(t4+5)][(t5+2)] + C[(t5+2)][t6][(t4+5)] - 1;;
              B[t6-1] = C[(t5+2)][t6][(t4+6)-2] + C[t6-2][(t4+6)][(t5+2)] + C[(t5+2)][t6][(t4+6)] - 1;;
              B[t6-1] = C[(t5+2)][t6][(t4+7)-2] + C[t6-2][(t4+7)][(t5+2)] + C[(t5+2)][t6][(t4+7)] - 1;;
              B[t6-1] = C[(t5+3)][t6][t4-2] + C[t6-2][t4][(t5+3)] + C[(t5+3)][t6][t4] - 1;;
              B[t6-1] = C[(t5+3)][t6][(t4+1)-2] + C[t6-2][(t4+1)][(t5+3)] + C[(t5+3)][t6][(t4+1)] - 1;;
              B[t6-1] = C[(t5+3)][t6][(t4+2)-2] + C[t6-2][(t4+2)][(t5+3)] + C[(t5+3)][t6][(t4+2)] - 1;;
              B[t6-1] = C[(t5+3)][t6][(t4+3)-2] + C[t6-2][(t4+3)][(t5+3)] + C[(t5+3)][t6][(t4+3)] - 1;;
              B[t6-1] = C[(t5+3)][t6][(t4+4)-2] + C[t6-2][(t4+4)][(t5+3)] + C[(t5+3)][t6][(t4+4)] - 1;;
              B[t6-1] = C[(t5+3)][t6][(t4+5)-2] + C[t6-2][(t4+5)][(t5+3)] + C[(t5+3)][t6][(t4+5)] - 1;;
              B[t6-1] = C[(t5+3)][t6][(t4+6)-2] + C[t6-2][(t4+6)][(t5+3)] + C[(t5+3)][t6][(t4+6)] - 1;;
              B[t6-1] = C[(t5+3)][t6][(t4+7)-2] + C[t6-2][(t4+7)][(t5+3)] + C[(t5+3)][t6][(t4+7)] - 1;;
              B[t6-1] = C[(t5+4)][t6][t4-2] + C[t6-2][t4][(t5+4)] + C[(t5+4)][t6][t4] - 1;;
              B[t6-1] = C[(t5+4)][t6][(t4+1)-2] + C[t6-2][(t4+1)][(t5+4)] + C[(t5+4)][t6][(t4+1)] - 1;;
              B[t6-1] = C[(t5+4)][t6][(t4+2)-2] + C[t6-2][(t4+2)][(t5+4)] + C[(t5+4)][t6][(t4+2)] - 1;;
              B[t6-1] = C[(t5+4)][t6][(t4+3)-2] + C[t6-2][(t4+3)][(t5+4)] + C[(t5+4)][t6][(t4+3)] - 1;;
              B[t6-1] = C[(t5+4)][t6][(t4+4)-2] + C[t6-2][(t4+4)][(t5+4)] + C[(t5+4)][t6][(t4+4)] - 1;;
              B[t6-1] = C[(t5+4)][t6][(t4+5)-2] + C[t6-2][(t4+5)][(t5+4)] + C[(t5+4)][t6][(t4+5)] - 1;;
              B[t6-1] = C[(t5+4)][t6][(t4+6)-2] + C[t6-2][(t4+6)][(t5+4)] + C[(t5+4)][t6][(t4+6)] - 1;;
              B[t6-1] = C[(t5+4)][t6][(t4+7)-2] + C[t6-2][(t4+7)][(t5+4)] + C[(t5+4)][t6][(t4+7)] - 1;;
              B[t6-1] = C[(t5+5)][t6][t4-2] + C[t6-2][t4][(t5+5)] + C[(t5+5)][t6][t4] - 1;;
              B[t6-1] = C[(t5+5)][t6][(t4+1)-2] + C[t6-2][(t4+1)][(t5+5)] + C[(t5+5)][t6][(t4+1)] - 1;;
              B[t6-1] = C[(t5+5)][t6][(t4+2)-2] + C[t6-2][(t4+2)][(t5+5)] + C[(t5+5)][t6][(t4+2)] - 1;;
              B[t6-1] = C[(t5+5)][t6][(t4+3)-2] + C[t6-2][(t4+3)][(t5+5)] + C[(t5+5)][t6][(t4+3)] - 1;;
              B[t6-1] = C[(t5+5)][t6][(t4+4)-2] + C[t6-2][(t4+4)][(t5+5)] + C[(t5+5)][t6][(t4+4)] - 1;;
              B[t6-1] = C[(t5+5)][t6][(t4+5)-2] + C[t6-2][(t4+5)][(t5+5)] + C[(t5+5)][t6][(t4+5)] - 1;;
              B[t6-1] = C[(t5+5)][t6][(t4+6)-2] + C[t6-2][(t4+6)][(t5+5)] + C[(t5+5)][t6][(t4+6)] - 1;;
              B[t6-1] = C[(t5+5)][t6][(t4+7)-2] + C[t6-2][(t4+7)][(t5+5)] + C[(t5+5)][t6][(t4+7)] - 1;;
              B[t6-1] = C[(t5+6)][t6][t4-2] + C[t6-2][t4][(t5+6)] + C[(t5+6)][t6][t4] - 1;;
              B[t6-1] = C[(t5+6)][t6][(t4+1)-2] + C[t6-2][(t4+1)][(t5+6)] + C[(t5+6)][t6][(t4+1)] - 1;;
              B[t6-1] = C[(t5+6)][t6][(t4+2)-2] + C[t6-2][(t4+2)][(t5+6)] + C[(t5+6)][t6][(t4+2)] - 1;;
              B[t6-1] = C[(t5+6)][t6][(t4+3)-2] + C[t6-2][(t4+3)][(t5+6)] + C[(t5+6)][t6][(t4+3)] - 1;;
              B[t6-1] = C[(t5+6)][t6][(t4+4)-2] + C[t6-2][(t4+4)][(t5+6)] + C[(t5+6)][t6][(t4+4)] - 1;;
              B[t6-1] = C[(t5+6)][t6][(t4+5)-2] + C[t6-2][(t4+5)][(t5+6)] + C[(t5+6)][t6][(t4+5)] - 1;;
              B[t6-1] = C[(t5+6)][t6][(t4+6)-2] + C[t6-2][(t4+6)][(t5+6)] + C[(t5+6)][t6][(t4+6)] - 1;;
              B[t6-1] = C[(t5+6)][t6][(t4+7)-2] + C[t6-2][(t4+7)][(t5+6)] + C[(t5+6)][t6][(t4+7)] - 1;;
              B[t6-1] = C[(t5+7)][t6][t4-2] + C[t6-2][t4][(t5+7)] + C[(t5+7)][t6][t4] - 1;;
              B[t6-1] = C[(t5+7)][t6][(t4+1)-2] + C[t6-2][(t4+1)][(t5+7)] + C[(t5+7)][t6][(t4+1)] - 1;;
              B[t6-1] = C[(t5+7)][t6][(t4+2)-2] + C[t6-2][(t4+2)][(t5+7)] + C[(t5+7)][t6][(t4+2)] - 1;;
              B[t6-1] = C[(t5+7)][t6][(t4+3)-2] + C[t6-2][(t4+3)][(t5+7)] + C[(t5+7)][t6][(t4+3)] - 1;;
              B[t6-1] = C[(t5+7)][t6][(t4+4)-2] + C[t6-2][(t4+4)][(t5+7)] + C[(t5+7)][t6][(t4+4)] - 1;;
              B[t6-1] = C[(t5+7)][t6][(t4+5)-2] + C[t6-2][(t4+5)][(t5+7)] + C[(t5+7)][t6][(t4+5)] - 1;;
              B[t6-1] = C[(t5+7)][t6][(t4+6)-2] + C[t6-2][(t4+6)][(t5+7)] + C[(t5+7)][t6][(t4+6)] - 1;;
              B[t6-1] = C[(t5+7)][t6][(t4+7)-2] + C[t6-2][(t4+7)][(t5+7)] + C[(t5+7)][t6][(t4+7)] - 1;;
            }
          }
          for (;t5<=PB_Q-1;t5++) {
            lbv=max(2,32*t3);
            ubv=min(PB_L-1,32*t3+31);
#pragma ivdep
#pragma vector always
            for (t6=lbv;t6<=ubv;t6++) {
              B[t6-1] = C[t5][t6][t4-2] + C[t6-2][t4][t5] + C[t5][t6][t4] - 1;;
              B[t6-1] = C[t5][t6][(t4+1)-2] + C[t6-2][(t4+1)][t5] + C[t5][t6][(t4+1)] - 1;;
              B[t6-1] = C[t5][t6][(t4+2)-2] + C[t6-2][(t4+2)][t5] + C[t5][t6][(t4+2)] - 1;;
              B[t6-1] = C[t5][t6][(t4+3)-2] + C[t6-2][(t4+3)][t5] + C[t5][t6][(t4+3)] - 1;;
              B[t6-1] = C[t5][t6][(t4+4)-2] + C[t6-2][(t4+4)][t5] + C[t5][t6][(t4+4)] - 1;;
              B[t6-1] = C[t5][t6][(t4+5)-2] + C[t6-2][(t4+5)][t5] + C[t5][t6][(t4+5)] - 1;;
              B[t6-1] = C[t5][t6][(t4+6)-2] + C[t6-2][(t4+6)][t5] + C[t5][t6][(t4+6)] - 1;;
              B[t6-1] = C[t5][t6][(t4+7)-2] + C[t6-2][(t4+7)][t5] + C[t5][t6][(t4+7)] - 1;;
            }
          }
        }
        for (;t4<=min(PB_Q-1,32*t2-32*t3+31);t4++) {
          for (t5=0;t5<=PB_Q-1;t5++) {
            lbv=max(2,32*t3);
            ubv=min(PB_L-1,32*t3+31);
#pragma ivdep
#pragma vector always
            for (t6=lbv;t6<=ubv;t6++) {
              B[t6-1] = C[t5][t6][t4-2] + C[t6-2][t4][t5] + C[t5][t6][t4] - 1;;
            }
          }
        }
      }
    }
  }
  if (PB_N >= 2) {
    for (t2=0;t2<=min(floord(3*PB_Q-5,32),floord(2*PB_Q+PB_N-3,32));t2++) {
      lbp=max(ceild(t2,2),ceild(32*t2-PB_Q+1,32));
      ubp=min(min(min(floord(2*t2+1,3),floord(PB_Q-2,16)),floord(PB_Q+PB_N-2,32)),floord(32*t2+PB_N+30,64));
#pragma omp parallel for private(lbv,ubv,t4,t5,t6)
      for (t3=lbp;t3<=ubp;t3++) {
        for (t4=max(max(max(2,32*t2-32*t3),16*t3+1),32*t3-PB_N+1);t4<=min(min(PB_Q-1,32*t3+30),32*t2-32*t3+31);t4++) {
          for (t5=max(32*t3,t4+1);t5<=min(min(32*t3+31,2*t4-1),t4+PB_N-1);t5++) {
            B[(-t4+t5)-1] = D[(-t4+t5)][(-t4+t5)] * E[(-t4+t5)] + D[(-t4+t5)][t4] - B[(-t4+t5)] + 1;;
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
int xb = xB;
int xc = xC;
int yc = yC;
int zc = zC;
int xd = xD;
int yd = yD;
int xe = xE;
POLYBENCH_1D_ARRAY_DECL(B, DATA_TYPE, xB,xb);
POLYBENCH_3D_ARRAY_DECL(C, DATA_TYPE, xC,yC,zC,xc,yc,zc);
POLYBENCH_2D_ARRAY_DECL(D, DATA_TYPE, xD,yD,xd,yd);
POLYBENCH_1D_ARRAY_DECL(E, DATA_TYPE, xE,xe);
init_array(xb,POLYBENCH_ARRAY(B), xc,yc,zc,POLYBENCH_ARRAY(C), xd,yd,POLYBENCH_ARRAY(D), xe,POLYBENCH_ARRAY(E), INIT_SEED);
kernel_3224132111_01(xb,POLYBENCH_ARRAY(B), xc,yc,zc,POLYBENCH_ARRAY(C), xd,yd,POLYBENCH_ARRAY(D), xe,POLYBENCH_ARRAY(E));
polybench_prevent_dce(print_array(xb,POLYBENCH_ARRAY(B), xc,yc,zc,POLYBENCH_ARRAY(C), xd,yd,POLYBENCH_ARRAY(D), xe,POLYBENCH_ARRAY(E)));
POLYBENCH_FREE_ARRAY(B);
POLYBENCH_FREE_ARRAY(C);
POLYBENCH_FREE_ARRAY(D);
POLYBENCH_FREE_ARRAY(E);
return 0;
}
