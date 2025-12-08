#include <stdio.h>
#include <unistd.h>
#include <string.h>
#include <math.h>
#include "polybench.h"
#include <time.h>
#include <stdlib.h>
#include "3224112113_01.h"
#include <omp.h>
#define ceild(n,d)  ceil(((double)(n))/((double)(d)))
#define floord(n,d) floor(((double)(n))/((double)(d)))
/*
arg_depth: 3
arg_nstmts: 2
arg_bounds_index: 2
arg_prob_bounds_exist: 4
arg_narrays_per_dim: 1
arg_avg_narrays_read_per_stmt: 1
arg_bounds_coef: 2
arg_avg_ndeps_read_per_stmt: 1
arg_bounds_distance: 1
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
void kernel_3224112113_01(int xa,int ya,int za,DATA_TYPE POLYBENCH_3D(A,xA,yA,zA,xa,ya,za),int xb,int yb,int zb,DATA_TYPE POLYBENCH_3D(B,xB,yB,zB,xb,yb,zb),int xc,int yc,int zc,DATA_TYPE POLYBENCH_3D(C,xC,yC,zC,xc,yc,zc)){
polybench_start_instruments;
  int t1, t2, t3, t4, t5, t6;
 int lb, ub, lbp, ubp, lb2, ub2;
 register int lbv, ubv;
/* Start of CLooG code */
if ((PB_L >= 1) && (PB_L >= -2*PB_M+9) && (PB_M >= 2)) {
  for (t1=0;t1<=min(floord(PB_L+3*PB_M-1,32),floord(PB_L+5*PB_M-9,32));t1++) {
    lbp=max(max(max(0,ceild(32*t1-PB_L-2*PB_M+2,32)),ceild(32*t1-PB_L-PB_M-28,64)),ceild(64*t1-2*PB_L-7*PB_M+16,64));
    ubp=min(min(min(min(floord(PB_M+1,32),floord(32*t1+PB_L-1,64)),floord(32*t1+5*PB_M,192)),floord(96*t1+2*PB_L+PB_M-6,192)),t1);
#pragma omp parallel for private(lbv,ubv,t3,t4,t5,t6)
    for (t2=lbp;t2<=ubp;t2++) {
      for (t3=max(max(max(max(max(max(max(max(max(max(ceild(-98*t1+194*t2-3*PB_L+1,2),ceild(-25*t1+25*t2-3*PB_L-22,25)),ceild(-4*PB_L-5*PB_M-14,32)),ceild(-128*t1+224*t2-3*PB_L-119,32)),ceild(-128*t1+3680*t2-111*PB_M-128,32)),ceild(-32*t1+32*t2-3*PB_L-50,32)),ceild(-128*t1+3104*t2-3*PB_L-90*PB_M-119,32)),ceild(-32*t1+704*t2-3*PB_L-21*PB_M-50,32)),ceild(-32*t1+32*t2-17*PB_L-7*PB_M-120,144)),ceild(-1088*t1+416*t2-186*PB_L-21*PB_M-2162,1760)),-4*t1+4*t2-4);t3<=min(min(min(min(min(min(min(min(min(min(min(min(min(min(min(min(min(min(min(min(min(floord(-128*t1+160*t2+9*PB_M,32),floord(-128*t1+352*t2+3*PB_M+180,32)),floord(-64*t1+160*t2+PB_M+60,32)),floord(-32*t1+32*t2+PB_L-1,32)),floord(-32*t1+32*t2+PB_M+1,32)),floord(-16*t1-528*t2+17*PB_M+1,32)),floord(-16*t1-16*t2+PB_M+1,32)),floord(480*t1-992*t2+17*PB_L-49,32)),floord(-224*t1+224*t2+3*PB_L+18*PB_M-38,32)),floord(480*t1-1024*t2+16*PB_L+PB_M-47,32)),floord(-64*t2+19*PB_L-83,64)),floord(-96*t1+192*t2+PB_L+PB_M+28,64)),floord(-32*t1-1024*t2+PB_L+32*PB_M-1,64)),floord(-32*t1-64*t2+PB_L+2*PB_M-1,64)),floord(1184*t1-2432*t2+37*PB_L+2*PB_M-109,64)),floord(-128*t1+224*t2+3*PB_M,96)),floord(-32*t1-3232*t2+102*PB_M+3,96)),floord(-32*t1-3200*t2+PB_L+100*PB_M,96)),floord(-128*t1+224*t2+PB_L+2*PB_M-2,96)),floord(-272*t1+240*t2+9*PB_M-7,288)),floord(-544*t1-128*t2+17*PB_L+19*PB_M-62,608)),floord(-3328*t1+3328*t2+285*PB_M-544,832));t3++) {
        if ((PB_M <= 3) && (t1 <= floord(PB_L-1,32)) && (t2 == 0) && (t3 >= ceild(-PB_L-6,8))) {
          for (t4=2;t4<=min(PB_M,PB_L-3);t4++) {
            for (t5=1;t5<=-t4+PB_M+1;t5++) {
              lbv=max(ceild(-32*t3+t5-31,4),32*t1);
              ubv=min(min(floord(-32*t3+t5,4),PB_L-1),32*t1+31);
#pragma ivdep
#pragma vector always
              for (t6=lbv;t6<=ubv;t6++) {
                A[t5][t4+2][t6] = C[t5+t4-2][t6][t5] * A[t5-1][t4+2][t6] - 2;;
              }
            }
          }
        }
        if ((PB_M >= 4) && (t1 <= min(min(floord(32*t2+PB_L-1,32),floord(128*t2-32*t3+PB_L-1,128)),t2-t3-2)) && (t3 >= ceild(-PB_L-6,8))) {
          for (t4=max(2,32*t2);t4<=min(min(min(PB_M,PB_L-3),32*t2+31),-128*t1+128*t2-32*t3+PB_M+1);t4++) {
            for (t5=max(1,128*t1-128*t2+32*t3);t5<=min(min(min(PB_L-1,32*t3+4*PB_L+27),-t4+PB_M+1),128*t1-128*t2+32*t3+155);t5++) {
              lbv=max(ceild(-32*t3+t5-31,4),32*t1-32*t2);
              ubv=min(min(floord(-32*t3+t5,4),PB_L-1),32*t1-32*t2+31);
#pragma ivdep
#pragma vector always
              for (t6=lbv;t6<=ubv;t6++) {
                A[t5][t4+2][t6] = C[t5+t4-2][t6][t5] * A[t5-1][t4+2][t6] - 2;;
              }
            }
          }
        }
        if (t1 <= floord(128*t2-32*t3+PB_L-1,128)) {
          for (t4=max(2,32*t2);t4<=min(min(min(PB_L-3,32*t2+31),32*t1-32*t2+32*t3-1),-128*t1+128*t2-32*t3+PB_M+1);t4++) {
            for (t5=128*t1-128*t2+32*t3;t5<=min(min(PB_L-1,-t4+PB_M+1),128*t1-128*t2+32*t3+155);t5++) {
              lbv=max(ceild(-32*t3+t5-31,4),32*t1-32*t2);
              ubv=min(floord(-32*t3+t5,4),32*t1-32*t2+31);
#pragma ivdep
#pragma vector always
              for (t6=lbv;t6<=ubv;t6++) {
                A[t5][t4+2][t6] = C[t5+t4-2][t6][t5] * A[t5-1][t4+2][t6] - 2;;
              }
            }
          }
        }
        if (t1 >= max(ceild(32*t2+PB_L,32),t2-t3-1)) {
          for (t4=max(max(max(max(max(2,ceild(32*t1-32*t2-PB_M+2,2)),32*t2),32*t1-32*t2+32*t3),-32*t3-PB_M-29),32*t1-32*t2-PB_L-PB_M+3);t4<=min(min(min(PB_M+1,32*t2+31),-32*t3-2),32*t1-32*t2+29);t4++) {
            for (t5=max(max(0,32*t1-32*t2+32*t3),32*t1-32*t2-t4-PB_M+2);t5<=min(min(min(t4,PB_L-1),32*t1-32*t2+32*t3+62),32*t1-32*t2-t4+29);t5++) {
              lbv=max(max(32*t1-32*t2,-32*t3+t5-31),t4+t5+2);
              ubv=min(min(-32*t3+t5,32*t1-32*t2+31),t4+t5+PB_M-2);
#pragma ivdep
#pragma vector always
              for (t6=lbv;t6<=ubv;t6++) {
                B[t5+1][t4-2][(-t4-t5+t6)+1] = B[t4+2][(-t4-t5+t6)-2][t5+1] * 2;;
              }
            }
          }
        }
        if ((t1 <= floord(32*t2+PB_L-1,32)) && (t1 >= max(ceild(128*t2-32*t3+PB_L,128),t2-t3-1))) {
          for (t4=max(max(max(max(2,ceild(32*t1-32*t2-PB_M+2,2)),32*t2),32*t1-32*t2+32*t3),-32*t3-PB_M-29);t4<=min(min(min(PB_M+1,32*t2+31),-32*t3-2),32*t1-32*t2+29);t4++) {
            for (t5=max(max(0,32*t1-32*t2+32*t3),32*t1-32*t2-t4-PB_M+2);t5<=min(min(t4,32*t1-32*t2+32*t3+62),32*t1-32*t2-t4+29);t5++) {
              lbv=max(max(32*t1-32*t2,-32*t3+t5-31),t4+t5+2);
              ubv=min(min(-32*t3+t5,32*t1-32*t2+31),t4+t5+PB_M-2);
#pragma ivdep
#pragma vector always
              for (t6=lbv;t6<=ubv;t6++) {
                B[t5+1][t4-2][(-t4-t5+t6)+1] = B[t4+2][(-t4-t5+t6)-2][t5+1] * 2;;
              }
            }
          }
        }
        if ((PB_M >= 4) && (t1 <= floord(128*t2-32*t3+PB_L-1,128)) && (t1 >= t2-t3-1)) {
          for (t4=max(max(2,32*t2),32*t1-32*t2+32*t3);t4<=min(min(min(min(min(PB_M,PB_L-3),32*t2+31),-32*t3-2),32*t1-32*t2+29),-128*t1+128*t2-32*t3+PB_M+1);t4++) {
            for (t5=max(0,32*t1-32*t2+32*t3);t5<=min(min(min(t4,32*t1-32*t2+32*t3+62),32*t1-32*t2-t4+29),128*t1-128*t2+32*t3-1);t5++) {
              lbv=max(max(32*t1-32*t2,-32*t3+t5-31),t4+t5+2);
              ubv=min(-32*t3+t5,32*t1-32*t2+31);
#pragma ivdep
#pragma vector always
              for (t6=lbv;t6<=ubv;t6++) {
                B[t5+1][t4-2][(-t4-t5+t6)+1] = B[t4+2][(-t4-t5+t6)-2][t5+1] * 2;;
              }
            }
            if ((t1 == 0) && (t2 == 0) && (t3 == -1)) {
              lbv=t4+2;
              ubv=min(31,t4+PB_M-2);
#pragma ivdep
#pragma vector always
              for (t6=lbv;t6<=ubv;t6++) {
                B[0 +1][t4-2][(-t4+t6)+1] = B[t4+2][(-t4+t6)-2][0 +1] * 2;;
              }
            }
            if ((t1 == 0) && (t2 == 0) && (t3 == -1)) {
              for (t5=1;t5<=min(min(t4,-t4+29),-t4+PB_M+1);t5++) {
                lbv=ceild(t5+1,4);
                ubv=min(min(floord(t5+32,4),PB_L-1),t4+t5+1);
#pragma ivdep
#pragma vector always
                for (t6=lbv;t6<=ubv;t6++) {
                  A[t5][t4+2][t6] = C[t5+t4-2][t6][t5] * A[t5-1][t4+2][t6] - 2;;
                }
                lbv=t4+t5+2;
                ubv=min(min(floord(t5+32,4),PB_L-1),t4+t5+PB_M-2);
#pragma ivdep
#pragma vector always
                for (t6=lbv;t6<=ubv;t6++) {
                  A[t5][t4+2][t6] = C[t5+t4-2][t6][t5] * A[t5-1][t4+2][t6] - 2;;
                  B[t5+1][t4-2][(-t4-t5+t6)+1] = B[t4+2][(-t4-t5+t6)-2][t5+1] * 2;;
                }
                lbv=t4+t5+PB_M-1;
                ubv=min(floord(t5+32,4),PB_L-1);
#pragma ivdep
#pragma vector always
                for (t6=lbv;t6<=ubv;t6++) {
                  A[t5][t4+2][t6] = C[t5+t4-2][t6][t5] * A[t5-1][t4+2][t6] - 2;;
                }
                lbv=max(ceild(t5+33,4),t4+t5+2);
                ubv=min(min(31,PB_L-1),t4+t5+PB_M-2);
#pragma ivdep
#pragma vector always
                for (t6=lbv;t6<=ubv;t6++) {
                  B[t5+1][t4-2][(-t4-t5+t6)+1] = B[t4+2][(-t4-t5+t6)-2][t5+1] * 2;;
                }
                lbv=max(PB_L,t4+t5+2);
                ubv=min(31,t4+t5+PB_M-2);
#pragma ivdep
#pragma vector always
                for (t6=lbv;t6<=ubv;t6++) {
                  B[t5+1][t4-2][(-t4-t5+t6)+1] = B[t4+2][(-t4-t5+t6)-2][t5+1] * 2;;
                }
              }
            }
            if ((t1 == 0) && (t2 == 0) && (t3 == -1)) {
              for (t5=-t4+30;t5<=min(t4,-t4+PB_M+1);t5++) {
                lbv=ceild(t5+1,4);
                ubv=floord(t5+32,4);
#pragma ivdep
#pragma vector always
                for (t6=lbv;t6<=ubv;t6++) {
                  A[t5][t4+2][t6] = C[t5+t4-2][t6][t5] * A[t5-1][t4+2][t6] - 2;;
                }
              }
            }
            if ((t1 == 0) && (t2 == 0) && (t3 == -1)) {
              for (t5=-t4+PB_M+2;t5<=min(t4,-t4+29);t5++) {
                lbv=t4+t5+2;
                ubv=min(31,t4+t5+PB_M-2);
#pragma ivdep
#pragma vector always
                for (t6=lbv;t6<=ubv;t6++) {
                  B[t5+1][t4-2][(-t4-t5+t6)+1] = B[t4+2][(-t4-t5+t6)-2][t5+1] * 2;;
                }
              }
            }
            for (t5=max(t4+1,128*t1-128*t2+32*t3);t5<=min(min(PB_L-1,-t4+PB_M+1),128*t1-128*t2+32*t3+155);t5++) {
              lbv=max(ceild(-32*t3+t5-31,4),32*t1-32*t2);
              ubv=min(min(floord(-32*t3+t5,4),PB_L-1),32*t1-32*t2+31);
#pragma ivdep
#pragma vector always
              for (t6=lbv;t6<=ubv;t6++) {
                A[t5][t4+2][t6] = C[t5+t4-2][t6][t5] * A[t5-1][t4+2][t6] - 2;;
              }
            }
          }
        }
        if ((t1 == 2*t2) && (t1 == -2*t3-2) && (t1 <= min(min(min(floord(PB_L-33,16),floord(PB_M-30,16)),floord(PB_L+31,48)),floord(PB_M+3,64)))) {
          for (t5=max(1,48*t1-32);t5<=min(min(PB_L-1,48*t1+123),-16*t1+PB_M-29);t5++) {
            lbv=max(ceild(16*t1+t5+1,4),16*t1);
            ubv=min(floord(16*t1+t5+32,4),16*t1+31);
#pragma ivdep
#pragma vector always
            for (t6=lbv;t6<=ubv;t6++) {
              if (t1%2 == 0) {
                A[t5][(16*t1+30)+2][t6] = C[t5+(16*t1+30)-2][t6][t5] * A[t5-1][(16*t1+30)+2][t6] - 2;;
              }
            }
          }
        }
        if ((t1 <= floord(128*t2-32*t3+PB_L-1,128)) && (t1 >= t2-t3-1)) {
          for (t4=max(max(max(max(max(2,ceild(32*t1-32*t2-PB_M+2,2)),32*t2),32*t1-32*t2+32*t3),-32*t3-PB_M-29),-128*t1+128*t2-32*t3+PB_M+2);t4<=min(min(min(PB_M+1,32*t2+31),-32*t3-2),32*t1-32*t2+29);t4++) {
            for (t5=max(max(0,32*t1-32*t2+32*t3),32*t1-32*t2-t4-PB_M+2);t5<=min(min(t4,32*t1-32*t2+32*t3+62),32*t1-32*t2-t4+29);t5++) {
              lbv=max(max(32*t1-32*t2,-32*t3+t5-31),t4+t5+2);
              ubv=min(min(-32*t3+t5,32*t1-32*t2+31),t4+t5+PB_M-2);
#pragma ivdep
#pragma vector always
              for (t6=lbv;t6<=ubv;t6++) {
                B[t5+1][t4-2][(-t4-t5+t6)+1] = B[t4+2][(-t4-t5+t6)-2][t5+1] * 2;;
              }
            }
          }
        }
        if ((PB_M >= 4) && (t1 == 0) && (t2 == 0) && (t3 == -1)) {
          for (t4=max(2,PB_L-2);t4<=min(29,PB_M);t4++) {
            for (t5=0;t5<=min(min(t4,PB_L-1),-t4+29);t5++) {
              lbv=t4+t5+2;
              ubv=min(31,t4+t5+PB_M-2);
#pragma ivdep
#pragma vector always
              for (t6=lbv;t6<=ubv;t6++) {
                B[t5+1][t4-2][(-t4-t5+t6)+1] = B[t4+2][(-t4-t5+t6)-2][t5+1] * 2;;
              }
            }
          }
        }
        if ((PB_M >= 4) && (t1 <= floord(128*t2-32*t3+PB_L-1,128)) && (t1 >= t2-t3-1)) {
          for (t4=max(max(max(2,32*t2),-32*t3-1),32*t1-32*t2+32*t3);t4<=min(min(min(PB_M,PB_L-3),32*t2+31),-128*t1+128*t2-32*t3+PB_M+1);t4++) {
            for (t5=max(1,128*t1-128*t2+32*t3);t5<=min(min(PB_L-1,-t4+PB_M+1),128*t1-128*t2+32*t3+155);t5++) {
              lbv=max(ceild(-32*t3+t5-31,4),32*t1-32*t2);
              ubv=min(floord(-32*t3+t5,4),32*t1-32*t2+31);
#pragma ivdep
#pragma vector always
              for (t6=lbv;t6<=ubv;t6++) {
                A[t5][t4+2][t6] = C[t5+t4-2][t6][t5] * A[t5-1][t4+2][t6] - 2;;
              }
            }
          }
        }
        if ((PB_M >= 4) && (PB_M <= 28) && (t1 == 0) && (t2 == 0) && (t3 == -1)) {
          for (t5=0;t5<=min(min(PB_L-1,-PB_M+28),PB_M+1);t5++) {
            lbv=t5+PB_M+3;
            ubv=min(31,t5+2*PB_M-1);
#pragma ivdep
#pragma vector always
            for (t6=lbv;t6<=ubv;t6++) {
              B[t5+1][(PB_M+1)-2][(-t5+t6-PB_M-1)+1] = B[(PB_M+1)+2][(-t5+t6-PB_M-1)-2][t5+1] * 2;;
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
kernel_3224112113_01(xa,ya,za,POLYBENCH_ARRAY(A), xb,yb,zb,POLYBENCH_ARRAY(B), xc,yc,zc,POLYBENCH_ARRAY(C));
polybench_prevent_dce(print_array(xa,ya,za,POLYBENCH_ARRAY(A), xb,yb,zb,POLYBENCH_ARRAY(B), xc,yc,zc,POLYBENCH_ARRAY(C)));
POLYBENCH_FREE_ARRAY(A);
POLYBENCH_FREE_ARRAY(B);
POLYBENCH_FREE_ARRAY(C);
return 0;
}
