/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 126303
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=126303 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/126303
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 18;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 18;i_1 += 1)
        {
            {
                arr_5 [i_0] [i_0] = 98;
                var_14 = (-((-(arr_0 [i_0] [i_1]))));
                /* LoopNest 2 */
                for (int i_2 = 1; i_2 < 17;i_2 += 1)
                {
                    for (int i_3 = 0; i_3 < 18;i_3 += 1)
                    {
                        {
                            arr_12 [i_0] [i_0] [i_2] [i_0] [i_3] = ((((max((arr_1 [i_2] [i_0]), (arr_0 [i_3] [i_0])))) ? var_3 : ((min((((arr_11 [i_3] [i_1]) ? 157 : (arr_10 [11] [i_0] [i_1] [i_2] [i_3]))), ((max(var_1, (arr_10 [i_2] [i_3] [i_3] [i_3] [i_1])))))))));
                            arr_13 [0] [i_2] [i_0] [i_0] [i_0] [i_0] = (max(((max((arr_3 [i_2 - 1] [i_2 - 1] [i_2 + 1]), (arr_1 [i_2 - 1] [i_0])))), (max(-var_4, var_0))));
                            var_15 |= min(((-(arr_9 [i_0] [17] [i_0] [i_0]))), 95);
                            arr_14 [i_0] [i_2] [i_2] [i_0] [i_0] = var_4;
                        }
                    }
                }
            }
        }
    }
    /* LoopNest 3 */
    for (int i_4 = 0; i_4 < 11;i_4 += 1)
    {
        for (int i_5 = 3; i_5 < 10;i_5 += 1)
        {
            for (int i_6 = 0; i_6 < 11;i_6 += 1)
            {
                {

                    /* vectorizable */
                    for (int i_7 = 0; i_7 < 11;i_7 += 1)
                    {
                        arr_25 [i_6] [i_6] [i_6] [i_6] [i_6] [i_6] = ((!(arr_15 [i_5 + 1] [i_7])));
                        arr_26 [i_7] [i_7] [i_6] [i_5] [i_4] = (((~var_2) ? ((-(arr_3 [i_7] [i_7] [i_6]))) : (arr_11 [i_5] [i_5])));
                        var_16 = (max(var_16, 98));
                        var_17 = (arr_11 [i_5 - 2] [i_5]);
                    }
                    /* LoopNest 2 */
                    for (int i_8 = 0; i_8 < 11;i_8 += 1)
                    {
                        for (int i_9 = 0; i_9 < 11;i_9 += 1)
                        {
                            {
                                var_18 = (min(((((max((arr_18 [i_4] [i_8]), 171))) ? (((arr_16 [i_9]) ? var_10 : (arr_31 [i_4] [i_8] [i_6] [0] [i_9]))) : (((min(169, var_11)))))), (((+(((arr_16 [i_4]) ? var_12 : var_4)))))));
                                var_19 = (min(var_19, 179));
                            }
                        }
                    }
                    /* LoopNest 2 */
                    for (int i_10 = 0; i_10 < 11;i_10 += 1)
                    {
                        for (int i_11 = 0; i_11 < 11;i_11 += 1)
                        {
                            {
                                var_20 ^= (~var_4);
                                var_21 = (max(var_21, ((min(((((171 ? var_3 : 181)))), ((max(66, (arr_6 [i_4] [i_4] [6] [i_10])))))))));
                                var_22 ^= (min((157 & 180), ((max((arr_6 [i_11] [i_5 - 1] [i_10] [i_10]), 75)))));
                                arr_37 [i_4] [i_10] [i_6] [i_10] [i_4] = 198;
                            }
                        }
                    }
                    /* LoopNest 2 */
                    for (int i_12 = 0; i_12 < 11;i_12 += 1)
                    {
                        for (int i_13 = 0; i_13 < 11;i_13 += 1)
                        {
                            {
                                var_23 = (arr_3 [i_5] [i_5 - 1] [i_5 - 3]);
                                arr_42 [i_4] [i_4] [i_4] [i_12] [2] = var_11;
                            }
                        }
                    }
                }
            }
        }
    }
    var_24 = (max(var_24, ((((var_4 / 179) ? ((74 ? (max(var_2, var_13)) : (((min(53, var_4)))))) : var_6)))));
    #pragma endscop
}
