#include <stdio.h>
#include <unistd.h>
#include <string.h>
#include <math.h>
#include "polybench.h"
#include <time.h>
#include <stdlib.h>
#include "3212131221_01.h"
#include <omp.h>
#define ceild(n,d)  ceil(((double)(n))/((double)(d)))
#define floord(n,d) floor(((double)(n))/((double)(d)))
/*
arg_depth: 3
arg_nstmts: 2
arg_bounds_index: 1
arg_prob_bounds_exist: 2
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
static void init_array(int xb,int yb,int zb,DATA_TYPE POLYBENCH_3D(B,xB,yB,zB,xb,yb,zb),int xc,int yc,int zc,DATA_TYPE POLYBENCH_3D(C,xC,yC,zC,xc,yc,zc),int seed)
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
        for (i_2 = 0; i_2 < zc; i_2++) {
            C[i_0][i_1][i_2] = 0.9 + (rand() / (DATA_TYPE)RAND_MAX) * (1.1 - 0.9);
        }
    }
}
}
static void print_array(int xb,int yb,int zb,DATA_TYPE POLYBENCH_3D(B,xB,yB,zB,xb,yb,zb),int xc,int yc,int zc,DATA_TYPE POLYBENCH_3D(C,xC,yC,zC,xc,yc,zc))
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
            for (i_2 = 0; i_2 < zc; i_2++) {
                fprintf(POLYBENCH_DUMP_TARGET, "\n");
                fprintf (POLYBENCH_DUMP_TARGET, DATA_PRINTF_MODIFIER, C[i_0][i_1][i_2]);
            }
        }
    }
    POLYBENCH_DUMP_END("C");
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
void kernel_3212131221_01(int xb,int yb,int zb,DATA_TYPE POLYBENCH_3D(B,xB,yB,zB,xb,yb,zb),int xc,int yc,int zc,DATA_TYPE POLYBENCH_3D(C,xC,yC,zC,xc,yc,zc)){
polybench_start_instruments;
  int t1, t2, t3, t4, t5, t6;
 int lb, ub, lbp, ubp, lb2, ub2;
 register int lbv, ubv;
/* Start of CLooG code */
if ((PB_M >= 3) && (PB_N >= 2)) {
  for (t1=0;t1<=min(min(floord(3*PB_M-4,32),floord(PB_M+2*PB_N-5,32)),floord(15*PB_M+6*PB_N-40,224));t1++) {
    lbp=max(max(max(0,ceild(32*t1-PB_M,32)),ceild(32*t1-PB_M+1,40)),ceild(160*t1-5*PB_M-2*PB_N+8,128));
    ubp=min(min(min(min(floord(2*t1+1,3),floord(PB_M-2,16)),floord(PB_N-2,16)),floord(3*PB_M+PB_N-9,64)),floord(32*t1+11*PB_N-17,224));
#pragma omp parallel for private(lbv,ubv,t3,t4,t5,t6)
    for (t2=lbp;t2<=ubp;t2++) {
      for (t3=max(max(max(ceild(96*t1-3*PB_N+4,32),ceild(160*t1-64*t2-2*PB_M-3*PB_N+6,32)),3*t2),3*t1-3*t2);t3<=min(min(min(min(min(min(min(min(min(min(min(min(min(min(floord(8*t2+PB_M+7,8),floord(3*PB_M-4,16)),floord(-96*t1+96*t2+5*PB_M+PB_N-6,16)),floord(96*t1-64*t2+PB_M+124,32)),floord(160*t1-160*t2+PB_M+149,32)),floord(200*t1-300*t2+PB_M+5*PB_N+84,32)),floord(288*t1-208*t2+3*PB_M+3*PB_N+276,96)),floord(240*t2+33*PB_M+191,256)),floord(608*t1+96*t2+81*PB_M+25*PB_N+508,800)),floord(992*t2+134*PB_M+5*PB_N+778,1072)),floord(208*t2+166*PB_M+70*PB_N-223,1328)),floord(6432*t1-4592*t2+67*PB_M+19*PB_N+7700,2144)),floord(8000*t1-5840*t2+77*PB_M+9529,2464)),floord(-1824*t1+4016*t2+377*PB_M+80*PB_N-377,2560)),floord(7968*t1-7408*t2+83*PB_M+131*PB_N+7540,2656));t3++) {
        if (t2 <= min(floord(PB_N-1,32),floord(32*t3-PB_N-94,96))) {
          for (t4=max(max(max(max(max(2,ceild(-32*t2+32*t3-PB_M-31,3)),ceild(32*t3-PB_M-PB_N+1,3)),ceild(32*t3-PB_M+1,4)),32*t1-32*t2),32*t2+1);t4<=min(min(min(floord(32*t3+28,3),floord(-32*t2+32*t3+29,3)),PB_M-1),32*t1-32*t2+31);t4++) {
            for (t5=max(max(1,32*t2),32*t3-3*t4-PB_M);t5<=min(min(min(PB_N-1,32*t2+31),t4-1),32*t3-3*t4+29);t5++) {
              for (t6=max(32*t3,3*t4+t5+2);t6<=min(32*t3+31,3*t4+t5+PB_M);t6++) {
                B[t5][t4-1][(-3*t4-t5+t6)-2] = C[t4][t5-1][(-3*t4-t5+t6)-1] + 6;;
              }
            }
          }
        }
        if ((t1 == 0) && (t2 == 0) && (t3 <= floord(PB_N+93,32))) {
          t4 = max(3,ceild(32*t3-PB_M+1,4));
          if (t4 <= min(floord(32*t3-PB_M+5,5),PB_N-2)) {
            for (t5=32*t3-3*t4-PB_M;t5<=t4-1;t5++) {
              for (t6=32*t3;t6<=3*t4+t5+PB_M;t6++) {
                B[t5][t4-1][(-3*t4-t5+t6)-2] = C[t4][t5-1][(-3*t4-t5+t6)-1] + 6;;
              }
            }
          }
        }
        if ((t1 == 0) && (t2 == 0) && (t3 <= min(floord(PB_M+7,32),floord(PB_N+93,32)))) {
          for (t6=max(9,32*t3);t6<=min(PB_M+7,32*t3+31);t6++) {
            B[1][2 -1][(t6-7)-2] = C[2][1 -1][(t6-7)-1] + 6;;
          }
        }
        if ((t1 == 0) && (t2 == 0) && (t3 <= floord(PB_N+93,32))) {
          for (t4=max(max(3,ceild(32*t3-PB_M+1,4)),ceild(32*t3-PB_M+6,5));t4<=min(floord(32*t3-PB_N+5,6),PB_N-2);t4++) {
            for (t5=max(1,32*t3-3*t4-PB_M);t5<=t4-1;t5++) {
              for (t6=32*t3;t6<=min(32*t3+31,3*t4+t5+PB_M);t6++) {
                B[t5][t4-1][(-3*t4-t5+t6)-2] = C[t4][t5-1][(-3*t4-t5+t6)-1] + 6;;
              }
            }
          }
        }
        if (t2 >= ceild(32*t3-PB_N-93,96)) {
          for (t4=max(max(max(ceild(32*t3-PB_M+6,5),ceild(32*t3-PB_N+6,6)),32*t1-32*t2),16*t2+1);t4<=min(min(min(min(PB_M,32*t2),PB_N-2),32*t1-32*t2+31),96*t2-32*t3+PB_M+94);t4++) {
            for (t5=max(max(max(ceild(32*t3-PB_N,3),ceild(32*t3+t4-PB_M-1,3)),32*t2),t4+1);t5<=min(min(min(floord(32*t3+30,3),32*t2+31),2*t4-2),t4+PB_M-3);t5++) {
              for (t6=max(32*t3,3*t5+1);t6<=min(min(min(32*t3+31,3*t5+PB_N),-t4+3*t5+PB_M+1),t4+2*t5+PB_M-2);t6++) {
                B[(t4-1)][(-t4+t5+1)][(-3*t5+t6-1)] = C[(-t4+t5+1)-1][(-3*t5+t6-1)+(t4-1)][(t4-1)] + C[(-t4+t5+1)-1][(t4-1)][0] + C[(-3*t5+t6-1)+(-t4+t5+1)+1][(t4-1)][0] - C[(-t4+t5+1)][(-3*t5+t6-1)+(t4-1)][1] * B[(-3*t5+t6-1)][(t4-1)][(-t4+t5+1)-2] + B[(t4-1)+2][(-t4+t5+1)+1][(-3*t5+t6-1)] + 4;;
              }
            }
          }
        }
        if ((t1 == 2*t2) && (t1 >= ceild(32*t3-PB_N-93,48))) {
          for (t4=max(max(ceild(32*t3-PB_M+6,5),ceild(32*t3-PB_N+6,6)),16*t1+1);t4<=min(min(min(floord(32*t3-PB_M,4),PB_M-1),PB_N-2),48*t1-32*t3+PB_M+94);t4++) {
            for (t5=max(ceild(32*t3-PB_N,3),ceild(32*t3+t4-PB_M-1,3));t5<=min(16*t1+31,2*t4-2);t5++) {
              for (t6=max(32*t3,3*t5+1);t6<=min(min(3*t5+PB_N,-t4+3*t5+PB_M+1),t4+2*t5+PB_M-2);t6++) {
                if (t1%2 == 0) {
                  B[(t4-1)][(-t4+t5+1)][(-3*t5+t6-1)] = C[(-t4+t5+1)-1][(-3*t5+t6-1)+(t4-1)][(t4-1)] + C[(-t4+t5+1)-1][(t4-1)][0] + C[(-3*t5+t6-1)+(-t4+t5+1)+1][(t4-1)][0] - C[(-t4+t5+1)][(-3*t5+t6-1)+(t4-1)][1] * B[(-3*t5+t6-1)][(t4-1)][(-t4+t5+1)-2] + B[(t4-1)+2][(-t4+t5+1)+1][(-3*t5+t6-1)] + 4;;
                }
              }
            }
          }
        }
        if ((t1 == 2*t2) && (t1 >= ceild(32*t3-PB_N-93,48))) {
          for (t4=max(max(max(max(3,ceild(32*t3-PB_M+1,4)),ceild(32*t3-PB_M+6,5)),ceild(32*t3-PB_N+6,6)),16*t1+1);t4<=min(min(min(min(min(floord(32*t3+27,3),floord(-16*t1+32*t3+29,3)),PB_M-1),PB_N-2),16*t1+30),48*t1-32*t3+PB_M+94);t4++) {
            for (t5=max(max(1,16*t1),32*t3-3*t4-PB_M);t5<=min(t4-1,32*t3-3*t4+29);t5++) {
              for (t6=max(32*t3,3*t4+t5+2);t6<=min(32*t3+31,3*t4+t5+PB_M);t6++) {
                if (t1%2 == 0) {
                  B[t5][t4-1][(-3*t4-t5+t6)-2] = C[t4][t5-1][(-3*t4-t5+t6)-1] + 6;;
                }
              }
            }
            for (t5=max(max(ceild(32*t3-PB_N,3),ceild(32*t3+t4-PB_M-1,3)),t4+1);t5<=min(min(floord(32*t3+30,3),16*t1+31),2*t4-2);t5++) {
              for (t6=max(32*t3,3*t5+1);t6<=min(min(min(32*t3+31,3*t5+PB_N),-t4+3*t5+PB_M+1),t4+2*t5+PB_M-2);t6++) {
                if (t1%2 == 0) {
                  B[(t4-1)][(-t4+t5+1)][(-3*t5+t6-1)] = C[(-t4+t5+1)-1][(-3*t5+t6-1)+(t4-1)][(t4-1)] + C[(-t4+t5+1)-1][(t4-1)][0] + C[(-3*t5+t6-1)+(-t4+t5+1)+1][(t4-1)][0] - C[(-t4+t5+1)][(-3*t5+t6-1)+(t4-1)][1] * B[(-3*t5+t6-1)][(t4-1)][(-t4+t5+1)-2] + B[(t4-1)+2][(-t4+t5+1)+1][(-3*t5+t6-1)] + 4;;
                }
              }
            }
          }
        }
        if ((t1 == 2*t2) && (t1 >= ceild(32*t3-PB_N-93,48))) {
          for (t4=max(max(ceild(32*t3-PB_M+1,4),16*t1+1),48*t1-32*t3+PB_M+95);t4<=min(min(min(floord(-16*t1+32*t3+29,3),PB_M-1),PB_N-2),16*t1+30);t4++) {
            for (t5=max(max(1,16*t1),32*t3-3*t4-PB_M);t5<=min(t4-1,32*t3-3*t4+29);t5++) {
              for (t6=max(32*t3,3*t4+t5+2);t6<=min(32*t3+31,3*t4+t5+PB_M);t6++) {
                if (t1%2 == 0) {
                  B[t5][t4-1][(-3*t4-t5+t6)-2] = C[t4][t5-1][(-3*t4-t5+t6)-1] + 6;;
                }
              }
            }
          }
        }
        if ((t1 == 2*t2) && (t1 <= floord(PB_N-1,16)) && (t1 >= ceild(32*t3-PB_N-93,48))) {
          for (t4=max(max(max(max(3,ceild(32*t3-PB_M-PB_N+1,3)),ceild(32*t3-PB_M+1,4)),PB_N-1),16*t1+1);t4<=min(min(floord(-16*t1+32*t3+29,3),PB_M-1),16*t1+30);t4++) {
            for (t5=max(max(1,16*t1),32*t3-3*t4-PB_M);t5<=min(min(PB_N-1,t4-1),32*t3-3*t4+29);t5++) {
              for (t6=max(32*t3,3*t4+t5+2);t6<=min(32*t3+31,3*t4+t5+PB_M);t6++) {
                if (t1%2 == 0) {
                  B[t5][t4-1][(-3*t4-t5+t6)-2] = C[t4][t5-1][(-3*t4-t5+t6)-1] + 6;;
                }
              }
            }
          }
        }
        if ((PB_M >= 21) && (PB_N >= 22) && (t1 == 0) && (t2 == 0) && (t3 == 1)) {
          B[1][20 -1][2 -2] = C[20][1 -1][2 -1] + 6;;
        }
        if (t1 == 2*t2) {
          for (t4=max(ceild(-16*t1+32*t3+30,3),16*t1+1);t4<=min(min(min(min(floord(32*t3+27,3),PB_M-1),PB_N-2),16*t1+30),48*t1-32*t3+PB_M+94);t4++) {
            for (t5=max(ceild(32*t3+t4-PB_M-1,3),t4+1);t5<=min(floord(32*t3+30,3),16*t1+31);t5++) {
              for (t6=max(32*t3,3*t5+1);t6<=min(32*t3+31,-t4+3*t5+PB_M+1);t6++) {
                if (t1%2 == 0) {
                  B[(t4-1)][(-t4+t5+1)][(-3*t5+t6-1)] = C[(-t4+t5+1)-1][(-3*t5+t6-1)+(t4-1)][(t4-1)] + C[(-t4+t5+1)-1][(t4-1)][0] + C[(-3*t5+t6-1)+(-t4+t5+1)+1][(t4-1)][0] - C[(-t4+t5+1)][(-3*t5+t6-1)+(t4-1)][1] * B[(-3*t5+t6-1)][(t4-1)][(-t4+t5+1)-2] + B[(t4-1)+2][(-t4+t5+1)+1][(-3*t5+t6-1)] + 4;;
                }
              }
            }
          }
        }
        if ((PB_M >= 4) && (PB_M <= PB_N-2) && (t1 == 2*t2) && (t1 <= floord(PB_M-1,16)) && (t1 >= ceild(2*t3-4,3)) && (t3 >= ceild(3*PB_M-27,32))) {
          for (t5=max(ceild(32*t3-1,3),PB_M+1);t5<=min(floord(32*t3+30,3),2*PB_M-3);t5++) {
            if (t1%2 == 0) {
              B[(PB_M-1)][(t5-PB_M+1)][0] = C[(t5-PB_M+1)-1][0 +(PB_M-1)][(PB_M-1)] + C[(t5-PB_M+1)-1][(PB_M-1)][0] + C[0 +(t5-PB_M+1)+1][(PB_M-1)][0] - C[(t5-PB_M+1)][0 +(PB_M-1)][1] * B[0][(PB_M-1)][(t5-PB_M+1)-2] + B[(PB_M-1)+2][(t5-PB_M+1)+1][0] + 4;;
            }
          }
        }
        if ((t2 <= floord(PB_N-1,32)) && (t2 >= ceild(32*t3-PB_N-93,96))) {
          for (t4=max(max(max(ceild(-32*t2+32*t3-PB_M-31,3),ceild(32*t3-PB_M+1,4)),32*t1-32*t2),32*t2+31);t4<=min(min(min(floord(32*t3+28,3),floord(-32*t2+32*t3+29,3)),PB_M-1),32*t1-32*t2+31);t4++) {
            for (t5=max(max(1,32*t2),32*t3-3*t4-PB_M);t5<=min(min(min(PB_N-1,32*t2+31),t4-1),32*t3-3*t4+29);t5++) {
              for (t6=max(32*t3,3*t4+t5+2);t6<=min(32*t3+31,3*t4+t5+PB_M);t6++) {
                B[t5][t4-1][(-3*t4-t5+t6)-2] = C[t4][t5-1][(-3*t4-t5+t6)-1] + 6;;
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
int zc = zC;
POLYBENCH_3D_ARRAY_DECL(B, DATA_TYPE, xB,yB,zB,xb,yb,zb);
POLYBENCH_3D_ARRAY_DECL(C, DATA_TYPE, xC,yC,zC,xc,yc,zc);
init_array(xb,yb,zb,POLYBENCH_ARRAY(B), xc,yc,zc,POLYBENCH_ARRAY(C), INIT_SEED);
kernel_3212131221_01(xb,yb,zb,POLYBENCH_ARRAY(B), xc,yc,zc,POLYBENCH_ARRAY(C));
polybench_prevent_dce(print_array(xb,yb,zb,POLYBENCH_ARRAY(B), xc,yc,zc,POLYBENCH_ARRAY(C)));
POLYBENCH_FREE_ARRAY(B);
POLYBENCH_FREE_ARRAY(C);
return 0;
}
