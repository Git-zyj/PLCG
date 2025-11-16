#include <stdio.h>
#include <unistd.h>
#include <string.h>
#include <math.h>
#include "polybench.h"
#include <time.h>
#include <stdlib.h>
#include "3214232121_00.h"
#include <omp.h>
#define ceild(n,d)  ceil(((double)(n))/((double)(d)))
#define floord(n,d) floor(((double)(n))/((double)(d)))
/*
arg_depth: 3
arg_nstmts: 2
arg_bounds_index: 1
arg_prob_bounds_exist: 4
arg_narrays_per_dim: 2
arg_avg_narrays_read_per_stmt: 3
arg_bounds_coef: 2
arg_avg_ndeps_read_per_stmt: 1
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
static void init_array(int xa,int ya,DATA_TYPE POLYBENCH_2D(A,xA,yA,xa,ya),int xb,int yb,int zb,DATA_TYPE POLYBENCH_3D(B,xB,yB,zB,xb,yb,zb),int xc,int yc,DATA_TYPE POLYBENCH_2D(C,xC,yC,xc,yc),int xd,int yd,DATA_TYPE POLYBENCH_2D(D,xD,yD,xd,yd),int xe,int ye,int ze,DATA_TYPE POLYBENCH_3D(E,xE,yE,zE,xe,ye,ze),int xf,int yf,int zf,DATA_TYPE POLYBENCH_3D(F,xF,yF,zF,xf,yf,zf),int seed)
{
srand(seed);
int i_0, i_1, i_2;
for (i_0 = 0; i_0 < xa; i_0++) {
    for (i_1 = 0; i_1 < ya; i_1++) {
        A[i_0][i_1] = 0.9 + (rand() / (DATA_TYPE)RAND_MAX) * (1.1 - 0.9);
    }
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
        C[i_0][i_1] = 0.9 + (rand() / (DATA_TYPE)RAND_MAX) * (1.1 - 0.9);
    }
}
for (i_0 = 0; i_0 < xd; i_0++) {
    for (i_1 = 0; i_1 < yd; i_1++) {
        D[i_0][i_1] = 0.9 + (rand() / (DATA_TYPE)RAND_MAX) * (1.1 - 0.9);
    }
}
for (i_0 = 0; i_0 < xe; i_0++) {
    for (i_1 = 0; i_1 < ye; i_1++) {
        for (i_2 = 0; i_2 < ze; i_2++) {
            E[i_0][i_1][i_2] = 0.9 + (rand() / (DATA_TYPE)RAND_MAX) * (1.1 - 0.9);
        }
    }
}
for (i_0 = 0; i_0 < xf; i_0++) {
    for (i_1 = 0; i_1 < yf; i_1++) {
        for (i_2 = 0; i_2 < zf; i_2++) {
            F[i_0][i_1][i_2] = 0.9 + (rand() / (DATA_TYPE)RAND_MAX) * (1.1 - 0.9);
        }
    }
}
}
static void print_array(int xa,int ya,DATA_TYPE POLYBENCH_2D(A,xA,yA,xa,ya),int xb,int yb,int zb,DATA_TYPE POLYBENCH_3D(B,xB,yB,zB,xb,yb,zb),int xc,int yc,DATA_TYPE POLYBENCH_2D(C,xC,yC,xc,yc),int xd,int yd,DATA_TYPE POLYBENCH_2D(D,xD,yD,xd,yd),int xe,int ye,int ze,DATA_TYPE POLYBENCH_3D(E,xE,yE,zE,xe,ye,ze),int xf,int yf,int zf,DATA_TYPE POLYBENCH_3D(F,xF,yF,zF,xf,yf,zf))
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
            fprintf(POLYBENCH_DUMP_TARGET, "\n");
            fprintf (POLYBENCH_DUMP_TARGET, DATA_PRINTF_MODIFIER, C[i_0][i_1]);
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
        for (i_1 = 0; i_1 < ye; i_1++) {
            for (i_2 = 0; i_2 < ze; i_2++) {
                fprintf(POLYBENCH_DUMP_TARGET, "\n");
                fprintf (POLYBENCH_DUMP_TARGET, DATA_PRINTF_MODIFIER, E[i_0][i_1][i_2]);
            }
        }
    }
    POLYBENCH_DUMP_END("E");
    POLYBENCH_DUMP_BEGIN("F");
    for (i_0 = 0; i_0 < xf; i_0++) {
        for (i_1 = 0; i_1 < yf; i_1++) {
            for (i_2 = 0; i_2 < zf; i_2++) {
                fprintf(POLYBENCH_DUMP_TARGET, "\n");
                fprintf (POLYBENCH_DUMP_TARGET, DATA_PRINTF_MODIFIER, F[i_0][i_1][i_2]);
            }
        }
    }
    POLYBENCH_DUMP_END("F");
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
            sum_C += C[i_0][i_1];
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
        for (i_1 = 0; i_1 < ye; i_1++) {
            for (i_2 = 0; i_2 < ze; i_2++) {
                sum_E += E[i_0][i_1][i_2];
            }
        }
    }
    fprintf(POLYBENCH_DUMP_TARGET, "\nsum: ");
    fprintf (POLYBENCH_DUMP_TARGET, DATA_PRINTF_MODIFIER, sum_E);
    POLYBENCH_DUMP_END("E");
    POLYBENCH_DUMP_BEGIN("F");
    DATA_TYPE sum_F = 0;
    for (i_0 = 0; i_0 < xf; i_0++) {
        for (i_1 = 0; i_1 < yf; i_1++) {
            for (i_2 = 0; i_2 < zf; i_2++) {
                sum_F += F[i_0][i_1][i_2];
            }
        }
    }
    fprintf(POLYBENCH_DUMP_TARGET, "\nsum: ");
    fprintf (POLYBENCH_DUMP_TARGET, DATA_PRINTF_MODIFIER, sum_F);
    POLYBENCH_DUMP_END("F");
#endif
POLYBENCH_DUMP_FINISH;
}
void kernel_3214232121_00(int xa,int ya,DATA_TYPE POLYBENCH_2D(A,xA,yA,xa,ya),int xb,int yb,int zb,DATA_TYPE POLYBENCH_3D(B,xB,yB,zB,xb,yb,zb),int xc,int yc,DATA_TYPE POLYBENCH_2D(C,xC,yC,xc,yc),int xd,int yd,DATA_TYPE POLYBENCH_2D(D,xD,yD,xd,yd),int xe,int ye,int ze,DATA_TYPE POLYBENCH_3D(E,xE,yE,zE,xe,ye,ze),int xf,int yf,int zf,DATA_TYPE POLYBENCH_3D(F,xF,yF,zF,xf,yf,zf)){
polybench_start_instruments;
  int t1, t2, t3, t4, t5, t6;
 int lb, ub, lbp, ubp, lb2, ub2;
 register int lbv, ubv;
/* Start of CLooG code */
if (PB_L >= 2) {
  if (PB_M >= 0) {
    for (t1=0;t1<=floord(4*PB_L+PB_M-4,32);t1++) {
      lbp=max(max(0,ceild(32*t1-PB_L-PB_M+1,32)),ceild(32*t1-PB_M,48));
      ubp=min(min(floord(3*PB_L-1,32),floord(64*t1+PB_L+63,96)),t1);
#pragma omp parallel for private(lbv,ubv,t3,t4,t5,t6)
      for (t2=lbp;t2<=ubp;t2++) {
        for (t3=0;t3<=min(min(min(min(floord(PB_L-1,32),floord(-32*t1+32*t2+PB_L+PB_M-1,32)),floord(-32*t2+3*PB_L-1,64)),floord(-32*t1+32*t2+2*PB_L+PB_M-3,64)),floord(-32*t1+4*PB_L+PB_M-4,96));t3++) {
          if ((t2 >= 1) && (t3 == 0)) {
            for (t4=max(max(1,ceild(32*t2-PB_L-1,2)),32*t1-32*t2);t4<=min(min(PB_L-1,16*t2+14),32*t1-32*t2+31);t4++) {
              for (t5=max(32*t2,2*t4+2);t5<=(min(32*t2+31,2*t4+PB_L+1))-7;t5+=8) {
                A[t4][(-2*t4+t5)-2] = C[(-2*t4+t5)-2][t4] - D[(-2*t4+t5)][t4-1] * D[(-2*t4+t5)][t4] + E[(-2*t4+t5)][(-2*t4+t5)-2][t4-1] * A[(-2*t4+t5)][t4-1] * A[t4+2][(-2*t4+t5)-2] - 4;;
                A[t4][(-2*t4+(t5+1))-2] = C[(-2*t4+(t5+1))-2][t4] - D[(-2*t4+(t5+1))][t4-1] * D[(-2*t4+(t5+1))][t4] + E[(-2*t4+(t5+1))][(-2*t4+(t5+1))-2][t4-1] * A[(-2*t4+(t5+1))][t4-1] * A[t4+2][(-2*t4+(t5+1))-2] - 4;;
                A[t4][(-2*t4+(t5+2))-2] = C[(-2*t4+(t5+2))-2][t4] - D[(-2*t4+(t5+2))][t4-1] * D[(-2*t4+(t5+2))][t4] + E[(-2*t4+(t5+2))][(-2*t4+(t5+2))-2][t4-1] * A[(-2*t4+(t5+2))][t4-1] * A[t4+2][(-2*t4+(t5+2))-2] - 4;;
                A[t4][(-2*t4+(t5+3))-2] = C[(-2*t4+(t5+3))-2][t4] - D[(-2*t4+(t5+3))][t4-1] * D[(-2*t4+(t5+3))][t4] + E[(-2*t4+(t5+3))][(-2*t4+(t5+3))-2][t4-1] * A[(-2*t4+(t5+3))][t4-1] * A[t4+2][(-2*t4+(t5+3))-2] - 4;;
                A[t4][(-2*t4+(t5+4))-2] = C[(-2*t4+(t5+4))-2][t4] - D[(-2*t4+(t5+4))][t4-1] * D[(-2*t4+(t5+4))][t4] + E[(-2*t4+(t5+4))][(-2*t4+(t5+4))-2][t4-1] * A[(-2*t4+(t5+4))][t4-1] * A[t4+2][(-2*t4+(t5+4))-2] - 4;;
                A[t4][(-2*t4+(t5+5))-2] = C[(-2*t4+(t5+5))-2][t4] - D[(-2*t4+(t5+5))][t4-1] * D[(-2*t4+(t5+5))][t4] + E[(-2*t4+(t5+5))][(-2*t4+(t5+5))-2][t4-1] * A[(-2*t4+(t5+5))][t4-1] * A[t4+2][(-2*t4+(t5+5))-2] - 4;;
                A[t4][(-2*t4+(t5+6))-2] = C[(-2*t4+(t5+6))-2][t4] - D[(-2*t4+(t5+6))][t4-1] * D[(-2*t4+(t5+6))][t4] + E[(-2*t4+(t5+6))][(-2*t4+(t5+6))-2][t4-1] * A[(-2*t4+(t5+6))][t4-1] * A[t4+2][(-2*t4+(t5+6))-2] - 4;;
                A[t4][(-2*t4+(t5+7))-2] = C[(-2*t4+(t5+7))-2][t4] - D[(-2*t4+(t5+7))][t4-1] * D[(-2*t4+(t5+7))][t4] + E[(-2*t4+(t5+7))][(-2*t4+(t5+7))-2][t4-1] * A[(-2*t4+(t5+7))][t4-1] * A[t4+2][(-2*t4+(t5+7))-2] - 4;;
              }
              for (;t5<=min(32*t2+31,2*t4+PB_L+1);t5++) {
                A[t4][(-2*t4+t5)-2] = C[(-2*t4+t5)-2][t4] - D[(-2*t4+t5)][t4-1] * D[(-2*t4+t5)][t4] + E[(-2*t4+t5)][(-2*t4+t5)-2][t4-1] * A[(-2*t4+t5)][t4-1] * A[t4+2][(-2*t4+t5)-2] - 4;;
              }
            }
          }
          if ((PB_M >= 1) && (t1 == 0) && (t2 == 0) && (t3 == 0)) {
            for (t5=0;t5<=min(31,PB_L-1);t5++) {
              lbv=max(1,t5);
              ubv=min(31,PB_L-1);
#pragma ivdep
#pragma vector always
              for (t6=lbv;t6<=ubv;t6++) {
                B[0][t6-1][t6] = E[0][t6][t5+2] + F[t6][t5][0] * 6;;
              }
            }
          }
          if ((t1 == 0) && (t2 == 0) && (t3 == 0)) {
            for (t4=1;t4<=min(min(14,PB_L-1),PB_M-1);t4++) {
              for (t5=0;t5<=min(PB_L-1,2*t4+1);t5++) {
                lbv=max(1,t5);
                ubv=min(31,PB_L-1);
#pragma ivdep
#pragma vector always
                for (t6=lbv;t6<=ubv;t6++) {
                  B[t4][t6-1][t6] = E[0][t6][t5+2] + F[t6][t5][t4] * 6;;
                }
              }
              for (t5=2*t4+2;t5<=min(31,PB_L-1);t5++) {
                A[t4][(-2*t4+t5)-2] = C[(-2*t4+t5)-2][t4] - D[(-2*t4+t5)][t4-1] * D[(-2*t4+t5)][t4] + E[(-2*t4+t5)][(-2*t4+t5)-2][t4-1] * A[(-2*t4+t5)][t4-1] * A[t4+2][(-2*t4+t5)-2] - 4;;
                lbv=t5;
                ubv=min(31,PB_L-1);
#pragma ivdep
#pragma vector always
                for (t6=lbv;t6<=ubv;t6++) {
                  B[t4][t6-1][t6] = E[0][t6][t5+2] + F[t6][t5][t4] * 6;;
                }
              }
              for (t5=max(PB_L,2*t4+2);t5<=(min(31,2*t4+PB_L+1))-7;t5+=8) {
                A[t4][(-2*t4+t5)-2] = C[(-2*t4+t5)-2][t4] - D[(-2*t4+t5)][t4-1] * D[(-2*t4+t5)][t4] + E[(-2*t4+t5)][(-2*t4+t5)-2][t4-1] * A[(-2*t4+t5)][t4-1] * A[t4+2][(-2*t4+t5)-2] - 4;;
                A[t4][(-2*t4+(t5+1))-2] = C[(-2*t4+(t5+1))-2][t4] - D[(-2*t4+(t5+1))][t4-1] * D[(-2*t4+(t5+1))][t4] + E[(-2*t4+(t5+1))][(-2*t4+(t5+1))-2][t4-1] * A[(-2*t4+(t5+1))][t4-1] * A[t4+2][(-2*t4+(t5+1))-2] - 4;;
                A[t4][(-2*t4+(t5+2))-2] = C[(-2*t4+(t5+2))-2][t4] - D[(-2*t4+(t5+2))][t4-1] * D[(-2*t4+(t5+2))][t4] + E[(-2*t4+(t5+2))][(-2*t4+(t5+2))-2][t4-1] * A[(-2*t4+(t5+2))][t4-1] * A[t4+2][(-2*t4+(t5+2))-2] - 4;;
                A[t4][(-2*t4+(t5+3))-2] = C[(-2*t4+(t5+3))-2][t4] - D[(-2*t4+(t5+3))][t4-1] * D[(-2*t4+(t5+3))][t4] + E[(-2*t4+(t5+3))][(-2*t4+(t5+3))-2][t4-1] * A[(-2*t4+(t5+3))][t4-1] * A[t4+2][(-2*t4+(t5+3))-2] - 4;;
                A[t4][(-2*t4+(t5+4))-2] = C[(-2*t4+(t5+4))-2][t4] - D[(-2*t4+(t5+4))][t4-1] * D[(-2*t4+(t5+4))][t4] + E[(-2*t4+(t5+4))][(-2*t4+(t5+4))-2][t4-1] * A[(-2*t4+(t5+4))][t4-1] * A[t4+2][(-2*t4+(t5+4))-2] - 4;;
                A[t4][(-2*t4+(t5+5))-2] = C[(-2*t4+(t5+5))-2][t4] - D[(-2*t4+(t5+5))][t4-1] * D[(-2*t4+(t5+5))][t4] + E[(-2*t4+(t5+5))][(-2*t4+(t5+5))-2][t4-1] * A[(-2*t4+(t5+5))][t4-1] * A[t4+2][(-2*t4+(t5+5))-2] - 4;;
                A[t4][(-2*t4+(t5+6))-2] = C[(-2*t4+(t5+6))-2][t4] - D[(-2*t4+(t5+6))][t4-1] * D[(-2*t4+(t5+6))][t4] + E[(-2*t4+(t5+6))][(-2*t4+(t5+6))-2][t4-1] * A[(-2*t4+(t5+6))][t4-1] * A[t4+2][(-2*t4+(t5+6))-2] - 4;;
                A[t4][(-2*t4+(t5+7))-2] = C[(-2*t4+(t5+7))-2][t4] - D[(-2*t4+(t5+7))][t4-1] * D[(-2*t4+(t5+7))][t4] + E[(-2*t4+(t5+7))][(-2*t4+(t5+7))-2][t4-1] * A[(-2*t4+(t5+7))][t4-1] * A[t4+2][(-2*t4+(t5+7))-2] - 4;;
              }
              for (;t5<=min(31,2*t4+PB_L+1);t5++) {
                A[t4][(-2*t4+t5)-2] = C[(-2*t4+t5)-2][t4] - D[(-2*t4+t5)][t4-1] * D[(-2*t4+t5)][t4] + E[(-2*t4+t5)][(-2*t4+t5)-2][t4-1] * A[(-2*t4+t5)][t4-1] * A[t4+2][(-2*t4+t5)-2] - 4;;
              }
            }
          }
          if ((t1 == 0) && (t2 == 0) && (t3 == 0)) {
            for (t4=max(1,PB_M);t4<=min(14,PB_L-1);t4++) {
              for (t5=2*t4+2;t5<=(min(31,2*t4+PB_L+1))-7;t5+=8) {
                A[t4][(-2*t4+t5)-2] = C[(-2*t4+t5)-2][t4] - D[(-2*t4+t5)][t4-1] * D[(-2*t4+t5)][t4] + E[(-2*t4+t5)][(-2*t4+t5)-2][t4-1] * A[(-2*t4+t5)][t4-1] * A[t4+2][(-2*t4+t5)-2] - 4;;
                A[t4][(-2*t4+(t5+1))-2] = C[(-2*t4+(t5+1))-2][t4] - D[(-2*t4+(t5+1))][t4-1] * D[(-2*t4+(t5+1))][t4] + E[(-2*t4+(t5+1))][(-2*t4+(t5+1))-2][t4-1] * A[(-2*t4+(t5+1))][t4-1] * A[t4+2][(-2*t4+(t5+1))-2] - 4;;
                A[t4][(-2*t4+(t5+2))-2] = C[(-2*t4+(t5+2))-2][t4] - D[(-2*t4+(t5+2))][t4-1] * D[(-2*t4+(t5+2))][t4] + E[(-2*t4+(t5+2))][(-2*t4+(t5+2))-2][t4-1] * A[(-2*t4+(t5+2))][t4-1] * A[t4+2][(-2*t4+(t5+2))-2] - 4;;
                A[t4][(-2*t4+(t5+3))-2] = C[(-2*t4+(t5+3))-2][t4] - D[(-2*t4+(t5+3))][t4-1] * D[(-2*t4+(t5+3))][t4] + E[(-2*t4+(t5+3))][(-2*t4+(t5+3))-2][t4-1] * A[(-2*t4+(t5+3))][t4-1] * A[t4+2][(-2*t4+(t5+3))-2] - 4;;
                A[t4][(-2*t4+(t5+4))-2] = C[(-2*t4+(t5+4))-2][t4] - D[(-2*t4+(t5+4))][t4-1] * D[(-2*t4+(t5+4))][t4] + E[(-2*t4+(t5+4))][(-2*t4+(t5+4))-2][t4-1] * A[(-2*t4+(t5+4))][t4-1] * A[t4+2][(-2*t4+(t5+4))-2] - 4;;
                A[t4][(-2*t4+(t5+5))-2] = C[(-2*t4+(t5+5))-2][t4] - D[(-2*t4+(t5+5))][t4-1] * D[(-2*t4+(t5+5))][t4] + E[(-2*t4+(t5+5))][(-2*t4+(t5+5))-2][t4-1] * A[(-2*t4+(t5+5))][t4-1] * A[t4+2][(-2*t4+(t5+5))-2] - 4;;
                A[t4][(-2*t4+(t5+6))-2] = C[(-2*t4+(t5+6))-2][t4] - D[(-2*t4+(t5+6))][t4-1] * D[(-2*t4+(t5+6))][t4] + E[(-2*t4+(t5+6))][(-2*t4+(t5+6))-2][t4-1] * A[(-2*t4+(t5+6))][t4-1] * A[t4+2][(-2*t4+(t5+6))-2] - 4;;
                A[t4][(-2*t4+(t5+7))-2] = C[(-2*t4+(t5+7))-2][t4] - D[(-2*t4+(t5+7))][t4-1] * D[(-2*t4+(t5+7))][t4] + E[(-2*t4+(t5+7))][(-2*t4+(t5+7))-2][t4-1] * A[(-2*t4+(t5+7))][t4-1] * A[t4+2][(-2*t4+(t5+7))-2] - 4;;
              }
              for (;t5<=min(31,2*t4+PB_L+1);t5++) {
                A[t4][(-2*t4+t5)-2] = C[(-2*t4+t5)-2][t4] - D[(-2*t4+t5)][t4-1] * D[(-2*t4+t5)][t4] + E[(-2*t4+t5)][(-2*t4+t5)-2][t4-1] * A[(-2*t4+t5)][t4-1] * A[t4+2][(-2*t4+t5)-2] - 4;;
              }
            }
          }
          if ((t1 == 0) && (t2 == 0) && (t3 == 0)) {
            for (t4=PB_L;t4<=(min(14,PB_M-1))-7;t4+=8) {
              for (t5=0;t5<=PB_L-1;t5++) {
                lbv=max(1,t5);
                ubv=PB_L-1;
#pragma ivdep
#pragma vector always
                for (t6=lbv;t6<=ubv;t6++) {
                  B[t4][t6-1][t6] = E[0][t6][t5+2] + F[t6][t5][t4] * 6;;
                  B[(t4+1)][t6-1][t6] = E[0][t6][t5+2] + F[t6][t5][(t4+1)] * 6;;
                  B[(t4+2)][t6-1][t6] = E[0][t6][t5+2] + F[t6][t5][(t4+2)] * 6;;
                  B[(t4+3)][t6-1][t6] = E[0][t6][t5+2] + F[t6][t5][(t4+3)] * 6;;
                  B[(t4+4)][t6-1][t6] = E[0][t6][t5+2] + F[t6][t5][(t4+4)] * 6;;
                  B[(t4+5)][t6-1][t6] = E[0][t6][t5+2] + F[t6][t5][(t4+5)] * 6;;
                  B[(t4+6)][t6-1][t6] = E[0][t6][t5+2] + F[t6][t5][(t4+6)] * 6;;
                  B[(t4+7)][t6-1][t6] = E[0][t6][t5+2] + F[t6][t5][(t4+7)] * 6;;
                }
              }
            }
            for (;t4<=min(14,PB_M-1);t4++) {
              for (t5=0;t5<=PB_L-1;t5++) {
                lbv=max(1,t5);
                ubv=PB_L-1;
#pragma ivdep
#pragma vector always
                for (t6=lbv;t6<=ubv;t6++) {
                  B[t4][t6-1][t6] = E[0][t6][t5+2] + F[t6][t5][t4] * 6;;
                }
              }
            }
          }
          if (t2 <= t3) {
            for (t4=max(32*t1-32*t2,-15*t3+15);t4<=(min(PB_M-1,32*t1-32*t2+31))-7;t4+=8) {
              for (t5=32*t2;t5<=min(PB_L-1,32*t2+31);t5++) {
                lbv=max(max(1,32*t3),t5);
                ubv=min(PB_L-1,32*t3+31);
#pragma ivdep
#pragma vector always
                for (t6=lbv;t6<=ubv;t6++) {
                  B[t4][t6-1][t6] = E[0][t6][t5+2] + F[t6][t5][t4] * 6;;
                  B[(t4+1)][t6-1][t6] = E[0][t6][t5+2] + F[t6][t5][(t4+1)] * 6;;
                  B[(t4+2)][t6-1][t6] = E[0][t6][t5+2] + F[t6][t5][(t4+2)] * 6;;
                  B[(t4+3)][t6-1][t6] = E[0][t6][t5+2] + F[t6][t5][(t4+3)] * 6;;
                  B[(t4+4)][t6-1][t6] = E[0][t6][t5+2] + F[t6][t5][(t4+4)] * 6;;
                  B[(t4+5)][t6-1][t6] = E[0][t6][t5+2] + F[t6][t5][(t4+5)] * 6;;
                  B[(t4+6)][t6-1][t6] = E[0][t6][t5+2] + F[t6][t5][(t4+6)] * 6;;
                  B[(t4+7)][t6-1][t6] = E[0][t6][t5+2] + F[t6][t5][(t4+7)] * 6;;
                }
              }
            }
            for (;t4<=min(PB_M-1,32*t1-32*t2+31);t4++) {
              for (t5=32*t2;t5<=min(PB_L-1,32*t2+31);t5++) {
                lbv=max(max(1,32*t3),t5);
                ubv=min(PB_L-1,32*t3+31);
#pragma ivdep
#pragma vector always
                for (t6=lbv;t6<=ubv;t6++) {
                  B[t4][t6-1][t6] = E[0][t6][t5+2] + F[t6][t5][t4] * 6;;
                }
              }
            }
          }
        }
      }
    }
  }
  if (PB_M <= -1) {
    for (t1=0;t1<=floord(PB_L-1,8);t1++) {
      lbp=max(ceild(2*t1,3),ceild(32*t1-PB_L+1,32));
      ubp=min(min(floord(3*PB_L-1,32),floord(64*t1+PB_L+63,96)),t1);
#pragma omp parallel for private(lbv,ubv,t3,t4,t5,t6)
      for (t2=lbp;t2<=ubp;t2++) {
        for (t4=max(max(1,ceild(32*t2-PB_L-1,2)),32*t1-32*t2);t4<=min(min(PB_L-1,16*t2+14),32*t1-32*t2+31);t4++) {
          for (t5=max(32*t2,2*t4+2);t5<=(min(32*t2+31,2*t4+PB_L+1))-7;t5+=8) {
            A[t4][(-2*t4+t5)-2] = C[(-2*t4+t5)-2][t4] - D[(-2*t4+t5)][t4-1] * D[(-2*t4+t5)][t4] + E[(-2*t4+t5)][(-2*t4+t5)-2][t4-1] * A[(-2*t4+t5)][t4-1] * A[t4+2][(-2*t4+t5)-2] - 4;;
            A[t4][(-2*t4+(t5+1))-2] = C[(-2*t4+(t5+1))-2][t4] - D[(-2*t4+(t5+1))][t4-1] * D[(-2*t4+(t5+1))][t4] + E[(-2*t4+(t5+1))][(-2*t4+(t5+1))-2][t4-1] * A[(-2*t4+(t5+1))][t4-1] * A[t4+2][(-2*t4+(t5+1))-2] - 4;;
            A[t4][(-2*t4+(t5+2))-2] = C[(-2*t4+(t5+2))-2][t4] - D[(-2*t4+(t5+2))][t4-1] * D[(-2*t4+(t5+2))][t4] + E[(-2*t4+(t5+2))][(-2*t4+(t5+2))-2][t4-1] * A[(-2*t4+(t5+2))][t4-1] * A[t4+2][(-2*t4+(t5+2))-2] - 4;;
            A[t4][(-2*t4+(t5+3))-2] = C[(-2*t4+(t5+3))-2][t4] - D[(-2*t4+(t5+3))][t4-1] * D[(-2*t4+(t5+3))][t4] + E[(-2*t4+(t5+3))][(-2*t4+(t5+3))-2][t4-1] * A[(-2*t4+(t5+3))][t4-1] * A[t4+2][(-2*t4+(t5+3))-2] - 4;;
            A[t4][(-2*t4+(t5+4))-2] = C[(-2*t4+(t5+4))-2][t4] - D[(-2*t4+(t5+4))][t4-1] * D[(-2*t4+(t5+4))][t4] + E[(-2*t4+(t5+4))][(-2*t4+(t5+4))-2][t4-1] * A[(-2*t4+(t5+4))][t4-1] * A[t4+2][(-2*t4+(t5+4))-2] - 4;;
            A[t4][(-2*t4+(t5+5))-2] = C[(-2*t4+(t5+5))-2][t4] - D[(-2*t4+(t5+5))][t4-1] * D[(-2*t4+(t5+5))][t4] + E[(-2*t4+(t5+5))][(-2*t4+(t5+5))-2][t4-1] * A[(-2*t4+(t5+5))][t4-1] * A[t4+2][(-2*t4+(t5+5))-2] - 4;;
            A[t4][(-2*t4+(t5+6))-2] = C[(-2*t4+(t5+6))-2][t4] - D[(-2*t4+(t5+6))][t4-1] * D[(-2*t4+(t5+6))][t4] + E[(-2*t4+(t5+6))][(-2*t4+(t5+6))-2][t4-1] * A[(-2*t4+(t5+6))][t4-1] * A[t4+2][(-2*t4+(t5+6))-2] - 4;;
            A[t4][(-2*t4+(t5+7))-2] = C[(-2*t4+(t5+7))-2][t4] - D[(-2*t4+(t5+7))][t4-1] * D[(-2*t4+(t5+7))][t4] + E[(-2*t4+(t5+7))][(-2*t4+(t5+7))-2][t4-1] * A[(-2*t4+(t5+7))][t4-1] * A[t4+2][(-2*t4+(t5+7))-2] - 4;;
          }
          for (;t5<=min(32*t2+31,2*t4+PB_L+1);t5++) {
            A[t4][(-2*t4+t5)-2] = C[(-2*t4+t5)-2][t4] - D[(-2*t4+t5)][t4-1] * D[(-2*t4+t5)][t4] + E[(-2*t4+t5)][(-2*t4+t5)-2][t4-1] * A[(-2*t4+t5)][t4-1] * A[t4+2][(-2*t4+t5)-2] - 4;;
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
int yb = yB;
int zb = zB;
int xc = xC;
int yc = yC;
int xd = xD;
int yd = yD;
int xe = xE;
int ye = yE;
int ze = zE;
int xf = xF;
int yf = yF;
int zf = zF;
POLYBENCH_2D_ARRAY_DECL(A, DATA_TYPE, xA,yA,xa,ya);
POLYBENCH_3D_ARRAY_DECL(B, DATA_TYPE, xB,yB,zB,xb,yb,zb);
POLYBENCH_2D_ARRAY_DECL(C, DATA_TYPE, xC,yC,xc,yc);
POLYBENCH_2D_ARRAY_DECL(D, DATA_TYPE, xD,yD,xd,yd);
POLYBENCH_3D_ARRAY_DECL(E, DATA_TYPE, xE,yE,zE,xe,ye,ze);
POLYBENCH_3D_ARRAY_DECL(F, DATA_TYPE, xF,yF,zF,xf,yf,zf);
init_array(xa,ya,POLYBENCH_ARRAY(A), xb,yb,zb,POLYBENCH_ARRAY(B), xc,yc,POLYBENCH_ARRAY(C), xd,yd,POLYBENCH_ARRAY(D), xe,ye,ze,POLYBENCH_ARRAY(E), xf,yf,zf,POLYBENCH_ARRAY(F), INIT_SEED);
kernel_3214232121_00(xa,ya,POLYBENCH_ARRAY(A), xb,yb,zb,POLYBENCH_ARRAY(B), xc,yc,POLYBENCH_ARRAY(C), xd,yd,POLYBENCH_ARRAY(D), xe,ye,ze,POLYBENCH_ARRAY(E), xf,yf,zf,POLYBENCH_ARRAY(F));
polybench_prevent_dce(print_array(xa,ya,POLYBENCH_ARRAY(A), xb,yb,zb,POLYBENCH_ARRAY(B), xc,yc,POLYBENCH_ARRAY(C), xd,yd,POLYBENCH_ARRAY(D), xe,ye,ze,POLYBENCH_ARRAY(E), xf,yf,zf,POLYBENCH_ARRAY(F)));
POLYBENCH_FREE_ARRAY(A);
POLYBENCH_FREE_ARRAY(B);
POLYBENCH_FREE_ARRAY(C);
POLYBENCH_FREE_ARRAY(D);
POLYBENCH_FREE_ARRAY(E);
POLYBENCH_FREE_ARRAY(F);
return 0;
}
