/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 147398
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=147398 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/147398
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_18 = var_17;

    for (int i_0 = 0; i_0 < 12;i_0 += 1)
    {
        var_19 = var_16;

        /* vectorizable */
        for (int i_1 = 0; i_1 < 12;i_1 += 1)
        {
            var_20 ^= (((arr_2 [i_0] [i_0]) ? (arr_1 [i_0] [i_1]) : (arr_1 [i_0] [i_0])));
            var_21 = (((var_15 ? var_17 : var_8)));
        }
        for (int i_2 = 0; i_2 < 12;i_2 += 1)
        {
            arr_10 [i_0] [i_2] [i_2] = (min(((((var_15 ? var_14 : var_1)))), ((((-(arr_3 [3]))) % -11206))));
            var_22 += (min(((var_11 ? -var_11 : ((max(var_0, (arr_8 [i_0] [i_0] [2])))))), (((arr_7 [i_2] [i_0]) ? ((max(var_14, var_4))) : (arr_8 [i_2] [i_0] [i_0])))));
        }
        var_23 -= (max(var_6, (arr_2 [i_0] [i_0])));
        arr_11 [i_0] = var_1;
        var_24 = (min(var_24, ((((!5474) ? var_16 : -16384)))));
    }
    /* vectorizable */
    for (int i_3 = 0; i_3 < 23;i_3 += 1)
    {
        var_25 = var_8;
        var_26 += ((var_15 & (arr_12 [6])));
        var_27 = (((~-422) ? ((~(arr_13 [i_3] [i_3]))) : (arr_13 [4] [i_3])));
    }
    for (int i_4 = 0; i_4 < 12;i_4 += 1)
    {
        var_28 = (max(var_28, ((((arr_1 [i_4] [i_4]) ? ((((-12930 ? (-32767 - 1) : -1)) ^ (!var_4))) : ((max(var_6, (-32767 - 1)))))))));
        var_29 = (~24317);
        var_30 = var_14;
    }

    /* vectorizable */
    for (int i_5 = 0; i_5 < 19;i_5 += 1)
    {
        var_31 = (-32767 - 1);
        var_32 = (min(var_32, (((-(var_6 / var_13))))));
        var_33 = (max(var_33, ((((var_17 ? var_2 : 192))))));
    }
    #pragma endscop
}
