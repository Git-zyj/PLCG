/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 187446
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=187446 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/187446
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    /* vectorizable */
    for (int i_0 = 0; i_0 < 16;i_0 += 1)
    {
        arr_2 [i_0] [i_0] &= (-1301010624 | -1301010618);
        var_18 = (max(var_18, 1301010629));
        var_19 = ((1301010627 ? (((arr_1 [i_0]) ? -1301010624 : var_10)) : -182267398));
        arr_3 [i_0] = ((var_10 ? var_12 : 182267398));
    }
    /* vectorizable */
    for (int i_1 = 0; i_1 < 24;i_1 += 1)
    {
        arr_8 [i_1] [i_1] = (((arr_7 [i_1]) ? (arr_7 [i_1]) : (arr_7 [i_1])));
        var_20 = var_13;
        arr_9 [i_1] = var_3;
    }
    for (int i_2 = 1; i_2 < 9;i_2 += 1)
    {
        arr_12 [i_2] [i_2] = ((var_17 || ((((((var_15 ? -1301010602 : -60))) ? (((arr_5 [i_2]) ? var_3 : (arr_10 [i_2]))) : (((((arr_5 [i_2]) || var_2)))))))));
        arr_13 [i_2] [i_2 + 1] = (17 << (66 - 62));
    }
    var_21 = -var_11;
    var_22 = var_13;
    var_23 += var_14;
    #pragma endscop
}
