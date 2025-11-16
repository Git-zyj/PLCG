#include <stdio.h>
#include <unistd.h>
#include <string.h>
#include <math.h>
#include "polybench.h"
#include <time.h>
#include <stdlib.h>
#include "3222112221_00.h"
#include <omp.h>
#define ceild(n,d)  ceil(((double)(n))/((double)(d)))
#define floord(n,d) floor(((double)(n))/((double)(d)))
/*
arg_depth: 3
arg_nstmts: 2
arg_bounds_index: 2
arg_prob_bounds_exist: 2
arg_narrays_per_dim: 1
arg_avg_narrays_read_per_stmt: 1
arg_bounds_coef: 2
arg_avg_ndeps_read_per_stmt: 2
arg_bounds_distance: 2
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
static void init_array(int xa,int ya,int za,int va,DATA_TYPE POLYBENCH_4D(A,xA,yA,zA,vA,xa,ya,za,va),int xb,int yb,DATA_TYPE POLYBENCH_2D(B,xB,yB,xb,yb),int xc,int yc,int zc,DATA_TYPE POLYBENCH_3D(C,xC,yC,zC,xc,yc,zc),int xd,int yd,DATA_TYPE POLYBENCH_2D(D,xD,yD,xd,yd),int seed)
{
srand(seed);
int i_0, i_1, i_2, i_3;
for (i_0 = 0; i_0 < xa; i_0++) {
    for (i_1 = 0; i_1 < ya; i_1++) {
        for (i_2 = 0; i_2 < za; i_2++) {
            for (i_3 = 0; i_3 < va; i_3++) {
                A[i_0][i_1][i_2][i_3] = 0.9 + (rand() / (DATA_TYPE)RAND_MAX) * (1.1 - 0.9);
            }
        }
    }
}
for (i_0 = 0; i_0 < xb; i_0++) {
    for (i_1 = 0; i_1 < yb; i_1++) {
        B[i_0][i_1] = 0.9 + (rand() / (DATA_TYPE)RAND_MAX) * (1.1 - 0.9);
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
        D[i_0][i_1] = 0.9 + (rand() / (DATA_TYPE)RAND_MAX) * (1.1 - 0.9);
    }
}
}
static void print_array(int xa,int ya,int za,int va,DATA_TYPE POLYBENCH_4D(A,xA,yA,zA,vA,xa,ya,za,va),int xb,int yb,DATA_TYPE POLYBENCH_2D(B,xB,yB,xb,yb),int xc,int yc,int zc,DATA_TYPE POLYBENCH_3D(C,xC,yC,zC,xc,yc,zc),int xd,int yd,DATA_TYPE POLYBENCH_2D(D,xD,yD,xd,yd))
{
int i_0, i_1, i_2, i_3;
POLYBENCH_DUMP_START;
#ifdef CHECKELEM
    POLYBENCH_DUMP_BEGIN("A");
    for (i_0 = 0; i_0 < xa; i_0++) {
        for (i_1 = 0; i_1 < ya; i_1++) {
            for (i_2 = 0; i_2 < za; i_2++) {
                for (i_3 = 0; i_3 < va; i_3++) {
                    fprintf(POLYBENCH_DUMP_TARGET, "\n");
                    fprintf (POLYBENCH_DUMP_TARGET, DATA_PRINTF_MODIFIER, A[i_0][i_1][i_2][i_3]);
                }
            }
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
            fprintf(POLYBENCH_DUMP_TARGET, "\n");
            fprintf (POLYBENCH_DUMP_TARGET, DATA_PRINTF_MODIFIER, D[i_0][i_1]);
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
                for (i_3 = 0; i_3 < va; i_3++) {
                    sum_A += A[i_0][i_1][i_2][i_3];
                }
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
            sum_D += D[i_0][i_1];
        }
    }
    fprintf(POLYBENCH_DUMP_TARGET, "\nsum: ");
    fprintf (POLYBENCH_DUMP_TARGET, DATA_PRINTF_MODIFIER, sum_D);
    POLYBENCH_DUMP_END("D");
#endif
POLYBENCH_DUMP_FINISH;
}
void kernel_3222112221_00(int xa,int ya,int za,int va,DATA_TYPE POLYBENCH_4D(A,xA,yA,zA,vA,xa,ya,za,va),int xb,int yb,DATA_TYPE POLYBENCH_2D(B,xB,yB,xb,yb),int xc,int yc,int zc,DATA_TYPE POLYBENCH_3D(C,xC,yC,zC,xc,yc,zc),int xd,int yd,DATA_TYPE POLYBENCH_2D(D,xD,yD,xd,yd)){
polybench_start_instruments;
  int t1, t2, t3, t4, t5, t6;
 int lb, ub, lbp, ubp, lb2, ub2;
 register int lbv, ubv;
/* Start of CLooG code */
if (PB_M >= 1) {
  if ((PB_L >= 0) && (PB_P >= max(max(0,ceild(-3*PB_M+15,4)),-PB_L+3))) {
    for (t1=0;t1<=min(floord(PB_P+3*PB_M+PB_L-5,32),floord(10*PB_P+9*PB_M+3*PB_L-36,96));t1++) {
      lbp=max(max(max(0,ceild(32*t1-PB_M+1,32)),ceild(96*t1-2*PB_P-3*PB_M+9,96)),ceild(96*t1-4*PB_P-3*PB_M+15,144));
      ubp=min(min(min(min(floord(8*PB_P+6*PB_M+3*PB_L-27,96),floord(64*t1+PB_P+PB_L+59,96)),floord(192*t1+3*PB_P+64*PB_L-6,288)),floord(160*t1+33*PB_P+61*PB_M+33*PB_L-127,1216)),t1);
#pragma omp parallel for private(lbv,ubv,t3,t4,t5,t6)
      for (t2=lbp;t2<=ubp;t2++) {
        for (t3=max(max(max(max(0,ceild(-64*t1+96*t2-PB_L-59,16)),ceild(-96*t1+144*t2-31*PB_L,24)),ceild(96*t2-7*PB_P-6*PB_M-3*PB_L+27,48)),ceild(-224*t1+1280*t2-59*PB_M-33*PB_L+59,528));t3<=min(min(min(min(min(min(min(floord(3*PB_P,32),floord(64*t2+PB_P+61,32)),floord(-32*t2+4*PB_P+2*PB_M+PB_L-9,32)),floord(-160*t1+160*t2+6*PB_P+5*PB_M-15,64)),floord(9*PB_P+5*PB_L-15,96)),floord(12*PB_P+5*PB_M-25,128)),floord(80*t2+47*PB_P,528)),floord(-160*t1+240*t2+59*PB_P+5*PB_M-25,656));t3++) {
          if ((PB_L <= 2) && (PB_P >= 3) && (t2 == 0) && (t3 == 0)) {
            for (t4=32*t1;t4<=min(PB_M-1,32*t1+31);t4++) {
              for (t5=1;t5<=min(15,PB_P-2);t5++) {
                for (t6=2*t5+1;t6<=min(31,2*t5+PB_P-1);t6++) {
                  A[t4][(-2*t5+t6)-1][t5+1][t5] = C[t5+2][(-2*t5+t6)-1][t4] - A[t4][t5-1][(-2*t5+t6)][(-2*t5+t6)-1] * 1;;
                }
              }
            }
          }
          if ((PB_L >= 3) && (PB_P >= 3) && (t1 == 0) && (t2 == 0) && (t3 == 0)) {
            for (t4=0;t4<=min(1,PB_M-1);t4++) {
              for (t5=1;t5<=min(15,PB_P-2);t5++) {
                for (t6=2*t5+1;t6<=min(31,2*t5+PB_P-1);t6++) {
                  A[t4][(-2*t5+t6)-1][t5+1][t5] = C[t5+2][(-2*t5+t6)-1][t4] - A[t4][t5-1][(-2*t5+t6)][(-2*t5+t6)-1] * 1;;
                }
              }
            }
          }
          if ((PB_L >= 3) && (PB_P <= 2) && (t3 == 0)) {
            for (t4=max(max(2,ceild(32*t2-PB_L+3,2)),32*t1-32*t2);t4<=min(min(PB_M-3,16*t2+15),32*t1-32*t2+31);t4++) {
              for (t5=max(32*t2,2*t4);t5<=min(32*t2+31,2*t4+PB_L-3);t5++) {
                B[t4][(-2*t4+t5)] = D[t4+2][(-2*t4+t5)+2] - B[t4-2][(-2*t4+t5)] - B[t4+2][(-2*t4+t5)] * B[(-2*t4+t5)+2][t4-1] + 5;;
              }
            }
          }
          if ((PB_L >= 3) && (PB_P >= 3) && (t2 >= 1) && (t3 == 0)) {
            for (t4=max(max(2,ceild(32*t2-PB_L+3,2)),32*t1-32*t2);t4<=min(min(PB_M-3,16*t2+15),32*t1-32*t2+31);t4++) {
              for (t5=max(32*t2,2*t4);t5<=min(32*t2+31,2*t4+PB_L-3);t5++) {
                B[t4][(-2*t4+t5)] = D[t4+2][(-2*t4+t5)+2] - B[t4-2][(-2*t4+t5)] - B[t4+2][(-2*t4+t5)] * B[(-2*t4+t5)+2][t4-1] + 5;;
              }
            }
          }
          if ((PB_L >= 3) && (PB_P >= 3) && (t1 == 0) && (t2 == 0) && (t3 == 0)) {
            for (t4=2;t4<=min(15,PB_M-3);t4++) {
              for (t5=1;t5<=min(min(15,PB_P-2),2*t4-1);t5++) {
                for (t6=2*t5+1;t6<=min(31,2*t5+PB_P-1);t6++) {
                  A[t4][(-2*t5+t6)-1][t5+1][t5] = C[t5+2][(-2*t5+t6)-1][t4] - A[t4][t5-1][(-2*t5+t6)][(-2*t5+t6)-1] * 1;;
                }
              }
              for (t5=2*t4;t5<=min(min(15,PB_P-2),2*t4+PB_L-3);t5++) {
                B[t4][(-2*t4+t5)] = D[t4+2][(-2*t4+t5)+2] - B[t4-2][(-2*t4+t5)] - B[t4+2][(-2*t4+t5)] * B[(-2*t4+t5)+2][t4-1] + 5;;
                for (t6=2*t5+1;t6<=min(31,2*t5+PB_P-1);t6++) {
                  A[t4][(-2*t5+t6)-1][t5+1][t5] = C[t5+2][(-2*t5+t6)-1][t4] - A[t4][t5-1][(-2*t5+t6)][(-2*t5+t6)-1] * 1;;
                }
              }
              for (t5=2*t4+PB_L-2;t5<=min(15,PB_P-2);t5++) {
                for (t6=2*t5+1;t6<=min(31,2*t5+PB_P-1);t6++) {
                  A[t4][(-2*t5+t6)-1][t5+1][t5] = C[t5+2][(-2*t5+t6)-1][t4] - A[t4][t5-1][(-2*t5+t6)][(-2*t5+t6)-1] * 1;;
                }
              }
              for (t5=max(2*t4,PB_P-1);t5<=min(15,2*t4+PB_L-3);t5++) {
                B[t4][(-2*t4+t5)] = D[t4+2][(-2*t4+t5)+2] - B[t4-2][(-2*t4+t5)] - B[t4+2][(-2*t4+t5)] * B[(-2*t4+t5)+2][t4-1] + 5;;
              }
              for (t5=max(16,2*t4);t5<=min(31,2*t4+PB_L-3);t5++) {
                B[t4][(-2*t4+t5)] = D[t4+2][(-2*t4+t5)+2] - B[t4-2][(-2*t4+t5)] - B[t4+2][(-2*t4+t5)] * B[(-2*t4+t5)+2][t4-1] + 5;;
              }
            }
          }
          if ((PB_L >= 3) && (PB_P >= 3) && (t1 == 0) && (t2 == 0) && (t3 == 0)) {
            for (t4=max(2,PB_M-2);t4<=min(15,PB_M-1);t4++) {
              for (t5=1;t5<=min(15,PB_P-2);t5++) {
                for (t6=2*t5+1;t6<=min(31,2*t5+PB_P-1);t6++) {
                  A[t4][(-2*t5+t6)-1][t5+1][t5] = C[t5+2][(-2*t5+t6)-1][t4] - A[t4][t5-1][(-2*t5+t6)][(-2*t5+t6)-1] * 1;;
                }
              }
            }
          }
          if ((PB_P >= 3) && (t2 <= min(floord(t3,2),floord(PB_P-2,32))) && (t3 <= floord(3*PB_P-5,32)) && (t3 >= ceild(-PB_L+3,3))) {
            for (t4=max(32*t1-32*t2,-16*t3+16);t4<=min(PB_M-1,32*t1-32*t2+31);t4++) {
              for (t5=max(max(1,ceild(32*t3-PB_P+1,2)),32*t2);t5<=min(min(PB_P-2,32*t2+31),16*t3+15);t5++) {
                for (t6=max(32*t3,2*t5+1);t6<=min(32*t3+31,2*t5+PB_P-1);t6++) {
                  A[t4][(-2*t5+t6)-1][t5+1][t5] = C[t5+2][(-2*t5+t6)-1][t4] - A[t4][t5-1][(-2*t5+t6)][(-2*t5+t6)-1] * 1;;
                }
              }
            }
          }
        }
      }
    }
  }
  if ((PB_L <= -1) && (PB_P >= 3)) {
    for (t1=0;t1<=floord(PB_P+PB_M-3,32);t1++) {
      lbp=max(0,ceild(32*t1-PB_M+1,32));
      ubp=min(floord(PB_P-2,32),t1);
#pragma omp parallel for private(lbv,ubv,t3,t4,t5,t6)
      for (t2=lbp;t2<=ubp;t2++) {
        for (t3=2*t2;t3<=min(floord(3*PB_P-5,32),floord(64*t2+PB_P+61,32));t3++) {
          for (t4=32*t1-32*t2;t4<=min(PB_M-1,32*t1-32*t2+31);t4++) {
            for (t5=max(max(1,ceild(32*t3-PB_P+1,2)),32*t2);t5<=min(min(PB_P-2,32*t2+31),16*t3+15);t5++) {
              for (t6=max(32*t3,2*t5+1);t6<=min(32*t3+31,2*t5+PB_P-1);t6++) {
                A[t4][(-2*t5+t6)-1][t5+1][t5] = C[t5+2][(-2*t5+t6)-1][t4] - A[t4][t5-1][(-2*t5+t6)][(-2*t5+t6)-1] * 1;;
              }
            }
          }
        }
      }
    }
  }
  if ((PB_L >= 3) && (PB_M >= 5) && (PB_P <= -1)) {
    for (t1=0;t1<=floord(3*PB_M+PB_L-12,32);t1++) {
      lbp=max(ceild(2*t1,3),ceild(32*t1-PB_M+3,32));
      ubp=min(min(floord(2*PB_M+PB_L-9,32),floord(64*t1+PB_L+59,96)),t1);
#pragma omp parallel for private(lbv,ubv,t3,t4,t5,t6)
      for (t2=lbp;t2<=ubp;t2++) {
        for (t4=max(max(2,ceild(32*t2-PB_L+3,2)),32*t1-32*t2);t4<=min(min(PB_M-3,16*t2+15),32*t1-32*t2+31);t4++) {
          for (t5=max(32*t2,2*t4);t5<=min(32*t2+31,2*t4+PB_L-3);t5++) {
            B[t4][(-2*t4+t5)] = D[t4+2][(-2*t4+t5)+2] - B[t4-2][(-2*t4+t5)] - B[t4+2][(-2*t4+t5)] * B[(-2*t4+t5)+2][t4-1] + 5;;
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
int va = vA;
int xb = xB;
int yb = yB;
int xc = xC;
int yc = yC;
int zc = zC;
int xd = xD;
int yd = yD;
POLYBENCH_4D_ARRAY_DECL(A, DATA_TYPE, xA,yA,zA,vA,xa,ya,za,va);
POLYBENCH_2D_ARRAY_DECL(B, DATA_TYPE, xB,yB,xb,yb);
POLYBENCH_3D_ARRAY_DECL(C, DATA_TYPE, xC,yC,zC,xc,yc,zc);
POLYBENCH_2D_ARRAY_DECL(D, DATA_TYPE, xD,yD,xd,yd);
init_array(xa,ya,za,va,POLYBENCH_ARRAY(A), xb,yb,POLYBENCH_ARRAY(B), xc,yc,zc,POLYBENCH_ARRAY(C), xd,yd,POLYBENCH_ARRAY(D), INIT_SEED);
kernel_3222112221_00(xa,ya,za,va,POLYBENCH_ARRAY(A), xb,yb,POLYBENCH_ARRAY(B), xc,yc,zc,POLYBENCH_ARRAY(C), xd,yd,POLYBENCH_ARRAY(D));
polybench_prevent_dce(print_array(xa,ya,za,va,POLYBENCH_ARRAY(A), xb,yb,POLYBENCH_ARRAY(B), xc,yc,zc,POLYBENCH_ARRAY(C), xd,yd,POLYBENCH_ARRAY(D)));
POLYBENCH_FREE_ARRAY(A);
POLYBENCH_FREE_ARRAY(B);
POLYBENCH_FREE_ARRAY(C);
POLYBENCH_FREE_ARRAY(D);
return 0;
}
