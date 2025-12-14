/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 102210
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=102210 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/102210
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_12 = (((((var_5 ? var_4 : 48))) | ((~((14234926346927676680 ? 38 : 497035495))))));
    /* LoopNest 3 */
    for (int i_0 = 0; i_0 < 25;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 25;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 25;i_2 += 1)
            {
                {
                    /* LoopNest 2 */
                    for (int i_3 = 2; i_3 < 24;i_3 += 1)
                    {
                        for (int i_4 = 0; i_4 < 25;i_4 += 1)
                        {
                            {
                                arr_13 [i_0] [i_1] [i_2] [i_3] [i_1] = ((((((-356002643 | (arr_7 [i_1]))))) ? (((((-40 & (arr_12 [i_0] [i_3] [i_4]))) | (0 | 0)))) : (((~var_7) & (min(3568953167028696666, var_6))))));
                                arr_14 [i_4] [i_1] [i_1] [i_1] [i_0] = (((((((40 - (arr_3 [i_1])))) / 3568953167028696689)) - 46));
                                arr_15 [i_0] [i_1] [i_2] [i_3] [i_4] [i_1] = ((0 ^ ((32581 & ((170 | (arr_12 [i_1] [i_2] [i_3])))))));
                            }
                        }
                    }
                    /* LoopNest 2 */
                    for (int i_5 = 3; i_5 < 22;i_5 += 1)
                    {
                        for (int i_6 = 0; i_6 < 25;i_6 += 1)
                        {
                            {
                                arr_23 [i_1] [i_1] = ((((arr_22 [i_0] [i_5 + 3]) ? 62 : -42)));
                                var_13 = (max(var_13, (((((-(arr_17 [i_5 - 3] [i_5 - 3] [i_1] [i_2])))) || ((min(-1, 1)))))));
                                var_14 = (((!(34393 && 1629846053))) ? (((arr_9 [i_5] [i_5 + 1]) ? (arr_0 [i_5 + 2] [i_1]) : (arr_9 [i_5 - 3] [i_5 - 3]))) : (((min((arr_19 [i_1] [i_1] [i_1] [i_5 + 3] [i_1] [i_6] [i_6]), 60443)))));
                                arr_24 [i_1] [i_5] [i_1] = 1;
                            }
                        }
                    }
                    arr_25 [i_0] [i_0] [i_1] = (min((((arr_0 [i_0] [i_1]) * -var_11)), ((((18446744073709551613 ? 76 : 0))))));
                    /* LoopNest 2 */
                    for (int i_7 = 1; i_7 < 1;i_7 += 1)
                    {
                        for (int i_8 = 0; i_8 < 25;i_8 += 1)
                        {
                            {
                                var_15 = ((1 < (41 * var_2)));
                                var_16 = (((min(55, -52)) < var_9));
                                arr_30 [i_0] [i_1] = (1 ? (((min(16, (arr_20 [i_1] [i_7 - 1] [i_7 - 1] [i_7 - 1]))))) : (min((arr_1 [i_7 - 1] [i_1]), (arr_1 [i_0] [i_1]))));
                            }
                        }
                    }
                }
            }
        }
    }
    var_17 = (min(-1, 1));
    var_18 = (max(var_18, ((((min(var_11, (min(var_7, 18446744073709551613)))) & var_4)))));
    #pragma endscop
}
