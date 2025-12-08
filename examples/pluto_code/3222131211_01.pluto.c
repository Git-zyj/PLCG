#include <stdio.h>
#include <unistd.h>
#include <string.h>
#include <math.h>
#include "polybench.h"
#include <time.h>
#include <stdlib.h>
#include "3222131211_01.h"
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
static void init_array(int xa,int ya,int za,DATA_TYPE POLYBENCH_3D(A,xA,yA,zA,xa,ya,za),int xb,int yb,int zb,DATA_TYPE POLYBENCH_3D(B,xB,yB,zB,xb,yb,zb),int xc,int yc,int zc,DATA_TYPE POLYBENCH_3D(C,xC,yC,zC,xc,yc,zc),int xd,int yd,int zd,int vd,DATA_TYPE POLYBENCH_4D(D,xD,yD,zD,vD,xd,yd,zd,vd),int xe,int ye,DATA_TYPE POLYBENCH_2D(E,xE,yE,xe,ye),int seed)
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
            C[i_0][i_1][i_2] = 0.9 + (rand() / (DATA_TYPE)RAND_MAX) * (1.1 - 0.9);
        }
    }
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
for (i_0 = 0; i_0 < xe; i_0++) {
    for (i_1 = 0; i_1 < ye; i_1++) {
        E[i_0][i_1] = 0.9 + (rand() / (DATA_TYPE)RAND_MAX) * (1.1 - 0.9);
    }
}
}
static void print_array(int xa,int ya,int za,DATA_TYPE POLYBENCH_3D(A,xA,yA,zA,xa,ya,za),int xb,int yb,int zb,DATA_TYPE POLYBENCH_3D(B,xB,yB,zB,xb,yb,zb),int xc,int yc,int zc,DATA_TYPE POLYBENCH_3D(C,xC,yC,zC,xc,yc,zc),int xd,int yd,int zd,int vd,DATA_TYPE POLYBENCH_4D(D,xD,yD,zD,vD,xd,yd,zd,vd),int xe,int ye,DATA_TYPE POLYBENCH_2D(E,xE,yE,xe,ye))
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
                for (i_3 = 0; i_3 < vd; i_3++) {
                    fprintf(POLYBENCH_DUMP_TARGET, "\n");
                    fprintf (POLYBENCH_DUMP_TARGET, DATA_PRINTF_MODIFIER, D[i_0][i_1][i_2][i_3]);
                }
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
                for (i_3 = 0; i_3 < vd; i_3++) {
                    sum_D += D[i_0][i_1][i_2][i_3];
                }
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
void kernel_3222131211_01(int xa,int ya,int za,DATA_TYPE POLYBENCH_3D(A,xA,yA,zA,xa,ya,za),int xb,int yb,int zb,DATA_TYPE POLYBENCH_3D(B,xB,yB,zB,xb,yb,zb),int xc,int yc,int zc,DATA_TYPE POLYBENCH_3D(C,xC,yC,zC,xc,yc,zc),int xd,int yd,int zd,int vd,DATA_TYPE POLYBENCH_4D(D,xD,yD,zD,vD,xd,yd,zd,vd),int xe,int ye,DATA_TYPE POLYBENCH_2D(E,xE,yE,xe,ye)){
polybench_start_instruments;
  int t1, t2, t3, t4, t5, t6;
 int lb, ub, lbp, ubp, lb2, ub2;
 register int lbv, ubv;
/* Start of CLooG code */
if ((PB_L >= 3) && (PB_N >= 1)) {
  for (t1=0;t1<=floord(PB_L+PB_N-2,32);t1++) {
    lbp=max(0,ceild(32*t1-PB_L+2,32));
    ubp=min(floord(PB_N,32),t1);
#pragma omp parallel for private(lbv,ubv,t3,t4,t5,t6)
    for (t2=lbp;t2<=ubp;t2++) {
      if (PB_M >= 0) {
        for (t3=max(max(max(max(0,ceild(32*t1-32*t2-PB_M,32)),ceild(32*t1-PB_L-PB_N+3,32)),ceild(32*t1-32*t2-PB_L-PB_N+4,32)),ceild(96*t1-96*t2-2*PB_L-PB_M+6,96));t3<=floord(PB_L+PB_M-1,32);t3++) {
          if ((PB_N >= 2) && (t2 <= floord(PB_N-1,32)) && (t3 <= floord(PB_L-1,32))) {
            for (t4=max(1,32*t1-32*t2);t4<=min(min(min(PB_L-2,32*t3+31),32*t1-32*t2+31),-32*t3+PB_M-2);t4++) {
              if (t1 == t2+t3) {
                for (t5=32*t1-32*t2;t5<=min(t4-1,-t4+PB_M-2);t5++) {
                  lbv=max(1,32*t2);
                  ubv=min(PB_N-1,32*t2+31);
#pragma ivdep
#pragma vector always
                  for (t6=lbv;t6<=ubv;t6++) {
                    A[t4-1][t5][t6] = C[t6-1][t5][t4] - C[t6][t5+t4+1][t4] - D[t4][t5][t5+1][t6] - A[t4-1][t5+1][t6] + 2;;
                  }
                }
              }
              if ((PB_M >= 4) && (t1 == t2) && (t3 == 0) && (t4 == 1)) {
                lbv=max(1,32*t1);
                ubv=min(PB_N-1,32*t1+31);
#pragma ivdep
#pragma vector always
                for (t6=lbv;t6<=ubv;t6++) {
                  A[1 -1][1][t6] = C[t6-1][1][1] - C[t6][1 +1 +1][1] - D[1][1][1 +1][t6] - A[1 -1][1 +1][t6] + 2;;
                }
              }
              for (t5=max(max(2,32*t3),t4);t5<=min(min(PB_L-1,32*t3+31),-t4+PB_M-2);t5++) {
                lbv=max(1,32*t2);
                ubv=min(PB_N-1,32*t2+31);
#pragma ivdep
#pragma vector always
                for (t6=lbv;t6<=ubv;t6++) {
                  A[t4-1][t5][t6] = C[t6-1][t5][t4] - C[t6][t5+t4+1][t4] - D[t4][t5][t5+1][t6] - A[t4-1][t5+1][t6] + 2;;
                  B[t6-1][t4][t5-1] = C[t6-1][t5][t4+1] + E[t5][t5] - B[t6-1][t4-1][t5-2] + B[t6][t4][t5] - B[t6-1][t4-1][t5-1] + 3;;
                }
                if (t2 >= ceild(PB_N-31,32)) {
                  B[PB_N-1][t4][t5-1] = C[PB_N-1][t5][t4+1] + E[t5][t5] - B[PB_N-1][t4-1][t5-2] + B[PB_N][t4][t5] - B[PB_N-1][t4-1][t5-1] + 3;;
                }
              }
              for (t5=PB_L;t5<=min(32*t3+31,-t4+PB_M-2);t5++) {
                lbv=max(1,32*t2);
                ubv=min(PB_N-1,32*t2+31);
#pragma ivdep
#pragma vector always
                for (t6=lbv;t6<=ubv;t6++) {
                  A[t4-1][t5][t6] = C[t6-1][t5][t4] - C[t6][t5+t4+1][t4] - D[t4][t5][t5+1][t6] - A[t4-1][t5+1][t6] + 2;;
                }
              }
              for (t5=max(max(2,t4),-t4+PB_M-1);t5<=min(PB_L-1,32*t3+31);t5++) {
                lbv=max(1,32*t2);
                ubv=min(PB_N,32*t2+31);
#pragma ivdep
#pragma vector always
                for (t6=lbv;t6<=ubv;t6++) {
                  B[t6-1][t4][t5-1] = C[t6-1][t5][t4+1] + E[t5][t5] - B[t6-1][t4-1][t5-2] + B[t6][t4][t5] - B[t6-1][t4-1][t5-1] + 3;;
                }
              }
            }
          }
          if ((PB_N >= 2) && (t2 <= floord(PB_N-1,32)) && (t3 >= ceild(PB_L,32))) {
            for (t4=max(1,32*t1-32*t2);t4<=min(min(PB_L-2,32*t1-32*t2+31),-32*t3+PB_M-2);t4++) {
              for (t5=32*t3;t5<=min(32*t3+31,-t4+PB_M-2);t5++) {
                lbv=max(1,32*t2);
                ubv=min(PB_N-1,32*t2+31);
#pragma ivdep
#pragma vector always
                for (t6=lbv;t6<=ubv;t6++) {
                  A[t4-1][t5][t6] = C[t6-1][t5][t4] - C[t6][t5+t4+1][t4] - D[t4][t5][t5+1][t6] - A[t4-1][t5+1][t6] + 2;;
                }
              }
            }
          }
          if ((PB_N >= 2) && (t2 <= floord(PB_N-1,32))) {
            for (t4=max(32*t1-32*t2,32*t3+32);t4<=min(min(PB_L-2,32*t1-32*t2+31),-32*t3+PB_M-2);t4++) {
              for (t5=32*t3;t5<=min(32*t3+31,-t4+PB_M-2);t5++) {
                lbv=max(1,32*t2);
                ubv=min(PB_N-1,32*t2+31);
#pragma ivdep
#pragma vector always
                for (t6=lbv;t6<=ubv;t6++) {
                  A[t4-1][t5][t6] = C[t6-1][t5][t4] - C[t6][t5+t4+1][t4] - D[t4][t5][t5+1][t6] - A[t4-1][t5+1][t6] + 2;;
                }
              }
            }
          }
          if ((PB_N == 1) && (t2 == 0) && (t3 <= floord(PB_L-1,32))) {
            for (t4=max(1,32*t1);t4<=min(min(PB_L-2,32*t1+31),32*t3+31);t4++) {
              for (t5=max(max(2,32*t3),t4);t5<=min(PB_L-1,32*t3+31);t5++) {
                B[1 -1][t4][t5-1] = C[1 -1][t5][t4+1] + E[t5][t5] - B[1 -1][t4-1][t5-2] + B[1][t4][t5] - B[1 -1][t4-1][t5-1] + 3;;
              }
            }
          }
          if ((32*t2 == PB_N) && (t3 <= floord(PB_L-1,32))) {
            for (t4=max(1,32*t1-PB_N);t4<=min(min(PB_L-2,32*t3+31),32*t1-PB_N+31);t4++) {
              for (t5=max(max(2,32*t3),t4);t5<=min(PB_L-1,32*t3+31);t5++) {
                if (31*PB_N%32 == 0) {
                  B[PB_N-1][t4][t5-1] = C[PB_N-1][t5][t4+1] + E[t5][t5] - B[PB_N-1][t4-1][t5-2] + B[PB_N][t4][t5] - B[PB_N-1][t4-1][t5-1] + 3;;
                }
              }
            }
          }
          if ((PB_N >= 2) && (t2 <= floord(PB_N-1,32)) && (t3 <= floord(PB_L-1,32))) {
            for (t4=max(max(1,32*t1-32*t2),-32*t3+PB_M-1);t4<=min(min(PB_L-2,32*t3+31),32*t1-32*t2+31);t4++) {
              for (t5=max(max(2,32*t3),t4);t5<=min(PB_L-1,32*t3+31);t5++) {
                lbv=max(1,32*t2);
                ubv=min(PB_N,32*t2+31);
#pragma ivdep
#pragma vector always
                for (t6=lbv;t6<=ubv;t6++) {
                  B[t6-1][t4][t5-1] = C[t6-1][t5][t4+1] + E[t5][t5] - B[t6-1][t4-1][t5-2] + B[t6][t4][t5] - B[t6-1][t4-1][t5-1] + 3;;
                }
              }
            }
          }
        }
      }
      if (PB_M <= -1) {
        for (t3=t1-t2;t3<=floord(PB_L-1,32);t3++) {
          for (t4=max(1,32*t1-32*t2);t4<=min(PB_L-2,32*t1-32*t2+31);t4++) {
            for (t5=max(max(2,32*t3),t4);t5<=min(PB_L-1,32*t3+31);t5++) {
              lbv=max(1,32*t2);
              ubv=min(PB_N,32*t2+31);
#pragma ivdep
#pragma vector always
              for (t6=lbv;t6<=ubv;t6++) {
                B[t6-1][t4][t5-1] = C[t6-1][t5][t4+1] + E[t5][t5] - B[t6-1][t4-1][t5-2] + B[t6][t4][t5] - B[t6-1][t4-1][t5-1] + 3;;
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
int vd = vD;
int xe = xE;
int ye = yE;
POLYBENCH_3D_ARRAY_DECL(A, DATA_TYPE, xA,yA,zA,xa,ya,za);
POLYBENCH_3D_ARRAY_DECL(B, DATA_TYPE, xB,yB,zB,xb,yb,zb);
POLYBENCH_3D_ARRAY_DECL(C, DATA_TYPE, xC,yC,zC,xc,yc,zc);
POLYBENCH_4D_ARRAY_DECL(D, DATA_TYPE, xD,yD,zD,vD,xd,yd,zd,vd);
POLYBENCH_2D_ARRAY_DECL(E, DATA_TYPE, xE,yE,xe,ye);
init_array(xa,ya,za,POLYBENCH_ARRAY(A), xb,yb,zb,POLYBENCH_ARRAY(B), xc,yc,zc,POLYBENCH_ARRAY(C), xd,yd,zd,vd,POLYBENCH_ARRAY(D), xe,ye,POLYBENCH_ARRAY(E), INIT_SEED);
kernel_3222131211_01(xa,ya,za,POLYBENCH_ARRAY(A), xb,yb,zb,POLYBENCH_ARRAY(B), xc,yc,zc,POLYBENCH_ARRAY(C), xd,yd,zd,vd,POLYBENCH_ARRAY(D), xe,ye,POLYBENCH_ARRAY(E));
polybench_prevent_dce(print_array(xa,ya,za,POLYBENCH_ARRAY(A), xb,yb,zb,POLYBENCH_ARRAY(B), xc,yc,zc,POLYBENCH_ARRAY(C), xd,yd,zd,vd,POLYBENCH_ARRAY(D), xe,ye,POLYBENCH_ARRAY(E)));
POLYBENCH_FREE_ARRAY(A);
POLYBENCH_FREE_ARRAY(B);
POLYBENCH_FREE_ARRAY(C);
POLYBENCH_FREE_ARRAY(D);
POLYBENCH_FREE_ARRAY(E);
return 0;
}
