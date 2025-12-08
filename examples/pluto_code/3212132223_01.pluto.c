#include <stdio.h>
#include <unistd.h>
#include <string.h>
#include <math.h>
#include "polybench.h"
#include <time.h>
#include <stdlib.h>
#include "3212132223_01.h"
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
arg_bounds_coef: 2
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
static void init_array(int xa,DATA_TYPE POLYBENCH_1D(A,xA,xa),int xb,int yb,DATA_TYPE POLYBENCH_2D(B,xB,yB,xb,yb),int xc,DATA_TYPE POLYBENCH_1D(C,xC,xc),int xd,int yd,DATA_TYPE POLYBENCH_2D(D,xD,yD,xd,yd),int xe,int ye,int ze,DATA_TYPE POLYBENCH_3D(E,xE,yE,zE,xe,ye,ze),int seed)
{
srand(seed);
int i_0, i_1, i_2;
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
}
static void print_array(int xa,DATA_TYPE POLYBENCH_1D(A,xA,xa),int xb,int yb,DATA_TYPE POLYBENCH_2D(B,xB,yB,xb,yb),int xc,DATA_TYPE POLYBENCH_1D(C,xC,xc),int xd,int yd,DATA_TYPE POLYBENCH_2D(D,xD,yD,xd,yd),int xe,int ye,int ze,DATA_TYPE POLYBENCH_3D(E,xE,yE,zE,xe,ye,ze))
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
#endif
POLYBENCH_DUMP_FINISH;
}
void kernel_3212132223_01(int xa,DATA_TYPE POLYBENCH_1D(A,xA,xa),int xb,int yb,DATA_TYPE POLYBENCH_2D(B,xB,yB,xb,yb),int xc,DATA_TYPE POLYBENCH_1D(C,xC,xc),int xd,int yd,DATA_TYPE POLYBENCH_2D(D,xD,yD,xd,yd),int xe,int ye,int ze,DATA_TYPE POLYBENCH_3D(E,xE,yE,zE,xe,ye,ze)){
polybench_start_instruments;
  int t1, t2, t3, t4, t5, t6;
 int lb, ub, lbp, ubp, lb2, ub2;
 register int lbv, ubv;
/* Start of CLooG code */
if (PB_M >= 2) {
  for (t1=0;t1<=floord(PB_M-2,32);t1++) {
    for (t2=0;t2<=min(floord(PB_M-2,16),floord(32*t1+PB_M+30,32));t2++) {
      if ((PB_L <= -1) && (PB_M >= 5) && (t1 <= floord(PB_M-3,32)) && (t2 == 0)) {
        for (t4=max(2,32*t1);t4<=min(PB_M-3,32*t1+31);t4++) {
          A[t4-1] = C[t4+2] - C[t4] + A[t4-2] + 6;;
        }
      }
      if ((t1 <= min(floord(-32*t2+PB_M+2*PB_L-3,32),floord(4*PB_M+PB_L-12,128))) && (t1 >= ceild(32*t2-PB_L-59,64)) && (t2 <= min(min(floord(PB_M+PB_L-2,32),floord(4*PB_M+3*PB_L-20,64)),floord(5*PB_M+14*PB_L-25,256)))) {
        for (t3=t2;t3<=min(min(min(min(min(min(min(floord(3*PB_L,32),floord(2*PB_M+PB_L-6,32)),floord(64*t1+PB_L+60,32)),floord(32*t2+PB_L+28,32)),floord(-64*t1+32*t2+2*PB_M+PB_L-6,32)),floord(-128*t2+4*PB_M+13*PB_L-20,96)),floord(16*t2+11*PB_L,128)),floord(32*t1+23*PB_L,256));t3++) {
          if ((PB_L <= 3) && (t2 == 0) && (t3 == 0)) {
            for (t4=max(2,32*t1);t4<=min(PB_M-3,32*t1+31);t4++) {
              A[t4-1] = C[t4+2] - C[t4] + A[t4-2] + 6;;
            }
          }
          if (t3 >= 1) {
            for (t4=max(max(max(ceild(32*t2-PB_L+3,2),ceild(32*t3-PB_L+2,2)),32*t1),32*t2-PB_M+1);t4<=min(min(min(PB_L-1,PB_M-2),32*t1+31),16*t2+15);t4++) {
              for (t5=max(32*t3,2*t4+1);t5<=min(32*t3+31,2*t4+PB_L-2);t5++) {
                for (t6=max(32*t2,2*t4+1);t6<=min(min(min(t5,32*t2+31),t4+PB_M-1),2*t4+PB_L-3);t6++) {
                  B[(-2*t4+t6)-1][(-2*t4+t5)] = D[(-2*t4+t5)][t4] - E[(-2*t4+t5)-1][(-2*t4+t6)][0] * E[(-2*t4+t6)][(-2*t4+t5)][(-2*t4+t6)] - E[(-2*t4+t6)+t4][(-2*t4+t5)+1][t4] + B[(-2*t4+t6)-1][(-2*t4+t5)+1] - B[(-2*t4+t5)-1][(-2*t4+t6)+2] - 3;;
                }
              }
            }
          }
          if ((PB_L >= 4) && (t1 == 0) && (t2 == 0) && (t3 == 0)) {
            for (t4=0;t4<=min(1,PB_M-2);t4++) {
              for (t5=2*t4+1;t5<=min(31,2*t4+PB_L-2);t5++) {
                for (t6=2*t4+1;t6<=min(min(t5,t4+PB_M-1),2*t4+PB_L-3);t6++) {
                  B[(-2*t4+t6)-1][(-2*t4+t5)] = D[(-2*t4+t5)][t4] - E[(-2*t4+t5)-1][(-2*t4+t6)][0] * E[(-2*t4+t6)][(-2*t4+t5)][(-2*t4+t6)] - E[(-2*t4+t6)+t4][(-2*t4+t5)+1][t4] + B[(-2*t4+t6)-1][(-2*t4+t5)+1] - B[(-2*t4+t5)-1][(-2*t4+t6)+2] - 3;;
                }
              }
            }
          }
          if ((PB_L >= 4) && (t1 == 0) && (t2 == 0) && (t3 == 0)) {
            for (t4=2;t4<=min(min(15,PB_L-1),PB_M-3);t4++) {
              A[t4-1] = C[t4+2] - C[t4] + A[t4-2] + 6;;
              for (t5=2*t4+1;t5<=min(31,2*t4+PB_L-2);t5++) {
                for (t6=2*t4+1;t6<=min(min(t5,t4+PB_M-1),2*t4+PB_L-3);t6++) {
                  B[(-2*t4+t6)-1][(-2*t4+t5)] = D[(-2*t4+t5)][t4] - E[(-2*t4+t5)-1][(-2*t4+t6)][0] * E[(-2*t4+t6)][(-2*t4+t5)][(-2*t4+t6)] - E[(-2*t4+t6)+t4][(-2*t4+t5)+1][t4] + B[(-2*t4+t6)-1][(-2*t4+t5)+1] - B[(-2*t4+t5)-1][(-2*t4+t6)+2] - 3;;
                }
              }
            }
          }
          if ((PB_L >= 4) && (t1 == 0) && (t2 == 0) && (t3 == 0)) {
            for (t4=PB_L;t4<=min(15,PB_M-3);t4++) {
              A[t4-1] = C[t4+2] - C[t4] + A[t4-2] + 6;;
            }
          }
          if ((PB_L >= 4) && (PB_M <= min(17,PB_L+1)) && (PB_M >= 4) && (t1 == 0) && (t2 == 0) && (t3 == 0)) {
            for (t5=2*PB_M-3;t5<=min(31,2*PB_M+PB_L-6);t5++) {
              B[1 -1][(t5-2*PB_M+4)] = D[(t5-2*PB_M+4)][(PB_M-2)] - E[(t5-2*PB_M+4)-1][1][0] * E[1][(t5-2*PB_M+4)][1] - E[1 +(PB_M-2)][(t5-2*PB_M+4)+1][(PB_M-2)] + B[1 -1][(t5-2*PB_M+4)+1] - B[(t5-2*PB_M+4)-1][1 +2] - 3;;
            }
          }
          if ((PB_L >= 4) && (t2 == 0) && (t3 == 0)) {
            for (t4=max(16,32*t1);t4<=min(PB_M-3,32*t1+31);t4++) {
              A[t4-1] = C[t4+2] - C[t4] + A[t4-2] + 6;;
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
int xb = xB;
int yb = yB;
int xc = xC;
int xd = xD;
int yd = yD;
int xe = xE;
int ye = yE;
int ze = zE;
POLYBENCH_1D_ARRAY_DECL(A, DATA_TYPE, xA,xa);
POLYBENCH_2D_ARRAY_DECL(B, DATA_TYPE, xB,yB,xb,yb);
POLYBENCH_1D_ARRAY_DECL(C, DATA_TYPE, xC,xc);
POLYBENCH_2D_ARRAY_DECL(D, DATA_TYPE, xD,yD,xd,yd);
POLYBENCH_3D_ARRAY_DECL(E, DATA_TYPE, xE,yE,zE,xe,ye,ze);
init_array(xa,POLYBENCH_ARRAY(A), xb,yb,POLYBENCH_ARRAY(B), xc,POLYBENCH_ARRAY(C), xd,yd,POLYBENCH_ARRAY(D), xe,ye,ze,POLYBENCH_ARRAY(E), INIT_SEED);
kernel_3212132223_01(xa,POLYBENCH_ARRAY(A), xb,yb,POLYBENCH_ARRAY(B), xc,POLYBENCH_ARRAY(C), xd,yd,POLYBENCH_ARRAY(D), xe,ye,ze,POLYBENCH_ARRAY(E));
polybench_prevent_dce(print_array(xa,POLYBENCH_ARRAY(A), xb,yb,POLYBENCH_ARRAY(B), xc,POLYBENCH_ARRAY(C), xd,yd,POLYBENCH_ARRAY(D), xe,ye,ze,POLYBENCH_ARRAY(E)));
POLYBENCH_FREE_ARRAY(A);
POLYBENCH_FREE_ARRAY(B);
POLYBENCH_FREE_ARRAY(C);
POLYBENCH_FREE_ARRAY(D);
POLYBENCH_FREE_ARRAY(E);
return 0;
}
