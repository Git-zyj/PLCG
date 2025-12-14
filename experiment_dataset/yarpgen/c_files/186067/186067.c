/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 186067
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=186067 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/186067
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    /* vectorizable */
    for (int i_0 = 4; i_0 < 15;i_0 += 1)
    {
        arr_4 [i_0] = var_9;
        arr_5 [i_0] [i_0] = var_6;
    }
    for (int i_1 = 0; i_1 < 14;i_1 += 1)
    {
        arr_8 [i_1] [i_1] = 1;
        var_10 -= (((var_0 % 1) * ((~((1 ? var_4 : var_2))))));
    }
    var_11 = (((((var_3 / var_7) && var_0)) ? var_3 : ((var_3 ? ((1 ? 5098 : var_6)) : var_6))));
    #pragma endscop
}
