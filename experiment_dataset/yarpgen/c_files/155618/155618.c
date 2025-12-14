/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 155618
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=155618 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/155618
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    /* vectorizable */
    for (int i_0 = 0; i_0 < 19;i_0 += 1)
    {
        var_19 = (((arr_2 [i_0] [i_0]) ? ((-(arr_1 [i_0]))) : (arr_1 [i_0])));
        arr_3 [i_0] = -var_16;
    }
    /* vectorizable */
    for (int i_1 = 0; i_1 < 21;i_1 += 1)
    {
        var_20 = (max(var_20, ((((((var_5 ? var_3 : -1))) ? -var_4 : 23243)))));
        var_21 = (var_15 ? ((-(arr_4 [i_1] [i_1]))) : ((-(arr_4 [i_1] [i_1]))));
    }
    /* vectorizable */
    for (int i_2 = 1; i_2 < 10;i_2 += 1)
    {
        var_22 = (((arr_4 [i_2 + 2] [i_2 + 1]) ? 0 : (arr_4 [i_2 + 2] [i_2 - 1])));
        arr_10 [i_2] = (((arr_1 [i_2 + 2]) | -31929));

        for (int i_3 = 0; i_3 < 12;i_3 += 1)
        {
            var_23 *= (arr_5 [i_2 + 1] [i_2]);
            var_24 *= ((var_18 ? (arr_11 [i_2 - 1] [i_2 + 1]) : (arr_11 [i_2 + 2] [i_2 - 1])));
            arr_13 [i_3] [i_2] [i_2 - 1] = ((10043814889948514775 ? (arr_0 [i_2 + 2]) : (arr_9 [i_2 + 1])));
            arr_14 [i_2] [i_2] = (((arr_6 [i_2 + 2]) ? var_3 : (arr_5 [i_2 + 2] [i_2 - 1])));
        }

        for (int i_4 = 1; i_4 < 10;i_4 += 1)
        {
            var_25 = ((((var_14 | (arr_5 [3] [3]))) & (arr_2 [i_2 + 1] [i_2 - 1])));
            var_26 *= (((arr_0 [i_2]) ? (arr_9 [i_4 + 1]) : (arr_9 [i_4 + 2])));
            var_27 = (min(var_27, (var_4 - 33)));
            var_28 = (max(var_28, (((125 <= (arr_5 [i_2 - 1] [i_4 + 1]))))));
        }
        for (int i_5 = 1; i_5 < 11;i_5 += 1)
        {
            var_29 = var_6;
            var_30 *= var_12;
        }
    }
    for (int i_6 = 3; i_6 < 24;i_6 += 1)
    {
        arr_24 [i_6] = (((arr_22 [i_6] [i_6]) > (max(((1 ? 5825 : var_17)), var_3))));
        var_31 = ((((((arr_23 [i_6 - 1] [i_6]) ? (arr_23 [i_6 + 1] [i_6 - 1]) : (arr_23 [i_6 + 1] [i_6])))) % (max((!var_6), 8402929183761036841))));
        var_32 = -16;
        var_33 = arr_23 [i_6 - 3] [i_6 + 1];
    }
    var_34 = (min(var_34, -var_5));
    var_35 = var_16;
    var_36 = var_4;
    #pragma endscop
}
