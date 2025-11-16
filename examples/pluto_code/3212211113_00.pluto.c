#include <stdio.h>
#include <unistd.h>
#include <string.h>
#include <math.h>
#include "polybench.h"
#include <time.h>
#include <stdlib.h>
#include "3212211113_00.h"
#include <omp.h>
#define ceild(n,d)  ceil(((double)(n))/((double)(d)))
#define floord(n,d) floor(((double)(n))/((double)(d)))
/*
arg_depth: 3
arg_nstmts: 2
arg_bounds_index: 1
arg_prob_bounds_exist: 2
arg_narrays_per_dim: 2
arg_avg_narrays_read_per_stmt: 1
arg_bounds_coef: 1
arg_avg_ndeps_read_per_stmt: 1
arg_bounds_distance: 1
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
static void init_array(int xa,int ya,DATA_TYPE POLYBENCH_2D(A,xA,yA,xa,ya),int xb,DATA_TYPE POLYBENCH_1D(B,xB,xb),int xc,int yc,int zc,DATA_TYPE POLYBENCH_3D(C,xC,yC,zC,xc,yc,zc),int xd,int yd,DATA_TYPE POLYBENCH_2D(D,xD,yD,xd,yd),int seed)
{
srand(seed);
int i_0, i_1, i_2;
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
static void print_array(int xa,int ya,DATA_TYPE POLYBENCH_2D(A,xA,yA,xa,ya),int xb,DATA_TYPE POLYBENCH_1D(B,xB,xb),int xc,int yc,int zc,DATA_TYPE POLYBENCH_3D(C,xC,yC,zC,xc,yc,zc),int xd,int yd,DATA_TYPE POLYBENCH_2D(D,xD,yD,xd,yd))
{
int i_0, i_1, i_2;
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
void kernel_3212211113_00(int xa,int ya,DATA_TYPE POLYBENCH_2D(A,xA,yA,xa,ya),int xb,DATA_TYPE POLYBENCH_1D(B,xB,xb),int xc,int yc,int zc,DATA_TYPE POLYBENCH_3D(C,xC,yC,zC,xc,yc,zc),int xd,int yd,DATA_TYPE POLYBENCH_2D(D,xD,yD,xd,yd)){
polybench_start_instruments;
  int t1, t2, t3, t4, t5;
 int lb, ub, lbp, ubp, lb2, ub2;
 register int lbv, ubv;
/* Start of CLooG code */
if (PB_M >= 1) {
  if ((PB_L >= max(max(0,-3*PB_M+6),-3*PB_N+3)) && (PB_N >= 0)) {
    for (t1=0;t1<=min(floord(PB_L+PB_M+2*PB_N-2,32),floord(4*PB_L+3*PB_M+6*PB_N-9,96));t1++) {
      lbp=max(max(max(0,ceild(32*t1-PB_M-PB_N,32)),ceild(32*t1-PB_M,64)),ceild(96*t1-2*PB_L-3*PB_M+6,192));
      ubp=min(min(min(min(floord(PB_L+PB_M+PB_N-2,32),floord(-32*t1+2*PB_L+2*PB_M+3*PB_N-5,32)),floord(32*t1+PB_L+PB_M+30,64)),floord(32*t1+PB_L+34*PB_M-36,64)),t1);
#pragma omp parallel for private(lbv,ubv,t3,t4,t5)
      for (t2=lbp;t2<=ubp;t2++) {
        if ((PB_M == 1) && (t1 == t2)) {
          for (t4=max(1,32*t1);t4<=(min(PB_L-2,32*t1+31))-7;t4+=8) {
            A[1 -1][t4+1] = C[0][t4-1][1 -1] - A[1 -1][0 +2] + 6;;
            A[1 -1][(t4+1)+1] = C[0][(t4+1)-1][1 -1] - A[1 -1][0 +2] + 6;;
            A[1 -1][(t4+2)+1] = C[0][(t4+2)-1][1 -1] - A[1 -1][0 +2] + 6;;
            A[1 -1][(t4+3)+1] = C[0][(t4+3)-1][1 -1] - A[1 -1][0 +2] + 6;;
            A[1 -1][(t4+4)+1] = C[0][(t4+4)-1][1 -1] - A[1 -1][0 +2] + 6;;
            A[1 -1][(t4+5)+1] = C[0][(t4+5)-1][1 -1] - A[1 -1][0 +2] + 6;;
            A[1 -1][(t4+6)+1] = C[0][(t4+6)-1][1 -1] - A[1 -1][0 +2] + 6;;
            A[1 -1][(t4+7)+1] = C[0][(t4+7)-1][1 -1] - A[1 -1][0 +2] + 6;;
          }
          for (;t4<=min(PB_L-2,32*t1+31);t4++) {
            A[1 -1][t4+1] = C[0][t4-1][1 -1] - A[1 -1][0 +2] + 6;;
          }
        }
        if ((PB_M >= 2) && (t2 <= floord(PB_L-2,32))) {
          for (t3=max(1,32*t1-32*t2);t3<=min(min(PB_M,32*t2-PB_M),32*t1-32*t2+31);t3++) {
            for (t4=32*t2;t4<=(min(PB_L-2,32*t2+31))-7;t4+=8) {
              for (t5=0;t5<=PB_M-1;t5++) {
                A[t3-1][t4+1] = C[t5][t4-1][t3-1] - A[t3-1][t5+2] + 6;;
                A[t3-1][(t4+1)+1] = C[t5][(t4+1)-1][t3-1] - A[t3-1][t5+2] + 6;;
                A[t3-1][(t4+2)+1] = C[t5][(t4+2)-1][t3-1] - A[t3-1][t5+2] + 6;;
                A[t3-1][(t4+3)+1] = C[t5][(t4+3)-1][t3-1] - A[t3-1][t5+2] + 6;;
                A[t3-1][(t4+4)+1] = C[t5][(t4+4)-1][t3-1] - A[t3-1][t5+2] + 6;;
                A[t3-1][(t4+5)+1] = C[t5][(t4+5)-1][t3-1] - A[t3-1][t5+2] + 6;;
                A[t3-1][(t4+6)+1] = C[t5][(t4+6)-1][t3-1] - A[t3-1][t5+2] + 6;;
                A[t3-1][(t4+7)+1] = C[t5][(t4+7)-1][t3-1] - A[t3-1][t5+2] + 6;;
              }
            }
            for (;t4<=min(PB_L-2,32*t2+31);t4++) {
              for (t5=0;t5<=PB_M-1;t5++) {
                A[t3-1][t4+1] = C[t5][t4-1][t3-1] - A[t3-1][t5+2] + 6;;
              }
            }
          }
        }
        if (PB_L <= 2) {
          for (t3=max(32*t1-32*t2,32*t2-PB_M+1);t3<=min(min(PB_N-1,32*t2+30),32*t1-32*t2+31);t3++) {
            for (t4=max(32*t2,t3+1);t4<=(min(32*t2+31,t3+PB_M-1))-7;t4+=8) {
              B[(-t3+t4)-1] = D[(-t3+t4)+1][t3] - B[(-t3+t4)] * 5;;
              B[(-t3+(t4+1))-1] = D[(-t3+(t4+1))+1][t3] - B[(-t3+(t4+1))] * 5;;
              B[(-t3+(t4+2))-1] = D[(-t3+(t4+2))+1][t3] - B[(-t3+(t4+2))] * 5;;
              B[(-t3+(t4+3))-1] = D[(-t3+(t4+3))+1][t3] - B[(-t3+(t4+3))] * 5;;
              B[(-t3+(t4+4))-1] = D[(-t3+(t4+4))+1][t3] - B[(-t3+(t4+4))] * 5;;
              B[(-t3+(t4+5))-1] = D[(-t3+(t4+5))+1][t3] - B[(-t3+(t4+5))] * 5;;
              B[(-t3+(t4+6))-1] = D[(-t3+(t4+6))+1][t3] - B[(-t3+(t4+6))] * 5;;
              B[(-t3+(t4+7))-1] = D[(-t3+(t4+7))+1][t3] - B[(-t3+(t4+7))] * 5;;
            }
            for (;t4<=min(32*t2+31,t3+PB_M-1);t4++) {
              B[(-t3+t4)-1] = D[(-t3+t4)+1][t3] - B[(-t3+t4)] * 5;;
            }
          }
        }
        if ((PB_L >= 3) && (PB_M >= 2) && (t2 >= ceild(PB_L-1,32))) {
          for (t3=max(32*t1-32*t2,32*t2-PB_M+1);t3<=min(min(PB_N-1,32*t2+30),32*t1-32*t2+31);t3++) {
            for (t4=max(32*t2,t3+1);t4<=(min(32*t2+31,t3+PB_M-1))-7;t4+=8) {
              B[(-t3+t4)-1] = D[(-t3+t4)+1][t3] - B[(-t3+t4)] * 5;;
              B[(-t3+(t4+1))-1] = D[(-t3+(t4+1))+1][t3] - B[(-t3+(t4+1))] * 5;;
              B[(-t3+(t4+2))-1] = D[(-t3+(t4+2))+1][t3] - B[(-t3+(t4+2))] * 5;;
              B[(-t3+(t4+3))-1] = D[(-t3+(t4+3))+1][t3] - B[(-t3+(t4+3))] * 5;;
              B[(-t3+(t4+4))-1] = D[(-t3+(t4+4))+1][t3] - B[(-t3+(t4+4))] * 5;;
              B[(-t3+(t4+5))-1] = D[(-t3+(t4+5))+1][t3] - B[(-t3+(t4+5))] * 5;;
              B[(-t3+(t4+6))-1] = D[(-t3+(t4+6))+1][t3] - B[(-t3+(t4+6))] * 5;;
              B[(-t3+(t4+7))-1] = D[(-t3+(t4+7))+1][t3] - B[(-t3+(t4+7))] * 5;;
            }
            for (;t4<=min(32*t2+31,t3+PB_M-1);t4++) {
              B[(-t3+t4)-1] = D[(-t3+t4)+1][t3] - B[(-t3+t4)] * 5;;
            }
          }
        }
        if ((PB_L >= 3) && (PB_M >= 2) && (PB_N >= 1) && (t1 == t2) && (t1 <= min(floord(PB_L-2,32),floord(PB_M-1,32)))) {
          for (t4=max(1,32*t1);t4<=(min(PB_M-1,32*t1+31))-7;t4+=8) {
            B[t4-1] = D[t4+1][0] - B[t4] * 5;;
            B[(t4+1)-1] = D[(t4+1)+1][0] - B[(t4+1)] * 5;;
            B[(t4+2)-1] = D[(t4+2)+1][0] - B[(t4+2)] * 5;;
            B[(t4+3)-1] = D[(t4+3)+1][0] - B[(t4+3)] * 5;;
            B[(t4+4)-1] = D[(t4+4)+1][0] - B[(t4+4)] * 5;;
            B[(t4+5)-1] = D[(t4+5)+1][0] - B[(t4+5)] * 5;;
            B[(t4+6)-1] = D[(t4+6)+1][0] - B[(t4+6)] * 5;;
            B[(t4+7)-1] = D[(t4+7)+1][0] - B[(t4+7)] * 5;;
          }
          for (;t4<=min(PB_M-1,32*t1+31);t4++) {
            B[t4-1] = D[t4+1][0] - B[t4] * 5;;
          }
        }
        if ((PB_L >= 3) && (PB_M >= 2) && (t2 <= floord(PB_L-2,32))) {
          for (t3=max(max(1,32*t1-32*t2),32*t2-PB_M+1);t3<=min(min(min(PB_M,PB_N-1),32*t2+30),32*t1-32*t2+31);t3++) {
            if (t1 == 2*t2) {
              for (t4=max(1,16*t1);t4<=(min(t3,PB_L-2))-7;t4+=8) {
                for (t5=0;t5<=PB_M-1;t5++) {
                  if (t1%2 == 0) {
                    A[t3-1][t4+1] = C[t5][t4-1][t3-1] - A[t3-1][t5+2] + 6;;
                    A[t3-1][(t4+1)+1] = C[t5][(t4+1)-1][t3-1] - A[t3-1][t5+2] + 6;;
                    A[t3-1][(t4+2)+1] = C[t5][(t4+2)-1][t3-1] - A[t3-1][t5+2] + 6;;
                    A[t3-1][(t4+3)+1] = C[t5][(t4+3)-1][t3-1] - A[t3-1][t5+2] + 6;;
                    A[t3-1][(t4+4)+1] = C[t5][(t4+4)-1][t3-1] - A[t3-1][t5+2] + 6;;
                    A[t3-1][(t4+5)+1] = C[t5][(t4+5)-1][t3-1] - A[t3-1][t5+2] + 6;;
                    A[t3-1][(t4+6)+1] = C[t5][(t4+6)-1][t3-1] - A[t3-1][t5+2] + 6;;
                    A[t3-1][(t4+7)+1] = C[t5][(t4+7)-1][t3-1] - A[t3-1][t5+2] + 6;;
                  }
                }
              }
              for (;t4<=min(t3,PB_L-2);t4++) {
                for (t5=0;t5<=PB_M-1;t5++) {
                  if (t1%2 == 0) {
                    A[t3-1][t4+1] = C[t5][t4-1][t3-1] - A[t3-1][t5+2] + 6;;
                  }
                }
              }
            }
            for (t4=max(32*t2,t3+1);t4<=(min(min(PB_L-2,32*t2+31),t3+PB_M-1))-7;t4+=8) {
              B[(-t3+t4)-1] = D[(-t3+t4)+1][t3] - B[(-t3+t4)] * 5;;
              B[(-t3+(t4+1))-1] = D[(-t3+(t4+1))+1][t3] - B[(-t3+(t4+1))] * 5;;
              B[(-t3+(t4+2))-1] = D[(-t3+(t4+2))+1][t3] - B[(-t3+(t4+2))] * 5;;
              B[(-t3+(t4+3))-1] = D[(-t3+(t4+3))+1][t3] - B[(-t3+(t4+3))] * 5;;
              B[(-t3+(t4+4))-1] = D[(-t3+(t4+4))+1][t3] - B[(-t3+(t4+4))] * 5;;
              B[(-t3+(t4+5))-1] = D[(-t3+(t4+5))+1][t3] - B[(-t3+(t4+5))] * 5;;
              B[(-t3+(t4+6))-1] = D[(-t3+(t4+6))+1][t3] - B[(-t3+(t4+6))] * 5;;
              B[(-t3+(t4+7))-1] = D[(-t3+(t4+7))+1][t3] - B[(-t3+(t4+7))] * 5;;
              for (t5=0;t5<=PB_M-1;t5++) {
                A[t3-1][t4+1] = C[t5][t4-1][t3-1] - A[t3-1][t5+2] + 6;;
                A[t3-1][(t4+1)+1] = C[t5][(t4+1)-1][t3-1] - A[t3-1][t5+2] + 6;;
                A[t3-1][(t4+2)+1] = C[t5][(t4+2)-1][t3-1] - A[t3-1][t5+2] + 6;;
                A[t3-1][(t4+3)+1] = C[t5][(t4+3)-1][t3-1] - A[t3-1][t5+2] + 6;;
                A[t3-1][(t4+4)+1] = C[t5][(t4+4)-1][t3-1] - A[t3-1][t5+2] + 6;;
                A[t3-1][(t4+5)+1] = C[t5][(t4+5)-1][t3-1] - A[t3-1][t5+2] + 6;;
                A[t3-1][(t4+6)+1] = C[t5][(t4+6)-1][t3-1] - A[t3-1][t5+2] + 6;;
                A[t3-1][(t4+7)+1] = C[t5][(t4+7)-1][t3-1] - A[t3-1][t5+2] + 6;;
              }
            }
            for (;t4<=min(min(PB_L-2,32*t2+31),t3+PB_M-1);t4++) {
              B[(-t3+t4)-1] = D[(-t3+t4)+1][t3] - B[(-t3+t4)] * 5;;
              for (t5=0;t5<=PB_M-1;t5++) {
                A[t3-1][t4+1] = C[t5][t4-1][t3-1] - A[t3-1][t5+2] + 6;;
              }
            }
            for (t4=t3+PB_M;t4<=min(PB_L-2,32*t2+31);t4++) {
              for (t5=0;t5<=PB_M-1;t5++) {
                A[t3-1][t4+1] = C[t5][t4-1][t3-1] - A[t3-1][t5+2] + 6;;
              }
            }
            for (t4=max(PB_L-1,t3+1);t4<=min(32*t2+31,t3+PB_M-1);t4++) {
              B[(-t3+t4)-1] = D[(-t3+t4)+1][t3] - B[(-t3+t4)] * 5;;
            }
          }
        }
        if ((PB_L >= 3) && (PB_M >= 2) && (t2 <= floord(PB_L-2,32))) {
          for (t3=max(max(max(1,PB_N),32*t1-32*t2),32*t2-PB_M+1);t3<=min(min(PB_M,32*t2+30),32*t1-32*t2+31);t3++) {
            for (t4=max(1,32*t2);t4<=(min(PB_L-2,32*t2+31))-7;t4+=8) {
              for (t5=0;t5<=PB_M-1;t5++) {
                A[t3-1][t4+1] = C[t5][t4-1][t3-1] - A[t3-1][t5+2] + 6;;
                A[t3-1][(t4+1)+1] = C[t5][(t4+1)-1][t3-1] - A[t3-1][t5+2] + 6;;
                A[t3-1][(t4+2)+1] = C[t5][(t4+2)-1][t3-1] - A[t3-1][t5+2] + 6;;
                A[t3-1][(t4+3)+1] = C[t5][(t4+3)-1][t3-1] - A[t3-1][t5+2] + 6;;
                A[t3-1][(t4+4)+1] = C[t5][(t4+4)-1][t3-1] - A[t3-1][t5+2] + 6;;
                A[t3-1][(t4+5)+1] = C[t5][(t4+5)-1][t3-1] - A[t3-1][t5+2] + 6;;
                A[t3-1][(t4+6)+1] = C[t5][(t4+6)-1][t3-1] - A[t3-1][t5+2] + 6;;
                A[t3-1][(t4+7)+1] = C[t5][(t4+7)-1][t3-1] - A[t3-1][t5+2] + 6;;
              }
            }
            for (;t4<=min(PB_L-2,32*t2+31);t4++) {
              for (t5=0;t5<=PB_M-1;t5++) {
                A[t3-1][t4+1] = C[t5][t4-1][t3-1] - A[t3-1][t5+2] + 6;;
              }
            }
          }
        }
        if ((PB_L >= 3) && (PB_M >= 2) && (t2 <= floord(PB_L-2,32))) {
          for (t3=max(max(PB_M+1,32*t1-32*t2),32*t2-PB_M+1);t3<=min(min(PB_N-1,32*t2+30),32*t1-32*t2+31);t3++) {
            for (t4=max(32*t2,t3+1);t4<=(min(32*t2+31,t3+PB_M-1))-7;t4+=8) {
              B[(-t3+t4)-1] = D[(-t3+t4)+1][t3] - B[(-t3+t4)] * 5;;
              B[(-t3+(t4+1))-1] = D[(-t3+(t4+1))+1][t3] - B[(-t3+(t4+1))] * 5;;
              B[(-t3+(t4+2))-1] = D[(-t3+(t4+2))+1][t3] - B[(-t3+(t4+2))] * 5;;
              B[(-t3+(t4+3))-1] = D[(-t3+(t4+3))+1][t3] - B[(-t3+(t4+3))] * 5;;
              B[(-t3+(t4+4))-1] = D[(-t3+(t4+4))+1][t3] - B[(-t3+(t4+4))] * 5;;
              B[(-t3+(t4+5))-1] = D[(-t3+(t4+5))+1][t3] - B[(-t3+(t4+5))] * 5;;
              B[(-t3+(t4+6))-1] = D[(-t3+(t4+6))+1][t3] - B[(-t3+(t4+6))] * 5;;
              B[(-t3+(t4+7))-1] = D[(-t3+(t4+7))+1][t3] - B[(-t3+(t4+7))] * 5;;
            }
            for (;t4<=min(32*t2+31,t3+PB_M-1);t4++) {
              B[(-t3+t4)-1] = D[(-t3+t4)+1][t3] - B[(-t3+t4)] * 5;;
            }
          }
        }
        if ((PB_L >= 3) && (t2 <= floord(PB_L-2,32))) {
          for (t3=max(32*t1-32*t2,32*t2+31);t3<=min(PB_M,32*t1-32*t2+31);t3++) {
            for (t4=max(1,32*t2);t4<=(min(PB_L-2,32*t2+31))-7;t4+=8) {
              for (t5=0;t5<=PB_M-1;t5++) {
                A[t3-1][t4+1] = C[t5][t4-1][t3-1] - A[t3-1][t5+2] + 6;;
                A[t3-1][(t4+1)+1] = C[t5][(t4+1)-1][t3-1] - A[t3-1][t5+2] + 6;;
                A[t3-1][(t4+2)+1] = C[t5][(t4+2)-1][t3-1] - A[t3-1][t5+2] + 6;;
                A[t3-1][(t4+3)+1] = C[t5][(t4+3)-1][t3-1] - A[t3-1][t5+2] + 6;;
                A[t3-1][(t4+4)+1] = C[t5][(t4+4)-1][t3-1] - A[t3-1][t5+2] + 6;;
                A[t3-1][(t4+5)+1] = C[t5][(t4+5)-1][t3-1] - A[t3-1][t5+2] + 6;;
                A[t3-1][(t4+6)+1] = C[t5][(t4+6)-1][t3-1] - A[t3-1][t5+2] + 6;;
                A[t3-1][(t4+7)+1] = C[t5][(t4+7)-1][t3-1] - A[t3-1][t5+2] + 6;;
              }
            }
            for (;t4<=min(PB_L-2,32*t2+31);t4++) {
              for (t5=0;t5<=PB_M-1;t5++) {
                A[t3-1][t4+1] = C[t5][t4-1][t3-1] - A[t3-1][t5+2] + 6;;
              }
            }
          }
        }
      }
    }
  }
  if ((PB_L >= 3) && (PB_N <= -1)) {
    for (t1=0;t1<=floord(PB_L+PB_M-2,32);t1++) {
      lbp=max(0,ceild(32*t1-PB_M,32));
      ubp=min(floord(PB_L-2,32),t1);
#pragma omp parallel for private(lbv,ubv,t3,t4,t5)
      for (t2=lbp;t2<=ubp;t2++) {
        for (t3=max(1,32*t1-32*t2);t3<=min(PB_M,32*t1-32*t2+31);t3++) {
          for (t4=max(1,32*t2);t4<=(min(PB_L-2,32*t2+31))-7;t4+=8) {
            for (t5=0;t5<=PB_M-1;t5++) {
              A[t3-1][t4+1] = C[t5][t4-1][t3-1] - A[t3-1][t5+2] + 6;;
              A[t3-1][(t4+1)+1] = C[t5][(t4+1)-1][t3-1] - A[t3-1][t5+2] + 6;;
              A[t3-1][(t4+2)+1] = C[t5][(t4+2)-1][t3-1] - A[t3-1][t5+2] + 6;;
              A[t3-1][(t4+3)+1] = C[t5][(t4+3)-1][t3-1] - A[t3-1][t5+2] + 6;;
              A[t3-1][(t4+4)+1] = C[t5][(t4+4)-1][t3-1] - A[t3-1][t5+2] + 6;;
              A[t3-1][(t4+5)+1] = C[t5][(t4+5)-1][t3-1] - A[t3-1][t5+2] + 6;;
              A[t3-1][(t4+6)+1] = C[t5][(t4+6)-1][t3-1] - A[t3-1][t5+2] + 6;;
              A[t3-1][(t4+7)+1] = C[t5][(t4+7)-1][t3-1] - A[t3-1][t5+2] + 6;;
            }
          }
          for (;t4<=min(PB_L-2,32*t2+31);t4++) {
            for (t5=0;t5<=PB_M-1;t5++) {
              A[t3-1][t4+1] = C[t5][t4-1][t3-1] - A[t3-1][t5+2] + 6;;
            }
          }
        }
      }
    }
  }
  if ((PB_L <= -1) && (PB_M >= 2) && (PB_N >= 1)) {
    for (t1=0;t1<=floord(PB_M+2*PB_N-3,32);t1++) {
      lbp=max(ceild(t1,2),ceild(32*t1-PB_N+1,32));
      ubp=min(min(floord(PB_M+PB_N-2,32),floord(32*t1+PB_M+30,64)),t1);
#pragma omp parallel for private(lbv,ubv,t3,t4,t5)
      for (t2=lbp;t2<=ubp;t2++) {
        for (t3=max(32*t1-32*t2,32*t2-PB_M+1);t3<=min(min(PB_N-1,32*t2+30),32*t1-32*t2+31);t3++) {
          for (t4=max(32*t2,t3+1);t4<=(min(32*t2+31,t3+PB_M-1))-7;t4+=8) {
            B[(-t3+t4)-1] = D[(-t3+t4)+1][t3] - B[(-t3+t4)] * 5;;
            B[(-t3+(t4+1))-1] = D[(-t3+(t4+1))+1][t3] - B[(-t3+(t4+1))] * 5;;
            B[(-t3+(t4+2))-1] = D[(-t3+(t4+2))+1][t3] - B[(-t3+(t4+2))] * 5;;
            B[(-t3+(t4+3))-1] = D[(-t3+(t4+3))+1][t3] - B[(-t3+(t4+3))] * 5;;
            B[(-t3+(t4+4))-1] = D[(-t3+(t4+4))+1][t3] - B[(-t3+(t4+4))] * 5;;
            B[(-t3+(t4+5))-1] = D[(-t3+(t4+5))+1][t3] - B[(-t3+(t4+5))] * 5;;
            B[(-t3+(t4+6))-1] = D[(-t3+(t4+6))+1][t3] - B[(-t3+(t4+6))] * 5;;
            B[(-t3+(t4+7))-1] = D[(-t3+(t4+7))+1][t3] - B[(-t3+(t4+7))] * 5;;
          }
          for (;t4<=min(32*t2+31,t3+PB_M-1);t4++) {
            B[(-t3+t4)-1] = D[(-t3+t4)+1][t3] - B[(-t3+t4)] * 5;;
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
int xb = xB;
int xc = xC;
int yc = yC;
int zc = zC;
int xd = xD;
int yd = yD;
POLYBENCH_2D_ARRAY_DECL(A, DATA_TYPE, xA,yA,xa,ya);
POLYBENCH_1D_ARRAY_DECL(B, DATA_TYPE, xB,xb);
POLYBENCH_3D_ARRAY_DECL(C, DATA_TYPE, xC,yC,zC,xc,yc,zc);
POLYBENCH_2D_ARRAY_DECL(D, DATA_TYPE, xD,yD,xd,yd);
init_array(xa,ya,POLYBENCH_ARRAY(A), xb,POLYBENCH_ARRAY(B), xc,yc,zc,POLYBENCH_ARRAY(C), xd,yd,POLYBENCH_ARRAY(D), INIT_SEED);
kernel_3212211113_00(xa,ya,POLYBENCH_ARRAY(A), xb,POLYBENCH_ARRAY(B), xc,yc,zc,POLYBENCH_ARRAY(C), xd,yd,POLYBENCH_ARRAY(D));
polybench_prevent_dce(print_array(xa,ya,POLYBENCH_ARRAY(A), xb,POLYBENCH_ARRAY(B), xc,yc,zc,POLYBENCH_ARRAY(C), xd,yd,POLYBENCH_ARRAY(D)));
POLYBENCH_FREE_ARRAY(A);
POLYBENCH_FREE_ARRAY(B);
POLYBENCH_FREE_ARRAY(C);
POLYBENCH_FREE_ARRAY(D);
return 0;
}
