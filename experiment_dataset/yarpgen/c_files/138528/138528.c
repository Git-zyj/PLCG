/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 138528
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=138528 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/138528
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 4; i_0 < 24;i_0 += 1)
    {
        for (int i_1 = 1; i_1 < 23;i_1 += 1)
        {
            {
                var_18 = (!13938);
                var_19 *= (min(((-((min(51597, 1))))), (!0)));

                for (int i_2 = 0; i_2 < 25;i_2 += 1)
                {
                    arr_8 [i_0] [18] [9] [i_1] = ((~((((arr_3 [i_0]) && (arr_5 [i_1 + 1] [14] [i_0 - 3] [i_0]))))));

                    /* vectorizable */
                    for (int i_3 = 4; i_3 < 24;i_3 += 1)
                    {
                        var_20 = (((((5 ? -7633170868153198818 : 1905863810))) == ((3666871361 ? 9338106129673961492 : (arr_3 [i_0])))));
                        var_21 = ((0 / ((628095934 ? 9338106129673961492 : -960101550952927552))));
                        arr_12 [i_1] [i_1] [1] [1] = ((-103 ? (arr_10 [i_0] [i_0 - 3] [i_0 + 1] [i_0] [i_0] [i_0 - 3]) : (arr_5 [i_3 - 4] [i_3] [i_3] [i_3 - 3])));

                        for (int i_4 = 0; i_4 < 25;i_4 += 1)
                        {
                            var_22 ^= (arr_1 [8]);
                            var_23 = (54439 && -54439);
                            var_24 = ((~(arr_3 [i_1 + 2])));
                        }
                        for (int i_5 = 0; i_5 < 25;i_5 += 1) /* same iter space */
                        {
                            var_25 = -var_9;
                            var_26 = (((var_0 >= var_8) >> ((((var_15 ? -15 : (arr_15 [i_0] [2] [3] [22] [3]))) + 32))));
                        }
                        for (int i_6 = 0; i_6 < 25;i_6 += 1) /* same iter space */
                        {
                            arr_19 [i_1] [14] = (((arr_17 [i_3] [i_2] [i_0] [i_2] [i_1 - 1] [i_0 + 1] [i_0]) | var_3));
                            var_27 = (628095934 ? ((((arr_15 [18] [i_3] [i_3] [5] [i_3]) && 226))) : (((!(arr_3 [24])))));
                            arr_20 [i_0] [i_1] [14] [i_3] [10] = (((arr_2 [i_1 + 2] [i_3 + 1] [2]) | -103));
                        }
                    }
                }
                /* vectorizable */
                for (int i_7 = 0; i_7 < 25;i_7 += 1)
                {
                    var_28 *= ((~((-(arr_10 [14] [6] [0] [i_1] [16] [i_0])))));
                    arr_24 [1] [14] [14] [i_1] = ((115 ? 1613718692981515974 : -4));
                }
                for (int i_8 = 0; i_8 < 25;i_8 += 1)
                {
                    arr_29 [i_1] = (((((arr_23 [i_0]) >= (arr_23 [9]))) ? var_5 : 10));
                    var_29 = (((var_16 - var_17) ? (13939 / -5) : var_15));
                }
                /* vectorizable */
                for (int i_9 = 1; i_9 < 24;i_9 += 1)
                {
                    var_30 *= (((13938 ? -20 : 0)));
                    var_31 = 0;
                }
                arr_32 [i_0 - 4] [i_1] [i_0] = (!var_14);
                var_32 *= 0;
            }
        }
    }
    var_33 = (((((51598 ? 51598 : 233))) ? ((((min(-2770, 115))) ? var_14 : ((var_15 ? var_8 : var_9)))) : ((max((var_0 >= var_17), 253)))));
    #pragma endscop
}
