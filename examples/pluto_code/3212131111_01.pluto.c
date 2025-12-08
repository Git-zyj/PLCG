#include <stdio.h>
#include <unistd.h>
#include <string.h>
#include <math.h>
#include "polybench.h"
#include <time.h>
#include <stdlib.h>
#include "3212131111_01.h"
#include <omp.h>
#define ceild(n,d)  ceil(((double)(n))/((double)(d)))
#define floord(n,d) floor(((double)(n))/((double)(d)))
/*
arg_depth: 3
arg_nstmts: 2
arg_bounds_index: 1
arg_prob_bounds_exist: 2
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
static void init_array(int xa,DATA_TYPE POLYBENCH_1D(A,xA,xa),int xb,int yb,int zb,DATA_TYPE POLYBENCH_3D(B,xB,yB,zB,xb,yb,zb),int xc,int yc,int zc,DATA_TYPE POLYBENCH_3D(C,xC,yC,zC,xc,yc,zc),int xd,int yd,DATA_TYPE POLYBENCH_2D(D,xD,yD,xd,yd),int seed)
{
srand(seed);
int i_0, i_1, i_2;
for (i_0 = 0; i_0 < xa; i_0++) {
    A[i_0] = 0.9 + (rand() / (DATA_TYPE)RAND_MAX) * (1.1 - 0.9);
}
for (i_0 = 0; i_0 < xb; i_0++) {
    for (i_1 = 0; i_1 < yb; i_1++) {
        for (i_2 = 0; i_2 < zb; i_2++) {
            B[i_0][i_1][i_2] = 0.9 + (rand() / (DATA_TYPE)RAND_MAX) * (1.1 - 0.9);
        }
    }
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
}
static void print_array(int xa,DATA_TYPE POLYBENCH_1D(A,xA,xa),int xb,int yb,int zb,DATA_TYPE POLYBENCH_3D(B,xB,yB,zB,xb,yb,zb),int xc,int yc,int zc,DATA_TYPE POLYBENCH_3D(C,xC,yC,zC,xc,yc,zc),int xd,int yd,DATA_TYPE POLYBENCH_2D(D,xD,yD,xd,yd))
{
int i_0, i_1, i_2;
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
            for (i_2 = 0; i_2 < zb; i_2++) {
                fprintf(POLYBENCH_DUMP_TARGET, "\n");
                fprintf (POLYBENCH_DUMP_TARGET, DATA_PRINTF_MODIFIER, B[i_0][i_1][i_2]);
            }
        }
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
            for (i_2 = 0; i_2 < zb; i_2++) {
                sum_B += B[i_0][i_1][i_2];
            }
        }
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
#endif
POLYBENCH_DUMP_FINISH;
}
void kernel_3212131111_01(int xa,DATA_TYPE POLYBENCH_1D(A,xA,xa),int xb,int yb,int zb,DATA_TYPE POLYBENCH_3D(B,xB,yB,zB,xb,yb,zb),int xc,int yc,int zc,DATA_TYPE POLYBENCH_3D(C,xC,yC,zC,xc,yc,zc),int xd,int yd,DATA_TYPE POLYBENCH_2D(D,xD,yD,xd,yd)){
polybench_start_instruments;
  int t1, t2, t3, t4, t5, t6;
 int lb, ub, lbp, ubp, lb2, ub2;
 register int lbv, ubv;
/* Start of CLooG code */
if (PB_L >= 4) {
  if (PB_Q >= 0) {
    for (t1=0;t1<=floord(3*PB_L+PB_Q-5,32);t1++) {
      lbp=max(max(max(max(0,ceild(32*t1-PB_L+1,32)),ceild(32*t1-PB_Q,64)),ceild(96*t1-3*PB_L+9,160)),ceild(96*t1-2*PB_L-PB_Q+8,192));
      ubp=min(min(floord(2*PB_L+PB_Q-4,32),floord(32*t1+PB_L+PB_Q+29,64)),t1);
#pragma omp parallel for private(lbv,ubv,t3,t4,t5,t6)
      for (t2=lbp;t2<=ubp;t2++) {
        for (t3=0;t3<=min(min(min(min(min(min(min(min(min(floord(PB_Q,32),floord(-32*t1+32*t2+PB_L-1,32)),floord(-64*t1+128*t2+PB_L+PB_Q-4,32)),floord(-96*t1+128*t2+3*PB_L-6,96)),floord(-32*t1+32*t2+2*PB_L-5,96)),floord(32*t1-64*t2+PB_L+PB_Q+29,128)),floord(-32*t2+2*PB_L+PB_Q-4,160)),floord(3*PB_L+PB_Q-12,224)),floord(-32*t2+6*PB_L+PB_Q-20,416)),t1-t2);t3++) {
          if ((t1 == t2) && (t3 == 0)) {
            for (t4=max(0,32*t1-PB_L+2);t4<=1;t4++) {
              for (t5=max(32*t1,t4+2);t5<=(min(32*t1+31,t4+PB_L-2))-7;t5+=8) {
                A[(-t4+t5)-1] = C[(-t4+t5)+1][t4][0] - D[(-t4+t5)][t4] * D[(-t4+t5)][t4] * A[(-t4+t5)-2] * 2;;
                A[(-t4+(t5+1))-1] = C[(-t4+(t5+1))+1][t4][0] - D[(-t4+(t5+1))][t4] * D[(-t4+(t5+1))][t4] * A[(-t4+(t5+1))-2] * 2;;
                A[(-t4+(t5+2))-1] = C[(-t4+(t5+2))+1][t4][0] - D[(-t4+(t5+2))][t4] * D[(-t4+(t5+2))][t4] * A[(-t4+(t5+2))-2] * 2;;
                A[(-t4+(t5+3))-1] = C[(-t4+(t5+3))+1][t4][0] - D[(-t4+(t5+3))][t4] * D[(-t4+(t5+3))][t4] * A[(-t4+(t5+3))-2] * 2;;
                A[(-t4+(t5+4))-1] = C[(-t4+(t5+4))+1][t4][0] - D[(-t4+(t5+4))][t4] * D[(-t4+(t5+4))][t4] * A[(-t4+(t5+4))-2] * 2;;
                A[(-t4+(t5+5))-1] = C[(-t4+(t5+5))+1][t4][0] - D[(-t4+(t5+5))][t4] * D[(-t4+(t5+5))][t4] * A[(-t4+(t5+5))-2] * 2;;
                A[(-t4+(t5+6))-1] = C[(-t4+(t5+6))+1][t4][0] - D[(-t4+(t5+6))][t4] * D[(-t4+(t5+6))][t4] * A[(-t4+(t5+6))-2] * 2;;
                A[(-t4+(t5+7))-1] = C[(-t4+(t5+7))+1][t4][0] - D[(-t4+(t5+7))][t4] * D[(-t4+(t5+7))][t4] * A[(-t4+(t5+7))-2] * 2;;
              }
              for (;t5<=min(32*t1+31,t4+PB_L-2);t5++) {
                A[(-t4+t5)-1] = C[(-t4+t5)+1][t4][0] - D[(-t4+t5)][t4] * D[(-t4+t5)][t4] * A[(-t4+t5)-2] * 2;;
              }
            }
          }
          if (t3 >= 1) {
            for (t4=max(32*t1-32*t2,32*t3+1);t4<=min(min(min(PB_Q-2,32*t1-32*t2+31),-32*t2+PB_Q-1),-32*t3+PB_L-2);t4++) {
              for (t5=max(1,32*t2);t5<=(min(32*t2+31,-t4+PB_Q-1))-7;t5+=8) {
                lbv=32*t3;
                ubv=min(min(32*t3+31,t4-1),-t4+PB_L-2);
#pragma ivdep
#pragma vector always
                for (t6=lbv;t6<=ubv;t6++) {
                  B[t4+1][t6][t5-1] = C[t5][t6][t5+t4] * C[t4-1][t6][t6-1] - C[t6+t4+1][1][t5+1] * 6;;
                  B[t4+1][t6][(t5+1)-1] = C[(t5+1)][t6][(t5+1)+t4] * C[t4-1][t6][t6-1] - C[t6+t4+1][1][(t5+1)+1] * 6;;
                  B[t4+1][t6][(t5+2)-1] = C[(t5+2)][t6][(t5+2)+t4] * C[t4-1][t6][t6-1] - C[t6+t4+1][1][(t5+2)+1] * 6;;
                  B[t4+1][t6][(t5+3)-1] = C[(t5+3)][t6][(t5+3)+t4] * C[t4-1][t6][t6-1] - C[t6+t4+1][1][(t5+3)+1] * 6;;
                  B[t4+1][t6][(t5+4)-1] = C[(t5+4)][t6][(t5+4)+t4] * C[t4-1][t6][t6-1] - C[t6+t4+1][1][(t5+4)+1] * 6;;
                  B[t4+1][t6][(t5+5)-1] = C[(t5+5)][t6][(t5+5)+t4] * C[t4-1][t6][t6-1] - C[t6+t4+1][1][(t5+5)+1] * 6;;
                  B[t4+1][t6][(t5+6)-1] = C[(t5+6)][t6][(t5+6)+t4] * C[t4-1][t6][t6-1] - C[t6+t4+1][1][(t5+6)+1] * 6;;
                  B[t4+1][t6][(t5+7)-1] = C[(t5+7)][t6][(t5+7)+t4] * C[t4-1][t6][t6-1] - C[t6+t4+1][1][(t5+7)+1] * 6;;
                }
              }
              for (;t5<=min(32*t2+31,-t4+PB_Q-1);t5++) {
                lbv=32*t3;
                ubv=min(min(32*t3+31,t4-1),-t4+PB_L-2);
#pragma ivdep
#pragma vector always
                for (t6=lbv;t6<=ubv;t6++) {
                  B[t4+1][t6][t5-1] = C[t5][t6][t5+t4] * C[t4-1][t6][t6-1] - C[t6+t4+1][1][t5+1] * 6;;
                }
              }
            }
          }
          if (t3 == 0) {
            for (t4=max(2,32*t1-32*t2);t4<=min(min(min(PB_L-3,32*t1-32*t2+31),-32*t2+PB_Q-1),32*t2-PB_L+1);t4++) {
              for (t5=32*t2;t5<=(min(32*t2+31,-t4+PB_Q-1))-7;t5+=8) {
                lbv=1;
                ubv=min(min(31,t4-1),-t4+PB_L-2);
#pragma ivdep
#pragma vector always
                for (t6=lbv;t6<=ubv;t6++) {
                  B[t4+1][t6][t5-1] = C[t5][t6][t5+t4] * C[t4-1][t6][t6-1] - C[t6+t4+1][1][t5+1] * 6;;
                  B[t4+1][t6][(t5+1)-1] = C[(t5+1)][t6][(t5+1)+t4] * C[t4-1][t6][t6-1] - C[t6+t4+1][1][(t5+1)+1] * 6;;
                  B[t4+1][t6][(t5+2)-1] = C[(t5+2)][t6][(t5+2)+t4] * C[t4-1][t6][t6-1] - C[t6+t4+1][1][(t5+2)+1] * 6;;
                  B[t4+1][t6][(t5+3)-1] = C[(t5+3)][t6][(t5+3)+t4] * C[t4-1][t6][t6-1] - C[t6+t4+1][1][(t5+3)+1] * 6;;
                  B[t4+1][t6][(t5+4)-1] = C[(t5+4)][t6][(t5+4)+t4] * C[t4-1][t6][t6-1] - C[t6+t4+1][1][(t5+4)+1] * 6;;
                  B[t4+1][t6][(t5+5)-1] = C[(t5+5)][t6][(t5+5)+t4] * C[t4-1][t6][t6-1] - C[t6+t4+1][1][(t5+5)+1] * 6;;
                  B[t4+1][t6][(t5+6)-1] = C[(t5+6)][t6][(t5+6)+t4] * C[t4-1][t6][t6-1] - C[t6+t4+1][1][(t5+6)+1] * 6;;
                  B[t4+1][t6][(t5+7)-1] = C[(t5+7)][t6][(t5+7)+t4] * C[t4-1][t6][t6-1] - C[t6+t4+1][1][(t5+7)+1] * 6;;
                }
              }
              for (;t5<=min(32*t2+31,-t4+PB_Q-1);t5++) {
                lbv=1;
                ubv=min(min(31,t4-1),-t4+PB_L-2);
#pragma ivdep
#pragma vector always
                for (t6=lbv;t6<=ubv;t6++) {
                  B[t4+1][t6][t5-1] = C[t5][t6][t5+t4] * C[t4-1][t6][t6-1] - C[t6+t4+1][1][t5+1] * 6;;
                }
              }
            }
          }
          if (t3 == 0) {
            for (t4=max(max(2,32*t1-32*t2),32*t2-PB_L+2);t4<=min(min(min(min(PB_L-3,PB_Q-2),32*t2+29),32*t1-32*t2+31),-32*t2+PB_Q-1);t4++) {
              for (t5=max(1,32*t2);t5<=(min(t4+1,-t4+PB_Q-1))-7;t5+=8) {
                lbv=1;
                ubv=min(min(31,t4-1),-t4+PB_L-2);
#pragma ivdep
#pragma vector always
                for (t6=lbv;t6<=ubv;t6++) {
                  B[t4+1][t6][t5-1] = C[t5][t6][t5+t4] * C[t4-1][t6][t6-1] - C[t6+t4+1][1][t5+1] * 6;;
                  B[t4+1][t6][(t5+1)-1] = C[(t5+1)][t6][(t5+1)+t4] * C[t4-1][t6][t6-1] - C[t6+t4+1][1][(t5+1)+1] * 6;;
                  B[t4+1][t6][(t5+2)-1] = C[(t5+2)][t6][(t5+2)+t4] * C[t4-1][t6][t6-1] - C[t6+t4+1][1][(t5+2)+1] * 6;;
                  B[t4+1][t6][(t5+3)-1] = C[(t5+3)][t6][(t5+3)+t4] * C[t4-1][t6][t6-1] - C[t6+t4+1][1][(t5+3)+1] * 6;;
                  B[t4+1][t6][(t5+4)-1] = C[(t5+4)][t6][(t5+4)+t4] * C[t4-1][t6][t6-1] - C[t6+t4+1][1][(t5+4)+1] * 6;;
                  B[t4+1][t6][(t5+5)-1] = C[(t5+5)][t6][(t5+5)+t4] * C[t4-1][t6][t6-1] - C[t6+t4+1][1][(t5+5)+1] * 6;;
                  B[t4+1][t6][(t5+6)-1] = C[(t5+6)][t6][(t5+6)+t4] * C[t4-1][t6][t6-1] - C[t6+t4+1][1][(t5+6)+1] * 6;;
                  B[t4+1][t6][(t5+7)-1] = C[(t5+7)][t6][(t5+7)+t4] * C[t4-1][t6][t6-1] - C[t6+t4+1][1][(t5+7)+1] * 6;;
                }
              }
              for (;t5<=min(t4+1,-t4+PB_Q-1);t5++) {
                lbv=1;
                ubv=min(min(31,t4-1),-t4+PB_L-2);
#pragma ivdep
#pragma vector always
                for (t6=lbv;t6<=ubv;t6++) {
                  B[t4+1][t6][t5-1] = C[t5][t6][t5+t4] * C[t4-1][t6][t6-1] - C[t6+t4+1][1][t5+1] * 6;;
                }
              }
              for (t5=max(32*t2,t4+2);t5<=min(min(32*t2+31,-t4+PB_Q-1),t4+PB_L-2);t5++) {
                A[(-t4+t5)-1] = C[(-t4+t5)+1][t4][0] - D[(-t4+t5)][t4] * D[(-t4+t5)][t4] * A[(-t4+t5)-2] * 2;;
                lbv=1;
                ubv=min(min(31,t4-1),-t4+PB_L-2);
#pragma ivdep
#pragma vector always
                for (t6=lbv;t6<=ubv;t6++) {
                  B[t4+1][t6][t5-1] = C[t5][t6][t5+t4] * C[t4-1][t6][t6-1] - C[t6+t4+1][1][t5+1] * 6;;
                }
              }
              for (t5=max(-t4+PB_Q,t4+2);t5<=min(32*t2+31,t4+PB_L-2);t5++) {
                A[(-t4+t5)-1] = C[(-t4+t5)+1][t4][0] - D[(-t4+t5)][t4] * D[(-t4+t5)][t4] * A[(-t4+t5)-2] * 2;;
              }
              for (t5=t4+PB_L-1;t5<=min(32*t2+31,-t4+PB_Q-1);t5++) {
                lbv=1;
                ubv=min(min(31,t4-1),-t4+PB_L-2);
#pragma ivdep
#pragma vector always
                for (t6=lbv;t6<=ubv;t6++) {
                  B[t4+1][t6][t5-1] = C[t5][t6][t5+t4] * C[t4-1][t6][t6-1] - C[t6+t4+1][1][t5+1] * 6;;
                }
              }
            }
          }
          if (t3 == 0) {
            for (t4=max(max(PB_L-2,32*t1-32*t2),32*t2-PB_L+2);t4<=min(min(min(min(PB_L-1,PB_Q-2),32*t2+29),32*t1-32*t2+31),-32*t2+PB_Q-1);t4++) {
              for (t5=max(32*t2,t4+2);t5<=(min(32*t2+31,t4+PB_L-2))-7;t5+=8) {
                A[(-t4+t5)-1] = C[(-t4+t5)+1][t4][0] - D[(-t4+t5)][t4] * D[(-t4+t5)][t4] * A[(-t4+t5)-2] * 2;;
                A[(-t4+(t5+1))-1] = C[(-t4+(t5+1))+1][t4][0] - D[(-t4+(t5+1))][t4] * D[(-t4+(t5+1))][t4] * A[(-t4+(t5+1))-2] * 2;;
                A[(-t4+(t5+2))-1] = C[(-t4+(t5+2))+1][t4][0] - D[(-t4+(t5+2))][t4] * D[(-t4+(t5+2))][t4] * A[(-t4+(t5+2))-2] * 2;;
                A[(-t4+(t5+3))-1] = C[(-t4+(t5+3))+1][t4][0] - D[(-t4+(t5+3))][t4] * D[(-t4+(t5+3))][t4] * A[(-t4+(t5+3))-2] * 2;;
                A[(-t4+(t5+4))-1] = C[(-t4+(t5+4))+1][t4][0] - D[(-t4+(t5+4))][t4] * D[(-t4+(t5+4))][t4] * A[(-t4+(t5+4))-2] * 2;;
                A[(-t4+(t5+5))-1] = C[(-t4+(t5+5))+1][t4][0] - D[(-t4+(t5+5))][t4] * D[(-t4+(t5+5))][t4] * A[(-t4+(t5+5))-2] * 2;;
                A[(-t4+(t5+6))-1] = C[(-t4+(t5+6))+1][t4][0] - D[(-t4+(t5+6))][t4] * D[(-t4+(t5+6))][t4] * A[(-t4+(t5+6))-2] * 2;;
                A[(-t4+(t5+7))-1] = C[(-t4+(t5+7))+1][t4][0] - D[(-t4+(t5+7))][t4] * D[(-t4+(t5+7))][t4] * A[(-t4+(t5+7))-2] * 2;;
              }
              for (;t5<=min(32*t2+31,t4+PB_L-2);t5++) {
                A[(-t4+t5)-1] = C[(-t4+t5)+1][t4][0] - D[(-t4+t5)][t4] * D[(-t4+t5)][t4] * A[(-t4+t5)-2] * 2;;
              }
            }
          }
          if (t3 == 0) {
            for (t4=max(32*t1-32*t2,32*t2+30);t4<=min(min(min(PB_L-3,PB_Q-2),32*t1-32*t2+31),-32*t2+PB_Q-1);t4++) {
              for (t5=max(1,32*t2);t5<=(min(32*t2+31,-t4+PB_Q-1))-7;t5+=8) {
                lbv=1;
                ubv=min(min(31,t4-1),-t4+PB_L-2);
#pragma ivdep
#pragma vector always
                for (t6=lbv;t6<=ubv;t6++) {
                  B[t4+1][t6][t5-1] = C[t5][t6][t5+t4] * C[t4-1][t6][t6-1] - C[t6+t4+1][1][t5+1] * 6;;
                  B[t4+1][t6][(t5+1)-1] = C[(t5+1)][t6][(t5+1)+t4] * C[t4-1][t6][t6-1] - C[t6+t4+1][1][(t5+1)+1] * 6;;
                  B[t4+1][t6][(t5+2)-1] = C[(t5+2)][t6][(t5+2)+t4] * C[t4-1][t6][t6-1] - C[t6+t4+1][1][(t5+2)+1] * 6;;
                  B[t4+1][t6][(t5+3)-1] = C[(t5+3)][t6][(t5+3)+t4] * C[t4-1][t6][t6-1] - C[t6+t4+1][1][(t5+3)+1] * 6;;
                  B[t4+1][t6][(t5+4)-1] = C[(t5+4)][t6][(t5+4)+t4] * C[t4-1][t6][t6-1] - C[t6+t4+1][1][(t5+4)+1] * 6;;
                  B[t4+1][t6][(t5+5)-1] = C[(t5+5)][t6][(t5+5)+t4] * C[t4-1][t6][t6-1] - C[t6+t4+1][1][(t5+5)+1] * 6;;
                  B[t4+1][t6][(t5+6)-1] = C[(t5+6)][t6][(t5+6)+t4] * C[t4-1][t6][t6-1] - C[t6+t4+1][1][(t5+6)+1] * 6;;
                  B[t4+1][t6][(t5+7)-1] = C[(t5+7)][t6][(t5+7)+t4] * C[t4-1][t6][t6-1] - C[t6+t4+1][1][(t5+7)+1] * 6;;
                }
              }
              for (;t5<=min(32*t2+31,-t4+PB_Q-1);t5++) {
                lbv=1;
                ubv=min(min(31,t4-1),-t4+PB_L-2);
#pragma ivdep
#pragma vector always
                for (t6=lbv;t6<=ubv;t6++) {
                  B[t4+1][t6][t5-1] = C[t5][t6][t5+t4] * C[t4-1][t6][t6-1] - C[t6+t4+1][1][t5+1] * 6;;
                }
              }
            }
          }
          if ((PB_L >= PB_Q) && (PB_Q >= 3) && (PB_Q <= 30) && (t1 == 0) && (t2 == 0) && (t3 == 0)) {
            for (t5=PB_Q+1;t5<=(min(31,PB_L+PB_Q-3))-7;t5+=8) {
              A[(t5-PB_Q+1)-1] = C[(t5-PB_Q+1)+1][(PB_Q-1)][0] - D[(t5-PB_Q+1)][(PB_Q-1)] * D[(t5-PB_Q+1)][(PB_Q-1)] * A[(t5-PB_Q+1)-2] * 2;;
              A[((t5+1)-PB_Q+1)-1] = C[((t5+1)-PB_Q+1)+1][(PB_Q-1)][0] - D[((t5+1)-PB_Q+1)][(PB_Q-1)] * D[((t5+1)-PB_Q+1)][(PB_Q-1)] * A[((t5+1)-PB_Q+1)-2] * 2;;
              A[((t5+2)-PB_Q+1)-1] = C[((t5+2)-PB_Q+1)+1][(PB_Q-1)][0] - D[((t5+2)-PB_Q+1)][(PB_Q-1)] * D[((t5+2)-PB_Q+1)][(PB_Q-1)] * A[((t5+2)-PB_Q+1)-2] * 2;;
              A[((t5+3)-PB_Q+1)-1] = C[((t5+3)-PB_Q+1)+1][(PB_Q-1)][0] - D[((t5+3)-PB_Q+1)][(PB_Q-1)] * D[((t5+3)-PB_Q+1)][(PB_Q-1)] * A[((t5+3)-PB_Q+1)-2] * 2;;
              A[((t5+4)-PB_Q+1)-1] = C[((t5+4)-PB_Q+1)+1][(PB_Q-1)][0] - D[((t5+4)-PB_Q+1)][(PB_Q-1)] * D[((t5+4)-PB_Q+1)][(PB_Q-1)] * A[((t5+4)-PB_Q+1)-2] * 2;;
              A[((t5+5)-PB_Q+1)-1] = C[((t5+5)-PB_Q+1)+1][(PB_Q-1)][0] - D[((t5+5)-PB_Q+1)][(PB_Q-1)] * D[((t5+5)-PB_Q+1)][(PB_Q-1)] * A[((t5+5)-PB_Q+1)-2] * 2;;
              A[((t5+6)-PB_Q+1)-1] = C[((t5+6)-PB_Q+1)+1][(PB_Q-1)][0] - D[((t5+6)-PB_Q+1)][(PB_Q-1)] * D[((t5+6)-PB_Q+1)][(PB_Q-1)] * A[((t5+6)-PB_Q+1)-2] * 2;;
              A[((t5+7)-PB_Q+1)-1] = C[((t5+7)-PB_Q+1)+1][(PB_Q-1)][0] - D[((t5+7)-PB_Q+1)][(PB_Q-1)] * D[((t5+7)-PB_Q+1)][(PB_Q-1)] * A[((t5+7)-PB_Q+1)-2] * 2;;
            }
            for (;t5<=min(31,PB_L+PB_Q-3);t5++) {
              A[(t5-PB_Q+1)-1] = C[(t5-PB_Q+1)+1][(PB_Q-1)][0] - D[(t5-PB_Q+1)][(PB_Q-1)] * D[(t5-PB_Q+1)][(PB_Q-1)] * A[(t5-PB_Q+1)-2] * 2;;
            }
          }
          if (t3 == 0) {
            for (t4=max(max(max(2,32*t1-32*t2),-32*t2+PB_Q),32*t2-PB_L+2);t4<=min(min(PB_L-1,32*t2+29),32*t1-32*t2+31);t4++) {
              for (t5=max(32*t2,t4+2);t5<=(min(32*t2+31,t4+PB_L-2))-7;t5+=8) {
                A[(-t4+t5)-1] = C[(-t4+t5)+1][t4][0] - D[(-t4+t5)][t4] * D[(-t4+t5)][t4] * A[(-t4+t5)-2] * 2;;
                A[(-t4+(t5+1))-1] = C[(-t4+(t5+1))+1][t4][0] - D[(-t4+(t5+1))][t4] * D[(-t4+(t5+1))][t4] * A[(-t4+(t5+1))-2] * 2;;
                A[(-t4+(t5+2))-1] = C[(-t4+(t5+2))+1][t4][0] - D[(-t4+(t5+2))][t4] * D[(-t4+(t5+2))][t4] * A[(-t4+(t5+2))-2] * 2;;
                A[(-t4+(t5+3))-1] = C[(-t4+(t5+3))+1][t4][0] - D[(-t4+(t5+3))][t4] * D[(-t4+(t5+3))][t4] * A[(-t4+(t5+3))-2] * 2;;
                A[(-t4+(t5+4))-1] = C[(-t4+(t5+4))+1][t4][0] - D[(-t4+(t5+4))][t4] * D[(-t4+(t5+4))][t4] * A[(-t4+(t5+4))-2] * 2;;
                A[(-t4+(t5+5))-1] = C[(-t4+(t5+5))+1][t4][0] - D[(-t4+(t5+5))][t4] * D[(-t4+(t5+5))][t4] * A[(-t4+(t5+5))-2] * 2;;
                A[(-t4+(t5+6))-1] = C[(-t4+(t5+6))+1][t4][0] - D[(-t4+(t5+6))][t4] * D[(-t4+(t5+6))][t4] * A[(-t4+(t5+6))-2] * 2;;
                A[(-t4+(t5+7))-1] = C[(-t4+(t5+7))+1][t4][0] - D[(-t4+(t5+7))][t4] * D[(-t4+(t5+7))][t4] * A[(-t4+(t5+7))-2] * 2;;
              }
              for (;t5<=min(32*t2+31,t4+PB_L-2);t5++) {
                A[(-t4+t5)-1] = C[(-t4+t5)+1][t4][0] - D[(-t4+t5)][t4] * D[(-t4+t5)][t4] * A[(-t4+t5)-2] * 2;;
              }
            }
          }
        }
      }
    }
  }
  if (PB_Q <= -1) {
    for (t1=0;t1<=floord(3*PB_L-5,32);t1++) {
      lbp=max(ceild(t1,2),ceild(32*t1-PB_L+1,32));
      ubp=min(min(floord(PB_L-2,16),floord(32*t1+PB_L+29,64)),t1);
#pragma omp parallel for private(lbv,ubv,t3,t4,t5,t6)
      for (t2=lbp;t2<=ubp;t2++) {
        for (t4=max(32*t1-32*t2,32*t2-PB_L+2);t4<=min(min(PB_L-1,32*t2+29),32*t1-32*t2+31);t4++) {
          for (t5=max(32*t2,t4+2);t5<=(min(32*t2+31,t4+PB_L-2))-7;t5+=8) {
            A[(-t4+t5)-1] = C[(-t4+t5)+1][t4][0] - D[(-t4+t5)][t4] * D[(-t4+t5)][t4] * A[(-t4+t5)-2] * 2;;
            A[(-t4+(t5+1))-1] = C[(-t4+(t5+1))+1][t4][0] - D[(-t4+(t5+1))][t4] * D[(-t4+(t5+1))][t4] * A[(-t4+(t5+1))-2] * 2;;
            A[(-t4+(t5+2))-1] = C[(-t4+(t5+2))+1][t4][0] - D[(-t4+(t5+2))][t4] * D[(-t4+(t5+2))][t4] * A[(-t4+(t5+2))-2] * 2;;
            A[(-t4+(t5+3))-1] = C[(-t4+(t5+3))+1][t4][0] - D[(-t4+(t5+3))][t4] * D[(-t4+(t5+3))][t4] * A[(-t4+(t5+3))-2] * 2;;
            A[(-t4+(t5+4))-1] = C[(-t4+(t5+4))+1][t4][0] - D[(-t4+(t5+4))][t4] * D[(-t4+(t5+4))][t4] * A[(-t4+(t5+4))-2] * 2;;
            A[(-t4+(t5+5))-1] = C[(-t4+(t5+5))+1][t4][0] - D[(-t4+(t5+5))][t4] * D[(-t4+(t5+5))][t4] * A[(-t4+(t5+5))-2] * 2;;
            A[(-t4+(t5+6))-1] = C[(-t4+(t5+6))+1][t4][0] - D[(-t4+(t5+6))][t4] * D[(-t4+(t5+6))][t4] * A[(-t4+(t5+6))-2] * 2;;
            A[(-t4+(t5+7))-1] = C[(-t4+(t5+7))+1][t4][0] - D[(-t4+(t5+7))][t4] * D[(-t4+(t5+7))][t4] * A[(-t4+(t5+7))-2] * 2;;
          }
          for (;t5<=min(32*t2+31,t4+PB_L-2);t5++) {
            A[(-t4+t5)-1] = C[(-t4+t5)+1][t4][0] - D[(-t4+t5)][t4] * D[(-t4+t5)][t4] * A[(-t4+t5)-2] * 2;;
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
int xb = xB;
int yb = yB;
int zb = zB;
int xc = xC;
int yc = yC;
int zc = zC;
int xd = xD;
int yd = yD;
POLYBENCH_1D_ARRAY_DECL(A, DATA_TYPE, xA,xa);
POLYBENCH_3D_ARRAY_DECL(B, DATA_TYPE, xB,yB,zB,xb,yb,zb);
POLYBENCH_3D_ARRAY_DECL(C, DATA_TYPE, xC,yC,zC,xc,yc,zc);
POLYBENCH_2D_ARRAY_DECL(D, DATA_TYPE, xD,yD,xd,yd);
init_array(xa,POLYBENCH_ARRAY(A), xb,yb,zb,POLYBENCH_ARRAY(B), xc,yc,zc,POLYBENCH_ARRAY(C), xd,yd,POLYBENCH_ARRAY(D), INIT_SEED);
kernel_3212131111_01(xa,POLYBENCH_ARRAY(A), xb,yb,zb,POLYBENCH_ARRAY(B), xc,yc,zc,POLYBENCH_ARRAY(C), xd,yd,POLYBENCH_ARRAY(D));
polybench_prevent_dce(print_array(xa,POLYBENCH_ARRAY(A), xb,yb,zb,POLYBENCH_ARRAY(B), xc,yc,zc,POLYBENCH_ARRAY(C), xd,yd,POLYBENCH_ARRAY(D)));
POLYBENCH_FREE_ARRAY(A);
POLYBENCH_FREE_ARRAY(B);
POLYBENCH_FREE_ARRAY(C);
POLYBENCH_FREE_ARRAY(D);
return 0;
}
