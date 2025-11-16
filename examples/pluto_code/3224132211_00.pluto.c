#include <stdio.h>
#include <unistd.h>
#include <string.h>
#include <math.h>
#include "polybench.h"
#include <time.h>
#include <stdlib.h>
#include "3224132211_00.h"
#include <omp.h>
#define ceild(n,d)  ceil(((double)(n))/((double)(d)))
#define floord(n,d) floor(((double)(n))/((double)(d)))
/*
arg_depth: 3
arg_nstmts: 2
arg_bounds_index: 2
arg_prob_bounds_exist: 4
arg_narrays_per_dim: 1
arg_avg_narrays_read_per_stmt: 3
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
static void init_array(int xa,int ya,DATA_TYPE POLYBENCH_2D(A,xA,yA,xa,ya),int xb,int yb,int zb,DATA_TYPE POLYBENCH_3D(B,xB,yB,zB,xb,yb,zb),int xc,int yc,DATA_TYPE POLYBENCH_2D(C,xC,yC,xc,yc),int xd,DATA_TYPE POLYBENCH_1D(D,xD,xd),int xe,int ye,int ze,DATA_TYPE POLYBENCH_3D(E,xE,yE,zE,xe,ye,ze),int seed)
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
    D[i_0] = 0.9 + (rand() / (DATA_TYPE)RAND_MAX) * (1.1 - 0.9);
}
for (i_0 = 0; i_0 < xe; i_0++) {
    for (i_1 = 0; i_1 < ye; i_1++) {
        for (i_2 = 0; i_2 < ze; i_2++) {
            E[i_0][i_1][i_2] = 0.9 + (rand() / (DATA_TYPE)RAND_MAX) * (1.1 - 0.9);
        }
    }
}
}
static void print_array(int xa,int ya,DATA_TYPE POLYBENCH_2D(A,xA,yA,xa,ya),int xb,int yb,int zb,DATA_TYPE POLYBENCH_3D(B,xB,yB,zB,xb,yb,zb),int xc,int yc,DATA_TYPE POLYBENCH_2D(C,xC,yC,xc,yc),int xd,DATA_TYPE POLYBENCH_1D(D,xD,xd),int xe,int ye,int ze,DATA_TYPE POLYBENCH_3D(E,xE,yE,zE,xe,ye,ze))
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
        fprintf(POLYBENCH_DUMP_TARGET, "\n");
        fprintf (POLYBENCH_DUMP_TARGET, DATA_PRINTF_MODIFIER, D[i_0]);
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
        sum_D += D[i_0];
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
void kernel_3224132211_00(int xa,int ya,DATA_TYPE POLYBENCH_2D(A,xA,yA,xa,ya),int xb,int yb,int zb,DATA_TYPE POLYBENCH_3D(B,xB,yB,zB,xb,yb,zb),int xc,int yc,DATA_TYPE POLYBENCH_2D(C,xC,yC,xc,yc),int xd,DATA_TYPE POLYBENCH_1D(D,xD,xd),int xe,int ye,int ze,DATA_TYPE POLYBENCH_3D(E,xE,yE,zE,xe,ye,ze)){
polybench_start_instruments;
  int t1, t2, t3, t4, t5, t6;
 int lb, ub, lbp, ubp, lb2, ub2;
 register int lbv, ubv;
/* Start of CLooG code */
if (PB_L >= 2) {
  if (PB_N >= 0) {
    for (t1=0;t1<=min(floord(2*PB_L+PB_N-5,32),floord(4*PB_L+3*PB_N-12,64));t1++) {
      lbp=max(max(0,ceild(32*t1-PB_L+1,32)),ceild(64*t1-2*PB_L-PB_N+4,64));
      ubp=min(min(floord(-32*t1+3*PB_L+2*PB_N-9,32),floord(32*t1+PB_N,64)),t1);
#pragma omp parallel for private(lbv,ubv,t3,t4,t5,t6)
      for (t2=lbp;t2<=ubp;t2++) {
        if ((PB_M <= -1) && (t2 <= floord(PB_N-2,32))) {
          for (t4=max(1,32*t1-32*t2);t4<=min(PB_L-1,32*t1-32*t2+31);t4++) {
            for (t5=32*t2;t5<=min(PB_N-2,32*t2+31);t5++) {
              A[t5][t4] = C[t5][t4] * C[t4-1][t5] - D[t5] + A[t5+1][t4] - 3;;
            }
          }
        }
        if ((PB_N >= -PB_M+2) && (t1 >= ceild(64*t2-PB_N-PB_M+2,32))) {
          for (t3=0;t3<=min(min(floord(PB_M,32),floord(PB_N+2*PB_M-2,64)),floord(32*t1-64*t2+PB_N+2*PB_M-2,64));t3++) {
            if ((PB_M <= 1) && (t2 <= floord(PB_N-2,32)) && (t3 == 0)) {
              for (t4=max(1,32*t1-32*t2);t4<=min(PB_L-1,32*t1-32*t2+31);t4++) {
                for (t5=32*t2;t5<=min(PB_N-2,32*t2+31);t5++) {
                  A[t5][t4] = C[t5][t4] * C[t4-1][t5] - D[t5] + A[t5+1][t4] - 3;;
                }
              }
            }
            if ((PB_M >= 2) && (t2 <= floord(PB_N-2,32)) && (t3 == 0)) {
              for (t4=max(1,32*t1-32*t2);t4<=min(min(32*t2,PB_L-1),32*t1-32*t2+31);t4++) {
                for (t5=32*t2;t5<=min(PB_N-2,32*t2+31);t5++) {
                  A[t5][t4] = C[t5][t4] * C[t4-1][t5] - D[t5] + A[t5+1][t4] - 3;;
                }
              }
            }
            if ((t3 >= 1) && (t3 <= floord(PB_M-1,32))) {
              for (t4=max(32*t1-32*t2,32*t2+1);t4<=min(PB_L-2,32*t1-32*t2+31);t4++) {
                for (t5=32*t2;t5<=min(32*t2+31,t4-1);t5++) {
                  lbv=32*t3;
                  ubv=min(PB_M-1,32*t3+31);
#pragma ivdep
#pragma vector always
                  for (t6=lbv;t6<=ubv;t6++) {
                    B[t4][t5][t6-1] = E[t5][t4][0] - C[t6][t5] * E[t6][t4+1][t5] + B[t4+1][t5][t6] + B[t4-1][t5][t6-1] - B[t4][t5+1][t6-1] * 6;;
                  }
                }
              }
            }
            if ((PB_M >= 2) && (t2 >= ceild(PB_N-1,32)) && (t3 == 0)) {
              for (t4=max(32*t1-32*t2,32*t2+1);t4<=min(PB_L-2,32*t1-32*t2+31);t4++) {
                for (t5=32*t2;t5<=min(32*t2+31,t4-1);t5++) {
                  lbv=1;
                  ubv=min(31,PB_M-1);
#pragma ivdep
#pragma vector always
                  for (t6=lbv;t6<=ubv;t6++) {
                    B[t4][t5][t6-1] = E[t5][t4][0] - C[t6][t5] * E[t6][t4+1][t5] + B[t4+1][t5][t6] + B[t4-1][t5][t6-1] - B[t4][t5+1][t6-1] * 6;;
                  }
                }
              }
            }
            if ((PB_M >= 2) && (t2 <= floord(PB_N-2,32)) && (t3 == 0)) {
              for (t4=max(32*t1-32*t2,32*t2+1);t4<=min(PB_L-2,32*t1-32*t2+31);t4++) {
                for (t5=32*t2;t5<=min(min(PB_N-2,32*t2+31),t4-1);t5++) {
                  A[t5][t4] = C[t5][t4] * C[t4-1][t5] - D[t5] + A[t5+1][t4] - 3;;
                  lbv=1;
                  ubv=min(31,PB_M-1);
#pragma ivdep
#pragma vector always
                  for (t6=lbv;t6<=ubv;t6++) {
                    B[t4][t5][t6-1] = E[t5][t4][0] - C[t6][t5] * E[t6][t4+1][t5] + B[t4+1][t5][t6] + B[t4-1][t5][t6-1] - B[t4][t5+1][t6-1] * 6;;
                  }
                }
                if (t1 == 2*t2) {
                  for (t5=t4;t5<=min(PB_N-2,16*t1+31);t5++) {
                    if (t1%2 == 0) {
                      A[t5][t4] = C[t5][t4] * C[t4-1][t5] - D[t5] + A[t5+1][t4] - 3;;
                    }
                  }
                }
                for (t5=PB_N-1;t5<=min(32*t2+31,t4-1);t5++) {
                  lbv=1;
                  ubv=min(31,PB_M-1);
#pragma ivdep
#pragma vector always
                  for (t6=lbv;t6<=ubv;t6++) {
                    B[t4][t5][t6-1] = E[t5][t4][0] - C[t6][t5] * E[t6][t4+1][t5] + B[t4+1][t5][t6] + B[t4-1][t5][t6-1] - B[t4][t5+1][t6-1] * 6;;
                  }
                }
              }
            }
            if ((PB_M >= 2) && (t1 >= ceild(32*t2+PB_L-32,32)) && (t2 <= min(floord(PB_L-2,32),floord(PB_N-2,32))) && (t3 == 0)) {
              for (t5=32*t2;t5<=min(PB_N-2,32*t2+31);t5++) {
                A[t5][(PB_L-1)] = C[t5][(PB_L-1)] * C[(PB_L-1)-1][t5] - D[t5] + A[t5+1][(PB_L-1)] - 3;;
              }
            }
          }
        }
      }
    }
  }
  if ((PB_M >= 2) && (PB_N <= -1)) {
    for (t1=0;t1<=floord(PB_L-3,16);t1++) {
      lbp=max(0,ceild(32*t1-PB_L+2,32));
      ubp=floord(t1,2);
#pragma omp parallel for private(lbv,ubv,t3,t4,t5,t6)
      for (t2=lbp;t2<=ubp;t2++) {
        for (t3=0;t3<=floord(PB_M-1,32);t3++) {
          for (t4=max(32*t1-32*t2,32*t2+1);t4<=min(PB_L-2,32*t1-32*t2+31);t4++) {
            for (t5=32*t2;t5<=min(32*t2+31,t4-1);t5++) {
              lbv=max(1,32*t3);
              ubv=min(PB_M-1,32*t3+31);
#pragma ivdep
#pragma vector always
              for (t6=lbv;t6<=ubv;t6++) {
                B[t4][t5][t6-1] = E[t5][t4][0] - C[t6][t5] * E[t6][t4+1][t5] + B[t4+1][t5][t6] + B[t4-1][t5][t6-1] - B[t4][t5+1][t6-1] * 6;;
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
int xd = xD;
int xe = xE;
int ye = yE;
int ze = zE;
POLYBENCH_2D_ARRAY_DECL(A, DATA_TYPE, xA,yA,xa,ya);
POLYBENCH_3D_ARRAY_DECL(B, DATA_TYPE, xB,yB,zB,xb,yb,zb);
POLYBENCH_2D_ARRAY_DECL(C, DATA_TYPE, xC,yC,xc,yc);
POLYBENCH_1D_ARRAY_DECL(D, DATA_TYPE, xD,xd);
POLYBENCH_3D_ARRAY_DECL(E, DATA_TYPE, xE,yE,zE,xe,ye,ze);
init_array(xa,ya,POLYBENCH_ARRAY(A), xb,yb,zb,POLYBENCH_ARRAY(B), xc,yc,POLYBENCH_ARRAY(C), xd,POLYBENCH_ARRAY(D), xe,ye,ze,POLYBENCH_ARRAY(E), INIT_SEED);
kernel_3224132211_00(xa,ya,POLYBENCH_ARRAY(A), xb,yb,zb,POLYBENCH_ARRAY(B), xc,yc,POLYBENCH_ARRAY(C), xd,POLYBENCH_ARRAY(D), xe,ye,ze,POLYBENCH_ARRAY(E));
polybench_prevent_dce(print_array(xa,ya,POLYBENCH_ARRAY(A), xb,yb,zb,POLYBENCH_ARRAY(B), xc,yc,POLYBENCH_ARRAY(C), xd,POLYBENCH_ARRAY(D), xe,ye,ze,POLYBENCH_ARRAY(E)));
POLYBENCH_FREE_ARRAY(A);
POLYBENCH_FREE_ARRAY(B);
POLYBENCH_FREE_ARRAY(C);
POLYBENCH_FREE_ARRAY(D);
POLYBENCH_FREE_ARRAY(E);
return 0;
}
