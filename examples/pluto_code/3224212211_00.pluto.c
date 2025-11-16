#include <stdio.h>
#include <unistd.h>
#include <string.h>
#include <math.h>
#include "polybench.h"
#include <time.h>
#include <stdlib.h>
#include "3224212211_00.h"
#include <omp.h>
#define ceild(n,d)  ceil(((double)(n))/((double)(d)))
#define floord(n,d) floor(((double)(n))/((double)(d)))
/*
arg_depth: 3
arg_nstmts: 2
arg_bounds_index: 2
arg_prob_bounds_exist: 4
arg_narrays_per_dim: 2
arg_avg_narrays_read_per_stmt: 1
arg_bounds_coef: 2
arg_avg_ndeps_read_per_stmt: 2
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
static void init_array(int xa,int ya,int za,DATA_TYPE POLYBENCH_3D(A,xA,yA,zA,xa,ya,za),int xb,int yb,int zb,DATA_TYPE POLYBENCH_3D(B,xB,yB,zB,xb,yb,zb),int xc,int yc,int zc,DATA_TYPE POLYBENCH_3D(C,xC,yC,zC,xc,yc,zc),int xd,int yd,int zd,DATA_TYPE POLYBENCH_3D(D,xD,yD,zD,xd,yd,zd),int seed)
{
srand(seed);
int i_0, i_1, i_2;
for (i_0 = 0; i_0 < xa; i_0++) {
    for (i_1 = 0; i_1 < ya; i_1++) {
        for (i_2 = 0; i_2 < za; i_2++) {
            A[i_0][i_1][i_2] = 0.9 + (rand() / (DATA_TYPE)RAND_MAX) * (1.1 - 0.9);
        }
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
for (i_0 = 0; i_0 < xd; i_0++) {
    for (i_1 = 0; i_1 < yd; i_1++) {
        for (i_2 = 0; i_2 < zd; i_2++) {
            D[i_0][i_1][i_2] = 0.9 + (rand() / (DATA_TYPE)RAND_MAX) * (1.1 - 0.9);
        }
    }
}
}
static void print_array(int xa,int ya,int za,DATA_TYPE POLYBENCH_3D(A,xA,yA,zA,xa,ya,za),int xb,int yb,int zb,DATA_TYPE POLYBENCH_3D(B,xB,yB,zB,xb,yb,zb),int xc,int yc,int zc,DATA_TYPE POLYBENCH_3D(C,xC,yC,zC,xc,yc,zc),int xd,int yd,int zd,DATA_TYPE POLYBENCH_3D(D,xD,yD,zD,xd,yd,zd))
{
int i_0, i_1, i_2;
POLYBENCH_DUMP_START;
#ifdef CHECKELEM
    POLYBENCH_DUMP_BEGIN("A");
    for (i_0 = 0; i_0 < xa; i_0++) {
        for (i_1 = 0; i_1 < ya; i_1++) {
            for (i_2 = 0; i_2 < za; i_2++) {
                fprintf(POLYBENCH_DUMP_TARGET, "\n");
                fprintf (POLYBENCH_DUMP_TARGET, DATA_PRINTF_MODIFIER, A[i_0][i_1][i_2]);
            }
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
#endif
#ifdef CHECKSUM
    POLYBENCH_DUMP_BEGIN("A");
    DATA_TYPE sum_A = 0;
    for (i_0 = 0; i_0 < xa; i_0++) {
        for (i_1 = 0; i_1 < ya; i_1++) {
            for (i_2 = 0; i_2 < za; i_2++) {
                sum_A += A[i_0][i_1][i_2];
            }
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
#endif
POLYBENCH_DUMP_FINISH;
}
void kernel_3224212211_00(int xa,int ya,int za,DATA_TYPE POLYBENCH_3D(A,xA,yA,zA,xa,ya,za),int xb,int yb,int zb,DATA_TYPE POLYBENCH_3D(B,xB,yB,zB,xb,yb,zb),int xc,int yc,int zc,DATA_TYPE POLYBENCH_3D(C,xC,yC,zC,xc,yc,zc),int xd,int yd,int zd,DATA_TYPE POLYBENCH_3D(D,xD,yD,zD,xd,yd,zd)){
polybench_start_instruments;
  int t1, t2, t3, t4, t5, t6, t7;
 int lb, ub, lbp, ubp, lb2, ub2;
 register int lbv, ubv;
/* Start of CLooG code */
if ((PB_L >= 2) && (PB_Q >= 1)) {
  for (t1=0;t1<=floord(2*PB_L+PB_Q-5,32);t1++) {
    lbp=max(ceild(t1,2),ceild(32*t1-PB_L+2,32));
    ubp=min(min(floord(PB_L+PB_Q-3,32),floord(32*t1+PB_Q+30,64)),t1);
#pragma omp parallel for private(lbv,ubv,t3,t4,t5,t6,t7)
    for (t2=lbp;t2<=ubp;t2++) {
      if ((PB_L >= -2*PB_M+4) && (PB_M >= 0) && (PB_Q >= -PB_M+2) && (t2 <= floord(2*PB_L+PB_Q+3*PB_M-8,32))) {
        for (t3=0;t3<=min(min(min(floord(PB_L+PB_M-1,32),floord(32*t1-64*t2+PB_L+33*PB_Q+PB_M-35,32)),floord(3*PB_L+2*PB_M-6,64)),floord(-32*t2+5*PB_L+PB_Q+3*PB_M-11,96));t3++) {
          if (PB_M == 0) {
            for (t4=max(max(max(2,32*t1-32*t2),16*t2+1),32*t2-PB_Q+1);t4<=min(min(PB_L-2,32*t2+30),32*t1-32*t2+31);t4++) {
              for (t5=max(32*t2,t4+1);t5<=min(min(32*t2+31,2*t4-1),t4+PB_Q-1);t5++) {
                for (t6=max(1,32*t3);t6<=min(PB_L-1,32*t3+31);t6++) {
                  A[t4][(-t4+t5)][t6+1] = C[(-t4+t5)][t4][t6] * A[t4+1][(-t4+t5)-1][t6+1] + A[t4][(-t4+t5)][t6+2] - B[t4+1][t6-1][(-t4+t5)] - 1;;
                }
              }
            }
          }
          if ((PB_M >= 1) && (PB_Q >= 2) && (t3 <= floord(PB_L-1,32)) && (t3 >= ceild(PB_M+1,32))) {
            for (t4=max(max(max(2,32*t1-32*t2),16*t2+1),32*t2-PB_Q+1);t4<=min(min(PB_L-2,32*t2+30),32*t1-32*t2+31);t4++) {
              for (t5=max(32*t2,t4+1);t5<=min(min(32*t2+31,2*t4-1),t4+PB_Q-1);t5++) {
                for (t6=32*t3;t6<=min(PB_L-1,32*t3+31);t6++) {
                  A[t4][(-t4+t5)][t6+1] = C[(-t4+t5)][t4][t6] * A[t4+1][(-t4+t5)-1][t6+1] + A[t4][(-t4+t5)][t6+2] - B[t4+1][t6-1][(-t4+t5)] - 1;;
                }
              }
            }
          }
          if ((PB_Q == 1) && (t1 == 2*t2) && (t3 <= floord(PB_M,32))) {
            for (t4=16*t1;t4<=min(PB_L-2,16*t1+31);t4++) {
              for (t6=max(1,32*t3);t6<=min(PB_M,32*t3+31);t6++) {
                if (t1%2 == 0) {
                  B[t4+1][(t6-1)][0] = D[(t6-1)][t4][0] - B[t4][(t6-1)][0] - 4;;
                }
              }
            }
          }
          if ((PB_Q >= 2) && (t3 <= floord(PB_M,32)) && (t3 >= ceild(PB_L,32))) {
            for (t4=max(32*t1-32*t2,32*t2-PB_Q+1);t4<=min(PB_L-2,32*t1-32*t2+31);t4++) {
              for (t5=max(32*t2,t4);t5<=min(32*t2+31,t4+PB_Q-1);t5++) {
                for (t6=32*t3;t6<=min(PB_M,32*t3+31);t6++) {
                  B[t4+1][(t6-1)][(-t4+t5)] = D[(t6-1)][t4][(-t4+t5)] - B[t4][(t6-1)][(-t4+t5)] - 4;;
                }
              }
            }
          }
          if ((PB_M >= 1) && (PB_Q >= 2) && (t3 <= min(floord(PB_M,32),floord(PB_L-1,32)))) {
            for (t4=max(32*t1-32*t2,32*t2-PB_Q+1);t4<=min(min(16*t2,PB_L-2),32*t1-32*t2+31);t4++) {
              for (t5=32*t2;t5<=min(32*t2+31,t4+PB_Q-1);t5++) {
                for (t6=max(1,32*t3);t6<=min(PB_M,32*t3+31);t6++) {
                  B[t4+1][(t6-1)][(-t4+t5)] = D[(t6-1)][t4][(-t4+t5)] - B[t4][(t6-1)][(-t4+t5)] - 4;;
                }
              }
            }
          }
          if ((PB_L >= 3) && (PB_M >= 1) && (PB_Q >= 2) && (t1 == 0) && (t2 == 0) && (t3 <= min(floord(PB_M,32),floord(PB_L-1,32)))) {
            for (t5=1;t5<=min(31,PB_Q);t5++) {
              for (t6=max(1,32*t3);t6<=min(PB_M,32*t3+31);t6++) {
                B[1 +1][(t6-1)][(t5-1)] = D[(t6-1)][1][(t5-1)] - B[1][(t6-1)][(t5-1)] - 4;;
              }
            }
          }
          if ((PB_M >= 1) && (PB_Q >= 2) && (t3 <= min(floord(PB_M,32),floord(PB_L-1,32)))) {
            for (t4=max(max(max(2,32*t1-32*t2),16*t2+1),32*t2-PB_Q+1);t4<=min(min(PB_L-2,32*t2+30),32*t1-32*t2+31);t4++) {
              if (t1 == 2*t2) {
                for (t6=max(1,32*t3);t6<=min(PB_M,32*t3+31);t6++) {
                  if (t1%2 == 0) {
                    B[t4+1][(t6-1)][0] = D[(t6-1)][t4][0] - B[t4][(t6-1)][0] - 4;;
                  }
                }
              }
              for (t5=max(32*t2,t4+1);t5<=min(min(32*t2+31,2*t4-1),t4+PB_Q-1);t5++) {
                for (t6=max(1,32*t3);t6<=min(min(PB_M,PB_L-1),32*t3+31);t6++) {
                  A[t4][(-t4+t5)][t6+1] = C[(-t4+t5)][t4][t6] * A[t4+1][(-t4+t5)-1][t6+1] + A[t4][(-t4+t5)][t6+2] - B[t4+1][t6-1][(-t4+t5)] - 1;;
                  B[t4+1][(t6-1)][(-t4+t5)] = D[(t6-1)][t4][(-t4+t5)] - B[t4][(t6-1)][(-t4+t5)] - 4;;
                }
                for (t6=PB_M+1;t6<=min(PB_L-1,32*t3+31);t6++) {
                  A[t4][(-t4+t5)][t6+1] = C[(-t4+t5)][t4][t6] * A[t4+1][(-t4+t5)-1][t6+1] + A[t4][(-t4+t5)][t6+2] - B[t4+1][t6-1][(-t4+t5)] - 1;;
                }
                for (t6=PB_L;t6<=min(PB_M,32*t3+31);t6++) {
                  B[t4+1][(t6-1)][(-t4+t5)] = D[(t6-1)][t4][(-t4+t5)] - B[t4][(t6-1)][(-t4+t5)] - 4;;
                }
              }
              for (t5=2*t4;t5<=min(32*t2+31,t4+PB_Q-1);t5++) {
                for (t6=max(1,32*t3);t6<=min(PB_M,32*t3+31);t6++) {
                  B[t4+1][(t6-1)][(-t4+t5)] = D[(t6-1)][t4][(-t4+t5)] - B[t4][(t6-1)][(-t4+t5)] - 4;;
                }
              }
            }
          }
          if ((PB_M >= 1) && (PB_Q >= 2) && (t1 == 2*t2) && (t1 <= floord(PB_L-33,16)) && (t3 <= min(floord(PB_M,32),floord(PB_L-1,32)))) {
            for (t6=max(1,32*t3);t6<=min(PB_M,32*t3+31);t6++) {
              if (t1%2 == 0) {
                B[(16*t1+31)+1][(t6-1)][0] = D[(t6-1)][(16*t1+31)][0] - B[(16*t1+31)][(t6-1)][0] - 4;;
              }
            }
          }
        }
      }
      if ((PB_L >= 4) && (PB_M <= -1) && (PB_Q >= 2) && (t1 >= ceild(3*t2-1,2)) && (t2 <= floord(PB_L-3,16))) {
        for (t3=0;t3<=floord(PB_L-1,32);t3++) {
          for (t4=max(max(max(2,32*t1-32*t2),16*t2+1),32*t2-PB_Q+1);t4<=min(min(PB_L-2,32*t2+30),32*t1-32*t2+31);t4++) {
            for (t5=max(32*t2,t4+1);t5<=min(min(32*t2+31,2*t4-1),t4+PB_Q-1);t5++) {
              for (t6=max(1,32*t3);t6<=min(PB_L-1,32*t3+31);t6++) {
                A[t4][(-t4+t5)][t6+1] = C[(-t4+t5)][t4][t6] * A[t4+1][(-t4+t5)-1][t6+1] + A[t4][(-t4+t5)][t6+2] - B[t4+1][t6-1][(-t4+t5)] - 1;;
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
int za = zA;
int xb = xB;
int yb = yB;
int zb = zB;
int xc = xC;
int yc = yC;
int zc = zC;
int xd = xD;
int yd = yD;
int zd = zD;
POLYBENCH_3D_ARRAY_DECL(A, DATA_TYPE, xA,yA,zA,xa,ya,za);
POLYBENCH_3D_ARRAY_DECL(B, DATA_TYPE, xB,yB,zB,xb,yb,zb);
POLYBENCH_3D_ARRAY_DECL(C, DATA_TYPE, xC,yC,zC,xc,yc,zc);
POLYBENCH_3D_ARRAY_DECL(D, DATA_TYPE, xD,yD,zD,xd,yd,zd);
init_array(xa,ya,za,POLYBENCH_ARRAY(A), xb,yb,zb,POLYBENCH_ARRAY(B), xc,yc,zc,POLYBENCH_ARRAY(C), xd,yd,zd,POLYBENCH_ARRAY(D), INIT_SEED);
kernel_3224212211_00(xa,ya,za,POLYBENCH_ARRAY(A), xb,yb,zb,POLYBENCH_ARRAY(B), xc,yc,zc,POLYBENCH_ARRAY(C), xd,yd,zd,POLYBENCH_ARRAY(D));
polybench_prevent_dce(print_array(xa,ya,za,POLYBENCH_ARRAY(A), xb,yb,zb,POLYBENCH_ARRAY(B), xc,yc,zc,POLYBENCH_ARRAY(C), xd,yd,zd,POLYBENCH_ARRAY(D)));
POLYBENCH_FREE_ARRAY(A);
POLYBENCH_FREE_ARRAY(B);
POLYBENCH_FREE_ARRAY(C);
POLYBENCH_FREE_ARRAY(D);
return 0;
}
