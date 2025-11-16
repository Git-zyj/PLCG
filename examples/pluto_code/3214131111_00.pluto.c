#include <stdio.h>
#include <unistd.h>
#include <string.h>
#include <math.h>
#include "polybench.h"
#include <time.h>
#include <stdlib.h>
#include "3214131111_00.h"
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
arg_bounds_coef: 1
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
static void init_array(int xa,int ya,int za,DATA_TYPE POLYBENCH_3D(A,xA,yA,zA,xa,ya,za),int xb,int yb,int zb,DATA_TYPE POLYBENCH_3D(B,xB,yB,zB,xb,yb,zb),int xc,int yc,int zc,int vc,DATA_TYPE POLYBENCH_4D(C,xC,yC,zC,vC,xc,yc,zc,vc),int xd,int yd,int zd,DATA_TYPE POLYBENCH_3D(D,xD,yD,zD,xd,yd,zd),int xe,int ye,DATA_TYPE POLYBENCH_2D(E,xE,yE,xe,ye),int seed)
{
srand(seed);
int i_0, i_1, i_2, i_3;
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
            for (i_3 = 0; i_3 < vc; i_3++) {
                C[i_0][i_1][i_2][i_3] = 0.9 + (rand() / (DATA_TYPE)RAND_MAX) * (1.1 - 0.9);
            }
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
for (i_0 = 0; i_0 < xe; i_0++) {
    for (i_1 = 0; i_1 < ye; i_1++) {
        E[i_0][i_1] = 0.9 + (rand() / (DATA_TYPE)RAND_MAX) * (1.1 - 0.9);
    }
}
}
static void print_array(int xa,int ya,int za,DATA_TYPE POLYBENCH_3D(A,xA,yA,zA,xa,ya,za),int xb,int yb,int zb,DATA_TYPE POLYBENCH_3D(B,xB,yB,zB,xb,yb,zb),int xc,int yc,int zc,int vc,DATA_TYPE POLYBENCH_4D(C,xC,yC,zC,vC,xc,yc,zc,vc),int xd,int yd,int zd,DATA_TYPE POLYBENCH_3D(D,xD,yD,zD,xd,yd,zd),int xe,int ye,DATA_TYPE POLYBENCH_2D(E,xE,yE,xe,ye))
{
int i_0, i_1, i_2, i_3;
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
                for (i_3 = 0; i_3 < vc; i_3++) {
                    fprintf(POLYBENCH_DUMP_TARGET, "\n");
                    fprintf (POLYBENCH_DUMP_TARGET, DATA_PRINTF_MODIFIER, C[i_0][i_1][i_2][i_3]);
                }
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
    POLYBENCH_DUMP_BEGIN("E");
    for (i_0 = 0; i_0 < xe; i_0++) {
        for (i_1 = 0; i_1 < ye; i_1++) {
            fprintf(POLYBENCH_DUMP_TARGET, "\n");
            fprintf (POLYBENCH_DUMP_TARGET, DATA_PRINTF_MODIFIER, E[i_0][i_1]);
        }
    }
    POLYBENCH_DUMP_END("E");
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
                for (i_3 = 0; i_3 < vc; i_3++) {
                    sum_C += C[i_0][i_1][i_2][i_3];
                }
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
    POLYBENCH_DUMP_BEGIN("E");
    DATA_TYPE sum_E = 0;
    for (i_0 = 0; i_0 < xe; i_0++) {
        for (i_1 = 0; i_1 < ye; i_1++) {
            sum_E += E[i_0][i_1];
        }
    }
    fprintf(POLYBENCH_DUMP_TARGET, "\nsum: ");
    fprintf (POLYBENCH_DUMP_TARGET, DATA_PRINTF_MODIFIER, sum_E);
    POLYBENCH_DUMP_END("E");
#endif
POLYBENCH_DUMP_FINISH;
}
void kernel_3214131111_00(int xa,int ya,int za,DATA_TYPE POLYBENCH_3D(A,xA,yA,zA,xa,ya,za),int xb,int yb,int zb,DATA_TYPE POLYBENCH_3D(B,xB,yB,zB,xb,yb,zb),int xc,int yc,int zc,int vc,DATA_TYPE POLYBENCH_4D(C,xC,yC,zC,vC,xc,yc,zc,vc),int xd,int yd,int zd,DATA_TYPE POLYBENCH_3D(D,xD,yD,zD,xd,yd,zd),int xe,int ye,DATA_TYPE POLYBENCH_2D(E,xE,yE,xe,ye)){
polybench_start_instruments;
  int t1, t2, t3, t4, t5, t6;
 int lb, ub, lbp, ubp, lb2, ub2;
 register int lbv, ubv;
/* Start of CLooG code */
if ((PB_L >= 2) && (PB_P >= 2) && (PB_Q >= 2)) {
  lbp=0;
  ubp=min(min(floord(PB_Q-1,32),floord(PB_Q+PB_L-4,32)),floord(PB_Q+PB_P-4,32));
#pragma omp parallel for private(lbv,ubv,t2,t3,t4,t5,t6)
  for (t1=lbp;t1<=ubp;t1++) {
    for (t2=0;t2<=min(floord(PB_P-1,32),floord(-32*t1+PB_Q+PB_P-3,32));t2++) {
      for (t3=max(0,ceild(64*t1+32*t2-2*PB_Q-PB_P+5,32));t3<=min(min(min(min(floord(PB_Q+PB_L-4,32),floord(-32*t1+PB_Q+PB_L-3,32)),floord(-32*t1+PB_Q+2*PB_L-6,32)),floord(-32*t1+PB_Q+PB_P+PB_L-6,32)),floord(-32*t1-32*t2+PB_Q+PB_P+PB_L-5,32));t3++) {
        if ((PB_P >= 3) && (t2 <= min(floord(PB_P-2,32),t3)) && (t3 <= floord(PB_L-2,32)) && (t3 >= ceild(PB_Q-1,32))) {
          for (t4=max(1,32*t1);t4<=min(PB_Q-1,32*t1+31);t4++) {
            for (t5=max(1,32*t2);t5<=min(min(PB_L-2,PB_P-2),32*t2+31);t5++) {
              for (t6=max(32*t3,t5);t6<=min(PB_L-2,32*t3+31);t6++) {
                A[t5][t4][t6+1] = C[t6+1][t5+1][t4][t4-1] + A[t5-1][t4][t6] - 3;;
              }
            }
          }
        }
        if ((PB_P == 2) && (t2 == 0) && (t3 <= floord(PB_Q-2,32))) {
          for (t4=32*t1;t4<=min(min(min(PB_L-2,PB_Q-2),32*t1+31),32*t3+31);t4++) {
            for (t6=max(32*t3,t4);t6<=min(PB_Q-2,32*t3+31);t6++) {
              B[t4][1][t6] = D[t4][1][0] - E[1 -1][t4] * D[1][t4][t6] + D[1][t4][t4+1] * D[1][t4][t6] - B[t4][1][t6+1] * 2;;
            }
          }
        }
        if ((t2 <= floord(PB_P-2,32)) && (t2 >= t3+1) && (t3 <= floord(PB_Q-2,32))) {
          for (t4=32*t1;t4<=min(min(min(PB_L-2,PB_Q-2),32*t1+31),32*t3+31);t4++) {
            for (t5=32*t2;t5<=min(PB_P-1,32*t2+31);t5++) {
              for (t6=max(32*t3,t4);t6<=min(PB_Q-2,32*t3+31);t6++) {
                B[t4][t5][t6] = D[t4][t5][0] - E[t5-1][t4] * D[t5][t4][t6] + D[t5][t4][t4+1] * D[t5][t4][t6] - B[t4][t5][t6+1] * 2;;
              }
            }
          }
        }
        if ((PB_P >= 3) && (t2 <= min(floord(PB_P-2,32),t3)) && (t3 <= floord(PB_Q-2,32)) && (t3 >= ceild(PB_L-1,32))) {
          for (t4=32*t1;t4<=min(PB_L-2,32*t1+31);t4++) {
            for (t5=max(1,32*t2);t5<=min(PB_P-1,32*t2+31);t5++) {
              for (t6=32*t3;t6<=min(PB_Q-2,32*t3+31);t6++) {
                B[t4][t5][t6] = D[t4][t5][0] - E[t5-1][t4] * D[t5][t4][t6] + D[t5][t4][t4+1] * D[t5][t4][t6] - B[t4][t5][t6+1] * 2;;
              }
            }
          }
        }
        if ((32*t2 == PB_P-1) && (t3 <= floord(PB_Q-2,32))) {
          for (t4=32*t1;t4<=min(min(min(PB_L-2,PB_Q-2),32*t1+31),32*t3+31);t4++) {
            for (t6=max(32*t3,t4);t6<=min(PB_Q-2,32*t3+31);t6++) {
              if ((PB_P+31)%32 == 0) {
                B[t4][(PB_P-1)][t6] = D[t4][(PB_P-1)][0] - E[(PB_P-1)-1][t4] * D[(PB_P-1)][t4][t6] + D[(PB_P-1)][t4][t4+1] * D[(PB_P-1)][t4][t6] - B[t4][(PB_P-1)][t6+1] * 2;;
              }
            }
          }
        }
        if ((PB_P >= 3) && (t1 == 0) && (t2 <= min(floord(PB_P-2,32),t3)) && (t3 <= min(floord(PB_L-2,32),floord(PB_Q-2,32)))) {
          for (t5=max(1,32*t2);t5<=min(PB_P-1,32*t2+31);t5++) {
            for (t6=32*t3;t6<=min(PB_Q-2,32*t3+31);t6++) {
              B[0][t5][t6] = D[0][t5][0] - E[t5-1][0] * D[t5][0][t6] + D[t5][0][0 +1] * D[t5][0][t6] - B[0][t5][t6+1] * 2;;
            }
          }
        }
        if ((PB_P >= 3) && (t2 <= min(floord(PB_P-2,32),t3)) && (t3 <= min(floord(PB_L-2,32),floord(PB_Q-2,32)))) {
          for (t4=max(1,32*t1);t4<=min(min(min(PB_L-2,PB_Q-2),32*t1+31),32*t3+31);t4++) {
            for (t5=max(1,32*t2);t5<=min(min(PB_L-2,PB_P-2),32*t2+31);t5++) {
              if (t1 == t3) {
                for (t6=max(32*t1,t5);t6<=t4-1;t6++) {
                  A[t5][t4][t6+1] = C[t6+1][t5+1][t4][t4-1] + A[t5-1][t4][t6] - 3;;
                }
              }
              if (t2 == t3) {
                for (t6=max(32*t2,t4);t6<=min(PB_Q-2,t5-1);t6++) {
                  B[t4][t5][t6] = D[t4][t5][0] - E[t5-1][t4] * D[t5][t4][t6] + D[t5][t4][t4+1] * D[t5][t4][t6] - B[t4][t5][t6+1] * 2;;
                }
              }
              for (t6=max(max(32*t3,t4),t5);t6<=min(min(PB_L-2,PB_Q-2),32*t3+31);t6++) {
                A[t5][t4][t6+1] = C[t6+1][t5+1][t4][t4-1] + A[t5-1][t4][t6] - 3;;
                B[t4][t5][t6] = D[t4][t5][0] - E[t5-1][t4] * D[t5][t4][t6] + D[t5][t4][t4+1] * D[t5][t4][t6] - B[t4][t5][t6+1] * 2;;
              }
              for (t6=max(t5,PB_Q-1);t6<=min(PB_L-2,32*t3+31);t6++) {
                A[t5][t4][t6+1] = C[t6+1][t5+1][t4][t4-1] + A[t5-1][t4][t6] - 3;;
              }
              for (t6=PB_L-1;t6<=min(PB_Q-2,32*t3+31);t6++) {
                B[t4][t5][t6] = D[t4][t5][0] - E[t5-1][t4] * D[t5][t4][t6] + D[t5][t4][t4+1] * D[t5][t4][t6] - B[t4][t5][t6+1] * 2;;
              }
            }
            if (t2 == t3) {
              for (t5=PB_L-1;t5<=min(PB_P-1,32*t2+31);t5++) {
                for (t6=max(32*t2,t4);t6<=min(PB_Q-2,32*t2+31);t6++) {
                  B[t4][t5][t6] = D[t4][t5][0] - E[t5-1][t4] * D[t5][t4][t6] + D[t5][t4][t4+1] * D[t5][t4][t6] - B[t4][t5][t6+1] * 2;;
                }
              }
            }
            if ((PB_P <= PB_L-1) && (t2 >= ceild(PB_P-32,32))) {
              for (t6=max(32*t3,t4);t6<=min(PB_Q-2,32*t3+31);t6++) {
                B[t4][(PB_P-1)][t6] = D[t4][(PB_P-1)][0] - E[(PB_P-1)-1][t4] * D[(PB_P-1)][t4][t6] + D[(PB_P-1)][t4][t4+1] * D[(PB_P-1)][t4][t6] - B[t4][(PB_P-1)][t6+1] * 2;;
              }
            }
          }
        }
        if ((PB_L >= 3) && (PB_P >= 3) && (t2 <= min(floord(PB_P-2,32),t3)) && (t3 <= floord(PB_L-2,32))) {
          for (t4=max(32*t1,32*t3+32);t4<=min(PB_Q-1,32*t1+31);t4++) {
            for (t5=max(1,32*t2);t5<=min(min(PB_L-2,PB_P-2),32*t2+31);t5++) {
              for (t6=max(32*t3,t5);t6<=min(PB_L-2,32*t3+31);t6++) {
                A[t5][t4][t6+1] = C[t6+1][t5+1][t4][t4-1] + A[t5-1][t4][t6] - 3;;
              }
            }
          }
        }
        if ((PB_L >= 3) && (PB_P >= 3) && (t1 == t3) && (t1 <= floord(PB_L-2,32)) && (t2 <= min(floord(PB_L-2,32),floord(PB_P-2,32)))) {
          for (t4=PB_L-1;t4<=min(PB_Q-1,32*t1+31);t4++) {
            for (t5=max(1,32*t2);t5<=min(min(PB_L-2,PB_P-2),32*t2+31);t5++) {
              for (t6=max(32*t1,t5);t6<=PB_L-2;t6++) {
                A[t5][t4][t6+1] = C[t6+1][t5+1][t4][t4-1] + A[t5-1][t4][t6] - 3;;
              }
            }
          }
        }
        if ((PB_P >= 3) && (PB_Q <= PB_L-1) && (t1 == t3) && (t1 <= floord(PB_Q-2,32)) && (t1 >= max(ceild(PB_Q-32,32),t2)) && (t2 <= floord(PB_P-2,32))) {
          for (t5=max(1,32*t2);t5<=min(min(PB_L-2,PB_P-2),32*t2+31);t5++) {
            for (t6=max(32*t1,t5);t6<=min(PB_L-2,32*t1+31);t6++) {
              A[t5][(PB_Q-1)][t6+1] = C[t6+1][t5+1][(PB_Q-1)][(PB_Q-1)-1] + A[t5-1][(PB_Q-1)][t6] - 3;;
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
int vc = vC;
int xd = xD;
int yd = yD;
int zd = zD;
int xe = xE;
int ye = yE;
POLYBENCH_3D_ARRAY_DECL(A, DATA_TYPE, xA,yA,zA,xa,ya,za);
POLYBENCH_3D_ARRAY_DECL(B, DATA_TYPE, xB,yB,zB,xb,yb,zb);
POLYBENCH_4D_ARRAY_DECL(C, DATA_TYPE, xC,yC,zC,vC,xc,yc,zc,vc);
POLYBENCH_3D_ARRAY_DECL(D, DATA_TYPE, xD,yD,zD,xd,yd,zd);
POLYBENCH_2D_ARRAY_DECL(E, DATA_TYPE, xE,yE,xe,ye);
init_array(xa,ya,za,POLYBENCH_ARRAY(A), xb,yb,zb,POLYBENCH_ARRAY(B), xc,yc,zc,vc,POLYBENCH_ARRAY(C), xd,yd,zd,POLYBENCH_ARRAY(D), xe,ye,POLYBENCH_ARRAY(E), INIT_SEED);
kernel_3214131111_00(xa,ya,za,POLYBENCH_ARRAY(A), xb,yb,zb,POLYBENCH_ARRAY(B), xc,yc,zc,vc,POLYBENCH_ARRAY(C), xd,yd,zd,POLYBENCH_ARRAY(D), xe,ye,POLYBENCH_ARRAY(E));
polybench_prevent_dce(print_array(xa,ya,za,POLYBENCH_ARRAY(A), xb,yb,zb,POLYBENCH_ARRAY(B), xc,yc,zc,vc,POLYBENCH_ARRAY(C), xd,yd,zd,POLYBENCH_ARRAY(D), xe,ye,POLYBENCH_ARRAY(E)));
POLYBENCH_FREE_ARRAY(A);
POLYBENCH_FREE_ARRAY(B);
POLYBENCH_FREE_ARRAY(C);
POLYBENCH_FREE_ARRAY(D);
POLYBENCH_FREE_ARRAY(E);
return 0;
}
