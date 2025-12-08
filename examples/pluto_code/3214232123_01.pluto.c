#include <stdio.h>
#include <unistd.h>
#include <string.h>
#include <math.h>
#include "polybench.h"
#include <time.h>
#include <stdlib.h>
#include "3214232123_01.h"
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
static void init_array(int xa,int ya,DATA_TYPE POLYBENCH_2D(A,xA,yA,xa,ya),int xb,int yb,DATA_TYPE POLYBENCH_2D(B,xB,yB,xb,yb),int xc,int yc,DATA_TYPE POLYBENCH_2D(C,xC,yC,xc,yc),int xd,int yd,int zd,DATA_TYPE POLYBENCH_3D(D,xD,yD,zD,xd,yd,zd),int xe,int ye,DATA_TYPE POLYBENCH_2D(E,xE,yE,xe,ye),int xf,DATA_TYPE POLYBENCH_1D(F,xF,xf),int seed)
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
    for (i_1 = 0; i_1 < ye; i_1++) {
        E[i_0][i_1] = 0.9 + (rand() / (DATA_TYPE)RAND_MAX) * (1.1 - 0.9);
    }
}
for (i_0 = 0; i_0 < xf; i_0++) {
    F[i_0] = 0.9 + (rand() / (DATA_TYPE)RAND_MAX) * (1.1 - 0.9);
}
}
static void print_array(int xa,int ya,DATA_TYPE POLYBENCH_2D(A,xA,yA,xa,ya),int xb,int yb,DATA_TYPE POLYBENCH_2D(B,xB,yB,xb,yb),int xc,int yc,DATA_TYPE POLYBENCH_2D(C,xC,yC,xc,yc),int xd,int yd,int zd,DATA_TYPE POLYBENCH_3D(D,xD,yD,zD,xd,yd,zd),int xe,int ye,DATA_TYPE POLYBENCH_2D(E,xE,yE,xe,ye),int xf,DATA_TYPE POLYBENCH_1D(F,xF,xf))
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
        for (i_1 = 0; i_1 < ye; i_1++) {
            fprintf(POLYBENCH_DUMP_TARGET, "\n");
            fprintf (POLYBENCH_DUMP_TARGET, DATA_PRINTF_MODIFIER, E[i_0][i_1]);
        }
    }
    POLYBENCH_DUMP_END("E");
    POLYBENCH_DUMP_BEGIN("F");
    for (i_0 = 0; i_0 < xf; i_0++) {
        fprintf(POLYBENCH_DUMP_TARGET, "\n");
        fprintf (POLYBENCH_DUMP_TARGET, DATA_PRINTF_MODIFIER, F[i_0]);
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
        for (i_1 = 0; i_1 < ye; i_1++) {
            sum_E += E[i_0][i_1];
        }
    }
    fprintf(POLYBENCH_DUMP_TARGET, "\nsum: ");
    fprintf (POLYBENCH_DUMP_TARGET, DATA_PRINTF_MODIFIER, sum_E);
    POLYBENCH_DUMP_END("E");
    POLYBENCH_DUMP_BEGIN("F");
    DATA_TYPE sum_F = 0;
    for (i_0 = 0; i_0 < xf; i_0++) {
        sum_F += F[i_0];
    }
    fprintf(POLYBENCH_DUMP_TARGET, "\nsum: ");
    fprintf (POLYBENCH_DUMP_TARGET, DATA_PRINTF_MODIFIER, sum_F);
    POLYBENCH_DUMP_END("F");
#endif
POLYBENCH_DUMP_FINISH;
}
void kernel_3214232123_01(int xa,int ya,DATA_TYPE POLYBENCH_2D(A,xA,yA,xa,ya),int xb,int yb,DATA_TYPE POLYBENCH_2D(B,xB,yB,xb,yb),int xc,int yc,DATA_TYPE POLYBENCH_2D(C,xC,yC,xc,yc),int xd,int yd,int zd,DATA_TYPE POLYBENCH_3D(D,xD,yD,zD,xd,yd,zd),int xe,int ye,DATA_TYPE POLYBENCH_2D(E,xE,yE,xe,ye),int xf,DATA_TYPE POLYBENCH_1D(F,xF,xf)){
polybench_start_instruments;
  int t1, t2, t3, t4, t5, t6;
 int lb, ub, lbp, ubp, lb2, ub2;
 register int lbv, ubv;
/* Start of CLooG code */
if (PB_M >= 2) {
  if (PB_N >= 0) {
    lbp=0;
    ubp=floord(PB_M+PB_N-1,32);
#pragma omp parallel for private(lbv,ubv,t2,t3,t4,t5,t6)
    for (t1=lbp;t1<=ubp;t1++) {
      for (t2=0;t2<=min(floord(PB_M+PB_N-1,32),floord(32*t1+PB_M-1,32));t2++) {
        for (t3=max(0,ceild(32*t2-PB_M+1,32));t3<=min(min(min(min(min(min(floord(PB_N,32),floord(32*t2+PB_M+30,32)),floord(64*t1-32*t2+PB_M+30,32)),floord(-32*t1+64*t2+PB_M+PB_N+59,64)),floord(32*t2+PB_M+16*PB_N-2,544)),floord(-32*t1+64*t2+PB_M+31*PB_N-1,1024)),floord(128*t1-64*t2+2*PB_M+31*PB_N-2,1056));t3++) {
          if ((t2 <= min(floord(PB_P-1,32),t3)) && (t3 <= min(floord(PB_N-2,32),floord(PB_P+PB_M-2,32))) && (t3 >= 1)) {
            for (t4=max(max(32*t1,32*t2),32*t3-PB_M+1);t4<=min(min(min(min(PB_L-1,PB_N-3),32*t1+31),32*t2-32*t3+PB_N+29),-32*t3+PB_P+PB_N-3);t4++) {
              for (t5=max(max(32*t2,32*t3-PB_M+1),32*t3+t4-PB_N+2);t5<=min(min(min(t4,PB_P-1),32*t2+31),32*t3+30);t5++) {
                for (t6=max(32*t3,t5+1);t6<=min(min(32*t3+31,t5+PB_M-1),-t4+t5+PB_N-2);t6++) {
                  A[(-t5+t6)+t4][t4] = C[(-t5+t6)][t4] + D[(-t5+t6)+2][(-t5+t6)-1][t4] - A[(-t5+t6)+t4+1][t4] - 2;;
                }
              }
            }
          }
          if ((PB_L >= 1) && (PB_N >= 3) && (PB_P >= 1) && (t1 == 0) && (t2 == 0) && (t3 == 0)) {
            for (t6=1;t6<=min(min(31,PB_M-1),PB_N-2);t6++) {
              A[t6+0][0] = C[t6][0] + D[t6+2][t6-1][0] - A[t6+0 +1][0] - 2;;
            }
          }
          if ((t2 >= ceild(PB_P,32)) && (t3 == 0)) {
            for (t4=max(1,32*t1);t4<=min(PB_M-1,32*t1+31);t4++) {
              for (t5=max(1,32*t2);t5<=min(PB_M-1,32*t2+31);t5++) {
                B[t4][t5-1] = C[t4][t5] - C[t5][t4-1] * E[t5-1][t4+2] - F[t5] * 1;;
              }
            }
          }
          if ((t2 >= 1) && (t2 <= floord(PB_P-1,32)) && (t3 == 0)) {
            for (t4=max(1,32*t1);t4<=min(PB_M-1,32*t1+31);t4++) {
              for (t5=32*t2;t5<=min(PB_M-1,32*t2+31);t5++) {
                B[t4][t5-1] = C[t4][t5] - C[t5][t4-1] * E[t5-1][t4+2] - F[t5] * 1;;
              }
            }
          }
          if ((PB_P >= 1) && (t2 == 0) && (t3 == 0)) {
            for (t4=max(1,32*t1);t4<=min(min(min(PB_L-1,PB_M-1),PB_N-3),32*t1+31);t4++) {
              for (t6=1;t6<=min(min(31,PB_M-1),-t4+PB_N-2);t6++) {
                A[t6+t4][t4] = C[t6][t4] + D[t6+2][t6-1][t4] - A[t6+t4+1][t4] - 2;;
              }
              for (t5=1;t5<=min(min(30,t4),PB_P-1);t5++) {
                B[t4][t5-1] = C[t4][t5] - C[t5][t4-1] * E[t5-1][t4+2] - F[t5] * 1;;
                for (t6=t5+1;t6<=min(min(31,t5+PB_M-1),-t4+t5+PB_N-2);t6++) {
                  A[(-t5+t6)+t4][t4] = C[(-t5+t6)][t4] + D[(-t5+t6)+2][(-t5+t6)-1][t4] - A[(-t5+t6)+t4+1][t4] - 2;;
                }
              }
              for (t5=PB_P;t5<=min(30,t4);t5++) {
                B[t4][t5-1] = C[t4][t5] - C[t5][t4-1] * E[t5-1][t4+2] - F[t5] * 1;;
              }
              if (t1 == 0) {
                for (t5=t4+1;t5<=min(30,PB_M-1);t5++) {
                  B[t4][t5-1] = C[t4][t5] - C[t5][t4-1] * E[t5-1][t4+2] - F[t5] * 1;;
                }
              }
              if (PB_M >= 32) {
                B[t4][31 -1] = C[t4][31] - C[31][t4-1] * E[31 -1][t4+2] - F[31] * 1;;
              }
            }
          }
          if ((PB_P >= 1) && (t2 == 0) && (t3 == 0)) {
            for (t4=max(PB_M,32*t1);t4<=min(min(PB_L-1,PB_N-3),32*t1+31);t4++) {
              for (t5=0;t5<=min(min(30,t4),PB_P-1);t5++) {
                for (t6=t5+1;t6<=min(min(31,t5+PB_M-1),-t4+t5+PB_N-2);t6++) {
                  A[(-t5+t6)+t4][t4] = C[(-t5+t6)][t4] + D[(-t5+t6)+2][(-t5+t6)-1][t4] - A[(-t5+t6)+t4+1][t4] - 2;;
                }
              }
            }
          }
          if ((PB_P >= 1) && (t2 == 0) && (t3 == 0)) {
            for (t4=max(max(1,PB_L),32*t1);t4<=min(min(PB_M-1,PB_N-3),32*t1+31);t4++) {
              for (t5=1;t5<=min(31,PB_M-1);t5++) {
                B[t4][t5-1] = C[t4][t5] - C[t5][t4-1] * E[t5-1][t4+2] - F[t5] * 1;;
              }
            }
          }
          if ((PB_P >= 1) && (t2 == 0) && (t3 == 0)) {
            for (t4=max(max(1,32*t1),PB_N-2);t4<=min(PB_M-1,32*t1+31);t4++) {
              for (t5=1;t5<=min(31,PB_M-1);t5++) {
                B[t4][t5-1] = C[t4][t5] - C[t5][t4-1] * E[t5-1][t4+2] - F[t5] * 1;;
              }
            }
          }
        }
      }
    }
  }
  if (PB_N <= -1) {
    lbp=0;
    ubp=floord(PB_M-1,32);
#pragma omp parallel for private(lbv,ubv,t2,t3,t4,t5,t6)
    for (t1=lbp;t1<=ubp;t1++) {
      for (t2=0;t2<=floord(PB_M-1,32);t2++) {
        for (t4=max(1,32*t1);t4<=min(PB_M-1,32*t1+31);t4++) {
          for (t5=max(1,32*t2);t5<=min(PB_M-1,32*t2+31);t5++) {
            B[t4][t5-1] = C[t4][t5] - C[t5][t4-1] * E[t5-1][t4+2] - F[t5] * 1;;
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
int ye = yE;
int xf = xF;
POLYBENCH_2D_ARRAY_DECL(A, DATA_TYPE, xA,yA,xa,ya);
POLYBENCH_2D_ARRAY_DECL(B, DATA_TYPE, xB,yB,xb,yb);
POLYBENCH_2D_ARRAY_DECL(C, DATA_TYPE, xC,yC,xc,yc);
POLYBENCH_3D_ARRAY_DECL(D, DATA_TYPE, xD,yD,zD,xd,yd,zd);
POLYBENCH_2D_ARRAY_DECL(E, DATA_TYPE, xE,yE,xe,ye);
POLYBENCH_1D_ARRAY_DECL(F, DATA_TYPE, xF,xf);
init_array(xa,ya,POLYBENCH_ARRAY(A), xb,yb,POLYBENCH_ARRAY(B), xc,yc,POLYBENCH_ARRAY(C), xd,yd,zd,POLYBENCH_ARRAY(D), xe,ye,POLYBENCH_ARRAY(E), xf,POLYBENCH_ARRAY(F), INIT_SEED);
kernel_3214232123_01(xa,ya,POLYBENCH_ARRAY(A), xb,yb,POLYBENCH_ARRAY(B), xc,yc,POLYBENCH_ARRAY(C), xd,yd,zd,POLYBENCH_ARRAY(D), xe,ye,POLYBENCH_ARRAY(E), xf,POLYBENCH_ARRAY(F));
polybench_prevent_dce(print_array(xa,ya,POLYBENCH_ARRAY(A), xb,yb,POLYBENCH_ARRAY(B), xc,yc,POLYBENCH_ARRAY(C), xd,yd,zd,POLYBENCH_ARRAY(D), xe,ye,POLYBENCH_ARRAY(E), xf,POLYBENCH_ARRAY(F)));
POLYBENCH_FREE_ARRAY(A);
POLYBENCH_FREE_ARRAY(B);
POLYBENCH_FREE_ARRAY(C);
POLYBENCH_FREE_ARRAY(D);
POLYBENCH_FREE_ARRAY(E);
POLYBENCH_FREE_ARRAY(F);
return 0;
}
