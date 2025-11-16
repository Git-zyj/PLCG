#include <stdio.h>
#include <unistd.h>
#include <string.h>
#include <math.h>
#include "polybench.h"
#include <time.h>
#include <stdlib.h>
#include "3212232123_00.h"
#include <omp.h>
#define ceild(n,d)  ceil(((double)(n))/((double)(d)))
#define floord(n,d) floor(((double)(n))/((double)(d)))
/*
arg_depth: 3
arg_nstmts: 2
arg_bounds_index: 1
arg_prob_bounds_exist: 2
arg_narrays_per_dim: 2
arg_avg_narrays_read_per_stmt: 3
arg_bounds_coef: 2
arg_avg_ndeps_read_per_stmt: 1
arg_bounds_distance: 2
arg_prob_dep_write_exist: 3
id: 0
*/
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
#ifndef USE_INIT_SEED
#define INIT_SEED time(NULL)
#else
#define INIT_SEED atoi(argv[1])
#endif
static void init_array(int xa,int ya,DATA_TYPE POLYBENCH_2D(A,xA,yA,xa,ya),int xb,int yb,int zb,DATA_TYPE POLYBENCH_3D(B,xB,yB,zB,xb,yb,zb),int xc,int yc,int zc,DATA_TYPE POLYBENCH_3D(C,xC,yC,zC,xc,yc,zc),int xd,int yd,int zd,DATA_TYPE POLYBENCH_3D(D,xD,yD,zD,xd,yd,zd),int seed)
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
for (i_0 = 0; i_0 < xd; i_0++) {
    for (i_1 = 0; i_1 < yd; i_1++) {
        for (i_2 = 0; i_2 < zd; i_2++) {
            D[i_0][i_1][i_2] = 0.9 + (rand() / (DATA_TYPE)RAND_MAX) * (1.1 - 0.9);
        }
    }
}
}
static void print_array(int xa,int ya,DATA_TYPE POLYBENCH_2D(A,xA,yA,xa,ya),int xb,int yb,int zb,DATA_TYPE POLYBENCH_3D(B,xB,yB,zB,xb,yb,zb),int xc,int yc,int zc,DATA_TYPE POLYBENCH_3D(C,xC,yC,zC,xc,yc,zc),int xd,int yd,int zd,DATA_TYPE POLYBENCH_3D(D,xD,yD,zD,xd,yd,zd))
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
void kernel_3212232123_00(int xa,int ya,DATA_TYPE POLYBENCH_2D(A,xA,yA,xa,ya),int xb,int yb,int zb,DATA_TYPE POLYBENCH_3D(B,xB,yB,zB,xb,yb,zb),int xc,int yc,int zc,DATA_TYPE POLYBENCH_3D(C,xC,yC,zC,xc,yc,zc),int xd,int yd,int zd,DATA_TYPE POLYBENCH_3D(D,xD,yD,zD,xd,yd,zd)){
polybench_start_instruments;
  int t1, t2, t3, t4, t5, t6;
 int lb, ub, lbp, ubp, lb2, ub2;
 register int lbv, ubv;
/* Start of CLooG code */
if ((PB_L >= 0) && (PB_M >= max(0,ceild(-PB_L+4,4)))) {
  lbp=0;
  ubp=min(floord(3*PB_M+PB_L-3,16),floord(PB_M+2*PB_L-1,32));
#pragma omp parallel for private(lbv,ubv,t2,t3,t4,t5,t6)
  for (t1=lbp;t1<=ubp;t1++) {
    if ((PB_L >= 4) && (PB_P <= -1) && (t1 <= floord(PB_L-3,16))) {
      for (t2=max(0,ceild(32*t1-PB_L-28,32));t2<=min(floord(PB_L-3,32),t1);t2++) {
        for (t3=t2;t3<=t1;t3++) {
          for (t4=max(1,32*t1);t4<=min(min(2*PB_L-6,32*t1+31),32*t2+PB_L+28);t4++) {
            for (t5=max(max(1,32*t2),t4-PB_L+3);t5<=min(min(t4,PB_L-3),32*t2+31);t5++) {
              for (t6=max(32*t3,t5);t6<=min(t4,32*t3+31);t6++) {
                B[(t4-t5)][(-t5+t6)][t5+2] = C[(-t5+t6)+2][(t4-t5)+1][(-t5+t6)] + D[(-t5+t6)][t5][2] + D[(t4-t5)][t5][(-t5+t6)] + D[(t4-t5)][(-t5+t6)+2][t5-1] * C[(-t5+t6)][(t4-t5)][t5] * D[t5][t5][(-t5+t6)] - B[t5][(-t5+t6)+1][(t4-t5)+2] - 2;;
              }
            }
          }
        }
      }
    }
    if ((PB_P >= max(0,ceild(-3*PB_L+12,4))) && (t1 <= floord(5*PB_P+3*PB_M+6*PB_L-18,96))) {
      for (t2=max(max(0,ceild(32*t1-PB_M-PB_L-28,32)),ceild(1088*t1-34*PB_M-63*PB_L+34,160));t2<=min(min(min(min(floord(PB_P+PB_L+1,32),floord(32*t1+PB_P+1,32)),floord(32*t1+PB_P+PB_M,32)),floord(PB_P+4*PB_M+PB_L-3,32)),floord(7*PB_P+3*PB_L-9,96));t2++) {
        for (t3=max(max(max(max(max(0,ceild(32*t2-PB_P-1,32)),ceild(32*t2-PB_P-PB_M,32)),ceild(32*t1-PB_M-PB_L-28,32)),ceild(1088*t1-34*PB_M-63*PB_L+34,160)),ceild(32*t1+928*t2-29*PB_P-PB_M-PB_L-28,960));t3<=min(min(min(min(floord(PB_L,16),floord(PB_P+PB_L-3,16)),floord(32*t2+PB_L+28,32)),floord(96*t2+31*PB_L,544)),t1);t3++) {
          if ((t2 >= 1) && (t3 == 0)) {
            for (t4=32*t1;t4<=min(PB_M-1,32*t1+31);t4++) {
              for (t5=32*t2;t5<=min(PB_P+1,32*t2+31);t5++) {
                A[t4][t5-2] = A[t4][t5-4] - 5;;
              }
            }
          }
          if ((PB_M >= 1) && (PB_P >= 3) && (t1 == 0) && (t2 == 0) && (t3 == 0)) {
            for (t5=4;t5<=min(31,PB_P+1);t5++) {
              A[0][t5-2] = A[0][t5-4] - 5;;
            }
          }
          if ((t2 <= min(floord(PB_L-3,32),t3)) && (t3 >= 1)) {
            for (t4=32*t1;t4<=min(min(2*PB_L-6,32*t1+31),32*t2+PB_L+28);t4++) {
              for (t5=max(max(1,32*t2),t4-PB_L+3);t5<=min(min(t4,PB_L-3),32*t2+31);t5++) {
                for (t6=max(32*t3,t5);t6<=min(t4,32*t3+31);t6++) {
                  B[(t4-t5)][(-t5+t6)][t5+2] = C[(-t5+t6)+2][(t4-t5)+1][(-t5+t6)] + D[(-t5+t6)][t5][2] + D[(t4-t5)][t5][(-t5+t6)] + D[(t4-t5)][(-t5+t6)+2][t5-1] * C[(-t5+t6)][(t4-t5)][t5] * D[t5][t5][(-t5+t6)] - B[t5][(-t5+t6)+1][(t4-t5)+2] - 2;;
                }
              }
            }
          }
          if ((PB_P <= 2) && (t2 == 0) && (t3 == 0)) {
            for (t4=max(1,32*t1);t4<=min(min(PB_L+28,2*PB_L-6),32*t1+31);t4++) {
              for (t5=max(1,t4-PB_L+3);t5<=min(min(31,t4),PB_L-3);t5++) {
                for (t6=t5;t6<=min(31,t4);t6++) {
                  B[(t4-t5)][(-t5+t6)][t5+2] = C[(-t5+t6)+2][(t4-t5)+1][(-t5+t6)] + D[(-t5+t6)][t5][2] + D[(t4-t5)][t5][(-t5+t6)] + D[(t4-t5)][(-t5+t6)+2][t5-1] * C[(-t5+t6)][(t4-t5)][t5] * D[t5][t5][(-t5+t6)] - B[t5][(-t5+t6)+1][(t4-t5)+2] - 2;;
                }
              }
            }
          }
          if ((PB_P >= 3) && (t2 == 0) && (t3 == 0)) {
            for (t4=max(1,32*t1);t4<=min(min(min(PB_L+28,2*PB_L-6),PB_M-1),32*t1+31);t4++) {
              for (t5=4;t5<=min(PB_P+1,t4-PB_L+2);t5++) {
                A[t4][t5-2] = A[t4][t5-4] - 5;;
              }
              for (t5=max(1,t4-PB_L+3);t5<=min(min(3,t4),PB_L-3);t5++) {
                for (t6=t5;t6<=min(31,t4);t6++) {
                  B[(t4-t5)][(-t5+t6)][t5+2] = C[(-t5+t6)+2][(t4-t5)+1][(-t5+t6)] + D[(-t5+t6)][t5][2] + D[(t4-t5)][t5][(-t5+t6)] + D[(t4-t5)][(-t5+t6)+2][t5-1] * C[(-t5+t6)][(t4-t5)][t5] * D[t5][t5][(-t5+t6)] - B[t5][(-t5+t6)+1][(t4-t5)+2] - 2;;
                }
              }
              for (t5=max(4,t4-PB_L+3);t5<=min(min(min(31,t4),PB_L-3),PB_P+1);t5++) {
                A[t4][t5-2] = A[t4][t5-4] - 5;;
                for (t6=t5;t6<=min(31,t4);t6++) {
                  B[(t4-t5)][(-t5+t6)][t5+2] = C[(-t5+t6)+2][(t4-t5)+1][(-t5+t6)] + D[(-t5+t6)][t5][2] + D[(t4-t5)][t5][(-t5+t6)] + D[(t4-t5)][(-t5+t6)+2][t5-1] * C[(-t5+t6)][(t4-t5)][t5] * D[t5][t5][(-t5+t6)] - B[t5][(-t5+t6)+1][(t4-t5)+2] - 2;;
                }
              }
              for (t5=max(4,PB_L-2);t5<=min(min(31,t4),PB_P+1);t5++) {
                A[t4][t5-2] = A[t4][t5-4] - 5;;
              }
              for (t5=max(PB_P+2,t4-PB_L+3);t5<=min(min(31,t4),PB_L-3);t5++) {
                for (t6=t5;t6<=min(31,t4);t6++) {
                  B[(t4-t5)][(-t5+t6)][t5+2] = C[(-t5+t6)+2][(t4-t5)+1][(-t5+t6)] + D[(-t5+t6)][t5][2] + D[(t4-t5)][t5][(-t5+t6)] + D[(t4-t5)][(-t5+t6)+2][t5-1] * C[(-t5+t6)][(t4-t5)][t5] * D[t5][t5][(-t5+t6)] - B[t5][(-t5+t6)+1][(t4-t5)+2] - 2;;
                }
              }
              if (t1 == 0) {
                for (t5=max(4,t4+1);t5<=min(31,PB_P+1);t5++) {
                  A[t4][t5-2] = A[t4][t5-4] - 5;;
                }
              }
            }
          }
          if ((PB_P >= 3) && (t2 == 0) && (t3 == 0)) {
            for (t4=max(max(1,32*t1),2*PB_L-5);t4<=min(min(PB_L+28,PB_M-1),32*t1+31);t4++) {
              for (t5=4;t5<=min(31,PB_P+1);t5++) {
                A[t4][t5-2] = A[t4][t5-4] - 5;;
              }
            }
          }
          if ((PB_P >= 3) && (t2 == 0) && (t3 == 0)) {
            for (t4=max(max(1,PB_M),32*t1);t4<=min(min(PB_L+28,2*PB_L-6),32*t1+31);t4++) {
              for (t5=max(1,t4-PB_L+3);t5<=min(min(31,t4),PB_L-3);t5++) {
                for (t6=t5;t6<=min(31,t4);t6++) {
                  B[(t4-t5)][(-t5+t6)][t5+2] = C[(-t5+t6)+2][(t4-t5)+1][(-t5+t6)] + D[(-t5+t6)][t5][2] + D[(t4-t5)][t5][(-t5+t6)] + D[(t4-t5)][(-t5+t6)+2][t5-1] * C[(-t5+t6)][(t4-t5)][t5] * D[t5][t5][(-t5+t6)] - B[t5][(-t5+t6)+1][(t4-t5)+2] - 2;;
                }
              }
            }
          }
          if ((PB_P >= 3) && (t2 == 0) && (t3 == 0)) {
            for (t4=max(32*t1,PB_L+29);t4<=min(PB_M-1,32*t1+31);t4++) {
              for (t5=4;t5<=min(31,PB_P+1);t5++) {
                A[t4][t5-2] = A[t4][t5-4] - 5;;
              }
            }
          }
        }
      }
    }
  }
}
if ((PB_L <= -1) && (PB_P >= 3)) {
  lbp=0;
  ubp=floord(PB_M-1,32);
#pragma omp parallel for private(lbv,ubv,t2,t3,t4,t5,t6)
  for (t1=lbp;t1<=ubp;t1++) {
    for (t2=0;t2<=floord(PB_P+1,32);t2++) {
      for (t4=32*t1;t4<=min(PB_M-1,32*t1+31);t4++) {
        for (t5=max(4,32*t2);t5<=min(PB_P+1,32*t2+31);t5++) {
          A[t4][t5-2] = A[t4][t5-4] - 5;;
        }
      }
    }
  }
}
if ((PB_L >= 4) && (PB_M <= -1)) {
  lbp=0;
  ubp=floord(PB_L-3,16);
#pragma omp parallel for private(lbv,ubv,t2,t3,t4,t5,t6)
  for (t1=lbp;t1<=ubp;t1++) {
    for (t2=max(0,ceild(32*t1-PB_L-28,32));t2<=min(floord(PB_L-3,32),t1);t2++) {
      for (t3=t2;t3<=t1;t3++) {
        for (t4=max(1,32*t1);t4<=min(min(2*PB_L-6,32*t1+31),32*t2+PB_L+28);t4++) {
          for (t5=max(max(1,32*t2),t4-PB_L+3);t5<=min(min(t4,PB_L-3),32*t2+31);t5++) {
            for (t6=max(32*t3,t5);t6<=min(t4,32*t3+31);t6++) {
              B[(t4-t5)][(-t5+t6)][t5+2] = C[(-t5+t6)+2][(t4-t5)+1][(-t5+t6)] + D[(-t5+t6)][t5][2] + D[(t4-t5)][t5][(-t5+t6)] + D[(t4-t5)][(-t5+t6)+2][t5-1] * C[(-t5+t6)][(t4-t5)][t5] * D[t5][t5][(-t5+t6)] - B[t5][(-t5+t6)+1][(t4-t5)+2] - 2;;
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
int xd = xD;
int yd = yD;
int zd = zD;
POLYBENCH_2D_ARRAY_DECL(A, DATA_TYPE, xA,yA,xa,ya);
POLYBENCH_3D_ARRAY_DECL(B, DATA_TYPE, xB,yB,zB,xb,yb,zb);
POLYBENCH_3D_ARRAY_DECL(C, DATA_TYPE, xC,yC,zC,xc,yc,zc);
POLYBENCH_3D_ARRAY_DECL(D, DATA_TYPE, xD,yD,zD,xd,yd,zd);
init_array(xa,ya,POLYBENCH_ARRAY(A), xb,yb,zb,POLYBENCH_ARRAY(B), xc,yc,zc,POLYBENCH_ARRAY(C), xd,yd,zd,POLYBENCH_ARRAY(D), INIT_SEED);
kernel_3212232123_00(xa,ya,POLYBENCH_ARRAY(A), xb,yb,zb,POLYBENCH_ARRAY(B), xc,yc,zc,POLYBENCH_ARRAY(C), xd,yd,zd,POLYBENCH_ARRAY(D));
polybench_prevent_dce(print_array(xa,ya,POLYBENCH_ARRAY(A), xb,yb,zb,POLYBENCH_ARRAY(B), xc,yc,zc,POLYBENCH_ARRAY(C), xd,yd,zd,POLYBENCH_ARRAY(D)));
POLYBENCH_FREE_ARRAY(A);
POLYBENCH_FREE_ARRAY(B);
POLYBENCH_FREE_ARRAY(C);
POLYBENCH_FREE_ARRAY(D);
return 0;
}
