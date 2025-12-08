#include <stdio.h>
#include <unistd.h>
#include <string.h>
#include <math.h>
#include "polybench.h"
#include <time.h>
#include <stdlib.h>
#include "3214211223_01.h"
#include <omp.h>
#define ceild(n,d)  ceil(((double)(n))/((double)(d)))
#define floord(n,d) floor(((double)(n))/((double)(d)))
/*
arg_depth: 3
arg_nstmts: 2
arg_bounds_index: 1
arg_prob_bounds_exist: 4
arg_narrays_per_dim: 2
arg_avg_narrays_read_per_stmt: 1
arg_bounds_coef: 1
arg_avg_ndeps_read_per_stmt: 2
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
static void init_array(int xa,int ya,DATA_TYPE POLYBENCH_2D(A,xA,yA,xa,ya),int xb,int yb,int zb,int vb,DATA_TYPE POLYBENCH_4D(B,xB,yB,zB,vB,xb,yb,zb,vb),int xc,int yc,int zc,DATA_TYPE POLYBENCH_3D(C,xC,yC,zC,xc,yc,zc),int xd,int yd,DATA_TYPE POLYBENCH_2D(D,xD,yD,xd,yd),int seed)
{
srand(seed);
int i_0, i_1, i_2, i_3;
for (i_0 = 0; i_0 < xa; i_0++) {
    for (i_1 = 0; i_1 < ya; i_1++) {
        A[i_0][i_1] = 0.9 + (rand() / (DATA_TYPE)RAND_MAX) * (1.1 - 0.9);
    }
}
for (i_0 = 0; i_0 < xb; i_0++) {
    for (i_1 = 0; i_1 < yb; i_1++) {
        for (i_2 = 0; i_2 < zb; i_2++) {
            for (i_3 = 0; i_3 < vb; i_3++) {
                B[i_0][i_1][i_2][i_3] = 0.9 + (rand() / (DATA_TYPE)RAND_MAX) * (1.1 - 0.9);
            }
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
        D[i_0][i_1] = 0.9 + (rand() / (DATA_TYPE)RAND_MAX) * (1.1 - 0.9);
    }
}
}
static void print_array(int xa,int ya,DATA_TYPE POLYBENCH_2D(A,xA,yA,xa,ya),int xb,int yb,int zb,int vb,DATA_TYPE POLYBENCH_4D(B,xB,yB,zB,vB,xb,yb,zb,vb),int xc,int yc,int zc,DATA_TYPE POLYBENCH_3D(C,xC,yC,zC,xc,yc,zc),int xd,int yd,DATA_TYPE POLYBENCH_2D(D,xD,yD,xd,yd))
{
int i_0, i_1, i_2, i_3;
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
                for (i_3 = 0; i_3 < vb; i_3++) {
                    fprintf(POLYBENCH_DUMP_TARGET, "\n");
                    fprintf (POLYBENCH_DUMP_TARGET, DATA_PRINTF_MODIFIER, B[i_0][i_1][i_2][i_3]);
                }
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
                for (i_3 = 0; i_3 < vb; i_3++) {
                    sum_B += B[i_0][i_1][i_2][i_3];
                }
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
            sum_D += D[i_0][i_1];
        }
    }
    fprintf(POLYBENCH_DUMP_TARGET, "\nsum: ");
    fprintf (POLYBENCH_DUMP_TARGET, DATA_PRINTF_MODIFIER, sum_D);
    POLYBENCH_DUMP_END("D");
#endif
POLYBENCH_DUMP_FINISH;
}
void kernel_3214211223_01(int xa,int ya,DATA_TYPE POLYBENCH_2D(A,xA,yA,xa,ya),int xb,int yb,int zb,int vb,DATA_TYPE POLYBENCH_4D(B,xB,yB,zB,vB,xb,yb,zb,vb),int xc,int yc,int zc,DATA_TYPE POLYBENCH_3D(C,xC,yC,zC,xc,yc,zc),int xd,int yd,DATA_TYPE POLYBENCH_2D(D,xD,yD,xd,yd)){
polybench_start_instruments;
  int t1, t2, t3, t4, t5, t6, t7;
 int lb, ub, lbp, ubp, lb2, ub2;
 register int lbv, ubv;
/* Start of CLooG code */
if (PB_L >= 4) {
  for (t1=0;t1<=floord(PB_L-2,8);t1++) {
    lbp=max(ceild(t1,2),ceild(32*t1-PB_L+3,32));
    ubp=min(min(floord(3*PB_L-5,32),floord(16*t1+PB_L+14,32)),t1);
#pragma omp parallel for private(lbv,ubv,t3,t4,t5,t6,t7)
    for (t2=lbp;t2<=ubp;t2++) {
      for (t3=max(max(max(max(ceild(2*t1-t2-1,2),ceild(4*t1-4*t2-1,2)),ceild(32*t1-PB_L-20,32)),ceild(64*t2-3*PB_L-28,32)),ceild(96*t1-32*t2-3*PB_L-27,64));t3<=min(min(min(floord(16*t1-16*t2+PB_L+13,16),floord(3*PB_L-7,32)),floord(32*t2+PB_L+27,32)),floord(32*t2+3*PB_L+24,64));t3++) {
        if (t2 >= t3+1) {
          for (t4=max(max(1,32*t1-32*t2),32*t2-2*PB_L+2);t4<=min(floord(-32*t2+64*t3+62,3),32*t1-32*t2+31);t4++) {
            for (t5=32*t2+t4-2*floord(t4,2);t5<=min(min(32*t2+31,64*t3-3*t4+62),t4+2*PB_L-2);t5+=2) {
              lbv=max(ceild(3*t4+t5,2),32*t3);
              ubv=min(floord(t4+t5+2*PB_L-6,2),32*t3+31);
#pragma ivdep
#pragma vector always
              for (t6=lbv;t6<=ubv;t6++) {
                A[((-t4-t5+2*t6)/2)][((-t4+t5)/2)] = B[((-t4-t5+2*t6)/2)][t4-1][((-t4+t5)/2)][((-t4-t5+2*t6)/2)+1] + 4;;
              }
            }
          }
        }
        if (t2 <= t3) {
          for (t4=max(max(max(1,32*t1-32*t2),32*t3-2*PB_L+4),-32*t2+64*t3-2*PB_L-25);t4<=min(floord(32*t2-PB_L,2),32*t1-32*t2+31);t4++) {
            for (t5=max(32*t2+t4-2*floord(t4,2),64*t3-t4-2*PB_L+6);t5<=min(32*t2+31,t4+2*PB_L-2);t5+=2) {
              lbv=32*t3;
              ubv=min(floord(t4+t5+2*PB_L-6,2),32*t3+31);
#pragma ivdep
#pragma vector always
              for (t6=lbv;t6<=ubv;t6++) {
                A[((-t4-t5+2*t6)/2)][((-t4+t5)/2)] = B[((-t4-t5+2*t6)/2)][t4-1][((-t4+t5)/2)][((-t4-t5+2*t6)/2)+1] + 4;;
              }
            }
          }
        }
        for (t4=max(max(max(1,ceild(32*t2-PB_L+1,2)),32*t1-32*t2),32*t3-2*PB_L+4);t4<=min(min(32*t1-32*t2+31,-32*t2+64*t3-2*PB_L-26),32*t2-32*t3+PB_L+28);t4++) {
          for (t5=max(32*t2,32*t3+t4-PB_L+3);t5<=min(32*t2+31,2*t4+PB_L-1);t5++) {
            lbv=32*t3;
            ubv=min(32*t3+31,-t4+t5+PB_L-3);
#pragma ivdep
#pragma vector always
            for (t6=lbv;t6<=ubv;t6++) {
              B[(t4-t5+t6)][(-2*t4+t5)-1][t4][(t4-t5+t6)+1] = C[(t4-t5+t6)-1][(-2*t4+t5)][t4] + D[(-2*t4+t5)][(-2*t4+t5)] * B[t4-1][(-2*t4+t5)+1][(t4-t5+t6)][t4] - B[(t4-t5+t6)+1][t4-1][(-2*t4+t5)-1][(t4-t5+t6)+2] - 3;;
            }
          }
        }
        if (t2 <= t3) {
          for (t4=max(max(max(1,ceild(32*t2-PB_L+1,2)),32*t1-32*t2),-32*t2+64*t3-2*PB_L-25);t4<=min(min(min(min(floord(-32*t2+64*t3+62,3),PB_L-3),16*t2+15),32*t1-32*t2+31),32*t2-32*t3+PB_L+28);t4++) {
            for (t5=max(max(t4+2,32*t2+t4-2*floord(t4,2)),64*t3-t4-2*PB_L+6);t5<=min(2*t4,64*t3-3*t4+62);t5+=2) {
              lbv=max(ceild(3*t4+t5,2),32*t3);
              ubv=min(floord(t4+t5+2*PB_L-6,2),32*t3+31);
#pragma ivdep
#pragma vector always
              for (t6=lbv;t6<=ubv;t6++) {
                A[((-t4-t5+2*t6)/2)][((-t4+t5)/2)] = B[((-t4-t5+2*t6)/2)][t4-1][((-t4+t5)/2)][((-t4-t5+2*t6)/2)+1] + 4;;
              }
            }
            for (t5=max(max(32*t2-t4+2*floord(t4+1,2),3*t4-2*floord(t4+1,2)+2),64*t3-t4-2*PB_L+6);t5<=min(64*t3-3*t4+62,32*t3+t4-PB_L+2);t5+=2) {
              lbv=max(ceild(3*t4+t5,2),32*t3);
              ubv=min(floord(t4+t5+2*PB_L-6,2),32*t3+31);
#pragma ivdep
#pragma vector always
              for (t6=lbv;t6<=ubv;t6++) {
                A[((-t4-t5+2*t6)/2)][((-t4+t5)/2)] = B[((-t4-t5+2*t6)/2)][t4-1][((-t4+t5)/2)][((-t4-t5+2*t6)/2)+1] + 4;;
              }
            }
            for (t5=max(32*t2,32*t3+t4-PB_L+3);t5<=min(2*t4+PB_L-1,64*t3-t4-2*PB_L+5);t5++) {
              lbv=32*t3;
              ubv=min(32*t3+31,-t4+t5+PB_L-3);
#pragma ivdep
#pragma vector always
              for (t6=lbv;t6<=ubv;t6++) {
                B[(t4-t5+t6)][(-2*t4+t5)-1][t4][(t4-t5+t6)+1] = C[(t4-t5+t6)-1][(-2*t4+t5)][t4] + D[(-2*t4+t5)][(-2*t4+t5)] * B[t4-1][(-2*t4+t5)+1][(t4-t5+t6)][t4] - B[(t4-t5+t6)+1][t4-1][(-2*t4+t5)-1][(t4-t5+t6)+2] - 3;;
              }
            }
            for (t5=max(max(max(32*t2,2*t4+1),32*t3+t4-PB_L+3),64*t3-t4-2*PB_L+6);t5<=min(min(32*t2+31,64*t3-3*t4+62),2*t4+PB_L-1);t5++) {
              if (t2 == t3) {
                lbv=max(ceild(3*t4+t5,2),32*t2);
                ubv=t5-1;
#pragma ivdep
#pragma vector always
                for (t6=lbv;t6<=ubv;t6++) {
                  if ((t4+t5)%2 == 0) {
                    A[((-t4-t5+2*t6)/2)][((-t4+t5)/2)] = B[((-t4-t5+2*t6)/2)][t4-1][((-t4+t5)/2)][((-t4-t5+2*t6)/2)+1] + 4;;
                  }
                }
              }
              lbv=max(32*t3,t5);
              ubv=min(floord(3*t4+t5-1,2),-t4+t5+PB_L-3);
#pragma ivdep
#pragma vector always
              for (t6=lbv;t6<=ubv;t6++) {
                B[(t4-t5+t6)][(-2*t4+t5)-1][t4][(t4-t5+t6)+1] = C[(t4-t5+t6)-1][(-2*t4+t5)][t4] + D[(-2*t4+t5)][(-2*t4+t5)] * B[t4-1][(-2*t4+t5)+1][(t4-t5+t6)][t4] - B[(t4-t5+t6)+1][t4-1][(-2*t4+t5)-1][(t4-t5+t6)+2] - 3;;
              }
              lbv=max(max(ceild(3*t4+t5,2),32*t3),t5);
              ubv=min(min(floord(t4+t5+2*PB_L-6,2),32*t3+31),-t4+t5+PB_L-3);
#pragma ivdep
#pragma vector always
              for (t6=lbv;t6<=ubv;t6++) {
                if ((t4+t5)%2 == 0) {
                  A[((-t4-t5+2*t6)/2)][((-t4+t5)/2)] = B[((-t4-t5+2*t6)/2)][t4-1][((-t4+t5)/2)][((-t4-t5+2*t6)/2)+1] + 4;;
                }
                B[(t4-t5+t6)][(-2*t4+t5)-1][t4][(t4-t5+t6)+1] = C[(t4-t5+t6)-1][(-2*t4+t5)][t4] + D[(-2*t4+t5)][(-2*t4+t5)] * B[t4-1][(-2*t4+t5)+1][(t4-t5+t6)][t4] - B[(t4-t5+t6)+1][t4-1][(-2*t4+t5)-1][(t4-t5+t6)+2] - 3;;
              }
              lbv=max(ceild(3*t4+t5,2),-t4+t5+PB_L-2);
              ubv=min(floord(t4+t5+2*PB_L-6,2),32*t3+31);
#pragma ivdep
#pragma vector always
              for (t6=lbv;t6<=ubv;t6++) {
                if ((t4+t5)%2 == 0) {
                  A[((-t4-t5+2*t6)/2)][((-t4+t5)/2)] = B[((-t4-t5+2*t6)/2)][t4-1][((-t4+t5)/2)][((-t4-t5+2*t6)/2)+1] + 4;;
                }
              }
              lbv=ceild(t4+t5+2*PB_L-5,2);
              ubv=min(32*t3+31,-t4+t5+PB_L-3);
#pragma ivdep
#pragma vector always
              for (t6=lbv;t6<=ubv;t6++) {
                B[(t4-t5+t6)][(-2*t4+t5)-1][t4][(t4-t5+t6)+1] = C[(t4-t5+t6)-1][(-2*t4+t5)][t4] + D[(-2*t4+t5)][(-2*t4+t5)] * B[t4-1][(-2*t4+t5)+1][(t4-t5+t6)][t4] - B[(t4-t5+t6)+1][t4-1][(-2*t4+t5)-1][(t4-t5+t6)+2] - 3;;
              }
            }
            for (t5=max(3*t4-2*floord(t4+PB_L,2)+2*PB_L,64*t3-t4-2*PB_L+6);t5<=min(32*t2+31,t4+2*PB_L-2);t5+=2) {
              lbv=max(ceild(3*t4+t5,2),32*t3);
              ubv=min(floord(t4+t5+2*PB_L-6,2),32*t3+31);
#pragma ivdep
#pragma vector always
              for (t6=lbv;t6<=ubv;t6++) {
                A[((-t4-t5+2*t6)/2)][((-t4+t5)/2)] = B[((-t4-t5+2*t6)/2)][t4-1][((-t4+t5)/2)][((-t4-t5+2*t6)/2)+1] + 4;;
              }
            }
            for (t5=max(max(2*t4+1,64*t3-3*t4+63),32*t3+t4-PB_L+3);t5<=32*t2+31;t5++) {
              lbv=max(32*t3,t5);
              ubv=min(32*t3+31,-t4+t5+PB_L-3);
#pragma ivdep
#pragma vector always
              for (t6=lbv;t6<=ubv;t6++) {
                B[(t4-t5+t6)][(-2*t4+t5)-1][t4][(t4-t5+t6)+1] = C[(t4-t5+t6)-1][(-2*t4+t5)][t4] + D[(-2*t4+t5)][(-2*t4+t5)] * B[t4-1][(-2*t4+t5)+1][(t4-t5+t6)][t4] - B[(t4-t5+t6)+1][t4-1][(-2*t4+t5)-1][(t4-t5+t6)+2] - 3;;
              }
            }
          }
        }
        for (t4=max(max(32*t1-32*t2,-32*t2+64*t3-2*PB_L-25),32*t2-32*t3+PB_L+29);t4<=min(min(min(floord(-32*t2+64*t3+62,3),PB_L-3),16*t2+15),32*t1-32*t2+31);t4++) {
          for (t5=max(32*t2+t4-2*floord(t4,2),64*t3-t4-2*PB_L+6);t5<=min(32*t2+31,64*t3-3*t4+62);t5+=2) {
            lbv=max(ceild(3*t4+t5,2),32*t3);
            ubv=min(floord(t4+t5+2*PB_L-6,2),32*t3+31);
#pragma ivdep
#pragma vector always
            for (t6=lbv;t6<=ubv;t6++) {
              A[((-t4-t5+2*t6)/2)][((-t4+t5)/2)] = B[((-t4-t5+2*t6)/2)][t4-1][((-t4+t5)/2)][((-t4-t5+2*t6)/2)+1] + 4;;
            }
          }
        }
        for (t4=max(max(32*t1-32*t2,16*t2+16),-32*t2+64*t3-2*PB_L-25);t4<=min(min(min(min(floord(-32*t2+64*t3+62,3),PB_L-3),32*t2+29),16*t3+15),32*t1-32*t2+31);t4++) {
          for (t5=max(max(t4+2,32*t2+t4-2*floord(t4,2)),64*t3-t4-2*PB_L+6);t5<=min(32*t2+31,64*t3-3*t4+62);t5+=2) {
            lbv=max(ceild(3*t4+t5,2),32*t3);
            ubv=min(floord(t4+t5+2*PB_L-6,2),32*t3+31);
#pragma ivdep
#pragma vector always
            for (t6=lbv;t6<=ubv;t6++) {
              A[((-t4-t5+2*t6)/2)][((-t4+t5)/2)] = B[((-t4-t5+2*t6)/2)][t4-1][((-t4+t5)/2)][((-t4-t5+2*t6)/2)+1] + 4;;
            }
          }
        }
        if (t2 <= t3) {
          for (t4=max(ceild(-32*t2+64*t3+63,3),32*t1-32*t2);t4<=min(min(min(PB_L-3,16*t2+15),32*t1-32*t2+31),32*t2-32*t3+PB_L+28);t4++) {
            for (t5=max(max(32*t2,2*t4+1),32*t3+t4-PB_L+3);t5<=32*t2+31;t5++) {
              lbv=max(32*t3,t5);
              ubv=min(32*t3+31,-t4+t5+PB_L-3);
#pragma ivdep
#pragma vector always
              for (t6=lbv;t6<=ubv;t6++) {
                B[(t4-t5+t6)][(-2*t4+t5)-1][t4][(t4-t5+t6)+1] = C[(t4-t5+t6)-1][(-2*t4+t5)][t4] + D[(-2*t4+t5)][(-2*t4+t5)] * B[t4-1][(-2*t4+t5)+1][(t4-t5+t6)][t4] - B[(t4-t5+t6)+1][t4-1][(-2*t4+t5)-1][(t4-t5+t6)+2] - 3;;
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
int vb = vB;
int xc = xC;
int yc = yC;
int zc = zC;
int xd = xD;
int yd = yD;
POLYBENCH_2D_ARRAY_DECL(A, DATA_TYPE, xA,yA,xa,ya);
POLYBENCH_4D_ARRAY_DECL(B, DATA_TYPE, xB,yB,zB,vB,xb,yb,zb,vb);
POLYBENCH_3D_ARRAY_DECL(C, DATA_TYPE, xC,yC,zC,xc,yc,zc);
POLYBENCH_2D_ARRAY_DECL(D, DATA_TYPE, xD,yD,xd,yd);
init_array(xa,ya,POLYBENCH_ARRAY(A), xb,yb,zb,vb,POLYBENCH_ARRAY(B), xc,yc,zc,POLYBENCH_ARRAY(C), xd,yd,POLYBENCH_ARRAY(D), INIT_SEED);
kernel_3214211223_01(xa,ya,POLYBENCH_ARRAY(A), xb,yb,zb,vb,POLYBENCH_ARRAY(B), xc,yc,zc,POLYBENCH_ARRAY(C), xd,yd,POLYBENCH_ARRAY(D));
polybench_prevent_dce(print_array(xa,ya,POLYBENCH_ARRAY(A), xb,yb,zb,vb,POLYBENCH_ARRAY(B), xc,yc,zc,POLYBENCH_ARRAY(C), xd,yd,POLYBENCH_ARRAY(D)));
POLYBENCH_FREE_ARRAY(A);
POLYBENCH_FREE_ARRAY(B);
POLYBENCH_FREE_ARRAY(C);
POLYBENCH_FREE_ARRAY(D);
return 0;
}
