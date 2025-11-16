#include <stdio.h>
#include <unistd.h>
#include <string.h>
#include <math.h>
#include "polybench.h"
#include <time.h>
#include <stdlib.h>
#include "3222111221_00.h"
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
arg_bounds_coef: 1
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
static void init_array(int xa,int ya,int za,DATA_TYPE POLYBENCH_3D(A,xA,yA,zA,xa,ya,za),int xb,int yb,int zb,DATA_TYPE POLYBENCH_3D(B,xB,yB,zB,xb,yb,zb),int xc,int yc,int zc,DATA_TYPE POLYBENCH_3D(C,xC,yC,zC,xc,yc,zc),int seed)
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
}
static void print_array(int xa,int ya,int za,DATA_TYPE POLYBENCH_3D(A,xA,yA,zA,xa,ya,za),int xb,int yb,int zb,DATA_TYPE POLYBENCH_3D(B,xB,yB,zB,xb,yb,zb),int xc,int yc,int zc,DATA_TYPE POLYBENCH_3D(C,xC,yC,zC,xc,yc,zc))
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
#endif
POLYBENCH_DUMP_FINISH;
}
void kernel_3222111221_00(int xa,int ya,int za,DATA_TYPE POLYBENCH_3D(A,xA,yA,zA,xa,ya,za),int xb,int yb,int zb,DATA_TYPE POLYBENCH_3D(B,xB,yB,zB,xb,yb,zb),int xc,int yc,int zc,DATA_TYPE POLYBENCH_3D(C,xC,yC,zC,xc,yc,zc)){
polybench_start_instruments;
  int t1, t2, t3, t4, t5, t6, t7;
 int lb, ub, lbp, ubp, lb2, ub2;
 register int lbv, ubv;
/* Start of CLooG code */
if ((PB_L >= 2) && (PB_L >= -3*PB_M+11) && (PB_M >= 2)) {
  lbp=0;
  ubp=min(floord(PB_M-1,32),floord(PB_L+PB_M-4,32));
#pragma omp parallel for private(lbv,ubv,t2,t3,t4,t5,t6,t7)
  for (t1=lbp;t1<=ubp;t1++) {
    for (t2=0;t2<=floord(PB_M-1,32);t2++) {
      for (t3=max(ceild(96*t1+192*t2-2*PB_L-3*PB_M+13,96),2*t2);t3<=min(min(min(min(min(floord(PB_L+3*PB_M-5,32),floord(PB_L+5*PB_M-11,32)),floord(-32*t1+PB_L+3*PB_M-4,32)),floord(64*t2+PB_L+PB_M+59,32)),floord(-32*t1+64*t2+PB_L+PB_M+60,32)),floord(-288*t1+192*t2+61*PB_L+9*PB_M-122,96));t3++) {
        if ((PB_L <= 4) && (t1 == 0)) {
          for (t4=max(max(2,ceild(32*t3-PB_M+1,2)),32*t2);t4<=min(min(PB_M-1,32*t2+31),16*t3+15);t4++) {
            for (t5=max(32*t3,2*t4+1);t5<=min(32*t3+31,2*t4+PB_M-1);t5++) {
              lbv=1;
              ubv=min(PB_L-1,-2*t4+t5);
#pragma ivdep
#pragma vector always
              for (t6=lbv;t6<=ubv;t6++) {
                A[t4][(-2*t4+t5)][t6] = C[(-2*t4+t5)][t6][t6-1] - A[t4-2][(-2*t4+t5)][t6] - 2;;
              }
            }
          }
        }
        if ((PB_L >= 5) && (t1 <= floord(PB_L-1,32))) {
          for (t4=max(max(2,ceild(32*t3-PB_M+1,2)),32*t2);t4<=min(min(min(floord(32*t3-PB_L+2,2),PB_M-1),32*t1+31),32*t2+31);t4++) {
            for (t5=32*t3;t5<=min(32*t3+31,2*t4+PB_M-1);t5++) {
              lbv=max(1,32*t1);
              ubv=min(min(PB_L-1,32*t1+31),-2*t4+t5);
#pragma ivdep
#pragma vector always
              for (t6=lbv;t6<=ubv;t6++) {
                A[t4][(-2*t4+t5)][t6] = C[(-2*t4+t5)][t6][t6-1] - A[t4-2][(-2*t4+t5)][t6] - 2;;
              }
            }
          }
        }
        if ((PB_L >= 5) && (t1 >= ceild(PB_L,32))) {
          for (t4=max(max(1,ceild(32*t3-PB_L+3,2)),32*t2);t4<=min(min(min(PB_M-1,32*t1+31),32*t2+31),16*t3+14);t4++) {
            for (t5=max(32*t3,2*t4+2);t5<=min(32*t3+31,2*t4+PB_L-3);t5++) {
              lbv=max(32*t1,t4);
              ubv=min(PB_M-1,32*t1+31);
#pragma ivdep
#pragma vector always
              for (t6=lbv;t6<=ubv;t6++) {
                B[(-2*t4+t5)][t4][t6] = C[t6][t4][(-2*t4+t5)-1] - A[t4][(-2*t4+t5)][t6] + B[(-2*t4+t5)-2][t4][t6] + B[(-2*t4+t5)+2][t4-1][t6] - 1;;
              }
            }
          }
        }
        if ((PB_L >= 5) && (t1 <= floord(PB_L-1,32)) && (t2 == 0) && (t3 <= floord(PB_L-1,32))) {
          for (t5=max(4,32*t3);t5<=min(PB_L-1,32*t3+31);t5++) {
            lbv=max(1,32*t1);
            ubv=min(PB_M-1,32*t1+31);
#pragma ivdep
#pragma vector always
            for (t6=lbv;t6<=ubv;t6++) {
              B[(t5-2)][1][t6] = C[t6][1][(t5-2)-1] - A[1][(t5-2)][t6] + B[(t5-2)-2][1][t6] + B[(t5-2)+2][1 -1][t6] - 1;;
            }
          }
        }
        for (t4=max(max(2,ceild(32*t3-PB_L+3,2)),32*t2);t4<=min(min(min(floord(32*t3-PB_M,2),PB_M-1),32*t1+31),32*t2+31);t4++) {
          for (t5=32*t3;t5<=min(32*t3+31,2*t4+PB_L-3);t5++) {
            lbv=max(32*t1,t4);
            ubv=min(PB_M-1,32*t1+31);
#pragma ivdep
#pragma vector always
            for (t6=lbv;t6<=ubv;t6++) {
              B[(-2*t4+t5)][t4][t6] = C[t6][t4][(-2*t4+t5)-1] - A[t4][(-2*t4+t5)][t6] + B[(-2*t4+t5)-2][t4][t6] + B[(-2*t4+t5)+2][t4-1][t6] - 1;;
            }
          }
        }
        if ((PB_L >= 5) && (t1 <= floord(PB_L-1,32))) {
          for (t4=max(max(max(2,ceild(32*t3-PB_L+3,2)),ceild(32*t3-PB_M+1,2)),32*t2);t4<=min(min(min(min(PB_M-1,32*t1+31),32*t2+31),16*t3+14),-16*t1+16*t3+15);t4++) {
            if ((t1 == 0) && (t2 == 0) && (t3 <= floord(t4,16))) {
              A[t4][1][1] = C[1][1][1 -1] - A[t4-2][1][1] - 2;;
            }
            for (t5=max(32*t3,2*t4+2);t5<=min(32*t1+2*t4-1,2*t4+PB_L-3);t5++) {
              lbv=max(32*t1,t4);
              ubv=min(PB_M-1,32*t1+31);
#pragma ivdep
#pragma vector always
              for (t6=lbv;t6<=ubv;t6++) {
                B[(-2*t4+t5)][t4][t6] = C[t6][t4][(-2*t4+t5)-1] - A[t4][(-2*t4+t5)][t6] + B[(-2*t4+t5)-2][t4][t6] + B[(-2*t4+t5)+2][t4-1][t6] - 1;;
              }
            }
            for (t5=max(max(32*t3,32*t1+2*t4),2*t4+2);t5<=min(min(32*t3+31,2*t4+PB_L-3),2*t4+PB_M-1);t5++) {
              if (t1 == t2) {
                lbv=max(1,32*t1);
                ubv=min(-2*t4+t5,t4-1);
#pragma ivdep
#pragma vector always
                for (t6=lbv;t6<=ubv;t6++) {
                  A[t4][(-2*t4+t5)][t6] = C[(-2*t4+t5)][t6][t6-1] - A[t4-2][(-2*t4+t5)][t6] - 2;;
                }
              }
              lbv=max(32*t1,t4);
              ubv=min(32*t1+31,-2*t4+t5);
#pragma ivdep
#pragma vector always
              for (t6=lbv;t6<=ubv;t6++) {
                A[t4][(-2*t4+t5)][t6] = C[(-2*t4+t5)][t6][t6-1] - A[t4-2][(-2*t4+t5)][t6] - 2;;
                B[(-2*t4+t5)][t4][t6] = C[t6][t4][(-2*t4+t5)-1] - A[t4][(-2*t4+t5)][t6] + B[(-2*t4+t5)-2][t4][t6] + B[(-2*t4+t5)+2][t4-1][t6] - 1;;
              }
              lbv=max(t4,-2*t4+t5+1);
              ubv=min(PB_M-1,32*t1+31);
#pragma ivdep
#pragma vector always
              for (t6=lbv;t6<=ubv;t6++) {
                B[(-2*t4+t5)][t4][t6] = C[t6][t4][(-2*t4+t5)-1] - A[t4][(-2*t4+t5)][t6] + B[(-2*t4+t5)-2][t4][t6] + B[(-2*t4+t5)+2][t4-1][t6] - 1;;
              }
            }
            for (t5=max(32*t1+2*t4,2*t4+PB_L-2);t5<=min(32*t3+31,2*t4+PB_M-1);t5++) {
              lbv=max(1,32*t1);
              ubv=min(min(PB_L-1,32*t1+31),-2*t4+t5);
#pragma ivdep
#pragma vector always
              for (t6=lbv;t6<=ubv;t6++) {
                A[t4][(-2*t4+t5)][t6] = C[(-2*t4+t5)][t6][t6-1] - A[t4-2][(-2*t4+t5)][t6] - 2;;
              }
            }
            for (t5=2*t4+PB_M;t5<=min(32*t3+31,2*t4+PB_L-3);t5++) {
              lbv=max(32*t1,t4);
              ubv=min(PB_M-1,32*t1+31);
#pragma ivdep
#pragma vector always
              for (t6=lbv;t6<=ubv;t6++) {
                B[(-2*t4+t5)][t4][t6] = C[t6][t4][(-2*t4+t5)-1] - A[t4][(-2*t4+t5)][t6] + B[(-2*t4+t5)-2][t4][t6] + B[(-2*t4+t5)+2][t4-1][t6] - 1;;
              }
            }
          }
        }
        if ((PB_L >= 5) && (t1 <= floord(PB_L-1,32))) {
          for (t4=max(max(ceild(32*t3-PB_M+1,2),32*t2),32*t1+32);t4<=min(min(min(PB_M-1,32*t2+31),16*t3+14),-16*t1+16*t3+15);t4++) {
            for (t5=max(max(32*t3,32*t1+2*t4),2*t4+1);t5<=min(32*t3+31,2*t4+PB_M-1);t5++) {
              lbv=max(1,32*t1);
              ubv=min(min(PB_L-1,32*t1+31),-2*t4+t5);
#pragma ivdep
#pragma vector always
              for (t6=lbv;t6<=ubv;t6++) {
                A[t4][(-2*t4+t5)][t6] = C[(-2*t4+t5)][t6][t6-1] - A[t4-2][(-2*t4+t5)][t6] - 2;;
              }
            }
          }
        }
        if ((PB_L >= 5) && (t1 == 0) && (t2 >= ceild(t3-1,2)) && (t3 <= floord(PB_M-16,16))) {
          A[(16*t3+15)][1][1] = C[1][1][1 -1] - A[(16*t3+15)-2][1][1] - 2;;
        }
        if (t1 <= floord(PB_L-1,32)) {
          for (t4=max(max(2,32*t2),-16*t1+16*t3+16);t4<=min(min(min(PB_M-1,32*t1+31),32*t2+31),16*t3+14);t4++) {
            for (t5=max(32*t3,2*t4+2);t5<=min(32*t3+31,2*t4+PB_L-3);t5++) {
              lbv=max(32*t1,t4);
              ubv=min(PB_M-1,32*t1+31);
#pragma ivdep
#pragma vector always
              for (t6=lbv;t6<=ubv;t6++) {
                B[(-2*t4+t5)][t4][t6] = C[t6][t4][(-2*t4+t5)-1] - A[t4][(-2*t4+t5)][t6] + B[(-2*t4+t5)-2][t4][t6] + B[(-2*t4+t5)+2][t4-1][t6] - 1;;
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
POLYBENCH_3D_ARRAY_DECL(A, DATA_TYPE, xA,yA,zA,xa,ya,za);
POLYBENCH_3D_ARRAY_DECL(B, DATA_TYPE, xB,yB,zB,xb,yb,zb);
POLYBENCH_3D_ARRAY_DECL(C, DATA_TYPE, xC,yC,zC,xc,yc,zc);
init_array(xa,ya,za,POLYBENCH_ARRAY(A), xb,yb,zb,POLYBENCH_ARRAY(B), xc,yc,zc,POLYBENCH_ARRAY(C), INIT_SEED);
kernel_3222111221_00(xa,ya,za,POLYBENCH_ARRAY(A), xb,yb,zb,POLYBENCH_ARRAY(B), xc,yc,zc,POLYBENCH_ARRAY(C));
polybench_prevent_dce(print_array(xa,ya,za,POLYBENCH_ARRAY(A), xb,yb,zb,POLYBENCH_ARRAY(B), xc,yc,zc,POLYBENCH_ARRAY(C)));
POLYBENCH_FREE_ARRAY(A);
POLYBENCH_FREE_ARRAY(B);
POLYBENCH_FREE_ARRAY(C);
return 0;
}
