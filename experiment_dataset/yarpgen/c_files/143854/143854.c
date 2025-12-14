/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 143854
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=143854 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/143854
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 3; i_0 < 12;i_0 += 1)
    {
        for (int i_1 = 4; i_1 < 13;i_1 += 1)
        {
            {
                var_12 = ((~(arr_0 [i_0 - 2])));

                for (int i_2 = 0; i_2 < 1;i_2 += 1)
                {
                    var_13 = (max(var_13, ((max((arr_4 [1] [1] [i_1 - 1]), ((((((arr_4 [i_0] [i_1 - 2] [i_1 - 2]) ? (-2147483647 - 1) : var_11))) ? (!var_9) : 98)))))));

                    /* vectorizable */
                    for (int i_3 = 0; i_3 < 15;i_3 += 1)
                    {
                        var_14 = (min(var_14, var_3));

                        for (int i_4 = 2; i_4 < 14;i_4 += 1)
                        {
                            var_15 = var_9;
                            var_16 = (((arr_3 [i_0 - 1]) ? (arr_3 [i_0 - 3]) : (arr_3 [i_0 - 3])));
                        }
                        for (int i_5 = 0; i_5 < 15;i_5 += 1)
                        {
                            var_17 = (((((-2147483647 - 1) % -110)) - var_4));
                            var_18 = (((0 + (arr_12 [7] [7]))));
                        }
                        for (int i_6 = 4; i_6 < 13;i_6 += 1)
                        {
                            var_19 = -var_3;
                            var_20 = (arr_17 [i_0] [i_1] [i_2] [4] [i_0]);
                            var_21 = ((!(arr_1 [i_0 - 1] [9])));
                            var_22 = (((arr_3 [i_0 + 3]) * ((1 ? var_7 : (arr_15 [i_0 + 3] [i_0 - 1] [i_0 - 1] [i_0] [i_0])))));
                        }
                    }
                }
                for (int i_7 = 0; i_7 < 15;i_7 += 1)
                {
                    var_23 = (min(((113 << (6852497642455468995 - 35779))), (arr_16 [i_7] [i_1] [i_0 + 1] [i_1 + 2] [i_1 - 1])));
                    var_24 = (max(((max(609173662, ((98 ? (arr_18 [i_0] [i_1 - 3] [i_7] [i_7] [9] [i_0 + 2] [i_7]) : 104))))), (min((max(var_3, (arr_9 [i_0 - 1]))), (((arr_4 [i_0 + 1] [i_0 + 1] [i_7]) ? (arr_12 [i_0 + 1] [2]) : (arr_15 [i_0 + 3] [i_0 + 1] [i_1 + 1] [6] [10])))))));
                }
                for (int i_8 = 2; i_8 < 14;i_8 += 1)
                {
                    var_25 = (arr_15 [i_0] [i_1 - 4] [i_8 - 1] [i_8 - 1] [i_1]);
                    var_26 = 0;
                }
                var_27 = (min((max(var_6, var_1)), ((((arr_16 [i_1 - 3] [i_1] [i_1 - 4] [i_1 + 2] [i_1 - 1]) ? 4294967284 : (arr_16 [i_1] [i_1 - 1] [i_1] [i_1 + 2] [i_1 + 1]))))));
                var_28 = (((arr_9 [i_0 + 2]) >> ((((((12 ? var_8 : (arr_24 [i_0 - 1] [i_0 + 1]))) + var_5)) + 398221722))));
                var_29 = (min(1, var_6));
            }
        }
    }

    for (int i_9 = 2; i_9 < 8;i_9 += 1)
    {
        var_30 = var_3;
        var_31 = ((~(((arr_6 [i_9] [i_9] [i_9] [i_9 - 1]) ? ((1 * (-127 - 1))) : (arr_12 [i_9] [i_9])))));
        /* LoopNest 3 */
        for (int i_10 = 0; i_10 < 10;i_10 += 1)
        {
            for (int i_11 = 0; i_11 < 10;i_11 += 1)
            {
                for (int i_12 = 0; i_12 < 10;i_12 += 1)
                {
                    {
                        var_32 = ((((!(arr_28 [i_9] [i_10] [i_9 - 2]))) ? (((var_6 == (arr_25 [i_9 - 2] [i_9 - 2] [i_11] [11])))) : (arr_3 [i_9 + 1])));

                        for (int i_13 = 1; i_13 < 8;i_13 += 1)
                        {
                            var_33 = (max(var_33, (((((var_0 * (arr_29 [i_10]))) + ((min(((((arr_0 [1]) && (arr_33 [8] [i_11] [i_10])))), (((arr_5 [i_9 - 1] [i_9 - 1] [i_11]) ? 0 : 8392647545230226646))))))))));
                            var_34 = (min(1, ((var_7 ? (arr_8 [i_9] [i_9 + 1] [i_13 - 1]) : 0))));
                            var_35 += max(((((((-3941309733743834340 + 9223372036854775807) >> (var_0 - 10981)))) - (~var_9))), var_4);
                        }
                    }
                }
            }
        }
    }
    #pragma endscop
}
