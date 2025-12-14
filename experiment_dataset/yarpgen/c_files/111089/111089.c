/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 111089
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=111089 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/111089
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 3 */
    for (int i_0 = 0; i_0 < 12;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 12;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 12;i_2 += 1)
            {
                {
                    /* LoopNest 2 */
                    for (int i_3 = 0; i_3 < 12;i_3 += 1)
                    {
                        for (int i_4 = 0; i_4 < 12;i_4 += 1)
                        {
                            {
                                arr_12 [i_0] [i_0] [i_2] [i_3] [i_3] = 35993612646875136;
                                var_14 *= (arr_1 [i_3]);
                                var_15 = ((((((arr_7 [i_0] [i_0] [i_0] [i_0]) ? var_0 : var_13))) ? ((7936 ? 18410750461062676490 : 2305843009213677568)) : (~7924)));
                            }
                        }
                    }
                    /* LoopNest 2 */
                    for (int i_5 = 1; i_5 < 10;i_5 += 1)
                    {
                        for (int i_6 = 1; i_6 < 10;i_6 += 1)
                        {
                            {
                                var_16 &= (min((((((max(18410750461062676491, 1))) ? 1 : 15872))), (arr_14 [i_1] [i_1] [i_2] [0])));
                                var_17 += (arr_8 [i_1] [i_1] [i_1] [i_1]);
                                var_18 = (!(((((35993612646875100 != (arr_3 [i_5]))) ? (((arr_4 [i_0] [i_0] [i_5 - 1]) ? (arr_0 [i_5] [i_1]) : 32256)) : (arr_0 [i_6 + 2] [i_0])))));
                                arr_17 [i_6 + 2] [i_5] [i_2] [i_5] [i_0] = (+(((!(((18410750461062676500 ? (arr_5 [i_5] [i_2] [i_1] [i_0]) : 4096)))))));
                            }
                        }
                    }
                }
            }
        }
    }
    /* LoopNest 2 */
    for (int i_7 = 0; i_7 < 11;i_7 += 1)
    {
        for (int i_8 = 0; i_8 < 11;i_8 += 1)
        {
            {
                var_19 = ((~(min((arr_9 [i_7] [i_7] [i_8] [i_8] [i_8]), (arr_9 [i_7] [i_7] [i_8] [i_8] [i_7])))));
                /* LoopNest 3 */
                for (int i_9 = 3; i_9 < 10;i_9 += 1)
                {
                    for (int i_10 = 1; i_10 < 10;i_10 += 1)
                    {
                        for (int i_11 = 0; i_11 < 11;i_11 += 1)
                        {
                            {
                                var_20 = (((arr_16 [i_7] [i_8] [7] [i_10] [i_11]) ? ((1 ? -7936 : (arr_27 [i_9 - 3] [i_10 - 1] [i_10] [i_10 - 1]))) : var_5));
                                var_21 = ((min((arr_7 [i_11] [i_10] [i_9] [i_7]), (((arr_16 [i_7] [i_9 - 3] [i_8] [i_10 + 1] [i_11]) ? -4103 : (arr_16 [i_7] [i_7] [6] [i_7] [i_7]))))));
                            }
                        }
                    }
                }
            }
        }
    }
    /* LoopNest 2 */
    for (int i_12 = 1; i_12 < 21;i_12 += 1)
    {
        for (int i_13 = 0; i_13 < 1;i_13 += 1)
        {
            {
                /* LoopNest 2 */
                for (int i_14 = 2; i_14 < 20;i_14 += 1)
                {
                    for (int i_15 = 0; i_15 < 22;i_15 += 1)
                    {
                        {
                            var_22 = 768;
                            var_23 -= ((!(((var_0 ? ((var_7 ? var_6 : (arr_36 [i_12 - 1] [i_14] [i_14]))) : (arr_37 [i_12] [i_12] [i_12] [i_12 - 1]))))));
                        }
                    }
                }
                /* LoopNest 2 */
                for (int i_16 = 2; i_16 < 21;i_16 += 1)
                {
                    for (int i_17 = 0; i_17 < 22;i_17 += 1)
                    {
                        {
                            arr_45 [i_16] [i_16 - 1] [i_13] [i_16] |= 35993612646875135;
                            arr_46 [i_12] [i_13] [i_16 - 1] [i_16] &= 35993612646875136;
                            arr_47 [i_12] [i_13] [i_12] [i_17] [i_12] [i_12 + 1] = ((((!1048576) ? 35993612646875125 : (((max(4080, (arr_34 [i_12] [i_13]))))))));
                            var_24 = (max(var_24, (((min(268435424, (arr_31 [i_12 + 1] [i_16 + 1])))))));
                            var_25 = (arr_36 [i_17] [i_12] [1]);
                        }
                    }
                }
                /* LoopNest 3 */
                for (int i_18 = 0; i_18 < 22;i_18 += 1)
                {
                    for (int i_19 = 0; i_19 < 22;i_19 += 1)
                    {
                        for (int i_20 = 4; i_20 < 21;i_20 += 1)
                        {
                            {
                                var_26 *= (arr_51 [i_12] [i_12] [i_12 - 1] [i_12] [i_12]);
                                arr_56 [i_12 + 1] [i_12] = ((-(arr_34 [i_18] [i_18])));
                                arr_57 [i_12] [i_12] [i_12 - 1] [i_12] [i_12] [i_12] = (arr_33 [i_12 + 1] [i_12]);
                                var_27 = var_4;
                            }
                        }
                    }
                }
            }
        }
    }
    #pragma endscop
}
