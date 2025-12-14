/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 121351
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=121351 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/121351
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_19 = ((!(1 * 0)));
    /* LoopNest 3 */
    for (int i_0 = 0; i_0 < 0;i_0 += 1)
    {
        for (int i_1 = 2; i_1 < 21;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 24;i_2 += 1)
            {
                {
                    arr_7 [i_0] [i_1 + 3] = (var_7 ^ var_14);
                    var_20 = (((((((max(var_16, (arr_6 [i_0 + 1] [i_1 - 2] [i_2])))) ? ((max(56, var_15))) : var_15))) ? (arr_2 [i_0]) : (max((((21 ? var_4 : var_0))), (max(var_14, var_12))))));
                    var_21 = (((arr_4 [i_1] [i_1] [i_0]) ? (max(var_10, (((arr_4 [i_0 + 1] [i_1] [i_2]) ? var_3 : -1)))) : (((!((max(-21, var_4))))))));
                }
            }
        }
    }
    /* LoopNest 3 */
    for (int i_3 = 0; i_3 < 11;i_3 += 1)
    {
        for (int i_4 = 1; i_4 < 10;i_4 += 1)
        {
            for (int i_5 = 0; i_5 < 11;i_5 += 1)
            {
                {
                    /* LoopNest 2 */
                    for (int i_6 = 0; i_6 < 11;i_6 += 1)
                    {
                        for (int i_7 = 1; i_7 < 10;i_7 += 1)
                        {
                            {
                                var_22 = (((arr_23 [i_4] [i_4] [i_4] [i_4 - 1]) ? var_10 : var_10));
                                var_23 = (min(var_23, (((var_0 >= (max(var_4, -62)))))));
                                arr_24 [i_6] [i_6] [i_4] [i_4] [i_4] [i_3] = var_12;
                            }
                        }
                    }
                    var_24 = (((arr_16 [i_4] [i_4]) ? 15784 : (((arr_10 [i_4 + 1] [i_5]) ? (arr_10 [i_4 + 1] [i_4 - 1]) : (arr_10 [i_4 - 1] [i_5])))));
                    arr_25 [2] [i_4] [i_4 + 1] [i_4] = (max(((((max(-22, 11))) << 1)), ((-((var_13 ? var_9 : -21))))));
                    /* LoopNest 2 */
                    for (int i_8 = 1; i_8 < 8;i_8 += 1)
                    {
                        for (int i_9 = 4; i_9 < 7;i_9 += 1)
                        {
                            {
                                arr_31 [i_4] [i_5] [i_8] [i_9] = (arr_28 [i_4]);
                                var_25 &= (((((!(arr_16 [i_9] [10])))) >> var_16));
                                arr_32 [i_8] [i_4] [i_4] = (max(((var_2 ? (!var_14) : -1)), (((!((max((arr_2 [i_3]), (arr_1 [i_4 - 1] [1])))))))));
                                arr_33 [i_3] [i_3] [i_3] [i_3] [i_3] [i_4] [i_3] = var_7;
                                arr_34 [i_3] [i_4] [5] [i_9 + 3] = var_5;
                            }
                        }
                    }

                    /* vectorizable */
                    for (int i_10 = 0; i_10 < 11;i_10 += 1)
                    {
                        var_26 = 29249;
                        arr_38 [i_4] [i_4] [i_5] [i_5] = (var_15 >= var_5);
                        var_27 = (0 && var_15);
                        arr_39 [i_3] [i_4] [i_5] [i_4] = (((((var_12 ? var_10 : var_2))) ? (arr_17 [i_3] [i_3] [i_3] [i_4]) : var_12));
                    }
                    for (int i_11 = 1; i_11 < 8;i_11 += 1)
                    {
                        arr_42 [i_3] [i_4] [i_5] [i_4] [i_5] [i_11] = max(((~(var_16 < var_16))), ((((arr_35 [i_3] [i_3] [3] [i_4] [i_11]) && ((((var_7 + 2147483647) >> 1)))))));
                        arr_43 [i_4] [i_5] [i_4] [i_4] = var_17;
                        var_28 &= var_14;
                        arr_44 [i_4] [i_4 + 1] [i_5] [i_5] [i_11 + 3] [i_4 + 1] = var_9;
                        var_29 += (((max((((arr_1 [i_5] [i_11]) | (arr_30 [i_3] [i_3] [i_5] [i_11]))), ((max(245, -29250))))) | (arr_27 [i_3] [i_5] [i_3] [i_4 + 1] [i_3])));
                    }
                }
            }
        }
    }
    var_30 = max(var_12, (-34 == var_4));
    #pragma endscop
}
