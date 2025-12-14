/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 171980
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=171980 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/171980
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_16 = var_1;

    for (int i_0 = 3; i_0 < 15;i_0 += 1)
    {
        var_17 = var_8;
        arr_3 [i_0] [i_0] = var_5;
    }
    for (int i_1 = 1; i_1 < 1;i_1 += 1)
    {
        var_18 = (max((!var_11), (((((var_5 ? 88 : var_6))) ? (var_15 > var_8) : var_8))));
        var_19 = (arr_5 [i_1]);
        arr_6 [i_1] [i_1] = 1;

        for (int i_2 = 0; i_2 < 14;i_2 += 1)
        {
            var_20 = (max(var_9, (((arr_8 [i_1] [i_1] [i_2]) ? (arr_8 [i_1] [i_1] [i_2]) : (arr_2 [i_1 - 1] [i_2])))));
            var_21 = (-(((!(arr_2 [i_1 - 1] [i_1 - 1])))));
        }
        for (int i_3 = 0; i_3 < 14;i_3 += 1)
        {
            arr_11 [i_1] = ((7671578739889416702 ? (((((var_12 ? 3109 : var_11)) < (~var_2)))) : (min((((arr_1 [i_1]) ? (arr_4 [i_3]) : var_0)), (arr_9 [i_1 - 1] [i_1 - 1])))));
            var_22 = (max((((-(arr_0 [i_1] [i_3])))), (!536870880)));
            arr_12 [i_3] [i_3] [i_3] = arr_7 [i_1];
        }
        for (int i_4 = 0; i_4 < 14;i_4 += 1)
        {
            var_23 = ((var_10 ? (!var_7) : (min(909152003, (((arr_4 [i_4]) ? var_11 : -7671578739889416703))))));
            arr_17 [i_1] [i_4] [i_4] = var_5;
            var_24 = var_15;
            arr_18 [i_4] = (min((arr_9 [i_1] [i_1 - 1]), ((var_3 ? (arr_9 [i_1] [i_1 - 1]) : var_4))));
        }
        arr_19 [i_1] = (((arr_8 [i_1] [i_1 - 1] [i_1]) ? ((var_7 ? (arr_8 [i_1] [i_1 - 1] [i_1]) : var_9)) : ((1504235860 ? (arr_8 [i_1] [i_1 - 1] [i_1]) : (arr_8 [i_1] [i_1 - 1] [i_1])))));
    }
    /* vectorizable */
    for (int i_5 = 2; i_5 < 9;i_5 += 1)
    {
        arr_22 [i_5] [i_5] = var_0;
        arr_23 [i_5] [i_5] = (~7671578739889416703);
        arr_24 [i_5] = var_0;
    }
    #pragma endscop
}
