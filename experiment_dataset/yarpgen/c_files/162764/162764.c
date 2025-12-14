/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 162764
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=162764 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/162764
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 0; i_0 < 24;i_0 += 1)
    {
        /* LoopNest 2 */
        for (int i_1 = 0; i_1 < 24;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 24;i_2 += 1)
            {
                {
                    var_19 = (max(var_19, var_17));
                    var_20 = (arr_2 [i_0] [i_2] [i_2]);
                    /* LoopNest 2 */
                    for (int i_3 = 0; i_3 < 0;i_3 += 1)
                    {
                        for (int i_4 = 0; i_4 < 1;i_4 += 1)
                        {
                            {
                                arr_14 [1] [i_3 + 1] [i_3] [i_2] [i_1] [17] [i_0] = (-var_15 ? (min(6301147931871534160, var_9)) : (((arr_0 [i_2]) ? ((var_13 ? (arr_4 [i_4] [i_3] [i_1]) : 1210546338803744372)) : (((2111315591245719732 ? var_1 : var_7))))));
                                var_21 = (~var_6);
                                arr_15 [i_4] [i_3 + 1] [10] [i_1] [i_1] [i_0] = (arr_5 [i_3] [i_1] [i_2]);
                            }
                        }
                    }
                }
            }
        }
        var_22 = (((((~((var_4 ? 17956977578087295381 : 1))))) ? ((~(arr_10 [i_0]))) : -67));
        var_23 = (min(var_23, (((((((arr_3 [i_0] [i_0]) ? var_3 : (var_5 == 189)))) ? (min(7404352007774701027, ((min(51212, 445920263))))) : (((~(arr_0 [i_0])))))))));
        /* LoopNest 2 */
        for (int i_5 = 0; i_5 < 1;i_5 += 1)
        {
            for (int i_6 = 1; i_6 < 22;i_6 += 1)
            {
                {
                    var_24 = ((~(arr_2 [i_0] [i_5] [9])));
                    var_25 = 2561659308;
                    var_26 = (max(var_26, 13529));
                }
            }
        }
        var_27 = (((((1555549755325741759 << (((arr_1 [i_0]) + 69886741))))) ? ((((188 == (arr_18 [i_0] [i_0] [i_0] [i_0]))))) : -var_0));
    }
    for (int i_7 = 0; i_7 < 13;i_7 += 1)
    {
        var_28 = (min(var_28, ((var_17 ? ((var_8 ? 10686442292454061840 : var_14)) : ((1 ? 14181453078397514851 : 189))))));
        /* LoopNest 3 */
        for (int i_8 = 0; i_8 < 13;i_8 += 1)
        {
            for (int i_9 = 2; i_9 < 11;i_9 += 1)
            {
                for (int i_10 = 0; i_10 < 13;i_10 += 1)
                {
                    {

                        /* vectorizable */
                        for (int i_11 = 0; i_11 < 13;i_11 += 1)
                        {
                            var_29 -= ((-(arr_18 [0] [22] [i_9 + 1] [i_7])));
                            var_30 = 3817397213;
                        }
                        for (int i_12 = 0; i_12 < 13;i_12 += 1)
                        {
                            arr_35 [i_7] [i_7] [i_9] [i_7] = ((((((max(var_15, var_11))) ? ((var_2 ? var_13 : 16332021798049515910)) : (arr_11 [i_7] [i_8] [i_9 + 2])))) ? var_14 : (~2477137091));
                            var_31 -= 13971285431970101583;
                        }
                        for (int i_13 = 0; i_13 < 13;i_13 += 1)
                        {
                            arr_38 [i_9] [i_8] = (max((var_18 || 6646076117135364685), 365008575));
                            arr_39 [i_9] [i_9] [1] [i_10] [i_9] [i_13] [i_9] = 0;
                            var_32 = (max(1, 1));
                            var_33 = ((-var_10 ? (((-(((arr_21 [i_9]) ? 1 : -1560669511))))) : (min(((189 ? var_16 : var_2)), (arr_36 [i_7] [i_7] [i_9] [i_7] [i_7])))));
                        }
                        for (int i_14 = 0; i_14 < 13;i_14 += 1)
                        {
                            arr_42 [i_8] [i_9] [i_8] = (max(-677522560, (arr_2 [i_9 + 1] [i_9 + 2] [i_9])));
                            var_34 = (max(var_34, 1));
                        }
                        var_35 = -6533493008248239199;
                        var_36 *= (((--3621759290) ? (((~(((arr_37 [i_7] [2] [i_9 - 2] [i_10]) ? var_2 : (arr_11 [18] [i_8] [i_9])))))) : (min(((max(var_14, var_9))), (max(var_8, var_8))))));
                        var_37 -= (arr_19 [i_10] [i_9] [i_8]);
                    }
                }
            }
        }
    }
    var_38 += (~-var_12);
    #pragma endscop
}
