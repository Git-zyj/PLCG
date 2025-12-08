#include <stdio.h>
#include <unistd.h>
#include <string.h>
#include <math.h>
#include "polybench.h"
#include <time.h>
#include <stdlib.h>
#include "3224112221_01.h"
#include <omp.h>
#define ceild(n,d)  ceil(((double)(n))/((double)(d)))
#define floord(n,d) floor(((double)(n))/((double)(d)))
/*
arg_depth: 3
arg_nstmts: 2
arg_bounds_index: 2
arg_prob_bounds_exist: 4
arg_narrays_per_dim: 1
arg_avg_narrays_read_per_stmt: 1
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
static void init_array(int xa,int ya,DATA_TYPE POLYBENCH_2D(A,xA,yA,xa,ya),int xb,int yb,int zb,DATA_TYPE POLYBENCH_3D(B,xB,yB,zB,xb,yb,zb),int xc,int yc,int zc,DATA_TYPE POLYBENCH_3D(C,xC,yC,zC,xc,yc,zc),int seed)
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
        for (i_2 = 0; i_2 < zc; i_2++) {
            C[i_0][i_1][i_2] = 0.9 + (rand() / (DATA_TYPE)RAND_MAX) * (1.1 - 0.9);
        }
    }
}
}
static void print_array(int xa,int ya,DATA_TYPE POLYBENCH_2D(A,xA,yA,xa,ya),int xb,int yb,int zb,DATA_TYPE POLYBENCH_3D(B,xB,yB,zB,xb,yb,zb),int xc,int yc,int zc,DATA_TYPE POLYBENCH_3D(C,xC,yC,zC,xc,yc,zc))
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
            for (i_2 = 0; i_2 < zc; i_2++) {
                fprintf(POLYBENCH_DUMP_TARGET, "\n");
                fprintf (POLYBENCH_DUMP_TARGET, DATA_PRINTF_MODIFIER, C[i_0][i_1][i_2]);
            }
        }
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
#endif
POLYBENCH_DUMP_FINISH;
}
void kernel_3224112221_01(int xa,int ya,DATA_TYPE POLYBENCH_2D(A,xA,yA,xa,ya),int xb,int yb,int zb,DATA_TYPE POLYBENCH_3D(B,xB,yB,zB,xb,yb,zb),int xc,int yc,int zc,DATA_TYPE POLYBENCH_3D(C,xC,yC,zC,xc,yc,zc)){
polybench_start_instruments;
  int t1, t2, t3, t4, t5, t6;
 int lb, ub, lbp, ubp, lb2, ub2;
 register int lbv, ubv;
/* Start of CLooG code */
if ((PB_M >= 1) && (PB_P >= 7)) {
  lbp=0;
  ubp=floord(3*PB_M-1,32);
#pragma omp parallel for private(lbv,ubv,t2,t3,t4,t5,t6)
  for (t1=lbp;t1<=ubp;t1++) {
    for (t2=0;t2<=floord(PB_P-3,32);t2++) {
      for (t3=max(max(0,ceild(96*t1-3*PB_M-127,192)),ceild(96*t1+192*t2-6*PB_P-3*PB_M-85,192));t3<=min(min(floord(PB_P+PB_M-3,32),floord(16*t1+PB_P+11,32)),floord(2*PB_P+7*PB_M-21,64));t3++) {
        if (t2 >= max(ceild(-32*t3+PB_P-2,32),ceild(32*t3-PB_M-31,32))) {
          for (t4=max(max(max(8,32*t1),-64*t2+64*t3-60),64*t3-2*PB_P+8);t4<=min(min(min(3*PB_M-1,32*t1+31),96*t3+80),-96*t2+96*t3+92);t4++) {
            for (t5=max(max(ceild(t4+13,3),ceild(96*t2+t4+1,3)),32*t3);t5<=min(min(min(min(floord(64*t2+t4+60,2),floord(t4+2*PB_P-8,2)),32*t3+31),PB_P+PB_M-3),32*t2+PB_M+31);t5++) {
              for (t6=max(max(max(4,ceild(-t4+2*t5+2,2)),32*t2),t5-PB_M);t6<=min(min(floord(-t4+3*t5-1,3),PB_P-3),32*t2+31);t6++) {
                A[(t5-t6)-2][(t4-2*t5+2*t6)] = C[(t4-2*t5+2*t6)-1][t6-1][(t5-t6)] - A[(t5-t6)-1][(t4-2*t5+2*t6)-2] + 1;;
              }
            }
          }
        }
        if ((t2 == 0) && (t3 <= min(floord(PB_M+31,32),floord(PB_P-3,32))) && (t3 >= ceild(PB_P-6,32))) {
          for (t4=max(max(8,32*t1),64*t3-60);t4<=min(min(3*PB_M-1,32*t1+31),96*t3+80);t4++) {
            for (t5=max(ceild(t4+13,3),32*t3);t5<=min(min(floord(t4+60,2),PB_M+31),32*t3+31);t5++) {
              for (t6=max(max(4,ceild(-t4+2*t5+2,2)),t5-PB_M);t6<=min(31,floord(-t4+3*t5-1,3));t6++) {
                A[(t5-t6)-2][(t4-2*t5+2*t6)] = C[(t4-2*t5+2*t6)-1][t6-1][(t5-t6)] - A[(t5-t6)-1][(t4-2*t5+2*t6)-2] + 1;;
              }
            }
          }
        }
        if ((t1 == 0) && (t2 <= floord(-32*t3+PB_P-3,32)) && (t3 <= floord(PB_P-7,32))) {
          for (t4=1;t4<=min(7,PB_M);t4++) {
            for (t5=32*t3;t5<=min(min(PB_P-7,32*t3+31),-32*t2+PB_P-3);t5++) {
              for (t6=max(4,32*t2);t6<=min(32*t2+31,-t5+PB_P-3);t6++) {
                B[t4-1][t5+2][t5+t6] = B[t4-1][t5+2][t5+t6-2] - B[t4-1][t5+4][t5+t6+2] + B[t4-1][t5][t5+t6-4] * 5;;
              }
            }
          }
        }
        if ((t2 <= floord(-32*t3+PB_P-3,32)) && (t3 <= floord(PB_P-7,32))) {
          for (t4=max(8,32*t1);t4<=min(min(PB_M,32*t1+31),-64*t2+64*t3-61);t4++) {
            for (t5=32*t3;t5<=min(min(PB_P-7,32*t3+31),-32*t2+PB_P-3);t5++) {
              for (t6=max(4,32*t2);t6<=min(32*t2+31,-t5+PB_P-3);t6++) {
                B[t4-1][t5+2][t5+t6] = B[t4-1][t5+2][t5+t6-2] - B[t4-1][t5+4][t5+t6+2] + B[t4-1][t5][t5+t6-4] * 5;;
              }
            }
          }
        }
        if ((t2 <= floord(-32*t3+PB_P-3,32)) && (t3 <= floord(PB_P-7,32))) {
          for (t4=max(max(8,32*t1),-64*t2+64*t3-60);t4<=min(min(min(PB_M,32*t1+31),96*t3+80),-96*t2+96*t3+92);t4++) {
            for (t5=32*t3;t5<=min(min(floord(96*t2+t4,3),PB_P-7),-32*t2+PB_P-3);t5++) {
              for (t6=max(4,32*t2);t6<=min(32*t2+31,-t5+PB_P-3);t6++) {
                B[t4-1][t5+2][t5+t6] = B[t4-1][t5+2][t5+t6-2] - B[t4-1][t5+4][t5+t6+2] + B[t4-1][t5][t5+t6-4] * 5;;
              }
            }
            if (t2 == 0) {
              for (t5=max(ceild(t4+1,3),32*t3);t5<=min(floord(t4+12,3),PB_P-7);t5++) {
                for (t6=4;t6<=min(31,-t5+PB_P-3);t6++) {
                  B[t4-1][t5+2][t5+t6] = B[t4-1][t5+2][t5+t6-2] - B[t4-1][t5+4][t5+t6+2] + B[t4-1][t5][t5+t6-4] * 5;;
                }
              }
            }
            for (t5=max(max(ceild(t4+13,3),ceild(96*t2+t4+1,3)),32*t3);t5<=min(min(min(floord(64*t2+t4+60,2),PB_P-7),32*t3+31),-32*t2+PB_P-3);t5++) {
              for (t6=max(4,32*t2);t6<=min(floord(-t4+2*t5+1,2),-t5+PB_P-3);t6++) {
                B[t4-1][t5+2][t5+t6] = B[t4-1][t5+2][t5+t6-2] - B[t4-1][t5+4][t5+t6+2] + B[t4-1][t5][t5+t6-4] * 5;;
              }
              for (t6=max(max(4,ceild(-t4+2*t5+2,2)),32*t2);t6<=min(min(floord(-t4+3*t5-1,3),32*t2+31),-t5+PB_P-3);t6++) {
                A[(t5-t6)-2][(t4-2*t5+2*t6)] = C[(t4-2*t5+2*t6)-1][t6-1][(t5-t6)] - A[(t5-t6)-1][(t4-2*t5+2*t6)-2] + 1;;
                B[t4-1][t5+2][t5+t6] = B[t4-1][t5+2][t5+t6-2] - B[t4-1][t5+4][t5+t6+2] + B[t4-1][t5][t5+t6-4] * 5;;
              }
              for (t6=max(ceild(-t4+2*t5+2,2),-t5+PB_P-2);t6<=min(floord(-t4+3*t5-1,3),32*t2+31);t6++) {
                A[(t5-t6)-2][(t4-2*t5+2*t6)] = C[(t4-2*t5+2*t6)-1][t6-1][(t5-t6)] - A[(t5-t6)-1][(t4-2*t5+2*t6)-2] + 1;;
              }
              for (t6=ceild(-t4+3*t5,3);t6<=min(32*t2+31,-t5+PB_P-3);t6++) {
                B[t4-1][t5+2][t5+t6] = B[t4-1][t5+2][t5+t6-2] - B[t4-1][t5+4][t5+t6+2] + B[t4-1][t5][t5+t6-4] * 5;;
              }
            }
            if (t2 == 0) {
              for (t5=max(ceild(t4+13,3),PB_P-6);t5<=min(min(floord(t4+60,2),PB_P-3),32*t3+31);t5++) {
                for (t6=max(4,ceild(-t4+2*t5+2,2));t6<=min(31,floord(-t4+3*t5-1,3));t6++) {
                  A[(t5-t6)-2][(t4-2*t5+2*t6)] = C[(t4-2*t5+2*t6)-1][t6-1][(t5-t6)] - A[(t5-t6)-1][(t4-2*t5+2*t6)-2] + 1;;
                }
              }
            }
            for (t5=ceild(64*t2+t4+61,2);t5<=min(min(PB_P-7,32*t3+31),-32*t2+PB_P-3);t5++) {
              for (t6=max(4,32*t2);t6<=min(32*t2+31,-t5+PB_P-3);t6++) {
                B[t4-1][t5+2][t5+t6] = B[t4-1][t5+2][t5+t6-2] - B[t4-1][t5+4][t5+t6+2] + B[t4-1][t5][t5+t6-4] * 5;;
              }
            }
            for (t5=max(max(ceild(t4+13,3),ceild(96*t2+t4+1,3)),-32*t2+PB_P-2);t5<=min(min(floord(64*t2+t4+60,2),floord(t4+2*PB_P-8,2)),32*t3+31);t5++) {
              for (t6=max(max(4,ceild(-t4+2*t5+2,2)),32*t2);t6<=min(min(floord(-t4+3*t5-1,3),PB_P-3),32*t2+31);t6++) {
                A[(t5-t6)-2][(t4-2*t5+2*t6)] = C[(t4-2*t5+2*t6)-1][t6-1][(t5-t6)] - A[(t5-t6)-1][(t4-2*t5+2*t6)-2] + 1;;
              }
            }
          }
        }
        if ((t2 <= floord(-32*t3+PB_P-3,32)) && (t2 >= ceild(32*t3-PB_M-31,32)) && (t3 <= floord(PB_P-7,32))) {
          for (t4=max(max(max(8,32*t1),PB_M+1),-64*t2+64*t3-60);t4<=min(min(min(3*PB_M-1,32*t1+31),96*t3+80),-96*t2+96*t3+92);t4++) {
            for (t5=max(max(ceild(t4+13,3),ceild(96*t2+t4+1,3)),32*t3);t5<=min(min(min(min(floord(64*t2+t4+60,2),floord(t4+2*PB_P-8,2)),32*t3+31),PB_P+PB_M-3),32*t2+PB_M+31);t5++) {
              for (t6=max(max(max(4,ceild(-t4+2*t5+2,2)),32*t2),t5-PB_M);t6<=min(min(floord(-t4+3*t5-1,3),PB_P-3),32*t2+31);t6++) {
                A[(t5-t6)-2][(t4-2*t5+2*t6)] = C[(t4-2*t5+2*t6)-1][t6-1][(t5-t6)] - A[(t5-t6)-1][(t4-2*t5+2*t6)-2] + 1;;
              }
            }
          }
        }
        if ((t1 == 3*t3+2) && (t1 <= floord(3*PB_P+43,32)) && (t2 == 0)) {
          for (t4=32*t1+17;t4<=min(PB_M,32*t1+28);t4++) {
            for (t5=ceild(32*t1-64,3);t5<=min(floord(32*t1+29,3),PB_P-7);t5++) {
              for (t6=4;t6<=min(31,-t5+PB_P-3);t6++) {
                if ((t1+1)%3 == 0) {
                  B[t4-1][t5+2][t5+t6] = B[t4-1][t5+2][t5+t6-2] - B[t4-1][t5+4][t5+t6+2] + B[t4-1][t5][t5+t6-4] * 5;;
                }
              }
            }
          }
        }
        if ((t2 <= floord(-32*t3+PB_P-3,32)) && (t3 <= floord(PB_P-7,32))) {
          for (t4=max(max(8,32*t1),-96*t2+96*t3+93);t4<=min(PB_M,32*t1+31);t4++) {
            for (t5=32*t3;t5<=min(min(PB_P-7,32*t3+31),-32*t2+PB_P-3);t5++) {
              for (t6=max(4,32*t2);t6<=min(32*t2+31,-t5+PB_P-3);t6++) {
                B[t4-1][t5+2][t5+t6] = B[t4-1][t5+2][t5+t6-2] - B[t4-1][t5+4][t5+t6+2] + B[t4-1][t5][t5+t6-4] * 5;;
              }
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
int zb = zB;
int xc = xC;
int yc = yC;
int zc = zC;
POLYBENCH_2D_ARRAY_DECL(A, DATA_TYPE, xA,yA,xa,ya);
POLYBENCH_3D_ARRAY_DECL(B, DATA_TYPE, xB,yB,zB,xb,yb,zb);
POLYBENCH_3D_ARRAY_DECL(C, DATA_TYPE, xC,yC,zC,xc,yc,zc);
init_array(xa,ya,POLYBENCH_ARRAY(A), xb,yb,zb,POLYBENCH_ARRAY(B), xc,yc,zc,POLYBENCH_ARRAY(C), INIT_SEED);
kernel_3224112221_01(xa,ya,POLYBENCH_ARRAY(A), xb,yb,zb,POLYBENCH_ARRAY(B), xc,yc,zc,POLYBENCH_ARRAY(C));
polybench_prevent_dce(print_array(xa,ya,POLYBENCH_ARRAY(A), xb,yb,zb,POLYBENCH_ARRAY(B), xc,yc,zc,POLYBENCH_ARRAY(C)));
POLYBENCH_FREE_ARRAY(A);
POLYBENCH_FREE_ARRAY(B);
POLYBENCH_FREE_ARRAY(C);
return 0;
}
