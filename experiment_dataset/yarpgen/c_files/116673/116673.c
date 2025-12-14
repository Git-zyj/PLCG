/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 116673
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=116673 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/116673
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    /* vectorizable */
    for (int i_0 = 0; i_0 < 15;i_0 += 1)
    {
        arr_4 [i_0] = (((arr_3 [i_0]) ? var_1 : var_2));
        arr_5 [i_0] [i_0] &= ((((215 ? -12425 : 46232048))) ? var_3 : (((-46232074 ? 4 : var_8))));
        var_12 |= (!(~var_6));
    }
    for (int i_1 = 1; i_1 < 21;i_1 += 1)
    {

        /* vectorizable */
        for (int i_2 = 1; i_2 < 21;i_2 += 1)
        {
            arr_14 [i_1] [i_1] [i_2] = ((~(~var_8)));
            var_13 = ((!(arr_10 [i_1] [19])));
        }
        var_14 = min((!var_0), ((~((min(var_2, (arr_8 [i_1])))))));
    }
    for (int i_3 = 1; i_3 < 21;i_3 += 1)
    {
        var_15 = ((((-(63 / var_6))) != var_10));

        for (int i_4 = 0; i_4 < 24;i_4 += 1)
        {
            var_16 = (((~var_7) ? var_3 : 22));
            var_17 = (arr_16 [i_3 - 1]);
            var_18 = (((((var_4 ? ((var_10 ? -46232042 : var_3)) : (((max((arr_15 [i_4] [i_3]), 5999))))))) ? (min(((min(var_9, 58))), ((~(arr_16 [i_4]))))) : var_6));
        }
    }
    for (int i_5 = 0; i_5 < 16;i_5 += 1)
    {
        var_19 ^= (arr_9 [19]);
        var_20 = (min(var_20, (((((~16389) ? ((((!(arr_9 [i_5]))))) : 3230582833))))));
        arr_23 [i_5] = (~-var_0);
        var_21 = var_8;
        arr_24 [i_5] = var_2;
    }

    /* vectorizable */
    for (int i_6 = 2; i_6 < 15;i_6 += 1)
    {
        var_22 = (((((var_6 ? (arr_25 [i_6] [i_6]) : 4))) ? (~18446603336221196288) : (((var_5 ? var_3 : var_3)))));
        var_23 = (~(arr_21 [i_6 + 1] [i_6 - 2]));
    }
    /* vectorizable */
    for (int i_7 = 0; i_7 < 0;i_7 += 1)
    {
        var_24 = (!var_9);
        var_25 &= (((arr_28 [14]) ? (arr_13 [i_7] [i_7 + 1] [i_7 + 1]) : (arr_12 [i_7])));
        var_26 = ((-((var_9 ? var_11 : var_6))));
    }
    var_27 = 29;
    var_28 = var_10;
    var_29 = ((~((var_2 - (max(1, var_3))))));
    #pragma endscop
}
