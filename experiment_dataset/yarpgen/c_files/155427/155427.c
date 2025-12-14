/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 155427
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=155427 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/155427
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_14 = (((((~var_11) ? (var_9 + var_2) : (var_6 + var_4)))) ? (((((var_4 ? var_3 : var_5))) * -var_2)) : ((((!(10761960955978544780 && 17040690425968820177))))));

    /* vectorizable */
    for (int i_0 = 0; i_0 < 13;i_0 += 1)
    {
        var_15 = (((17040690425968820181 ? (arr_2 [i_0] [i_0]) : 4764871402667746431)));
        arr_4 [i_0] = (arr_2 [i_0] [i_0]);
        /* LoopNest 2 */
        for (int i_1 = 1; i_1 < 11;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 13;i_2 += 1)
            {
                {
                    /* LoopNest 2 */
                    for (int i_3 = 0; i_3 < 13;i_3 += 1)
                    {
                        for (int i_4 = 3; i_4 < 12;i_4 += 1)
                        {
                            {
                                arr_16 [i_0] [i_1] [12] [i_2] [i_1] [i_1] [i_4] = ((!(arr_1 [i_0])));
                                var_16 = (((arr_14 [11] [4] [i_1] [11]) ? (arr_8 [i_3]) : ((var_5 ? (arr_3 [i_2] [i_2]) : var_12))));
                            }
                        }
                    }
                    arr_17 [i_1] = (((arr_8 [i_2]) & (((((arr_10 [i_0] [i_1 - 1] [6]) && (arr_12 [i_2] [i_1] [10] [i_2])))))));
                    /* LoopNest 2 */
                    for (int i_5 = 0; i_5 < 13;i_5 += 1)
                    {
                        for (int i_6 = 0; i_6 < 13;i_6 += 1)
                        {
                            {
                                var_17 = var_3;
                                arr_22 [i_0] [i_0] [i_0] [11] [i_5] [i_1] = (((3363864699 * (arr_3 [1] [i_1]))));
                                var_18 = ((var_5 ? var_6 : (arr_10 [0] [0] [i_6])));
                                var_19 -= ((var_4 ? (arr_10 [i_0] [i_1] [i_5]) : (arr_11 [9] [i_1 + 2] [i_1 + 1] [i_1 - 1] [i_1 + 2])));
                            }
                        }
                    }

                    for (int i_7 = 0; i_7 < 13;i_7 += 1)
                    {
                        var_20 = (arr_13 [i_7] [i_0] [i_7] [i_7] [i_0] [i_1]);

                        for (int i_8 = 0; i_8 < 13;i_8 += 1)
                        {
                            arr_28 [i_8] [i_8] [i_2] |= var_11;
                            var_21 *= (((!(arr_2 [i_7] [i_8]))));
                            arr_29 [8] [i_1] [8] [8] [i_7] [i_7] [i_8] = (arr_8 [i_1 + 2]);
                        }
                    }
                    for (int i_9 = 0; i_9 < 13;i_9 += 1)
                    {
                        arr_34 [i_0] [i_0] [i_1] [i_0] = ((-(arr_31 [i_1 - 1] [i_1 - 1])));
                        var_22 = var_0;
                    }
                }
            }
        }
        var_23 ^= var_3;
    }
    #pragma endscop
}
