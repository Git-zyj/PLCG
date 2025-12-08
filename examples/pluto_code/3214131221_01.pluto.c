#include <stdio.h>
#include <unistd.h>
#include <string.h>
#include <math.h>
#include "polybench.h"
#include <time.h>
#include <stdlib.h>
#include "3214131221_01.h"
#include <omp.h>
#define ceild(n,d)  ceil(((double)(n))/((double)(d)))
#define floord(n,d) floor(((double)(n))/((double)(d)))
/*
arg_depth: 3
arg_nstmts: 2
arg_bounds_index: 1
arg_prob_bounds_exist: 4
arg_narrays_per_dim: 1
arg_avg_narrays_read_per_stmt: 3
arg_bounds_coef: 1
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
static void init_array(int xb,int yb,int zb,DATA_TYPE POLYBENCH_3D(B,xB,yB,zB,xb,yb,zb),int xc,int yc,DATA_TYPE POLYBENCH_2D(C,xC,yC,xc,yc),int xd,int yd,int zd,DATA_TYPE POLYBENCH_3D(D,xD,yD,zD,xd,yd,zd),int seed)
{
srand(seed);
int i_0, i_1, i_2;
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
    for (i_1 = 0; i_1 < yd; i_1++) {
        for (i_2 = 0; i_2 < zd; i_2++) {
            D[i_0][i_1][i_2] = 0.9 + (rand() / (DATA_TYPE)RAND_MAX) * (1.1 - 0.9);
        }
    }
}
}
static void print_array(int xb,int yb,int zb,DATA_TYPE POLYBENCH_3D(B,xB,yB,zB,xb,yb,zb),int xc,int yc,DATA_TYPE POLYBENCH_2D(C,xC,yC,xc,yc),int xd,int yd,int zd,DATA_TYPE POLYBENCH_3D(D,xD,yD,zD,xd,yd,zd))
{
int i_0, i_1, i_2;
POLYBENCH_DUMP_START;
#ifdef CHECKELEM
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
void kernel_3214131221_01(int xb,int yb,int zb,DATA_TYPE POLYBENCH_3D(B,xB,yB,zB,xb,yb,zb),int xc,int yc,DATA_TYPE POLYBENCH_2D(C,xC,yC,xc,yc),int xd,int yd,int zd,DATA_TYPE POLYBENCH_3D(D,xD,yD,zD,xd,yd,zd)){
polybench_start_instruments;
  int t1, t2, t3, t4, t5, t6, t7;
 int lb, ub, lbp, ubp, lb2, ub2;
 register int lbv, ubv;
/* Start of CLooG code */
if (PB_L >= 2) {
  lbp=0;
  ubp=floord(PB_L-1,32);
#pragma omp parallel for private(lbv,ubv,t2,t3,t4,t5,t6,t7)
  for (t1=lbp;t1<=ubp;t1++) {
    for (t2=0;t2<=min(floord(3*PB_L-3,32),floord(-192*t1+9*PB_L-15,32));t2++) {
      for (t3=max(max(0,ceild(48*t2-3*PB_L-29,48)),ceild(1120*t1+48*t2-38*PB_L+41,48));t3<=min(min(floord(t2,2),floord(PB_L-1,32)),floord(-64*t1+3*PB_L-5,32));t3++) {
        if ((PB_L <= 4) && (t1 == 0) && (t2 == 0) && (t3 == 0)) {
          for (t4=0;t4<=PB_L-2;t4++) {
            for (t5=1;t5<=PB_L-1;t5++) {
              lbv=2*t5+1;
              ubv=3*t5;
#pragma ivdep
#pragma vector always
              for (t6=lbv;t6<=ubv;t6++) {
                B[t4][(-2*t5+t6)-1][t5+2] = C[t4][(-2*t5+t6)+1] + D[(-2*t5+t6)][t5][t4] + 1;;
              }
            }
          }
        }
        if (t2 <= min(floord(PB_L-2,16),3*t3-1)) {
          for (t4=32*t1;t4<=min(PB_L-2,32*t1+31);t4++) {
            for (t5=32*t3;t5<=min(min(PB_L-1,16*t2+15),32*t3+31);t5++) {
              lbv=max(32*t2,2*t5+1);
              ubv=32*t2+31;
#pragma ivdep
#pragma vector always
              for (t6=lbv;t6<=ubv;t6++) {
                B[t4][(-2*t5+t6)-1][t5+2] = C[t4][(-2*t5+t6)+1] + D[(-2*t5+t6)][t5][t4] + 1;;
              }
            }
          }
        }
        if ((t2 <= min(floord(PB_L-2,16),3*t3+2)) && (t2 >= max(ceild(-16*t3+PB_L,16),3*t3))) {
          for (t4=32*t1;t4<=min(PB_L-2,32*t1+31);t4++) {
            for (t5=ceild(32*t2,3);t5<=min(PB_L-1,32*t3+31);t5++) {
              lbv=max(32*t2,2*t5+1);
              ubv=min(3*t5,32*t2+31);
#pragma ivdep
#pragma vector always
              for (t6=lbv;t6<=ubv;t6++) {
                B[t4][(-2*t5+t6)-1][t5+2] = C[t4][(-2*t5+t6)+1] + D[(-2*t5+t6)][t5][t4] + 1;;
              }
            }
          }
        }
        if ((t2 >= ceild(PB_L-1,16)) && (t2 <= 3*t3+2)) {
          for (t4=32*t1;t4<=min(PB_L-2,32*t1+31);t4++) {
            for (t5=max(ceild(32*t2,3),32*t3);t5<=min(PB_L-1,32*t3+31);t5++) {
              lbv=max(32*t2,2*t5+1);
              ubv=min(3*t5,32*t2+31);
#pragma ivdep
#pragma vector always
              for (t6=lbv;t6<=ubv;t6++) {
                B[t4][(-2*t5+t6)-1][t5+2] = C[t4][(-2*t5+t6)+1] + D[(-2*t5+t6)][t5][t4] + 1;;
              }
            }
          }
        }
        if ((PB_L >= 5) && (t1 == 0) && (t2 <= min(min(floord(PB_L-2,16),floord(-16*t3+PB_L-1,16)),3*t3+2)) && (t2 >= 3*t3)) {
          for (t5=max(1,ceild(32*t2,3));t5<=min(min(PB_L-1,16*t2+15),32*t3+31);t5++) {
            lbv=max(32*t2,2*t5+1);
            ubv=min(3*t5,32*t2+31);
#pragma ivdep
#pragma vector always
            for (t6=lbv;t6<=ubv;t6++) {
              B[0][(-2*t5+t6)-1][t5+2] = C[0][(-2*t5+t6)+1] + D[(-2*t5+t6)][t5][0] + 1;;
            }
          }
        }
        if ((t2 <= min(floord(PB_L-2,16),floord(-16*t3+PB_L-1,16))) && (t2 >= 3*t3+3)) {
          for (t4=max(1,32*t1);t4<=min(min(min(PB_L-1,PB_Q-3),32*t1+31),-32*t3+PB_Q-1);t4++) {
            for (t5=max(2,32*t3);t5<=min(min(32*t3+31,-32*t2+2*PB_L-2),-t4+PB_Q-1);t5++) {
              lbv=32*t2+t5-2*floord(t5,2);
              ubv=min(32*t2+31,-t5+2*PB_L-2);
#pragma ivdep
#pragma vector always
              for (t6=lbv;t6<=ubv;t6+=2) {
                B[(t4-1)][((-t5+t6)/2)-1][t5] = D[((-t5+t6)/2)][(t4-1)][t5] + D[((-t5+t6)/2)+t5][(t4-1)+1][0] + D[((-t5+t6)/2)+t5][((-t5+t6)/2)][t5+(t4-1)+1] + D[((-t5+t6)/2)][(t4-1)+1][t5+1] * B[(t4-1)+1][t5-1][((-t5+t6)/2)+2] + B[(t4-1)][((-t5+t6)/2)][t5-2] * 4;;
              }
            }
          }
        }
        if ((PB_L >= 5) && (t2 <= min(min(floord(PB_L-2,16),floord(-16*t3+PB_L-1,16)),3*t3+2)) && (t2 >= 3*t3)) {
          for (t4=max(1,32*t1);t4<=min(min(min(PB_L-2,PB_Q-3),32*t1+31),-32*t3+PB_Q-1);t4++) {
            if ((t2 == 0) && (t3 == 0)) {
              B[t4][1 -1][1 +2] = C[t4][1 +1] + D[1][1][t4] + 1;;
            }
            for (t5=max(2,32*t3);t5<=min(min(floord(32*t2-1,3),-32*t2+2*PB_L-2),-t4+PB_Q-1);t5++) {
              lbv=32*t2+t5-2*floord(t5,2);
              ubv=min(32*t2+31,-t5+2*PB_L-2);
#pragma ivdep
#pragma vector always
              for (t6=lbv;t6<=ubv;t6+=2) {
                B[(t4-1)][((-t5+t6)/2)-1][t5] = D[((-t5+t6)/2)][(t4-1)][t5] + D[((-t5+t6)/2)+t5][(t4-1)+1][0] + D[((-t5+t6)/2)+t5][((-t5+t6)/2)][t5+(t4-1)+1] + D[((-t5+t6)/2)][(t4-1)+1][t5+1] * B[(t4-1)+1][t5-1][((-t5+t6)/2)+2] + B[(t4-1)][((-t5+t6)/2)][t5-2] * 4;;
              }
            }
            for (t5=max(2,ceild(32*t2,3));t5<=min(min(floord(PB_L-1,2),floord(32*t2+31,3)),-t4+PB_Q-1);t5++) {
              lbv=max(32*t2,2*t5+1);
              ubv=3*t5-1;
#pragma ivdep
#pragma vector always
              for (t6=lbv;t6<=ubv;t6++) {
                B[t4][(-2*t5+t6)-1][t5+2] = C[t4][(-2*t5+t6)+1] + D[(-2*t5+t6)][t5][t4] + 1;;
              }
              B[(t4-1)][t5-1][t5] = D[t5][(t4-1)][t5] + D[t5+t5][(t4-1)+1][0] + D[t5+t5][t5][t5+(t4-1)+1] + D[t5][(t4-1)+1][t5+1] * B[(t4-1)+1][t5-1][t5+2] + B[(t4-1)][t5][t5-2] * 4;;
              B[t4][t5-1][t5+2] = C[t4][t5+1] + D[t5][t5][t4] + 1;;
              lbv=3*t5+2;
              ubv=min(32*t2+31,-t5+2*PB_L-2);
#pragma ivdep
#pragma vector always
              for (t6=lbv;t6<=ubv;t6+=2) {
                B[(t4-1)][((-t5+t6)/2)-1][t5] = D[((-t5+t6)/2)][(t4-1)][t5] + D[((-t5+t6)/2)+t5][(t4-1)+1][0] + D[((-t5+t6)/2)+t5][((-t5+t6)/2)][t5+(t4-1)+1] + D[((-t5+t6)/2)][(t4-1)+1][t5+1] * B[(t4-1)+1][t5-1][((-t5+t6)/2)+2] + B[(t4-1)][((-t5+t6)/2)][t5-2] * 4;;
              }
            }
            for (t5=ceild(32*t2+32,3);t5<=min(min(min(floord(PB_L-1,2),16*t2+15),32*t3+31),-t4+PB_Q-1);t5++) {
              lbv=max(32*t2,2*t5+1);
              ubv=32*t2+31;
#pragma ivdep
#pragma vector always
              for (t6=lbv;t6<=ubv;t6++) {
                B[t4][(-2*t5+t6)-1][t5+2] = C[t4][(-2*t5+t6)+1] + D[(-2*t5+t6)][t5][t4] + 1;;
              }
            }
            for (t5=max(ceild(PB_L,2),ceild(32*t2,3));t5<=min(min(min(PB_L-1,16*t2+15),32*t3+31),-t4+PB_Q-1);t5++) {
              lbv=max(32*t2,2*t5+1);
              ubv=min(3*t5,32*t2+31);
#pragma ivdep
#pragma vector always
              for (t6=lbv;t6<=ubv;t6++) {
                B[t4][(-2*t5+t6)-1][t5+2] = C[t4][(-2*t5+t6)+1] + D[(-2*t5+t6)][t5][t4] + 1;;
              }
            }
            for (t5=max(ceild(32*t2,3),-t4+PB_Q);t5<=min(min(PB_L-1,16*t2+15),32*t3+31);t5++) {
              lbv=max(32*t2,2*t5+1);
              ubv=min(3*t5,32*t2+31);
#pragma ivdep
#pragma vector always
              for (t6=lbv;t6<=ubv;t6++) {
                B[t4][(-2*t5+t6)-1][t5+2] = C[t4][(-2*t5+t6)+1] + D[(-2*t5+t6)][t5][t4] + 1;;
              }
            }
          }
        }
        if ((PB_L >= 5) && (t2 <= min(2,floord(PB_L-2,16))) && (t3 == 0)) {
          for (t4=max(max(1,32*t1),PB_Q-2);t4<=min(min(PB_L-2,PB_Q-1),32*t1+31);t4++) {
            for (t5=max(1,ceild(32*t2,3));t5<=min(min(31,PB_L-1),16*t2+15);t5++) {
              lbv=max(32*t2,2*t5+1);
              ubv=min(3*t5,32*t2+31);
#pragma ivdep
#pragma vector always
              for (t6=lbv;t6<=ubv;t6++) {
                B[t4][(-2*t5+t6)-1][t5+2] = C[t4][(-2*t5+t6)+1] + D[(-2*t5+t6)][t5][t4] + 1;;
              }
            }
          }
        }
        if ((PB_L >= 5) && (PB_L <= PB_Q-2) && (t1 >= ceild(PB_L-32,32)) && (t2 <= min(min(floord(PB_L-2,16),floord(-16*t3+PB_L-1,16)),3*t3+2)) && (t2 >= 3*t3) && (t3 <= floord(-PB_L+PB_Q,32))) {
          for (t5=max(2,32*t3);t5<=min(min(min(floord(PB_L-1,2),floord(32*t2+31,3)),-PB_L+PB_Q),-32*t2+2*PB_L-2);t5++) {
            lbv=max(3*t5,32*t2+t5-2*floord(t5,2));
            ubv=min(32*t2+31,-t5+2*PB_L-2);
#pragma ivdep
#pragma vector always
            for (t6=lbv;t6<=ubv;t6+=2) {
              B[(PB_L-2)][((-t5+t6)/2)-1][t5] = D[((-t5+t6)/2)][(PB_L-2)][t5] + D[((-t5+t6)/2)+t5][(PB_L-2)+1][0] + D[((-t5+t6)/2)+t5][((-t5+t6)/2)][t5+(PB_L-2)+1] + D[((-t5+t6)/2)][(PB_L-2)+1][t5+1] * B[(PB_L-2)+1][t5-1][((-t5+t6)/2)+2] + B[(PB_L-2)][((-t5+t6)/2)][t5-2] * 4;;
            }
          }
        }
        if ((PB_L >= 5) && (t2 <= min(min(floord(PB_L-2,16),floord(-16*t3+PB_L-1,16)),3*t3+2)) && (t2 >= 3*t3)) {
          for (t4=max(max(1,32*t1),-32*t3+PB_Q);t4<=min(PB_L-2,32*t1+31);t4++) {
            for (t5=max(1,ceild(32*t2,3));t5<=min(min(PB_L-1,16*t2+15),32*t3+31);t5++) {
              lbv=max(32*t2,2*t5+1);
              ubv=min(3*t5,32*t2+31);
#pragma ivdep
#pragma vector always
              for (t6=lbv;t6<=ubv;t6++) {
                B[t4][(-2*t5+t6)-1][t5+2] = C[t4][(-2*t5+t6)+1] + D[(-2*t5+t6)][t5][t4] + 1;;
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
int xb = xB;
int yb = yB;
int zb = zB;
int xc = xC;
int yc = yC;
int xd = xD;
int yd = yD;
int zd = zD;
POLYBENCH_3D_ARRAY_DECL(B, DATA_TYPE, xB,yB,zB,xb,yb,zb);
POLYBENCH_2D_ARRAY_DECL(C, DATA_TYPE, xC,yC,xc,yc);
POLYBENCH_3D_ARRAY_DECL(D, DATA_TYPE, xD,yD,zD,xd,yd,zd);
init_array(xb,yb,zb,POLYBENCH_ARRAY(B), xc,yc,POLYBENCH_ARRAY(C), xd,yd,zd,POLYBENCH_ARRAY(D), INIT_SEED);
kernel_3214131221_01(xb,yb,zb,POLYBENCH_ARRAY(B), xc,yc,POLYBENCH_ARRAY(C), xd,yd,zd,POLYBENCH_ARRAY(D));
polybench_prevent_dce(print_array(xb,yb,zb,POLYBENCH_ARRAY(B), xc,yc,POLYBENCH_ARRAY(C), xd,yd,zd,POLYBENCH_ARRAY(D)));
POLYBENCH_FREE_ARRAY(B);
POLYBENCH_FREE_ARRAY(C);
POLYBENCH_FREE_ARRAY(D);
return 0;
}
