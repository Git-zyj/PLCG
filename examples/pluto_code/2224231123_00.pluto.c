#include <stdio.h>
#include <unistd.h>
#include <string.h>
#include <math.h>
#include "polybench.h"
#include <time.h>
#include <stdlib.h>
#include "2224231123_00.h"
#include <omp.h>
#define ceild(n,d)  ceil(((double)(n))/((double)(d)))
#define floord(n,d) floor(((double)(n))/((double)(d)))
/*
arg_depth: 2
arg_nstmts: 2
arg_bounds_index: 2
arg_prob_bounds_exist: 4
arg_narrays_per_dim: 2
arg_avg_narrays_read_per_stmt: 3
arg_bounds_coef: 1
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
static void init_array(int xb,DATA_TYPE POLYBENCH_1D(B,xB,xb),int xc,int yc,DATA_TYPE POLYBENCH_2D(C,xC,yC,xc,yc),int xd,int yd,DATA_TYPE POLYBENCH_2D(D,xD,yD,xd,yd),int xe,int ye,int ze,DATA_TYPE POLYBENCH_3D(E,xE,yE,zE,xe,ye,ze),int seed)
{
srand(seed);
int i_0, i_1, i_2;
for (i_0 = 0; i_0 < xb; i_0++) {
    B[i_0] = 0.9 + (rand() / (DATA_TYPE)RAND_MAX) * (1.1 - 0.9);
}
for (i_0 = 0; i_0 < xc; i_0++) {
    for (i_1 = 0; i_1 < yc; i_1++) {
        C[i_0][i_1] = 0.9 + (rand() / (DATA_TYPE)RAND_MAX) * (1.1 - 0.9);
    }
}
for (i_0 = 0; i_0 < xd; i_0++) {
    for (i_1 = 0; i_1 < yd; i_1++) {
        D[i_0][i_1] = 0.9 + (rand() / (DATA_TYPE)RAND_MAX) * (1.1 - 0.9);
    }
}
for (i_0 = 0; i_0 < xe; i_0++) {
    for (i_1 = 0; i_1 < ye; i_1++) {
        for (i_2 = 0; i_2 < ze; i_2++) {
            E[i_0][i_1][i_2] = 0.9 + (rand() / (DATA_TYPE)RAND_MAX) * (1.1 - 0.9);
        }
    }
}
}
static void print_array(int xb,DATA_TYPE POLYBENCH_1D(B,xB,xb),int xc,int yc,DATA_TYPE POLYBENCH_2D(C,xC,yC,xc,yc),int xd,int yd,DATA_TYPE POLYBENCH_2D(D,xD,yD,xd,yd),int xe,int ye,int ze,DATA_TYPE POLYBENCH_3D(E,xE,yE,zE,xe,ye,ze))
{
int i_0, i_1, i_2;
POLYBENCH_DUMP_START;
#ifdef CHECKELEM
    POLYBENCH_DUMP_BEGIN("B");
    for (i_0 = 0; i_0 < xb; i_0++) {
        fprintf(POLYBENCH_DUMP_TARGET, "\n");
        fprintf (POLYBENCH_DUMP_TARGET, DATA_PRINTF_MODIFIER, B[i_0]);
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
            fprintf(POLYBENCH_DUMP_TARGET, "\n");
            fprintf (POLYBENCH_DUMP_TARGET, DATA_PRINTF_MODIFIER, D[i_0][i_1]);
        }
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
    POLYBENCH_DUMP_BEGIN("B");
    DATA_TYPE sum_B = 0;
    for (i_0 = 0; i_0 < xb; i_0++) {
        sum_B += B[i_0];
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
            sum_D += D[i_0][i_1];
        }
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
void kernel_2224231123_00(int xb,DATA_TYPE POLYBENCH_1D(B,xB,xb),int xc,int yc,DATA_TYPE POLYBENCH_2D(C,xC,yC,xc,yc),int xd,int yd,DATA_TYPE POLYBENCH_2D(D,xD,yD,xd,yd),int xe,int ye,int ze,DATA_TYPE POLYBENCH_3D(E,xE,yE,zE,xe,ye,ze)){
polybench_start_instruments;
  int t1, t2, t3, t4;
 int lb, ub, lbp, ubp, lb2, ub2;
 register int lbv, ubv;
/* Start of CLooG code */
if (PB_L >= 1) {
  if ((PB_L >= ceild(-3*PB_N+16,4)) && (PB_N >= 0)) {
    for (t1=0;t1<=min(floord(5*PB_L+2*PB_N-7,32),floord(20*PB_L+19*PB_N-72,128));t1++) {
      lbp=max(max(max(max(max(max(max(max(0,ceild(32*t1-2*PB_L-PB_N+3,32)),ceild(32*t1-PB_L+1,64)),ceild(64*t1-2*PB_L-PB_N+3,96)),ceild(96*t1-3*PB_L-10*PB_N+6,128)),ceild(96*t1-3*PB_L-2*PB_N-26,128)),ceild(128*t1-8*PB_L-7*PB_N+24,128)),ceild(128*t1-4*PB_L-PB_N+8,256)),ceild(256*t1-8*PB_L-5*PB_N+16,384));
      ubp=min(min(min(min(floord(3*t1+2,5),floord(6*t1+PB_N,10)),floord(3*PB_L+PB_N-4,32)),floord(32*t1+PB_L+30,64)),floord(12*PB_L+11*PB_N-44,128));
#pragma omp parallel for private(lbv,ubv,t3,t4)
      for (t2=lbp;t2<=ubp;t2++) {
        if ((PB_N <= 3) && (t1 <= floord(32*t2+PB_L-2,32))) {
          for (t3=max(1,32*t2);t3<=min(min(PB_L-3,32*t2+31),32*t1-32*t2+30);t3++) {
            lbv=max(32*t1-32*t2,t3+1);
            ubv=min(PB_L-2,32*t1-32*t2+31);
#pragma ivdep
#pragma vector always
            for (t4=lbv;t4<=ubv;t4++) {
              B[t4-1] = C[t3][t4+1] - C[t3-1][t4] + D[t3][t4] + 1;;
            }
          }
        }
        if ((PB_N >= 4) && (t1 <= floord(32*t2+PB_L-2,32))) {
          for (t3=max(1,32*t2);t3<=min(32*t2+31,32*t1-32*t2-1);t3++) {
            lbv=32*t1-32*t2;
            ubv=min(PB_L-2,32*t1-32*t2+31);
#pragma ivdep
#pragma vector always
            for (t4=lbv;t4<=ubv;t4++) {
              B[t4-1] = C[t3][t4+1] - C[t3-1][t4] + D[t3][t4] + 1;;
            }
          }
        }
        if ((PB_N >= 4) && (t1 == 0) && (t2 == 0)) {
          for (t3=1;t3<=min(2,PB_L-3);t3++) {
            lbv=t3+1;
            ubv=min(31,PB_L-2);
#pragma ivdep
#pragma vector always
            for (t4=lbv;t4<=ubv;t4++) {
              B[t4-1] = C[t3][t4+1] - C[t3-1][t4] + D[t3][t4] + 1;;
            }
          }
        }
        if ((PB_N >= 4) && (t1 == 2*t2)) {
          for (t3=16*t1;t3<=min(min(floord(48*t1-PB_N,2),PB_L-3),16*t1+30);t3++) {
            lbv=t3+1;
            ubv=min(PB_L-2,16*t1+31);
#pragma ivdep
#pragma vector always
            for (t4=lbv;t4<=ubv;t4++) {
              if (t1%2 == 0) {
                B[t4-1] = C[t3][t4+1] - C[t3-1][t4] + D[t3][t4] + 1;;
              }
            }
          }
        }
        if ((PB_N >= 4) && (t1 == 2*t2)) {
          for (t3=max(max(3,ceild(48*t1-PB_N+1,2)),16*t1);t3<=min(PB_L-3,16*t1+30);t3++) {
            lbv=max(ceild(2*t3+3,3),16*t1);
            ubv=min(floord(2*t3+PB_N-1,3),t3);
#pragma ivdep
#pragma vector always
            for (t4=lbv;t4<=ubv;t4++) {
              if (t1%2 == 0) {
                B[(-2*t3+3*t4)-1] = D[1][(t3-t4)] + E[(-2*t3+3*t4)][0][(t3-t4)] + C[(-2*t3+3*t4)][(t3-t4)] - B[(-2*t3+3*t4)-3] * 4;;
              }
            }
            lbv=t3+1;
            ubv=min(PB_L-2,16*t1+31);
#pragma ivdep
#pragma vector always
            for (t4=lbv;t4<=ubv;t4++) {
              if (t1%2 == 0) {
                B[t4-1] = C[t3][t4+1] - C[t3-1][t4] + D[t3][t4] + 1;;
              }
            }
          }
        }
        if ((PB_N >= 4) && (t1 == 2*t2)) {
          for (t3=max(max(max(3,ceild(48*t1-PB_N+1,2)),16*t1),PB_L-2);t3<=min(16*t1+30,3*PB_L+PB_N-4);t3++) {
            lbv=max(max(ceild(2*t3+3,3),16*t1),t3-PB_L+1);
            ubv=min(floord(2*t3+PB_N-1,3),t3);
#pragma ivdep
#pragma vector always
            for (t4=lbv;t4<=ubv;t4++) {
              if (t1%2 == 0) {
                B[(-2*t3+3*t4)-1] = D[1][(t3-t4)] + E[(-2*t3+3*t4)][0][(t3-t4)] + C[(-2*t3+3*t4)][(t3-t4)] - B[(-2*t3+3*t4)-3] * 4;;
              }
            }
          }
        }
        if (PB_N >= 4) {
          for (t3=max(max(ceild(96*t1-96*t2-PB_N+1,2),32*t2),32*t1-32*t2+31);t3<=min(min(min(32*t2+31,3*PB_L+PB_N-4),48*t1-48*t2+45),32*t1-32*t2+PB_L+30);t3++) {
            lbv=max(max(ceild(2*t3+3,3),32*t1-32*t2),t3-PB_L+1);
            ubv=min(floord(2*t3+PB_N-1,3),32*t1-32*t2+31);
#pragma ivdep
#pragma vector always
            for (t4=lbv;t4<=ubv;t4++) {
              B[(-2*t3+3*t4)-1] = D[1][(t3-t4)] + E[(-2*t3+3*t4)][0][(t3-t4)] + C[(-2*t3+3*t4)][(t3-t4)] - B[(-2*t3+3*t4)-3] * 4;;
            }
          }
        }
      }
    }
  }
  if ((PB_L >= 4) && (PB_N <= -1)) {
    for (t1=0;t1<=floord(PB_L-3,16);t1++) {
      lbp=max(0,ceild(32*t1-PB_L+2,32));
      ubp=floord(t1,2);
#pragma omp parallel for private(lbv,ubv,t3,t4)
      for (t2=lbp;t2<=ubp;t2++) {
        for (t3=max(1,32*t2);t3<=min(min(PB_L-3,32*t2+31),32*t1-32*t2+30);t3++) {
          lbv=max(32*t1-32*t2,t3+1);
          ubv=min(PB_L-2,32*t1-32*t2+31);
#pragma ivdep
#pragma vector always
          for (t4=lbv;t4<=ubv;t4++) {
            B[t4-1] = C[t3][t4+1] - C[t3-1][t4] + D[t3][t4] + 1;;
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
int xc = xC;
int yc = yC;
int xd = xD;
int yd = yD;
int xe = xE;
int ye = yE;
int ze = zE;
POLYBENCH_1D_ARRAY_DECL(B, DATA_TYPE, xB,xb);
POLYBENCH_2D_ARRAY_DECL(C, DATA_TYPE, xC,yC,xc,yc);
POLYBENCH_2D_ARRAY_DECL(D, DATA_TYPE, xD,yD,xd,yd);
POLYBENCH_3D_ARRAY_DECL(E, DATA_TYPE, xE,yE,zE,xe,ye,ze);
init_array(xb,POLYBENCH_ARRAY(B), xc,yc,POLYBENCH_ARRAY(C), xd,yd,POLYBENCH_ARRAY(D), xe,ye,ze,POLYBENCH_ARRAY(E), INIT_SEED);
kernel_2224231123_00(xb,POLYBENCH_ARRAY(B), xc,yc,POLYBENCH_ARRAY(C), xd,yd,POLYBENCH_ARRAY(D), xe,ye,ze,POLYBENCH_ARRAY(E));
polybench_prevent_dce(print_array(xb,POLYBENCH_ARRAY(B), xc,yc,POLYBENCH_ARRAY(C), xd,yd,POLYBENCH_ARRAY(D), xe,ye,ze,POLYBENCH_ARRAY(E)));
POLYBENCH_FREE_ARRAY(B);
POLYBENCH_FREE_ARRAY(C);
POLYBENCH_FREE_ARRAY(D);
POLYBENCH_FREE_ARRAY(E);
return 0;
}
