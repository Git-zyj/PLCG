#include <stdio.h>
#include <unistd.h>
#include <string.h>
#include <math.h>
#include "polybench.h"
#include <time.h>
#include <stdlib.h>
#include "3212212221_01.h"
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
static void init_array(int xa,DATA_TYPE POLYBENCH_1D(A,xA,xa),int xb,int yb,int zb,DATA_TYPE POLYBENCH_3D(B,xB,yB,zB,xb,yb,zb),int xc,int yc,int zc,DATA_TYPE POLYBENCH_3D(C,xC,yC,zC,xc,yc,zc),int seed)
{
srand(seed);
int i_0, i_1, i_2;
for (i_0 = 0; i_0 < xa; i_0++) {
    A[i_0] = 0.9 + (rand() / (DATA_TYPE)RAND_MAX) * (1.1 - 0.9);
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
static void print_array(int xa,DATA_TYPE POLYBENCH_1D(A,xA,xa),int xb,int yb,int zb,DATA_TYPE POLYBENCH_3D(B,xB,yB,zB,xb,yb,zb),int xc,int yc,int zc,DATA_TYPE POLYBENCH_3D(C,xC,yC,zC,xc,yc,zc))
{
int i_0, i_1, i_2;
POLYBENCH_DUMP_START;
#ifdef CHECKELEM
    POLYBENCH_DUMP_BEGIN("A");
    for (i_0 = 0; i_0 < xa; i_0++) {
        fprintf(POLYBENCH_DUMP_TARGET, "\n");
        fprintf (POLYBENCH_DUMP_TARGET, DATA_PRINTF_MODIFIER, A[i_0]);
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
        sum_A += A[i_0];
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
void kernel_3212212221_01(int xa,DATA_TYPE POLYBENCH_1D(A,xA,xa),int xb,int yb,int zb,DATA_TYPE POLYBENCH_3D(B,xB,yB,zB,xb,yb,zb),int xc,int yc,int zc,DATA_TYPE POLYBENCH_3D(C,xC,yC,zC,xc,yc,zc)){
polybench_start_instruments;
  int t1, t2, t3, t4, t5, t6;
 int lb, ub, lbp, ubp, lb2, ub2;
 register int lbv, ubv;
/* Start of CLooG code */
if ((PB_L >= 0) && (PB_M >= max(max(0,ceild(-5*PB_L+30,6)),ceild(-5*PB_P+40,8))) && (PB_P >= 0)) {
  for (t1=0;t1<=min(min(min(floord(PB_M+3*PB_P-4,32),floord(PB_M+2*PB_P+PB_L-4,32)),floord(2*PB_M+2*PB_P+PB_L-9,32)),floord(12*PB_M+15*PB_P-55,160));t1++) {
    for (t2=0;t2<=min(min(min(min(floord(t1,2),floord(PB_P,32)),floord(-32*t1+PB_M+3*PB_P-4,32)),floord(-32*t1+2*PB_M+3*PB_P-9,32)),floord(6*PB_M+5*PB_P-30,160));t2++) {
      for (t3=max(max(max(max(max(max(max(max(max(max(max(ceild(32*t1-PB_M-PB_P-26,32),ceild(32*t1+32*t2-PB_M-PB_P-28,32)),ceild(224*t1-7*PB_M-13*PB_P-6*PB_L+28,32)),ceild(32*t1+64*t2-PB_M-32,64)),ceild(32*t1+64*t2-PB_M-6*PB_L+4,64)),ceild(1184*t1+1184*t2-37*PB_M-101*PB_P+148,160)),ceild(1184*t1+160*t2-37*PB_M-69*PB_P-32*PB_L+148,160)),ceild(1184*t1-37*PB_M-97*PB_P+148,224)),ceild(1312*t1+1472*t2-41*PB_M-108*PB_P+164,320)),ceild(1312*t1+320*t2-41*PB_M-72*PB_P-36*PB_L+164,320)),ceild(1376*t1+448*t2-43*PB_M-108*PB_P+172,448)),2*t2);t3<=min(min(min(min(min(min(min(min(min(min(floord(2*t1+2*t2+3,3),floord(2*t1+4*t2+PB_L,4)),floord(PB_P,16)),floord(2*t1+2*t2+PB_P,19)),floord(32*t2+PB_P+PB_L+25,32)),floord(-160*t1+32*t2+5*PB_M+11*PB_P+6*PB_L-20,32)),floord(32*t1+64*t2+PB_L+90,64)),floord(3*PB_M+5*PB_P-15,80)),floord(192*t2+6*PB_P+31*PB_L,192)),floord(96*t2+28*PB_P+3*PB_L,496)),t1);t3++) {
        if ((PB_L <= 5) && (t2 == 0) && (t3 == 0)) {
          for (t4=max(1,32*t1);t4<=min(PB_M-4,32*t1+31);t4++) {
            A[t4+1] = A[t4+2] + A[t4+3] - A[t4-1] + 5;;
          }
        }
        if ((PB_L >= 6) && (t1 == 0) && (t2 == 0) && (t3 == 0)) {
          for (t4=1;t4<=min(12,PB_M-4);t4++) {
            A[t4+1] = A[t4+2] + A[t4+3] - A[t4-1] + 5;;
          }
        }
        if ((PB_L >= 6) && (t3 >= 1) && (t3 <= floord(PB_P-3,16))) {
          for (t4=max(max(max(max(32*t1,64*t2+9),32*t3+3),-32*t2+48*t3-31),-64*t2+64*t3-PB_L-59);t4<=min(min(min(min(min(min(min(3*PB_P-11,32*t1+31),64*t3+55),2*PB_P+PB_L-9),-64*t2+64*t3+59),-32*t2+3*PB_P-9),32*t3+PB_P+26),-32*t2+32*t3+PB_P+28);t4++) {
            for (t5=max(max(max(2,ceild(64*t3-t4-PB_L+3,2)),32*t2),48*t3-t4);t5<=min(min(min(min(floord(t4-9,2),floord(64*t3-t4+59,2)),32*t2+31),-t4+3*PB_P-9),32*t3-t4+PB_P+28);t5++) {
              for (t6=max(max(ceild(t4+2*t5+3,2),32*t3),t4+t5-PB_P+3);t6<=min(min(floord(t4+2*t5+PB_L-3,2),floord(2*t4+2*t5,3)),32*t3+31);t6++) {
                B[(-t4-2*t5+2*t6)-1][(-t4-2*t5+2*t6)+2][(t4-t6)+t5+1] = C[(-t4-2*t5+2*t6)][t5-2][(t4-t6)+1] + C[(-t4-2*t5+2*t6)][(t4-t6)+2][2] - B[(-t4-2*t5+2*t6)-3][(-t4-2*t5+2*t6)][(t4-t6)+t5+2] * 4;;
              }
            }
          }
        }
        if ((PB_L >= 6) && (t2 == 0) && (t3 == 0)) {
          for (t4=max(13,32*t1);t4<=min(min(min(min(min(55,PB_M-4),PB_P+26),3*PB_P-11),32*t1+31),2*PB_P+PB_L-9);t4++) {
            A[t4+1] = A[t4+2] + A[t4+3] - A[t4-1] + 5;;
            for (t5=2;t5<=min(min(min(floord(-t4+59,2),floord(t4-9,2)),-t4+PB_P+28),-t4+3*PB_P-9);t5++) {
              for (t6=max(ceild(t4+2*t5+3,2),t4+t5-PB_P+3);t6<=min(min(31,floord(t4+2*t5+PB_L-3,2)),floord(2*t4+2*t5,3));t6++) {
                B[(-t4-2*t5+2*t6)-1][(-t4-2*t5+2*t6)+2][(t4-t6)+t5+1] = C[(-t4-2*t5+2*t6)][t5-2][(t4-t6)+1] + C[(-t4-2*t5+2*t6)][(t4-t6)+2][2] - B[(-t4-2*t5+2*t6)-3][(-t4-2*t5+2*t6)][(t4-t6)+t5+2] * 4;;
              }
            }
          }
        }
        if ((t2 == 0) && (t3 == 0)) {
          for (t4=max(max(13,32*t1),3*PB_P-10);t4<=min(min(min(PB_M-4,PB_P+26),32*t1+31),2*PB_P+PB_L-9);t4++) {
            A[t4+1] = A[t4+2] + A[t4+3] - A[t4-1] + 5;;
          }
        }
        if ((PB_L >= 6) && (t2 == 0) && (t3 == 0)) {
          for (t4=max(max(13,32*t1),PB_M-3);t4<=min(min(min(min(55,PB_P+26),3*PB_P-11),32*t1+31),2*PB_P+PB_L-9);t4++) {
            for (t5=2;t5<=min(min(min(floord(-t4+59,2),floord(t4-9,2)),-t4+PB_P+28),-t4+3*PB_P-9);t5++) {
              for (t6=max(ceild(t4+2*t5+3,2),t4+t5-PB_P+3);t6<=min(min(31,floord(t4+2*t5+PB_L-3,2)),floord(2*t4+2*t5,3));t6++) {
                B[(-t4-2*t5+2*t6)-1][(-t4-2*t5+2*t6)+2][(t4-t6)+t5+1] = C[(-t4-2*t5+2*t6)][t5-2][(t4-t6)+1] + C[(-t4-2*t5+2*t6)][(t4-t6)+2][2] - B[(-t4-2*t5+2*t6)-3][(-t4-2*t5+2*t6)][(t4-t6)+t5+2] * 4;;
              }
            }
          }
        }
        if ((PB_L >= 6) && (t2 == 0) && (t3 == 0)) {
          for (t4=max(max(13,32*t1),2*PB_P+PB_L-8);t4<=min(min(PB_M-4,PB_P+26),32*t1+31);t4++) {
            A[t4+1] = A[t4+2] + A[t4+3] - A[t4-1] + 5;;
          }
        }
        if ((PB_L >= 6) && (t2 == 0) && (t3 == 0)) {
          for (t4=max(32*t1,PB_P+27);t4<=min(min(55,PB_M-4),32*t1+31);t4++) {
            A[t4+1] = A[t4+2] + A[t4+3] - A[t4-1] + 5;;
          }
        }
        if ((PB_L >= 6) && (t2 == 0) && (t3 == 0)) {
          for (t4=max(56,32*t1);t4<=min(PB_M-4,32*t1+31);t4++) {
            A[t4+1] = A[t4+2] + A[t4+3] - A[t4-1] + 5;;
          }
        }
      }
    }
  }
}
if ((PB_L <= -1) && (PB_M >= 5) && (PB_P >= 0)) {
  for (t1=0;t1<=floord(PB_M-4,32);t1++) {
    for (t4=max(1,32*t1);t4<=min(PB_M-4,32*t1+31);t4++) {
      A[t4+1] = A[t4+2] + A[t4+3] - A[t4-1] + 5;;
    }
  }
}
if ((PB_L >= 0) && (PB_M >= 5) && (PB_P <= -1)) {
  for (t1=0;t1<=floord(PB_M-4,32);t1++) {
    for (t4=max(1,32*t1);t4<=min(PB_M-4,32*t1+31);t4++) {
      A[t4+1] = A[t4+2] + A[t4+3] - A[t4-1] + 5;;
    }
  }
}
if ((PB_L <= -1) && (PB_M >= 5) && (PB_P <= -1)) {
  for (t1=0;t1<=floord(PB_M-4,32);t1++) {
    for (t4=max(1,32*t1);t4<=min(PB_M-4,32*t1+31);t4++) {
      A[t4+1] = A[t4+2] + A[t4+3] - A[t4-1] + 5;;
    }
  }
}
if ((PB_L >= 6) && (PB_M <= -1) && (PB_P >= 8)) {
  for (t1=0;t1<=min(floord(3*PB_P-11,32),floord(2*PB_P+PB_L-9,32));t1++) {
    for (t2=0;t2<=min(min(floord(t1,2),floord(PB_P-6,32)),floord(-32*t1+3*PB_P-9,32));t2++) {
      for (t3=max(max(ceild(t1+2*t2-1,2),ceild(32*t1-PB_P-26,32)),ceild(32*t1+32*t2-PB_P-28,32));t3<=min(min(min(min(floord(2*t1+2*t2+3,3),floord(PB_P-3,16)),floord(32*t2+PB_P+PB_L+25,32)),floord(32*t1+64*t2+PB_L+90,64)),t1);t3++) {
        for (t4=max(max(max(max(max(13,32*t1),64*t2+9),32*t3+3),-32*t2+48*t3-31),-64*t2+64*t3-PB_L-59);t4<=min(min(min(min(min(min(min(3*PB_P-11,32*t1+31),64*t3+55),2*PB_P+PB_L-9),-64*t2+64*t3+59),-32*t2+3*PB_P-9),32*t3+PB_P+26),-32*t2+32*t3+PB_P+28);t4++) {
          for (t5=max(max(max(2,ceild(64*t3-t4-PB_L+3,2)),32*t2),48*t3-t4);t5<=min(min(min(min(floord(t4-9,2),floord(64*t3-t4+59,2)),32*t2+31),-t4+3*PB_P-9),32*t3-t4+PB_P+28);t5++) {
            for (t6=max(max(ceild(t4+2*t5+3,2),32*t3),t4+t5-PB_P+3);t6<=min(min(floord(t4+2*t5+PB_L-3,2),floord(2*t4+2*t5,3)),32*t3+31);t6++) {
              B[(-t4-2*t5+2*t6)-1][(-t4-2*t5+2*t6)+2][(t4-t6)+t5+1] = C[(-t4-2*t5+2*t6)][t5-2][(t4-t6)+1] + C[(-t4-2*t5+2*t6)][(t4-t6)+2][2] - B[(-t4-2*t5+2*t6)-3][(-t4-2*t5+2*t6)][(t4-t6)+t5+2] * 4;;
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
int xb = xB;
int yb = yB;
int zb = zB;
int xc = xC;
int yc = yC;
int zc = zC;
POLYBENCH_1D_ARRAY_DECL(A, DATA_TYPE, xA,xa);
POLYBENCH_3D_ARRAY_DECL(B, DATA_TYPE, xB,yB,zB,xb,yb,zb);
POLYBENCH_3D_ARRAY_DECL(C, DATA_TYPE, xC,yC,zC,xc,yc,zc);
init_array(xa,POLYBENCH_ARRAY(A), xb,yb,zb,POLYBENCH_ARRAY(B), xc,yc,zc,POLYBENCH_ARRAY(C), INIT_SEED);
kernel_3212212221_01(xa,POLYBENCH_ARRAY(A), xb,yb,zb,POLYBENCH_ARRAY(B), xc,yc,zc,POLYBENCH_ARRAY(C));
polybench_prevent_dce(print_array(xa,POLYBENCH_ARRAY(A), xb,yb,zb,POLYBENCH_ARRAY(B), xc,yc,zc,POLYBENCH_ARRAY(C)));
POLYBENCH_FREE_ARRAY(A);
POLYBENCH_FREE_ARRAY(B);
POLYBENCH_FREE_ARRAY(C);
return 0;
}
