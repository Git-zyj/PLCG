#include <stdio.h>
#include <unistd.h>
#include <string.h>
#include <math.h>
#include "polybench.h"
#include <time.h>
#include <stdlib.h>
#include "3212211211_01.h"
#include <omp.h>
#define ceild(n,d)  ceil(((double)(n))/((double)(d)))
#define floord(n,d) floor(((double)(n))/((double)(d)))
/*
arg_depth: 3
arg_nstmts: 2
arg_bounds_index: 1
arg_prob_bounds_exist: 2
arg_narrays_per_dim: 2
arg_avg_narrays_read_per_stmt: 1
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
void kernel_3212211211_01(int xa,int ya,DATA_TYPE POLYBENCH_2D(A,xA,yA,xa,ya),int xb,int yb,int zb,DATA_TYPE POLYBENCH_3D(B,xB,yB,zB,xb,yb,zb),int xc,int yc,int zc,DATA_TYPE POLYBENCH_3D(C,xC,yC,zC,xc,yc,zc)){
polybench_start_instruments;
  int t1, t2, t3, t4, t5, t6;
 int lb, ub, lbp, ubp, lb2, ub2;
 register int lbv, ubv;
/* Start of CLooG code */
if ((PB_L >= 0) && (PB_N >= max(0,-3*PB_L+3))) {
  for (t1=max(ceild(-3*PB_L-4,4),ceild(-3*PB_L-53,32));t1<=min(min(floord(PB_N+2*PB_L-18,16),floord(PB_N-17,17)),floord(PB_N-2,32));t1++) {
    lbp=max(ceild(-t1-4,3),t1+1);
    ubp=min(min(min(min(min(min(min(min(floord(-8*t1+PB_N-2,12),floord(PB_N+2*PB_L-2,16)),floord(2*PB_N+PB_L,32)),floord(32*t1+PB_N+4*PB_L+30,32)),floord(-32*t1+5*PB_N,64)),floord(64*t1+4*PB_N+9*PB_L+56,96)),floord(96*t1+5*PB_N+12*PB_L+84,96)),floord(-64*t1+32*PB_N+15*PB_L-64,480)),floord(736*t1+21*PB_N+90*PB_L+694,672));
#pragma omp parallel for private(lbv,ubv,t3,t4,t5,t6)
    for (t2=lbp;t2<=ubp;t2++) {
      if ((PB_P <= -1) && (t1 >= ceild(32*t2-PB_N-30,32))) {
        for (t3=max(max(1,32*t1),32*t2-PB_N+1);t3<=min(PB_N-2,32*t1+62);t3++) {
          for (t4=max(max(-PB_N+1,32*t1-32*t2),-32*t2+t3-31);t4<=min(-32*t2+t3,32*t1-32*t2+31);t4++) {
            A[-t4][t3] = A[-t4-1][t3+1] - A[-t4][t3+1] + A[-t4][t3-1] * 6;;
          }
        }
      }
      if ((PB_P >= 0) && (t1 >= ceild(672*t2-21*PB_N-96*PB_L-21*PB_P-758,800))) {
        for (t3=max(max(max(max(max(max(max(max(max(max(max(max(max(max(max(max(0,ceild(-PB_P+2,2)),ceild(-32*t1+32*t2-PB_N-4*PB_L-28,2)),ceild(-32*t1+96*t2-3*PB_N-6*PB_L-28,2)),ceild(64*t2-2*PB_N-2*PB_L-PB_P+2,2)),ceild(32*t1+64*t2-2*PB_N,3)),ceild(32*t1+64*t2-2*PB_N-PB_P+2,3)),ceild(64*t1+608*t2-36*PB_N-15*PB_L-34*PB_P+68,4)),ceild(64*t1+128*t2-6*PB_N-35*PB_P+70,6)),ceild(32*t1+1024*t2-32*PB_N-32*PB_L+32,33)),ceild(544*t1+512*t2-32*PB_N-16*PB_L+544,33)),ceild(800*t1+512*t2-32*PB_N+544,41)),ceild(544*t1+1024*t2-32*PB_N+32,49)),ceild(96*t1+64,67)),32*t1),-PB_L+1),32*t2-PB_N-PB_L);t3<=min(min(min(min(min(min(min(min(min(min(min(floord(32*PB_N+PB_P-2,32),floord(32*PB_N+62*PB_L+PB_P-64,32)),floord(256*t1+768*t2+PB_P+1216,32)),floord(1024*t1+96*PB_L+PB_P+1984,32)),floord(992*t1-992*t2+63*PB_N+124*PB_L+PB_P+866,32)),floord(248*t1+744*t2+97*PB_N+4*PB_P+984,128)),floord(8192*t1+768*PB_L+7*PB_P+14912,224)),floord(1984*t1+290*PB_N+186*PB_L+11*PB_P+3264,352)),floord(-992*t1+511*PB_N+15*PB_P-1022,480)),floord(102176*t1-65184*t2+2037*PB_N+11616*PB_L+21*PB_P+118262,672)),floord(7936*t1+679*PB_N+744*PB_L+28*PB_P+13088,896)),PB_N+PB_P-2);t3++) {
          if ((t3 >= 1) && (t3 <= PB_N-2)) {
            for (t4=max(max(-PB_N+1,32*t1-32*t2),-32*t2+t3-31);t4<=min(-32*t2+t3,32*t1-32*t2+31);t4++) {
              A[-t4][t3] = A[-t4-1][t3+1] - A[-t4][t3+1] + A[-t4][t3-1] * 6;;
            }
          }
          if ((t2 <= floord(PB_L,32)) && (t3 <= floord(PB_P-2,32))) {
            for (t4=max(1,32*t1+96*t2);t4<=min(min(min(min(min(floord(-32*t1+32*t2,3),PB_L),PB_M-1),32*t2+31),32*t1+96*t2+155),32*t1-32*t2+4*PB_L+31);t4++) {
              for (t5=max(max(ceild(-32*t1+32*t2+t4-31,4),32*t2),t4);t5<=min(min(floord(-32*t1+32*t2+t4,4),PB_L),32*t2+31);t5++) {
                lbv=32*t3;
                ubv=min(PB_P-2,32*t3+31);
#pragma ivdep
#pragma vector always
                for (t6=lbv;t6<=ubv;t6++) {
                  B[t4-1][t5-1][t6] = C[t4][t6+1][t5-1] * B[t4][t5-1][t6] + 1;;
                }
              }
            }
          }
        }
      }
    }
  }
}
if ((PB_L <= -1) && (PB_N >= 3)) {
  for (t1=-1;t1<=min(floord(PB_N-18,16),floord(PB_N-2,32));t1++) {
    lbp=t1+1;
    ubp=min(floord(PB_N-2,16),floord(32*t1+PB_N+30,32));
#pragma omp parallel for private(lbv,ubv,t3,t4,t5,t6)
    for (t2=lbp;t2<=ubp;t2++) {
      for (t3=max(max(1,32*t1),32*t2-PB_N+1);t3<=min(PB_N-2,32*t1+62);t3++) {
        for (t4=max(max(-PB_N+1,32*t1-32*t2),-32*t2+t3-31);t4<=min(-32*t2+t3,32*t1-32*t2+31);t4++) {
          A[-t4][t3] = A[-t4-1][t3+1] - A[-t4][t3+1] + A[-t4][t3-1] * 6;;
        }
      }
    }
  }
}
if ((PB_L >= 1) && (PB_M >= 2) && (PB_N <= -1) && (PB_P >= 2)) {
  for (t1=ceild(-3*PB_L-53,32);t1<=-1;t1++) {
    lbp=max(ceild(-t1-4,3),t1+1);
    ubp=min(min(min(floord(-t1,2),floord(8*t1+PB_L+7,8)),floord(PB_L,32)),floord(-32*t1+PB_M-1,96));
#pragma omp parallel for private(lbv,ubv,t3,t4,t5,t6)
    for (t2=lbp;t2<=ubp;t2++) {
      for (t3=0;t3<=floord(PB_P-2,32);t3++) {
        for (t4=max(1,32*t1+96*t2);t4<=min(min(min(min(min(floord(-32*t1+32*t2,3),PB_L),PB_M-1),32*t2+31),32*t1+96*t2+155),32*t1-32*t2+4*PB_L+31);t4++) {
          for (t5=max(max(ceild(-32*t1+32*t2+t4-31,4),32*t2),t4);t5<=min(min(floord(-32*t1+32*t2+t4,4),PB_L),32*t2+31);t5++) {
            lbv=32*t3;
            ubv=min(PB_P-2,32*t3+31);
#pragma ivdep
#pragma vector always
            for (t6=lbv;t6<=ubv;t6++) {
              B[t4-1][t5-1][t6] = C[t4][t6+1][t5-1] * B[t4][t5-1][t6] + 1;;
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
kernel_3212211211_01(xa,ya,POLYBENCH_ARRAY(A), xb,yb,zb,POLYBENCH_ARRAY(B), xc,yc,zc,POLYBENCH_ARRAY(C));
polybench_prevent_dce(print_array(xa,ya,POLYBENCH_ARRAY(A), xb,yb,zb,POLYBENCH_ARRAY(B), xc,yc,zc,POLYBENCH_ARRAY(C)));
POLYBENCH_FREE_ARRAY(A);
POLYBENCH_FREE_ARRAY(B);
POLYBENCH_FREE_ARRAY(C);
return 0;
}
