/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 135500
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=135500 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/135500
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_19 = var_3;
    var_20 = var_15;
    var_21 = (max(var_21, var_13));

    for (int i_0 = 0; i_0 < 1;i_0 += 1)
    {
        var_22 -= min((~var_2), (!var_15));
        arr_4 [0] [0] |= (~(!97));
        arr_5 [i_0] [13] = (((~-var_10) >> (var_10 + 1821262186)));
    }
    /* vectorizable */
    for (int i_1 = 0; i_1 < 13;i_1 += 1)
    {
        arr_8 [i_1] = var_11;
        var_23 -= var_13;
    }
    /* vectorizable */
    for (int i_2 = 0; i_2 < 1;i_2 += 1)
    {
        arr_11 [i_2] = ((var_12 <= (var_12 & var_14)));
        /* LoopNest 2 */
        for (int i_3 = 0; i_3 < 25;i_3 += 1)
        {
            for (int i_4 = 1; i_4 < 22;i_4 += 1)
            {
                {
                    arr_19 [i_2] [0] = var_2;
                    arr_20 [i_2] [i_2] [24] [24] = ((var_14 ? ((var_4 ? var_0 : (arr_18 [i_2] [0] [i_4 + 3]))) : (var_18 < var_18)));
                    arr_21 [i_2] [0] [11] = (arr_10 [i_4 + 2]);
                    /* LoopNest 2 */
                    for (int i_5 = 0; i_5 < 25;i_5 += 1)
                    {
                        for (int i_6 = 0; i_6 < 25;i_6 += 1)
                        {
                            {
                                arr_28 [21] [i_2] [i_2] [i_2] = ((-1897561889 ? var_14 : 252));
                                arr_29 [i_2] [i_2] = ((var_4 && (arr_12 [i_4 - 1] [i_2])));
                            }
                        }
                    }
                }
            }
        }

        for (int i_7 = 0; i_7 < 25;i_7 += 1)
        {

            for (int i_8 = 0; i_8 < 25;i_8 += 1)
            {
                arr_36 [i_2] [i_2] [i_8] [i_2] = (((var_9 - var_15) && var_17));
                var_24 = (!var_9);
                arr_37 [i_2] [i_2] = var_2;

                for (int i_9 = 1; i_9 < 24;i_9 += 1)
                {
                    var_25 = -var_16;
                    var_26 -= (((~-956085302495723063) ? var_7 : ((2147483647 ? 957672574664458389 : 28))));
                    var_27 += ((var_2 ? (arr_10 [i_9 - 1]) : var_3));
                }
                for (int i_10 = 0; i_10 < 25;i_10 += 1)
                {
                    arr_45 [i_2] [i_2] = ((var_14 % var_13) ? (((var_5 || (arr_41 [i_2] [21] [i_7] [i_2] [i_2])))) : -var_16);
                    arr_46 [17] [i_2] = (var_3 < var_16);
                    arr_47 [i_2] [i_8] [i_8] [i_10] = var_7;
                }
                for (int i_11 = 2; i_11 < 24;i_11 += 1)
                {
                    arr_50 [i_2] = var_17;
                    var_28 = var_6;
                }
                for (int i_12 = 0; i_12 < 25;i_12 += 1)
                {
                    var_29 += var_6;
                    var_30 = ((-((-(arr_42 [i_2] [i_7] [i_2] [12] [20] [12])))));
                    var_31 = (min(var_31, var_14));
                }
            }
            for (int i_13 = 0; i_13 < 25;i_13 += 1) /* same iter space */
            {
                arr_57 [i_2] [12] = var_7;
                var_32 = (max(var_32, -2147483647));
                arr_58 [0] [0] [i_2] [i_13] = ((-((var_6 ? (arr_44 [3] [i_2] [i_2] [i_7] [21] [i_13]) : var_2))));
            }
            for (int i_14 = 0; i_14 < 25;i_14 += 1) /* same iter space */
            {
                var_33 = (((arr_22 [i_2] [16] [i_14] [i_14] [i_2] [i_14]) ? (arr_22 [23] [i_14] [7] [i_2] [i_2] [19]) : (arr_22 [10] [i_2] [i_2] [i_7] [i_14] [i_14])));
                var_34 = -var_17;
            }
            var_35 = (min(var_35, (((var_14 ? (((~(arr_38 [i_2] [i_7] [i_2] [i_2] [i_2])))) : (((arr_25 [i_7] [24] [i_7] [i_7] [12]) ? (arr_18 [1] [1] [7]) : var_13)))))));
        }
        arr_63 [i_2] [i_2] = (arr_22 [i_2] [i_2] [6] [i_2] [i_2] [i_2]);
    }
    #pragma endscop
}
