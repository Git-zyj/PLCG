/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 113488
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=113488 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/113488
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_11 = min((!var_5), (((((var_9 ? var_0 : var_6))) ? ((var_0 ? var_0 : var_2)) : ((max(var_8, var_3))))));

    for (int i_0 = 0; i_0 < 14;i_0 += 1)
    {
        var_12 = ((((((var_5 ? var_5 : (arr_2 [i_0] [i_0]))))) * var_10));
        var_13 = (arr_0 [i_0]);
    }
    for (int i_1 = 0; i_1 < 25;i_1 += 1)
    {
        var_14 ^= (min(var_8, (max((((arr_3 [i_1]) ? var_2 : 1610612736)), (((arr_5 [i_1] [i_1]) ? var_4 : var_5))))));
        var_15 += ((min(var_7, (var_4 > var_10))));
    }
    /* vectorizable */
    for (int i_2 = 0; i_2 < 15;i_2 += 1)
    {
        var_16 += var_5;
        var_17 = (max(var_17, -var_2));
    }
    for (int i_3 = 0; i_3 < 16;i_3 += 1)
    {
        var_18 = (min(var_18, ((min((!var_3), var_10)))));
        var_19 = var_3;
    }
    #pragma endscop
}
