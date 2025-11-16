#include <stdio.h>
#include <unistd.h>
#include <string.h>
#include <math.h>
#include "polybench.h"
#include <time.h>
#include <stdlib.h>
#include "3214232221_00.h"
#include <omp.h>
#define ceild(n,d)  ceil(((double)(n))/((double)(d)))
#define floord(n,d) floor(((double)(n))/((double)(d)))
/*
arg_depth: 3
arg_nstmts: 2
arg_bounds_index: 1
arg_prob_bounds_exist: 4
arg_narrays_per_dim: 2
arg_avg_narrays_read_per_stmt: 3
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
static void init_array(int xa,int ya,int za,DATA_TYPE POLYBENCH_3D(A,xA,yA,zA,xa,ya,za),int xb,int yb,int zb,DATA_TYPE POLYBENCH_3D(B,xB,yB,zB,xb,yb,zb),int xc,int yc,int zc,DATA_TYPE POLYBENCH_3D(C,xC,yC,zC,xc,yc,zc),int xd,int yd,int zd,DATA_TYPE POLYBENCH_3D(D,xD,yD,zD,xd,yd,zd),int xe,int ye,int ze,int ve,DATA_TYPE POLYBENCH_4D(E,xE,yE,zE,vE,xe,ye,ze,ve),int seed)
{
srand(seed);
int i_0, i_1, i_2, i_3;
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
for (i_0 = 0; i_0 < xd; i_0++) {
    for (i_1 = 0; i_1 < yd; i_1++) {
        for (i_2 = 0; i_2 < zd; i_2++) {
            D[i_0][i_1][i_2] = 0.9 + (rand() / (DATA_TYPE)RAND_MAX) * (1.1 - 0.9);
        }
    }
}
for (i_0 = 0; i_0 < xe; i_0++) {
    for (i_1 = 0; i_1 < ye; i_1++) {
        for (i_2 = 0; i_2 < ze; i_2++) {
            for (i_3 = 0; i_3 < ve; i_3++) {
                E[i_0][i_1][i_2][i_3] = 0.9 + (rand() / (DATA_TYPE)RAND_MAX) * (1.1 - 0.9);
            }
        }
    }
}
}
static void print_array(int xa,int ya,int za,DATA_TYPE POLYBENCH_3D(A,xA,yA,zA,xa,ya,za),int xb,int yb,int zb,DATA_TYPE POLYBENCH_3D(B,xB,yB,zB,xb,yb,zb),int xc,int yc,int zc,DATA_TYPE POLYBENCH_3D(C,xC,yC,zC,xc,yc,zc),int xd,int yd,int zd,DATA_TYPE POLYBENCH_3D(D,xD,yD,zD,xd,yd,zd),int xe,int ye,int ze,int ve,DATA_TYPE POLYBENCH_4D(E,xE,yE,zE,vE,xe,ye,ze,ve))
{
int i_0, i_1, i_2, i_3;
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
    POLYBENCH_DUMP_BEGIN("E");
    for (i_0 = 0; i_0 < xe; i_0++) {
        for (i_1 = 0; i_1 < ye; i_1++) {
            for (i_2 = 0; i_2 < ze; i_2++) {
                for (i_3 = 0; i_3 < ve; i_3++) {
                    fprintf(POLYBENCH_DUMP_TARGET, "\n");
                    fprintf (POLYBENCH_DUMP_TARGET, DATA_PRINTF_MODIFIER, E[i_0][i_1][i_2][i_3]);
                }
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
    POLYBENCH_DUMP_BEGIN("E");
    DATA_TYPE sum_E = 0;
    for (i_0 = 0; i_0 < xe; i_0++) {
        for (i_1 = 0; i_1 < ye; i_1++) {
            for (i_2 = 0; i_2 < ze; i_2++) {
                for (i_3 = 0; i_3 < ve; i_3++) {
                    sum_E += E[i_0][i_1][i_2][i_3];
                }
            }
        }
    }
    fprintf(POLYBENCH_DUMP_TARGET, "\nsum: ");
    fprintf (POLYBENCH_DUMP_TARGET, DATA_PRINTF_MODIFIER, sum_E);
    POLYBENCH_DUMP_END("E");
#endif
POLYBENCH_DUMP_FINISH;
}
void kernel_3214232221_00(int xa,int ya,int za,DATA_TYPE POLYBENCH_3D(A,xA,yA,zA,xa,ya,za),int xb,int yb,int zb,DATA_TYPE POLYBENCH_3D(B,xB,yB,zB,xb,yb,zb),int xc,int yc,int zc,DATA_TYPE POLYBENCH_3D(C,xC,yC,zC,xc,yc,zc),int xd,int yd,int zd,DATA_TYPE POLYBENCH_3D(D,xD,yD,zD,xd,yd,zd),int xe,int ye,int ze,int ve,DATA_TYPE POLYBENCH_4D(E,xE,yE,zE,vE,xe,ye,ze,ve)){
polybench_start_instruments;
  int t1, t2, t3, t4, t5, t6;
 int lb, ub, lbp, ubp, lb2, ub2;
 register int lbv, ubv;
/* Start of CLooG code */
if (PB_L >= 5) {
  for (t1=0;t1<=floord(PB_L-4,8);t1++) {
    lbp=max(0,ceild(32*t1-PB_L+3,32));
    ubp=min(min(floord(3*PB_L-10,32),floord(192*t1+3*PB_L+118,288)),t1);
#pragma omp parallel for private(lbv,ubv,t3,t4,t5,t6)
    for (t2=lbp;t2<=ubp;t2++) {
      if ((PB_M <= -1) && (t2 <= floord(PB_L-1,32))) {
        for (t3=0;t3<=min(floord(PB_L-2,32),t2);t3++) {
          for (t4=max(2,32*t1-32*t2);t4<=min(PB_L-3,32*t1-32*t2+31);t4++) {
            for (t5=max(max(2,32*t2),32*t3+1);t5<=min(PB_L-1,32*t2+31);t5++) {
              lbv=32*t3;
              ubv=min(32*t3+31,t5-1);
#pragma ivdep
#pragma vector always
              for (t6=lbv;t6<=ubv;t6++) {
                B[t4][t6][t5] = E[t6][t5-2][t4][t4-2] - 5;;
              }
            }
          }
        }
      }
      if ((PB_M >= 0) && (t1 >= ceild(1152*t2-12*PB_L-121*PB_M+12,768))) {
        for (t3=max(max(0,ceild(96*t2-3*PB_L+3,32)),ceild(-42*t1+426*t2-12*PB_L+12,121));t3<=min(min(min(min(min(min(min(min(min(min(min(min(min(min(floord(6*PB_L+PB_M-22,32),floord(80*t2+PB_M+70,32)),floord(96*t1-64*t2+PB_M+121,32)),floord(32*t2+3*PB_L+PB_M+19,32)),floord(32*t2+14*PB_L+PB_M-70,32)),floord(-96*t1+176*t2+3*PB_L+PB_M+19,32)),floord(-96*t1+176*t2+3*PB_L+8*PB_M-9,32)),floord(160*t1-160*t2+PB_L+PB_M+148,32)),floord(480*t1-640*t2+6*PB_L+PB_M+298,32)),floord(160*t2+37*PB_M,64)),floord(64*t2+6*PB_L+19*PB_M-30,64)),floord(24*PB_L+9*PB_M-108,128)),floord(384*t1-256*t2+125*PB_M,128)),floord(1920*t1-2560*t2+24*PB_L+309*PB_M-28,128)),floord(-1440*t1+2192*t2+45*PB_L+8*PB_M-135,256));t3++) {
          if ((PB_M >= 4) && (t2 >= ceild(PB_L,32))) {
            for (t4=max(max(max(ceild(32*t2+1,3),ceild(-32*t2+32*t3-PB_M-28,3)),ceild(32*t3-PB_M+4,6)),32*t1-32*t2);t4<=min(min(min(min(floord(-32*t2+32*t3+30,3),floord(32*t3+28,5)),PB_L-3),16*t2+14),32*t1-32*t2+31);t4++) {
              for (t5=max(max(32*t2,2*t4+2),32*t3-3*t4-PB_M+3);t5<=min(min(32*t2+31,3*t4-1),32*t3-3*t4+30);t5++) {
                lbv=max(32*t3,3*t4+t5+1);
                ubv=min(32*t3+31,3*t4+t5+PB_M-3);
#pragma ivdep
#pragma vector always
                for (t6=lbv;t6<=ubv;t6++) {
                  A[(-3*t4-t5+t6)][t4-1][(-2*t4+t5)+1] = C[(-2*t4+t5)+1][(-3*t4-t5+t6)][t4] + D[(-2*t4+t5)-2][t4][(-2*t4+t5)+1] + C[(-3*t4-t5+t6)+2][t4+2][(-2*t4+t5)] * C[(-3*t4-t5+t6)][t4][(-2*t4+t5)] * D[(-2*t4+t5)-1][t4][0] - A[(-3*t4-t5+t6)+1][(-2*t4+t5)][t4+1] - A[(-3*t4-t5+t6)-1][t4-2][(-2*t4+t5)+1] + A[(-2*t4+t5)+2][t4-1][(-3*t4-t5+t6)-1] + A[t4+1][(-3*t4-t5+t6)][(-2*t4+t5)+3] * 2;;
                }
              }
            }
          }
          if ((PB_M >= 4) && (t2 <= min(floord(PB_L-1,32),t3-1))) {
            for (t4=max(max(max(max(3,ceild(32*t2+1,3)),ceild(-32*t2+32*t3-PB_M-28,3)),ceild(32*t3-PB_M+4,6)),32*t1-32*t2);t4<=min(min(min(min(floord(-32*t2+32*t3+30,3),floord(32*t3+28,5)),PB_L-3),16*t2+14),32*t1-32*t2+31);t4++) {
              for (t5=max(max(32*t2,2*t4+2),32*t3-3*t4-PB_M+3);t5<=min(min(32*t2+31,3*t4-1),32*t3-3*t4+30);t5++) {
                lbv=max(32*t3,3*t4+t5+1);
                ubv=min(32*t3+31,3*t4+t5+PB_M-3);
#pragma ivdep
#pragma vector always
                for (t6=lbv;t6<=ubv;t6++) {
                  A[(-3*t4-t5+t6)][t4-1][(-2*t4+t5)+1] = C[(-2*t4+t5)+1][(-3*t4-t5+t6)][t4] + D[(-2*t4+t5)-2][t4][(-2*t4+t5)+1] + C[(-3*t4-t5+t6)+2][t4+2][(-2*t4+t5)] * C[(-3*t4-t5+t6)][t4][(-2*t4+t5)] * D[(-2*t4+t5)-1][t4][0] - A[(-3*t4-t5+t6)+1][(-2*t4+t5)][t4+1] - A[(-3*t4-t5+t6)-1][t4-2][(-2*t4+t5)+1] + A[(-2*t4+t5)+2][t4-1][(-3*t4-t5+t6)-1] + A[t4+1][(-3*t4-t5+t6)][(-2*t4+t5)+3] * 2;;
                }
              }
            }
          }
          if ((PB_M <= 3) && (t2 <= floord(PB_L-1,32)) && (t2 >= t3) && (t3 <= floord(PB_L-2,32))) {
            for (t4=max(2,32*t1-32*t2);t4<=min(PB_L-3,32*t1-32*t2+31);t4++) {
              for (t5=max(max(2,32*t2),32*t3+1);t5<=min(PB_L-1,32*t2+31);t5++) {
                lbv=32*t3;
                ubv=min(32*t3+31,t5-1);
#pragma ivdep
#pragma vector always
                for (t6=lbv;t6<=ubv;t6++) {
                  B[t4][t6][t5] = E[t6][t5-2][t4][t4-2] - 5;;
                }
              }
            }
          }
          if ((PB_M >= 4) && (t1 == t2) && (t1 <= floord(PB_L-1,32)) && (t1 >= t3) && (t3 <= floord(PB_L-2,32))) {
            for (t5=max(max(2,32*t1),32*t3+1);t5<=min(PB_L-1,32*t1+31);t5++) {
              lbv=32*t3;
              ubv=min(32*t3+31,t5-1);
#pragma ivdep
#pragma vector always
              for (t6=lbv;t6<=ubv;t6++) {
                B[2][t6][t5] = E[t6][t5-2][2][2 -2] - 5;;
              }
            }
          }
          if ((PB_M >= 4) && (t1 == 0) && (t2 == 0) && (t3 == 0)) {
            for (t4=3;t4<=min(5,PB_L-3);t4++) {
              for (t5=2;t5<=min(PB_L-1,2*t4+1);t5++) {
                lbv=0;
                ubv=t5-1;
#pragma ivdep
#pragma vector always
                for (t6=lbv;t6<=ubv;t6++) {
                  B[t4][t6][t5] = E[t6][t5-2][t4][t4-2] - 5;;
                }
              }
              for (t5=2*t4+2;t5<=min(PB_L-1,3*t4-1);t5++) {
                lbv=0;
                ubv=t5-1;
#pragma ivdep
#pragma vector always
                for (t6=lbv;t6<=ubv;t6++) {
                  B[t4][t6][t5] = E[t6][t5-2][t4][t4-2] - 5;;
                }
                lbv=3*t4+t5+1;
                ubv=min(31,3*t4+t5+PB_M-3);
#pragma ivdep
#pragma vector always
                for (t6=lbv;t6<=ubv;t6++) {
                  A[(-3*t4-t5+t6)][t4-1][(-2*t4+t5)+1] = C[(-2*t4+t5)+1][(-3*t4-t5+t6)][t4] + D[(-2*t4+t5)-2][t4][(-2*t4+t5)+1] + C[(-3*t4-t5+t6)+2][t4+2][(-2*t4+t5)] * C[(-3*t4-t5+t6)][t4][(-2*t4+t5)] * D[(-2*t4+t5)-1][t4][0] - A[(-3*t4-t5+t6)+1][(-2*t4+t5)][t4+1] - A[(-3*t4-t5+t6)-1][t4-2][(-2*t4+t5)+1] + A[(-2*t4+t5)+2][t4-1][(-3*t4-t5+t6)-1] + A[t4+1][(-3*t4-t5+t6)][(-2*t4+t5)+3] * 2;;
                }
              }
              for (t5=max(PB_L,2*t4+2);t5<=3*t4-1;t5++) {
                lbv=3*t4+t5+1;
                ubv=min(31,3*t4+t5+PB_M-3);
#pragma ivdep
#pragma vector always
                for (t6=lbv;t6<=ubv;t6++) {
                  A[(-3*t4-t5+t6)][t4-1][(-2*t4+t5)+1] = C[(-2*t4+t5)+1][(-3*t4-t5+t6)][t4] + D[(-2*t4+t5)-2][t4][(-2*t4+t5)+1] + C[(-3*t4-t5+t6)+2][t4+2][(-2*t4+t5)] * C[(-3*t4-t5+t6)][t4][(-2*t4+t5)] * D[(-2*t4+t5)-1][t4][0] - A[(-3*t4-t5+t6)+1][(-2*t4+t5)][t4+1] - A[(-3*t4-t5+t6)-1][t4-2][(-2*t4+t5)+1] + A[(-2*t4+t5)+2][t4-1][(-3*t4-t5+t6)-1] + A[t4+1][(-3*t4-t5+t6)][(-2*t4+t5)+3] * 2;;
                }
              }
              for (t5=3*t4;t5<=min(31,PB_L-1);t5++) {
                lbv=0;
                ubv=t5-1;
#pragma ivdep
#pragma vector always
                for (t6=lbv;t6<=ubv;t6++) {
                  B[t4][t6][t5] = E[t6][t5-2][t4][t4-2] - 5;;
                }
              }
            }
          }
          if ((PB_M >= 4) && (t2 <= floord(PB_L-1,32)) && (t2 >= t3) && (t3 <= floord(PB_L-2,32))) {
            for (t4=max(3,32*t1-32*t2);t4<=min(floord(32*t2,3),32*t1-32*t2+31);t4++) {
              for (t5=max(32*t2,32*t3+1);t5<=min(PB_L-1,32*t2+31);t5++) {
                lbv=32*t3;
                ubv=min(32*t3+31,t5-1);
#pragma ivdep
#pragma vector always
                for (t6=lbv;t6<=ubv;t6++) {
                  B[t4][t6][t5] = E[t6][t5-2][t4][t4-2] - 5;;
                }
              }
            }
          }
          if ((PB_M >= 4) && (t1 == 0) && (t2 == 0) && (t3 == 0)) {
            for (t4=6;t4<=min(10,PB_L-3);t4++) {
              for (t5=2;t5<=min(31,PB_L-1);t5++) {
                lbv=0;
                ubv=t5-1;
#pragma ivdep
#pragma vector always
                for (t6=lbv;t6<=ubv;t6++) {
                  B[t4][t6][t5] = E[t6][t5-2][t4][t4-2] - 5;;
                }
              }
            }
          }
          if ((PB_M >= 4) && (t2 <= floord(PB_L-1,32)) && (t2 >= t3) && (t3 <= floord(PB_L-2,32))) {
            for (t4=max(max(ceild(32*t2+1,3),ceild(-32*t2+32*t3+31,3)),32*t1-32*t2);t4<=min(PB_L-3,32*t1-32*t2+31);t4++) {
              for (t5=max(max(2,32*t2),32*t3+1);t5<=min(PB_L-1,32*t2+31);t5++) {
                lbv=32*t3;
                ubv=min(32*t3+31,t5-1);
#pragma ivdep
#pragma vector always
                for (t6=lbv;t6<=ubv;t6++) {
                  B[t4][t6][t5] = E[t6][t5-2][t4][t4-2] - 5;;
                }
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
int xd = xD;
int yd = yD;
int zd = zD;
int xe = xE;
int ye = yE;
int ze = zE;
int ve = vE;
POLYBENCH_3D_ARRAY_DECL(A, DATA_TYPE, xA,yA,zA,xa,ya,za);
POLYBENCH_3D_ARRAY_DECL(B, DATA_TYPE, xB,yB,zB,xb,yb,zb);
POLYBENCH_3D_ARRAY_DECL(C, DATA_TYPE, xC,yC,zC,xc,yc,zc);
POLYBENCH_3D_ARRAY_DECL(D, DATA_TYPE, xD,yD,zD,xd,yd,zd);
POLYBENCH_4D_ARRAY_DECL(E, DATA_TYPE, xE,yE,zE,vE,xe,ye,ze,ve);
init_array(xa,ya,za,POLYBENCH_ARRAY(A), xb,yb,zb,POLYBENCH_ARRAY(B), xc,yc,zc,POLYBENCH_ARRAY(C), xd,yd,zd,POLYBENCH_ARRAY(D), xe,ye,ze,ve,POLYBENCH_ARRAY(E), INIT_SEED);
kernel_3214232221_00(xa,ya,za,POLYBENCH_ARRAY(A), xb,yb,zb,POLYBENCH_ARRAY(B), xc,yc,zc,POLYBENCH_ARRAY(C), xd,yd,zd,POLYBENCH_ARRAY(D), xe,ye,ze,ve,POLYBENCH_ARRAY(E));
polybench_prevent_dce(print_array(xa,ya,za,POLYBENCH_ARRAY(A), xb,yb,zb,POLYBENCH_ARRAY(B), xc,yc,zc,POLYBENCH_ARRAY(C), xd,yd,zd,POLYBENCH_ARRAY(D), xe,ye,ze,ve,POLYBENCH_ARRAY(E)));
POLYBENCH_FREE_ARRAY(A);
POLYBENCH_FREE_ARRAY(B);
POLYBENCH_FREE_ARRAY(C);
POLYBENCH_FREE_ARRAY(D);
POLYBENCH_FREE_ARRAY(E);
return 0;
}
