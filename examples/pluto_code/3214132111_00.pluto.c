#include <stdio.h>
#include <unistd.h>
#include <string.h>
#include <math.h>
#include "polybench.h"
#include <time.h>
#include <stdlib.h>
#include "3214132111_00.h"
#include <omp.h>
#define ceild(n,d)  ceil(((double)(n))/((double)(d)))
#define floord(n,d) floor(((double)(n))/((double)(d)))
/*
arg_depth: 3
arg_nstmts: 2
arg_bounds_index: 1
arg_prob_bounds_exist: 4
arg_narrays_per_dim: 1
arg_avg_narrays_read_per_stmt: 3
arg_bounds_coef: 2
arg_avg_ndeps_read_per_stmt: 1
arg_bounds_distance: 1
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
static void init_array(int xa,DATA_TYPE POLYBENCH_1D(A,xA,xa),int xb,int yb,int zb,DATA_TYPE POLYBENCH_3D(B,xB,yB,zB,xb,yb,zb),int xc,DATA_TYPE POLYBENCH_1D(C,xC,xc),int xd,int yd,int zd,int vd,DATA_TYPE POLYBENCH_4D(D,xD,yD,zD,vD,xd,yd,zd,vd),int seed)
{
srand(seed);
int i_0, i_1, i_2, i_3;
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
    C[i_0] = 0.9 + (rand() / (DATA_TYPE)RAND_MAX) * (1.1 - 0.9);
}
for (i_0 = 0; i_0 < xd; i_0++) {
    for (i_1 = 0; i_1 < yd; i_1++) {
        for (i_2 = 0; i_2 < zd; i_2++) {
            for (i_3 = 0; i_3 < vd; i_3++) {
                D[i_0][i_1][i_2][i_3] = 0.9 + (rand() / (DATA_TYPE)RAND_MAX) * (1.1 - 0.9);
            }
        }
    }
}
}
static void print_array(int xa,DATA_TYPE POLYBENCH_1D(A,xA,xa),int xb,int yb,int zb,DATA_TYPE POLYBENCH_3D(B,xB,yB,zB,xb,yb,zb),int xc,DATA_TYPE POLYBENCH_1D(C,xC,xc),int xd,int yd,int zd,int vd,DATA_TYPE POLYBENCH_4D(D,xD,yD,zD,vD,xd,yd,zd,vd))
{
int i_0, i_1, i_2, i_3;
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
        fprintf(POLYBENCH_DUMP_TARGET, "\n");
        fprintf (POLYBENCH_DUMP_TARGET, DATA_PRINTF_MODIFIER, C[i_0]);
    }
    POLYBENCH_DUMP_END("C");
    POLYBENCH_DUMP_BEGIN("D");
    for (i_0 = 0; i_0 < xd; i_0++) {
        for (i_1 = 0; i_1 < yd; i_1++) {
            for (i_2 = 0; i_2 < zd; i_2++) {
                for (i_3 = 0; i_3 < vd; i_3++) {
                    fprintf(POLYBENCH_DUMP_TARGET, "\n");
                    fprintf (POLYBENCH_DUMP_TARGET, DATA_PRINTF_MODIFIER, D[i_0][i_1][i_2][i_3]);
                }
            }
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
        sum_C += C[i_0];
    }
    fprintf(POLYBENCH_DUMP_TARGET, "\nsum: ");
    fprintf (POLYBENCH_DUMP_TARGET, DATA_PRINTF_MODIFIER, sum_C);
    POLYBENCH_DUMP_END("C");
    POLYBENCH_DUMP_BEGIN("D");
    DATA_TYPE sum_D = 0;
    for (i_0 = 0; i_0 < xd; i_0++) {
        for (i_1 = 0; i_1 < yd; i_1++) {
            for (i_2 = 0; i_2 < zd; i_2++) {
                for (i_3 = 0; i_3 < vd; i_3++) {
                    sum_D += D[i_0][i_1][i_2][i_3];
                }
            }
        }
    }
    fprintf(POLYBENCH_DUMP_TARGET, "\nsum: ");
    fprintf (POLYBENCH_DUMP_TARGET, DATA_PRINTF_MODIFIER, sum_D);
    POLYBENCH_DUMP_END("D");
#endif
POLYBENCH_DUMP_FINISH;
}
void kernel_3214132111_00(int xa,DATA_TYPE POLYBENCH_1D(A,xA,xa),int xb,int yb,int zb,DATA_TYPE POLYBENCH_3D(B,xB,yB,zB,xb,yb,zb),int xc,DATA_TYPE POLYBENCH_1D(C,xC,xc),int xd,int yd,int zd,int vd,DATA_TYPE POLYBENCH_4D(D,xD,yD,zD,vD,xd,yd,zd,vd)){
polybench_start_instruments;
  int t1, t2, t3, t4, t5, t6;
 int lb, ub, lbp, ubp, lb2, ub2;
 register int lbv, ubv;
/* Start of CLooG code */
if (PB_M >= 4) {
  if (PB_N >= 0) {
    for (t1=0;t1<=floord(PB_M+PB_N-2,32);t1++) {
      for (t2=0;t2<=min(min(min(floord(PB_M-2,32),floord(PB_M+PB_N-4,32)),floord(-32*t1+PB_M+PB_N-2,32)),floord(-64*t1+3*PB_M+2*PB_N-8,96));t2++) {
        for (t3=2*t2;t3<=min(min(min(min(min(min(floord(3*PB_M-7,32),floord(64*t2+PB_M+59,32)),floord(-32*t1+64*t2+PB_M+PB_N+58,32)),floord(-32*t1+64*t2+PB_M+31*PB_N-2,32)),floord(6*PB_M+5*PB_N-24,64)),floord(128*t2+2*PB_M+63*PB_N-8,64)),floord(-736*t1+32*t2+23*PB_M+23*PB_N-46,256));t3++) {
          if ((PB_M == 4) && (t1 == 0) && (t2 == 0) && (t3 == 0)) {
            A[2] = C[2] - C[2 -2] + C[2] * C[2] - C[2] + A[2 +1] + 6;;
          }
          if (t3 >= 1) {
            for (t4=max(1,32*t1);t4<=min(PB_N-1,32*t1+31);t4++) {
              for (t5=max(max(2,ceild(32*t3-PB_M+3,2)),32*t2);t5<=min(min(PB_M-2,32*t2+31),16*t3+14);t5++) {
                for (t6=max(32*t3,2*t5+2);t6<=min(32*t3+31,2*t5+PB_M-3);t6++) {
                  B[t4][(-2*t5+t6)+2][t5-2] = D[t5][(-2*t5+t6)][t4-1][t4+2] + B[t4][t5+1][(-2*t5+t6)-2] * 5;;
                }
              }
            }
          }
          if ((PB_M >= 5) && (PB_N >= 2) && (t1 == 0) && (t2 == 0) && (t3 == 0)) {
            for (t5=2;t5<=min(14,PB_M-2);t5++) {
              for (t6=2*t5+2;t6<=min(31,2*t5+PB_M-3);t6++) {
                B[1][(-2*t5+t6)+2][t5-2] = D[t5][(-2*t5+t6)][1 -1][1 +2] + B[1][t5+1][(-2*t5+t6)-2] * 5;;
              }
            }
          }
          if ((PB_M >= 5) && (t2 == 0) && (t3 == 0)) {
            for (t4=max(2,32*t1);t4<=min(min(PB_M-2,PB_N-1),32*t1+31);t4++) {
              A[t4] = C[t4] - C[t4-2] + C[t4] * C[t4] - C[t4] + A[t4+1] + 6;;
              for (t5=2;t5<=min(14,PB_M-2);t5++) {
                for (t6=2*t5+2;t6<=min(31,2*t5+PB_M-3);t6++) {
                  B[t4][(-2*t5+t6)+2][t5-2] = D[t5][(-2*t5+t6)][t4-1][t4+2] + B[t4][t5+1][(-2*t5+t6)-2] * 5;;
                }
              }
            }
          }
          if ((PB_M >= 5) && (t2 == 0) && (t3 == 0)) {
            for (t4=max(max(2,PB_N),32*t1);t4<=min(PB_M-2,32*t1+31);t4++) {
              A[t4] = C[t4] - C[t4-2] + C[t4] * C[t4] - C[t4] + A[t4+1] + 6;;
            }
          }
          if ((PB_M >= 5) && (t2 == 0) && (t3 == 0)) {
            for (t4=max(32*t1,PB_M-1);t4<=min(PB_N-1,32*t1+31);t4++) {
              for (t5=2;t5<=min(14,PB_M-2);t5++) {
                for (t6=2*t5+2;t6<=min(31,2*t5+PB_M-3);t6++) {
                  B[t4][(-2*t5+t6)+2][t5-2] = D[t5][(-2*t5+t6)][t4-1][t4+2] + B[t4][t5+1][(-2*t5+t6)-2] * 5;;
                }
              }
            }
          }
        }
      }
    }
  }
  if (PB_N <= -1) {
    for (t1=0;t1<=floord(PB_M-2,32);t1++) {
      for (t4=max(2,32*t1);t4<=min(PB_M-2,32*t1+31);t4++) {
        A[t4] = C[t4] - C[t4-2] + C[t4] * C[t4] - C[t4] + A[t4+1] + 6;;
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
int xd = xD;
int yd = yD;
int zd = zD;
int vd = vD;
POLYBENCH_1D_ARRAY_DECL(A, DATA_TYPE, xA,xa);
POLYBENCH_3D_ARRAY_DECL(B, DATA_TYPE, xB,yB,zB,xb,yb,zb);
POLYBENCH_1D_ARRAY_DECL(C, DATA_TYPE, xC,xc);
POLYBENCH_4D_ARRAY_DECL(D, DATA_TYPE, xD,yD,zD,vD,xd,yd,zd,vd);
init_array(xa,POLYBENCH_ARRAY(A), xb,yb,zb,POLYBENCH_ARRAY(B), xc,POLYBENCH_ARRAY(C), xd,yd,zd,vd,POLYBENCH_ARRAY(D), INIT_SEED);
kernel_3214132111_00(xa,POLYBENCH_ARRAY(A), xb,yb,zb,POLYBENCH_ARRAY(B), xc,POLYBENCH_ARRAY(C), xd,yd,zd,vd,POLYBENCH_ARRAY(D));
polybench_prevent_dce(print_array(xa,POLYBENCH_ARRAY(A), xb,yb,zb,POLYBENCH_ARRAY(B), xc,POLYBENCH_ARRAY(C), xd,yd,zd,vd,POLYBENCH_ARRAY(D)));
POLYBENCH_FREE_ARRAY(A);
POLYBENCH_FREE_ARRAY(B);
POLYBENCH_FREE_ARRAY(C);
POLYBENCH_FREE_ARRAY(D);
return 0;
}
