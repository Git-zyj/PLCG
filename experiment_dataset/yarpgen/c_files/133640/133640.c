/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 133640
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=133640 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/133640
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 2; i_0 < 22;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 24;i_1 += 1)
        {
            {
                /* LoopNest 3 */
                for (int i_2 = 2; i_2 < 23;i_2 += 1)
                {
                    for (int i_3 = 0; i_3 < 24;i_3 += 1)
                    {
                        for (int i_4 = 0; i_4 < 24;i_4 += 1)
                        {
                            {
                                var_15 = (min((((arr_4 [i_0 - 1] [i_2 + 1] [i_2 + 1]) ^ (arr_4 [i_0 + 1] [i_2 - 2] [i_2 - 1]))), (((arr_4 [i_0 + 1] [i_2 + 1] [i_2 - 2]) ? (arr_4 [i_0 + 2] [i_2 - 1] [i_2 + 1]) : (arr_4 [i_0 - 1] [i_2 - 2] [i_2 + 1])))));
                                var_16 -= (((var_8 ? (arr_6 [i_2 - 1] [i_1] [i_2]) : (arr_5 [i_2 - 2] [i_2 - 2] [i_4] [i_0 - 2]))));
                                arr_14 [i_0] [16] [16] [19] = (((~((var_8 - (-32767 - 1))))) - ((((var_6 - 47754) > (((max(var_12, var_1))))))));
                            }
                        }
                    }
                }
                var_17 = (min(var_17, (arr_3 [i_0] [i_0] [8])));

                for (int i_5 = 2; i_5 < 22;i_5 += 1)
                {
                    var_18 = (min(var_18, (789131281 && 17781)));
                    /* LoopNest 2 */
                    for (int i_6 = 3; i_6 < 22;i_6 += 1)
                    {
                        for (int i_7 = 2; i_7 < 23;i_7 += 1)
                        {
                            {
                                var_19 -= (arr_2 [i_5]);
                                var_20 = (max(var_20, (~10707617945490758459)));
                            }
                        }
                    }
                    arr_22 [13] [i_1] [15] = ((((var_7 == (max(var_7, (arr_17 [18] [18] [i_0] [19] [21]))))) ? 0 : (arr_19 [i_0] [i_0] [1] [i_5])));

                    for (int i_8 = 4; i_8 < 20;i_8 += 1)
                    {
                        arr_26 [i_0] [i_0] [i_0] = ((~(max(-789131268, (~193)))));
                        var_21 = (max((((((var_0 + (arr_24 [i_0] [i_0] [i_8]))) | ((1 >> (((arr_23 [15] [15] [i_5] [17]) - 11549153676072563169))))))), (((((var_13 ? (arr_16 [22] [10] [i_8]) : var_8))) | ((var_3 ? var_13 : (arr_10 [i_0] [i_0] [i_0] [i_0])))))));
                        var_22 = var_10;
                        var_23 = (min(var_23, (((((((-1689149324 >= (arr_24 [i_1] [i_5] [i_8]))) ? ((var_7 ? 789131267 : -922194164)) : var_11)) << (((((~(arr_17 [16] [16] [16] [16] [i_8]))) >= var_1))))))));
                    }
                }
                for (int i_9 = 2; i_9 < 23;i_9 += 1)
                {
                    var_24 = (min(0, ((var_5 < (arr_23 [i_0] [i_0] [9] [i_0])))));
                    var_25 = ((max((arr_0 [i_9]), var_0)));
                }
                /* LoopNest 3 */
                for (int i_10 = 0; i_10 < 24;i_10 += 1)
                {
                    for (int i_11 = 0; i_11 < 24;i_11 += 1)
                    {
                        for (int i_12 = 0; i_12 < 24;i_12 += 1)
                        {
                            {
                                arr_38 [i_0] [3] = ((((~((var_11 ? var_12 : var_7)))) - ((min((var_1 == -789131257), (arr_3 [i_0 - 2] [i_1] [i_10]))))));
                                var_26 += ((((((2761451891 << (arr_8 [i_0] [5] [23] [13]))))) ? (max((((arr_18 [i_0]) ^ -922194137)), ((max(var_12, (arr_3 [i_10] [i_10] [i_10])))))) : (max(1123880811, (min(47743, -395930253))))));
                                var_27 = (min(var_27, ((~(((arr_23 [i_0 + 2] [i_0 + 2] [i_0 + 1] [i_0 + 2]) ? (arr_32 [i_0 + 2] [1] [i_0 + 1]) : (arr_32 [i_0 + 2] [i_0 + 2] [i_0 + 1])))))));
                                arr_39 [i_11] [i_11] [11] [3] [i_11] [19] [i_11] = ((((arr_17 [1] [i_0 + 2] [7] [19] [19]) ? var_1 : (arr_24 [10] [16] [i_10]))));
                            }
                        }
                    }
                }
                arr_40 [21] [i_1] = (((arr_28 [i_0] [i_1] [17]) == 0));
            }
        }
    }
    var_28 *= ((((((6 ? 17799 : 1835342820)) == 32517))) > (~-1689149294));
    #pragma endscop
}
