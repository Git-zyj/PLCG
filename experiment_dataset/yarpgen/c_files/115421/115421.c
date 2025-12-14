/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 115421
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=115421 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/115421
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_13 *= 2659428493039599027;

    /* vectorizable */
    for (int i_0 = 0; i_0 < 1;i_0 += 1)
    {
        arr_3 [i_0] [i_0] = var_3;
        var_14 += ((arr_2 [i_0]) / 690201353885418100);
        arr_4 [i_0] = ((var_1 > 1129892842) / 18014261070528512);
    }
    for (int i_1 = 0; i_1 < 24;i_1 += 1)
    {
        var_15 += (3165074454 - 5);
        var_16 = (max(var_16, var_11));
        arr_7 [i_1] [i_1] = 562949953421311;
    }
    #pragma endscop
}
