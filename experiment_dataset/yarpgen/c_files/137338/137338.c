/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 137338
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=137338 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/137338
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_12 = (min(var_1, var_10));
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 22;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 22;i_1 += 1)
        {
            {
                arr_5 [12] [i_0] [i_0] |= max((((var_7 > var_8) | ((var_7 >> (-69 + 99))))), var_6);
                /* LoopNest 2 */
                for (int i_2 = 0; i_2 < 22;i_2 += 1)
                {
                    for (int i_3 = 0; i_3 < 22;i_3 += 1)
                    {
                        {
                            arr_12 [i_2] = (max(((min(var_7, (arr_0 [i_2] [i_3])))), (~1896864209)));
                            var_13 = ((((max((!1896864189), (arr_0 [i_1] [5])))) ? -1896864225 : (!-109)));
                            arr_13 [i_0] [i_0] [i_0] [i_0] [i_0] [i_2] = ((!(142 && 179)));
                        }
                    }
                }

                for (int i_4 = 0; i_4 < 22;i_4 += 1)
                {
                    var_14 = 1896864213;
                    var_15 = max((min((arr_3 [i_0] [i_0] [i_4]), (((arr_0 [i_1] [i_1]) ? var_1 : 106)))), (arr_17 [i_0] [i_1] [3]));
                }
                for (int i_5 = 0; i_5 < 22;i_5 += 1)
                {
                    arr_20 [i_0] [i_0] [i_5] [i_1] = ((!(var_8 <= 93)));
                    var_16 = (max(var_16, (((max((arr_7 [12] [i_1] [i_1] [i_5]), ((-436043158 ? (arr_11 [i_0] [i_5]) : (arr_1 [i_0])))))))));
                    var_17 += (min(((min(106, -7))), (~82)));
                    /* LoopNest 2 */
                    for (int i_6 = 0; i_6 < 22;i_6 += 1)
                    {
                        for (int i_7 = 0; i_7 < 22;i_7 += 1)
                        {
                            {
                                var_18 *= (max(var_2, ((-12 ? 72 : 107))));
                                arr_26 [i_0] [i_0] [i_0] [i_0] [i_0] [i_0] = ((((min(1996411116, -22))) != var_3));
                                var_19 = (max((arr_15 [i_0] [i_1] [i_7]), (arr_10 [i_0] [i_0] [i_0] [i_0])));
                            }
                        }
                    }

                    for (int i_8 = 0; i_8 < 22;i_8 += 1)
                    {
                        var_20 -= ((var_2 ? (((!(arr_7 [i_0] [i_8] [i_5] [6])))) : var_1));
                        arr_29 [15] = 88;
                        var_21 = (min(var_21, var_0));
                    }
                }
                /* LoopNest 3 */
                for (int i_9 = 0; i_9 < 22;i_9 += 1)
                {
                    for (int i_10 = 0; i_10 < 22;i_10 += 1)
                    {
                        for (int i_11 = 0; i_11 < 22;i_11 += 1)
                        {
                            {
                                var_22 = (max(var_22, ((((1165762648 | 0) ? 76 : 87)))));
                                var_23 = (((((arr_27 [i_11] [i_9] [i_1] [i_0]) ? (arr_27 [i_0] [i_1] [i_9] [i_10]) : var_3)) > ((min((min((arr_1 [i_1]), (arr_32 [i_1]))), var_10)))));
                            }
                        }
                    }
                }
            }
        }
    }
    var_24 = (((((-28 ? 98 : 109)) / var_10)));
    var_25 -= var_5;
    var_26 = (((min(((max(var_6, var_8))), 177))) ? (var_1 - var_3) : ((-1 ? var_10 : 253)));
    #pragma endscop
}
