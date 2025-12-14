/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 166488
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=166488 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/166488
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 0; i_0 < 14;i_0 += 1)
    {
        var_10 = (min(var_10, (((+(max((!9223372036854775807), (((arr_1 [i_0]) ? var_3 : var_3)))))))));
        var_11 = (arr_1 [i_0]);
        var_12 = var_2;
        var_13 = var_5;
    }
    for (int i_1 = 1; i_1 < 1;i_1 += 1)
    {

        /* vectorizable */
        for (int i_2 = 0; i_2 < 24;i_2 += 1)
        {
            var_14 *= (arr_4 [i_1]);
            arr_6 [i_1] = var_4;
            /* LoopNest 3 */
            for (int i_3 = 0; i_3 < 24;i_3 += 1)
            {
                for (int i_4 = 0; i_4 < 24;i_4 += 1)
                {
                    for (int i_5 = 0; i_5 < 24;i_5 += 1)
                    {
                        {
                            var_15 |= ((var_8 ^ (((arr_12 [i_1] [i_1] [i_2] [i_3] [i_4] [i_5]) ? (arr_11 [i_1] [i_2] [22] [i_1] [i_4] [i_4] [i_1]) : var_0))));
                            arr_13 [i_5] [i_3] [i_3] [i_3] [19] = (((3000972284 ? 4294967295 : (arr_8 [i_1]))));
                            var_16 *= 2559781000;
                            var_17 = (~var_0);
                        }
                    }
                }
            }
            arr_14 [i_1] = (arr_4 [i_1]);
            var_18 = ((var_3 | ((34300 ? var_0 : var_1))));
        }
        for (int i_6 = 0; i_6 < 24;i_6 += 1)
        {
            /* LoopNest 2 */
            for (int i_7 = 0; i_7 < 24;i_7 += 1)
            {
                for (int i_8 = 0; i_8 < 1;i_8 += 1)
                {
                    {
                        arr_21 [i_1 - 1] [i_1] [i_1 - 1] [i_1 - 1] [i_6] [10] = (((arr_18 [i_1] [i_1] [i_7] [i_1]) ? (((-1 + 2147483647) >> (var_1 - 63))) : (!34271)));
                        var_19 = (min(var_19, ((((arr_15 [i_7]) ? var_1 : ((var_8 & (arr_15 [i_7]))))))));
                        arr_22 [i_6] [i_6] [i_6] [i_6] = 110;
                    }
                }
            }
            var_20 -= var_9;
        }

        /* vectorizable */
        for (int i_9 = 0; i_9 < 24;i_9 += 1)
        {
            var_21 = (((((((arr_25 [i_1] [i_9]) != var_1)))) != (var_2 / var_9)));
            var_22 = (arr_25 [4] [i_9]);
            arr_27 [i_1 - 1] [i_9] = ((var_7 * (31236 != var_9)));
            var_23 = (min(var_23, (((-59 ? (arr_25 [i_1] [i_1]) : ((-83 ? var_5 : 1152921504606846975)))))));
        }
        /* vectorizable */
        for (int i_10 = 2; i_10 < 22;i_10 += 1)
        {
            var_24 += (((arr_29 [i_10 + 2] [17] [i_10 - 2]) ? 16 : (arr_11 [i_1 - 1] [i_1 - 1] [i_1 - 1] [i_1 - 1] [i_10] [i_1] [i_1 - 1])));
            var_25 = (min(var_25, ((((var_3 | 18014398509481983) ? var_9 : ((~(arr_24 [i_1 - 1]))))))));
        }
        for (int i_11 = 2; i_11 < 23;i_11 += 1)
        {
            var_26 = 764600800;
            var_27 = ((var_1 % (var_0 * var_5)));
            var_28 = (min(var_28, (((((max(7295718553744620254, var_3))) / var_8)))));
            var_29 *= (((((-(var_9 / var_2)))) ? ((min(-31257, ((max(-20, var_5)))))) : ((((((arr_25 [i_1 - 1] [i_11]) ? (arr_29 [i_1] [i_1] [i_11]) : (arr_2 [i_1])))) ? (var_6 * var_5) : (arr_9 [i_1 - 1] [i_1 - 1])))));
        }
        var_30 = var_9;
        var_31 |= (!var_6);
        arr_33 [i_1] = 1;
    }
    for (int i_12 = 3; i_12 < 12;i_12 += 1)
    {
        var_32 = ((~((((min(1, var_6))) ? (!var_6) : ((var_4 ? -110 : (arr_25 [i_12] [i_12])))))));
        var_33 = (((((arr_18 [i_12] [i_12] [i_12] [i_12 - 3]) ? (arr_18 [i_12] [i_12 - 2] [i_12 - 2] [i_12 - 3]) : (arr_19 [i_12 + 1] [i_12 + 1] [i_12] [i_12 + 1] [i_12] [i_12]))) - var_0));
        arr_37 [i_12 + 2] [i_12 + 2] = (min(var_6, ((((arr_28 [i_12 + 2]) < (arr_28 [i_12 + 1]))))));
    }
    var_34 = ((((var_0 && (((var_5 ? var_6 : var_2))))) ? (((var_2 ? var_6 : var_0))) : var_4));
    var_35 = (~var_7);
    #pragma endscop
}
