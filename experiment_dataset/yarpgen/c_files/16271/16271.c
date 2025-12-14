/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 16271
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=16271 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/16271
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 3 */
    for (int i_0 = 0; i_0 < 11;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 11;i_1 += 1)
        {
            for (int i_2 = 3; i_2 < 9;i_2 += 1)
            {
                {
                    arr_7 [i_1] = var_0;

                    for (int i_3 = 1; i_3 < 8;i_3 += 1)
                    {
                        arr_11 [i_0] [i_0] [i_1] [2] [i_3] = ((((((!((((arr_10 [i_0] [1] [i_0] [i_0]) - 4))))))) != -17179869183));
                        var_11 -= ((((((!(arr_2 [i_1] [8] [i_1]))))) != (arr_3 [i_1] [i_0])));
                        var_12 = ((((((arr_3 [i_3 - 1] [i_0]) ? (arr_3 [i_3 - 1] [i_3]) : (arr_3 [i_3 + 2] [7])))) ? ((min((arr_3 [i_3 + 2] [i_3]), 33))) : (arr_3 [i_3 - 1] [i_3])));
                        arr_12 [i_3] [0] [i_3] [i_0] [i_1] [i_0] = var_3;
                        arr_13 [i_0] [i_0] [i_0] [i_0] [i_0] [i_0] = (max(var_5, (((min(var_6, (arr_4 [i_0] [i_1] [i_2]))) << (((((-127 - 1) ? (arr_4 [i_0] [i_0] [i_0]) : 18446744056529682444)) - 18446744073709549259))))));
                    }
                    /* LoopNest 2 */
                    for (int i_4 = 0; i_4 < 11;i_4 += 1)
                    {
                        for (int i_5 = 0; i_5 < 11;i_5 += 1)
                        {
                            {
                                var_13 = (max(var_13, (arr_10 [i_4] [i_1] [i_2] [i_4])));
                                var_14 = (arr_1 [i_0]);
                            }
                        }
                    }
                    /* LoopNest 2 */
                    for (int i_6 = 1; i_6 < 8;i_6 += 1)
                    {
                        for (int i_7 = 0; i_7 < 11;i_7 += 1)
                        {
                            {
                                var_15 *= ((((((((arr_14 [i_6]) ? (arr_0 [i_6 + 3]) : var_4))) ? var_5 : ((((arr_17 [i_7] [i_6] [i_6] [i_6] [i_2 - 1] [i_1] [i_0]) ? 357742183 : (arr_4 [i_0] [5] [i_2])))))) / (arr_17 [i_0] [i_1] [i_1] [i_2] [i_6] [6] [i_7])));
                                var_16 = (18446744056529682444 ? (((arr_4 [i_2 - 1] [i_6 + 3] [i_6 + 3]) ? -19405 : (arr_4 [i_2 - 1] [i_6 + 3] [i_6 + 3]))) : ((var_0 ? (arr_4 [i_2 + 1] [i_6 + 1] [i_2]) : (arr_4 [i_2 - 2] [i_6 - 1] [i_6 - 1]))));
                                arr_24 [i_7] [3] [i_6] [i_2 - 2] [i_6] [9] [i_0] = var_0;
                                var_17 = (((arr_15 [i_0] [i_0] [i_0] [i_0] [i_0] [i_0]) ? (min((arr_21 [i_0] [i_1] [i_6 + 2] [i_6 + 3] [i_7] [i_0]), var_1)) : ((((((arr_18 [i_0] [i_1] [i_2] [i_6 + 1] [i_7] [i_7]) ? 0 : (arr_16 [i_0] [i_0] [i_0] [5] [3] [10] [i_0]))) | (var_8 - var_5))))));
                                var_18 = (max(var_18, ((max((arr_15 [i_0] [i_1] [i_2] [i_2] [i_7] [i_0]), (((-50 % (arr_4 [i_2] [3] [i_1])))))))));
                            }
                        }
                    }
                }
            }
        }
    }
    var_19 -= ((var_6 << (((max(var_3, var_7)) - 13733738090171641998))));
    /* LoopNest 2 */
    for (int i_8 = 0; i_8 < 0;i_8 += 1)
    {
        for (int i_9 = 0; i_9 < 16;i_9 += 1)
        {
            {
                /* LoopNest 2 */
                for (int i_10 = 0; i_10 < 16;i_10 += 1)
                {
                    for (int i_11 = 4; i_11 < 15;i_11 += 1)
                    {
                        {
                            var_20 = (!var_2);
                            var_21 = (var_4 ? (arr_27 [i_11] [i_10] [i_9]) : var_10);
                        }
                    }
                }
                arr_37 [i_9] [i_9] = (arr_26 [4]);
                /* LoopNest 2 */
                for (int i_12 = 3; i_12 < 15;i_12 += 1)
                {
                    for (int i_13 = 1; i_13 < 1;i_13 += 1)
                    {
                        {
                            arr_43 [i_8] [i_9] [i_12] [i_13] = var_2;
                            arr_44 [i_8 + 1] [i_8] [i_9] = (max(((((((~(arr_36 [i_8 + 1] [i_8] [i_8] [i_8])))) ? (arr_35 [i_8 + 1] [i_8 + 1] [i_8 + 1] [i_12 + 1] [i_13 - 1]) : ((39763 ? 123 : -2619760389260492666))))), (((8 && var_9) ? (arr_28 [i_8] [i_9] [i_13]) : ((65011712 ? (arr_35 [i_13 - 1] [i_12] [i_9] [i_9] [i_8]) : var_7))))));
                            arr_45 [i_9] [i_9] = ((((max(((-357742183 ? var_10 : var_3)), var_3))) ? (min(18, var_7)) : (((((arr_40 [i_12]) && (((-3592 ? var_4 : 39745)))))))));
                        }
                    }
                }
            }
        }
    }
    #pragma endscop
}
