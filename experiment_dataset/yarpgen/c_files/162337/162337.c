/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 162337
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=162337 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/162337
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 1; i_0 < 1;i_0 += 1)
    {
        arr_3 [i_0 - 1] [i_0] = 1;
        var_17 = var_4;
        var_18 = ((var_6 & var_3) & (max(var_0, 288160007407534080)));
        /* LoopNest 2 */
        for (int i_1 = 0; i_1 < 17;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 17;i_2 += 1)
            {
                {
                    arr_10 [1] [i_2] |= ((288160007407534087 & (((((18158584066302017535 ? 2309183013 : var_14))) & -3663479919494489387))));
                    arr_11 [i_2] [i_0] [i_0] [i_0] = (((var_13 & 18158584066302017521) & (arr_8 [i_0] [i_1] [i_1])));
                    var_19 *= (((-5634927311385745221 & (max(792034238517683827, 201)))) & ((((max(1, (arr_2 [i_1])))))));
                    arr_12 [i_0] [6] = ((((var_4 & (arr_9 [i_0 - 1] [i_0] [i_0] [7])))) ? (55 & 2337489386) : (789641761 - -5634927311385745228));
                    var_20 = ((var_16 << ((((~(max((arr_5 [i_0] [i_1] [9]), -20950)))) - 20933))));
                }
            }
        }
    }
    for (int i_3 = 0; i_3 < 25;i_3 += 1)
    {
        var_21 = (((((var_12 ? (var_6 & var_11) : (var_6 & var_13)))) ? (!var_13) : (((((var_14 | (arr_13 [i_3] [i_3])))) ? ((var_13 ? 4294967295 : var_14)) : -517446184))));

        for (int i_4 = 0; i_4 < 25;i_4 += 1) /* same iter space */
        {

            for (int i_5 = 0; i_5 < 1;i_5 += 1)
            {
                var_22 = (max(var_22, -706264319));
                /* LoopNest 2 */
                for (int i_6 = 1; i_6 < 21;i_6 += 1)
                {
                    for (int i_7 = 3; i_7 < 22;i_7 += 1)
                    {
                        {
                            var_23 = var_8;
                            arr_28 [i_6] [22] [i_6] = (((((arr_27 [i_7 - 2] [i_4] [i_6] [i_6 + 4] [20]) & (arr_27 [i_7 - 2] [7] [i_6] [i_6 + 4] [24]))) & var_10));
                        }
                    }
                }
                arr_29 [i_3] [22] [i_5] = ((!((max(var_3, (arr_18 [i_3] [i_3]))))));
            }
            arr_30 [i_4] [i_3] [i_3] |= (1 & 14336);
        }
        for (int i_8 = 0; i_8 < 25;i_8 += 1) /* same iter space */
        {
            var_24 *= ((-2309183013 + ((288160007407534082 ? 4294967295 : 549729948))));
            var_25 = ((227 & ((((var_6 ? var_5 : 1462100504)) & -91))));
            var_26 = var_6;
            var_27 = (max(var_27, var_13));
        }
        var_28 = (max(var_28, (~1)));
    }

    for (int i_9 = 0; i_9 < 11;i_9 += 1)
    {
        /* LoopNest 2 */
        for (int i_10 = 3; i_10 < 9;i_10 += 1)
        {
            for (int i_11 = 0; i_11 < 11;i_11 += 1)
            {
                {
                    var_29 -= 4611686018427387900;
                    arr_42 [i_9] [i_10] [i_11] = (max((((~((792034238517683827 ? 92 : 14))))), (16546720224094099503 & 230)));

                    for (int i_12 = 2; i_12 < 10;i_12 += 1)
                    {
                        arr_46 [i_9] [i_10] [i_11] [i_12 + 1] [i_12 - 2] = ((var_14 << (0 >> 0)));

                        /* vectorizable */
                        for (int i_13 = 1; i_13 < 10;i_13 += 1)
                        {
                            var_30 *= (127 & 128);
                            var_31 = (arr_2 [i_10]);
                        }
                        /* vectorizable */
                        for (int i_14 = 0; i_14 < 11;i_14 += 1)
                        {
                            arr_52 [i_10] [i_12] [i_11] [i_10] [i_10] = 1201336848;
                            var_32 *= var_15;
                        }
                    }
                    var_33 *= ((!((max(((~(arr_19 [i_9] [i_9]))), 2337489386)))));
                }
            }
        }
        /* LoopNest 2 */
        for (int i_15 = 0; i_15 < 11;i_15 += 1)
        {
            for (int i_16 = 0; i_16 < 11;i_16 += 1)
            {
                {
                    var_34 = ((((~(arr_9 [i_16] [i_16] [i_16] [i_9]))) | ((var_6 ? 3804231087 : var_5))));
                    var_35 = (min(var_35, (137 & var_8)));
                }
            }
        }
        arr_57 [i_9] = ((((55094102 & (!var_1))) & (arr_9 [i_9] [0] [i_9] [i_9])));
    }

    for (int i_17 = 1; i_17 < 17;i_17 += 1)
    {
        var_36 = (max(var_7, var_1));
        var_37 = (+(((var_0 & 241) & (max(var_10, 7555448747848134206)))));
        var_38 = var_16;
    }
    #pragma endscop
}
