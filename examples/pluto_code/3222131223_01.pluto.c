#include <stdio.h>
#include <unistd.h>
#include <string.h>
#include <math.h>
#include "polybench.h"
#include <time.h>
#include <stdlib.h>
#include "3222131223_01.h"
#include <omp.h>
#define ceild(n,d)  ceil(((double)(n))/((double)(d)))
#define floord(n,d) floor(((double)(n))/((double)(d)))
/*
arg_depth: 3
arg_nstmts: 2
arg_bounds_index: 2
arg_prob_bounds_exist: 2
arg_narrays_per_dim: 1
arg_avg_narrays_read_per_stmt: 3
arg_bounds_coef: 1
arg_avg_ndeps_read_per_stmt: 2
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
static void init_array(int xa,int ya,DATA_TYPE POLYBENCH_2D(A,xA,yA,xa,ya),int xb,int yb,DATA_TYPE POLYBENCH_2D(B,xB,yB,xb,yb),int xc,int yc,DATA_TYPE POLYBENCH_2D(C,xC,yC,xc,yc),int xd,int yd,int zd,DATA_TYPE POLYBENCH_3D(D,xD,yD,zD,xd,yd,zd),int xe,DATA_TYPE POLYBENCH_1D(E,xE,xe),int seed)
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
        B[i_0][i_1] = 0.9 + (rand() / (DATA_TYPE)RAND_MAX) * (1.1 - 0.9);
    }
}
for (i_0 = 0; i_0 < xc; i_0++) {
    for (i_1 = 0; i_1 < yc; i_1++) {
        C[i_0][i_1] = 0.9 + (rand() / (DATA_TYPE)RAND_MAX) * (1.1 - 0.9);
    }
}
for (i_0 = 0; i_0 < xd; i_0++) {
    for (i_1 = 0; i_1 < yd; i_1++) {
        for (i_2 = 0; i_2 < zd; i_2++) {
            D[i_0][i_1][i_2] = 0.9 + (rand() / (DATA_TYPE)RAND_MAX) * (1.1 - 0.9);
        }
    }
}
for (i_0 = 0; i_0 < xe; i_0++) {
    E[i_0] = 0.9 + (rand() / (DATA_TYPE)RAND_MAX) * (1.1 - 0.9);
}
}
static void print_array(int xa,int ya,DATA_TYPE POLYBENCH_2D(A,xA,yA,xa,ya),int xb,int yb,DATA_TYPE POLYBENCH_2D(B,xB,yB,xb,yb),int xc,int yc,DATA_TYPE POLYBENCH_2D(C,xC,yC,xc,yc),int xd,int yd,int zd,DATA_TYPE POLYBENCH_3D(D,xD,yD,zD,xd,yd,zd),int xe,DATA_TYPE POLYBENCH_1D(E,xE,xe))
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
            fprintf(POLYBENCH_DUMP_TARGET, "\n");
            fprintf (POLYBENCH_DUMP_TARGET, DATA_PRINTF_MODIFIER, B[i_0][i_1]);
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
            for (i_2 = 0; i_2 < zd; i_2++) {
                fprintf(POLYBENCH_DUMP_TARGET, "\n");
                fprintf (POLYBENCH_DUMP_TARGET, DATA_PRINTF_MODIFIER, D[i_0][i_1][i_2]);
            }
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
            sum_B += B[i_0][i_1];
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
            for (i_2 = 0; i_2 < zd; i_2++) {
                sum_D += D[i_0][i_1][i_2];
            }
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
void kernel_3222131223_01(int xa,int ya,DATA_TYPE POLYBENCH_2D(A,xA,yA,xa,ya),int xb,int yb,DATA_TYPE POLYBENCH_2D(B,xB,yB,xb,yb),int xc,int yc,DATA_TYPE POLYBENCH_2D(C,xC,yC,xc,yc),int xd,int yd,int zd,DATA_TYPE POLYBENCH_3D(D,xD,yD,zD,xd,yd,zd),int xe,DATA_TYPE POLYBENCH_1D(E,xE,xe)){
polybench_start_instruments;
  int t1, t2, t3, t4, t5, t6;
 int lb, ub, lbp, ubp, lb2, ub2;
 register int lbv, ubv;
/* Start of CLooG code */
if (PB_P >= 3) {
  for (t1=0;t1<=floord(PB_P-1,32);t1++) {
    for (t2=0;t2<=min(floord(3*PB_P-4,32),3*t1+2);t2++) {
      if ((PB_L <= -1) && (t2 == 0)) {
        for (t4=max(2,32*t1);t4<=min(PB_P-1,32*t1+31);t4++) {
          B[t4][t4] = E[t4] + E[t4+1] * B[t4-2][t4-2] - 6;;
        }
      }
      if ((t1 >= ceild(3*t2-2*PB_L,6)) && (t2 <= floord(2*PB_P+PB_L-3,32))) {
        for (t3=max(max(max(max(ceild(2*t2-2,3),ceild(3*t2-PB_L,3)),ceild(32*t2-PB_L-29,32)),ceild(64*t1+22*t2-2*PB_P+2,33)),ceild(928*t1+480*t2-29*PB_P-15*PB_L+29,480));t3<=min(min(min(min(min(min(floord(2*PB_P+PB_L-5,32),floord(3*PB_P+PB_L-9,32)),floord(32*t2+PB_L+25,32)),floord(128*t1-32*t2+PB_L+123,32)),floord(-32*t2+4*PB_P+PB_L-5,32)),floord(3*PB_P+2*PB_L-9,48)),floord(-800*t1+448*t2+25*PB_P+14*PB_L-25,448));t3++) {
          if ((PB_L >= 3) && (PB_M >= 1) && (t3 >= 1)) {
            for (t4=max(max(max(max(max(max(3,ceild(32*t2-PB_L+1,2)),ceild(32*t3-PB_L+3,2)),ceild(32*t3-PB_M+1,2)),ceild(32*t2+1,3)),ceild(32*t2+32*t3-PB_L+1,4)),32*t1);t4<=min(min(min(PB_P-1,32*t1+31),16*t2+14),16*t3+15);t4++) {
              for (t5=max(32*t2,2*t4+2);t5<=min(min(min(32*t2+31,3*t4-1),2*t4+PB_L-1),-32*t3+4*t4+PB_L-1);t5++) {
                for (t6=max(32*t3,2*t4);t6<=min(min(32*t3+31,2*t4+PB_M-1),4*t4-t5+PB_L-1);t6++) {
                  A[(-2*t4+t5)][(-2*t4+t6)] = C[(-2*t4+t6)][(-2*t4+t6)+(-2*t4+t5)] - C[(-2*t4+t5)-1][(-2*t4+t6)] + D[(-2*t4+t6)+1][t4][(-2*t4+t5)+1] - A[(-2*t4+t5)-2][(-2*t4+t6)] + A[(-2*t4+t5)][(-2*t4+t6)+2] + A[(-2*t4+t5)-1][(-2*t4+t6)] + 2;;
                }
              }
            }
          }
          if ((PB_M >= 1) && (t1 == 0) && (t2 == 1) && (t3 == 0)) {
            for (t4=max(11,ceild(-PB_L+33,2));t4<=min(15,PB_P-1);t4++) {
              for (t5=32;t5<=min(3*t4-1,2*t4+PB_L-1);t5++) {
                for (t6=2*t4;t6<=min(min(31,2*t4+PB_M-1),4*t4-t5+PB_L-1);t6++) {
                  A[(-2*t4+t5)][(-2*t4+t6)] = C[(-2*t4+t6)][(-2*t4+t6)+(-2*t4+t5)] - C[(-2*t4+t5)-1][(-2*t4+t6)] + D[(-2*t4+t6)+1][t4][(-2*t4+t5)+1] - A[(-2*t4+t5)-2][(-2*t4+t6)] + A[(-2*t4+t5)][(-2*t4+t6)+2] + A[(-2*t4+t5)-1][(-2*t4+t6)] + 2;;
                }
              }
            }
          }
          if ((PB_M <= 0) && (t2 == 0) && (t3 == 0)) {
            for (t4=max(2,32*t1);t4<=min(PB_P-1,32*t1+31);t4++) {
              B[t4][t4] = E[t4] + E[t4+1] * B[t4-2][t4-2] - 6;;
            }
          }
          if ((PB_L <= 2) && (PB_M >= 1) && (t2 == 0) && (t3 == 0)) {
            for (t4=max(2,32*t1);t4<=min(PB_P-1,32*t1+31);t4++) {
              B[t4][t4] = E[t4] + E[t4+1] * B[t4-2][t4-2] - 6;;
            }
          }
          if ((PB_L >= 3) && (PB_M >= 1) && (t1 == 0) && (t2 == 0) && (t3 == 0)) {
            B[2][2] = E[2] + E[2 +1] * B[2 -2][2 -2] - 6;;
          }
          if ((PB_L >= 3) && (PB_M >= 1) && (t1 == 0) && (t2 == 0) && (t3 == 0)) {
            for (t4=3;t4<=min(14,PB_P-1);t4++) {
              B[t4][t4] = E[t4] + E[t4+1] * B[t4-2][t4-2] - 6;;
              for (t5=2*t4+2;t5<=min(min(31,3*t4-1),2*t4+PB_L-1);t5++) {
                for (t6=2*t4;t6<=min(min(31,2*t4+PB_M-1),4*t4-t5+PB_L-1);t6++) {
                  A[(-2*t4+t5)][(-2*t4+t6)] = C[(-2*t4+t6)][(-2*t4+t6)+(-2*t4+t5)] - C[(-2*t4+t5)-1][(-2*t4+t6)] + D[(-2*t4+t6)+1][t4][(-2*t4+t5)+1] - A[(-2*t4+t5)-2][(-2*t4+t6)] + A[(-2*t4+t5)][(-2*t4+t6)+2] + A[(-2*t4+t5)-1][(-2*t4+t6)] + 2;;
                }
              }
            }
          }
          if ((PB_L >= 3) && (PB_M >= 1) && (t2 == 0) && (t3 == 0)) {
            for (t4=max(15,32*t1);t4<=min(PB_P-1,32*t1+31);t4++) {
              B[t4][t4] = E[t4] + E[t4+1] * B[t4-2][t4-2] - 6;;
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
int ya = yA;
int xb = xB;
int yb = yB;
int xc = xC;
int yc = yC;
int xd = xD;
int yd = yD;
int zd = zD;
int xe = xE;
POLYBENCH_2D_ARRAY_DECL(A, DATA_TYPE, xA,yA,xa,ya);
POLYBENCH_2D_ARRAY_DECL(B, DATA_TYPE, xB,yB,xb,yb);
POLYBENCH_2D_ARRAY_DECL(C, DATA_TYPE, xC,yC,xc,yc);
POLYBENCH_3D_ARRAY_DECL(D, DATA_TYPE, xD,yD,zD,xd,yd,zd);
POLYBENCH_1D_ARRAY_DECL(E, DATA_TYPE, xE,xe);
init_array(xa,ya,POLYBENCH_ARRAY(A), xb,yb,POLYBENCH_ARRAY(B), xc,yc,POLYBENCH_ARRAY(C), xd,yd,zd,POLYBENCH_ARRAY(D), xe,POLYBENCH_ARRAY(E), INIT_SEED);
kernel_3222131223_01(xa,ya,POLYBENCH_ARRAY(A), xb,yb,POLYBENCH_ARRAY(B), xc,yc,POLYBENCH_ARRAY(C), xd,yd,zd,POLYBENCH_ARRAY(D), xe,POLYBENCH_ARRAY(E));
polybench_prevent_dce(print_array(xa,ya,POLYBENCH_ARRAY(A), xb,yb,POLYBENCH_ARRAY(B), xc,yc,POLYBENCH_ARRAY(C), xd,yd,zd,POLYBENCH_ARRAY(D), xe,POLYBENCH_ARRAY(E)));
POLYBENCH_FREE_ARRAY(A);
POLYBENCH_FREE_ARRAY(B);
POLYBENCH_FREE_ARRAY(C);
POLYBENCH_FREE_ARRAY(D);
POLYBENCH_FREE_ARRAY(E);
return 0;
}
