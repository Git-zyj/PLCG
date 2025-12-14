/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 148564
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=148564 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/148564
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_18 = (max(var_18, 128));
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 17;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 17;i_1 += 1)
        {
            {
                var_19 = (min(var_19, var_17));
                var_20 -= ((((((((arr_1 [i_0] [i_1]) - (arr_4 [i_0] [i_0])))) ? (arr_0 [i_0]) : (((arr_0 [i_0]) + (arr_1 [i_1] [i_0]))))) + (arr_4 [i_0] [i_0])));

                for (int i_2 = 0; i_2 < 17;i_2 += 1)
                {
                    arr_7 [i_0] [i_0] [i_0] |= var_5;
                    /* LoopNest 2 */
                    for (int i_3 = 1; i_3 < 14;i_3 += 1)
                    {
                        for (int i_4 = 0; i_4 < 1;i_4 += 1)
                        {
                            {
                                var_21 = (((arr_6 [i_3 + 3] [i_3 + 2] [i_3 + 2]) - (max((arr_0 [i_3 + 1]), 128))));
                                arr_12 [i_0] [i_0] [i_0] [i_0] [i_0] [i_0] [i_1] &= (max((arr_9 [i_1] [i_4] [i_3 - 1] [i_3 + 3] [i_3 + 3] [i_1]), var_2));
                                arr_13 [i_0] [i_0] [i_2] [i_3] [i_3] = ((((((arr_9 [i_3] [i_1] [i_1] [i_3] [i_4] [i_3 - 1]) + (arr_11 [i_3 - 1] [i_3 + 2] [i_3 + 3] [i_3])))) ? (arr_11 [i_0] [i_2] [11] [i_2]) : (((-(arr_9 [i_3] [i_0] [i_1] [i_2] [i_3 + 1] [i_4]))))));
                            }
                        }
                    }
                    var_22 = ((((((((arr_5 [i_0] [i_0] [i_0] [i_0]) % 128))) ? (((arr_6 [i_0] [i_0] [i_0]) >> (34437 - 34408))) : ((((arr_3 [i_2] [i_1] [i_0]) ? var_9 : var_13))))) & ((max(((((arr_4 [i_1] [i_1]) <= var_7))), ((-1661820682 ? var_16 : var_4)))))));
                }
                for (int i_5 = 0; i_5 < 17;i_5 += 1)
                {
                    arr_16 [i_0] [i_1] [i_0] = 34224;
                    arr_17 [0] [0] [i_1] [i_0] = (arr_2 [i_0] [i_1]);
                    /* LoopNest 2 */
                    for (int i_6 = 0; i_6 < 17;i_6 += 1)
                    {
                        for (int i_7 = 1; i_7 < 16;i_7 += 1)
                        {
                            {
                                arr_23 [0] [1] [i_5] [i_5] [i_0] [i_0] [3] = ((((arr_18 [i_1] [i_1] [i_1] [i_6] [i_5]) | (arr_18 [i_0] [i_0] [i_0] [i_6] [i_0]))) & ((~(arr_18 [i_0] [i_0] [i_0] [i_0] [i_5]))));
                                var_23 = (arr_8 [4] [i_1]);
                                var_24 += (arr_15 [i_5] [i_0]);
                                var_25 = (((arr_0 [i_0]) || 1564593068));
                            }
                        }
                    }
                    /* LoopNest 2 */
                    for (int i_8 = 0; i_8 < 17;i_8 += 1)
                    {
                        for (int i_9 = 1; i_9 < 14;i_9 += 1)
                        {
                            {
                                arr_28 [i_1] [i_8] [8] [2] [i_1] |= ((((((arr_1 [i_0] [i_1]) ? (arr_11 [i_9] [i_5] [i_1] [i_0]) : (arr_22 [i_0] [i_0]))) - ((var_10 ? var_0 : (arr_4 [0] [i_5]))))));
                                var_26 = (max(var_26, -114));
                                var_27 -= (((((arr_11 [i_9 + 2] [i_1] [i_9 + 2] [i_5]) >> (((arr_11 [i_0] [i_1] [i_9 + 1] [i_1]) - 4144651681)))) & (arr_11 [i_1] [i_1] [i_9 + 2] [i_8])));
                                var_28 = (min(var_28, (((9 - (((((((arr_25 [i_0] [i_1] [i_5] [i_8] [i_9 + 3]) & 0))) ? ((((arr_21 [i_0] [i_0]) >> (50 - 26)))) : (2730374228 & 1564593068)))))))));
                            }
                        }
                    }
                }
            }
        }
    }
    var_29 = (17417353649377114402 + 236);
    var_30 = var_10;
    #pragma endscop
}
