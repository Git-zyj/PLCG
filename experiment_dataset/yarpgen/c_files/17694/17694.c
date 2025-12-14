/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 17694
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=17694 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/17694
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_12 = (min(var_12, var_4));
    var_13 |= ((1 ? var_8 : (min(var_4, var_0))));
    /* LoopNest 2 */
    for (int i_0 = 1; i_0 < 9;i_0 += 1)
    {
        for (int i_1 = 1; i_1 < 9;i_1 += 1)
        {
            {
                var_14 *= 254;
                /* LoopNest 3 */
                for (int i_2 = 2; i_2 < 10;i_2 += 1)
                {
                    for (int i_3 = 0; i_3 < 12;i_3 += 1)
                    {
                        for (int i_4 = 2; i_4 < 9;i_4 += 1)
                        {
                            {
                                var_15 += ((!((((((max(1, 1)))) * (arr_6 [i_0 - 1] [i_0 - 1]))))));
                                var_16 &= (((arr_9 [i_4 - 1] [i_0 - 1] [i_2 + 1] [i_2] [i_0 - 1] [i_1 + 3]) ? (arr_8 [i_0]) : 63));
                                var_17 = (((arr_8 [i_4 + 1]) ? (((arr_5 [i_4] [i_4 + 1] [i_4]) - (arr_5 [2] [i_4 + 3] [i_4 - 2]))) : (((arr_8 [i_4 + 2]) - (arr_5 [i_4] [i_4 + 2] [i_4])))));
                                var_18 |= (max((arr_6 [i_0 + 3] [i_0 + 3]), ((((((arr_7 [10] [i_0] [10] [4] [i_2] [4]) == (arr_1 [i_0])))) >= (arr_8 [i_0])))));
                            }
                        }
                    }
                }
                var_19 = (max(var_19, ((((((var_0 ? (arr_6 [i_0 + 3] [i_1]) : 274877906912)) != (((arr_3 [i_0] [1]) / var_2))))))));
                /* LoopNest 2 */
                for (int i_5 = 2; i_5 < 10;i_5 += 1)
                {
                    for (int i_6 = 0; i_6 < 1;i_6 += 1)
                    {
                        {
                            var_20 += ((1 ? (arr_5 [i_0 + 3] [i_1 + 2] [i_6]) : (((arr_5 [i_1 + 2] [i_5 - 2] [1]) ? 1 : 1))));
                            var_21 = (min((((arr_7 [7] [i_5] [11] [5] [i_5] [i_5 + 2]) ? (arr_7 [i_5] [4] [4] [i_5 + 1] [i_5] [i_5 + 1]) : (arr_7 [i_5] [i_5 - 1] [i_5 - 1] [7] [i_5] [i_5 - 2]))), ((1 ? (arr_7 [i_5] [i_5] [i_5] [i_5] [i_5] [i_5 - 1]) : (arr_7 [i_0] [i_0] [i_5] [i_5 - 1] [i_0] [i_5 - 1])))));
                        }
                    }
                }

                for (int i_7 = 1; i_7 < 11;i_7 += 1)
                {
                    /* LoopNest 2 */
                    for (int i_8 = 0; i_8 < 12;i_8 += 1)
                    {
                        for (int i_9 = 1; i_9 < 10;i_9 += 1)
                        {
                            {
                                var_22 = (((((var_2 & (arr_9 [i_0 + 1] [i_0 + 1] [i_0] [i_0] [i_0 + 1] [i_0]))) >= 1)));
                                var_23 = ((min((var_11 | var_4), (arr_7 [i_0] [i_1 + 3] [i_0 + 3] [i_8] [i_9] [i_9 + 2]))));
                            }
                        }
                    }
                    /* LoopNest 2 */
                    for (int i_10 = 1; i_10 < 11;i_10 += 1)
                    {
                        for (int i_11 = 0; i_11 < 12;i_11 += 1)
                        {
                            {
                                var_24 += ((13060 ? 7976 : 1));
                                arr_29 [2] [2] [i_7] [i_0] [i_0] = (arr_3 [i_0] [10]);
                                var_25 *= var_0;
                            }
                        }
                    }
                    var_26 -= (max(var_1, 255));
                }
            }
        }
    }
    var_27 ^= ((var_3 ? ((-(min(var_1, var_5)))) : (max(var_7, var_2))));
    #pragma endscop
}
