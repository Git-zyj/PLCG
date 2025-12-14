/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 12985
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=12985 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/12985
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_17 = var_5;
    var_18 = (max(var_16, var_6));
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 13;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 13;i_1 += 1)
        {
            {

                /* vectorizable */
                for (int i_2 = 0; i_2 < 13;i_2 += 1)
                {
                    var_19 *= (arr_3 [i_0] [i_1] [i_2]);
                    arr_6 [i_2] [i_1] [12] [i_0] = (((~var_0) <= (arr_0 [i_0])));
                    /* LoopNest 2 */
                    for (int i_3 = 0; i_3 < 13;i_3 += 1)
                    {
                        for (int i_4 = 0; i_4 < 13;i_4 += 1)
                        {
                            {
                                arr_13 [i_0] [i_1] [i_2] [i_3] [i_4] = (arr_0 [i_0]);
                                arr_14 [i_3] = ((!(((63002 ? var_0 : 0)))));
                                var_20 = (min(var_20, (((var_1 <= 17997930715361779562) ? (((arr_2 [i_0]) + -8955)) : (((-(arr_12 [10] [i_1] [i_2] [i_2] [9]))))))));
                                var_21 += ((63024 ^ ((-8955 ? -1937332339 : (arr_10 [i_2])))));
                            }
                        }
                    }
                }
                for (int i_5 = 0; i_5 < 13;i_5 += 1)
                {

                    for (int i_6 = 0; i_6 < 13;i_6 += 1) /* same iter space */
                    {
                        var_22 = (min(var_22, (((var_11 * (min((arr_3 [i_0] [i_0] [i_0]), 17997930715361779562)))))));
                        arr_20 [i_0] [i_0] [3] [i_0] [i_5] [i_5] = ((!(((24 ? (arr_15 [i_6] [i_6] [i_5] [i_0]) : ((max((arr_19 [i_0] [i_6] [i_5] [3]), 576460750155939840))))))));
                        var_23 = (max(var_23, (((((min(65535, (arr_18 [i_0] [i_6] [i_5] [i_6] [i_5] [i_0])))) / ((max(196, (arr_18 [i_0] [i_0] [i_5] [i_1] [i_5] [i_5])))))))));
                    }
                    for (int i_7 = 0; i_7 < 13;i_7 += 1) /* same iter space */
                    {
                        arr_25 [i_7] [i_5] [i_0] = 17356752721060527395;
                        arr_26 [i_0] [i_5] [i_0] [i_7] = (arr_19 [i_0] [i_1] [i_5] [i_7]);
                        arr_27 [i_5] [i_1] [i_1] [i_1] [i_1] = 7977276502142609896;
                        var_24 = (max(var_24, (((((((var_9 / 576460750155939841) <= ((min(63002, var_3)))))) << (((((((9223372036854775807 ? (arr_16 [i_0] [i_1]) : 576460750155939840))) ? (arr_19 [i_0] [i_1] [i_5] [i_7]) : -1663143179)) - 800815362)))))));
                    }
                    arr_28 [i_5] = (--62);
                    arr_29 [i_5] [i_5] [i_5] [6] = (((arr_4 [i_1] [7] [i_5] [i_5]) || (((max(448813358347772053, (arr_2 [i_0]))) <= ((((((arr_17 [3] [i_1] [i_0]) + 2147483647)) << (576460750155939840 - 576460750155939840))))))));
                }
                var_25 = (max(var_25, (arr_1 [i_0])));
                /* LoopNest 2 */
                for (int i_8 = 0; i_8 < 13;i_8 += 1)
                {
                    for (int i_9 = 0; i_9 < 13;i_9 += 1)
                    {
                        {
                            arr_35 [i_9] = (min((min(-9223372036854775807, ((var_15 ? var_7 : var_0)))), (arr_31 [i_0] [11] [i_8])));
                            arr_36 [i_8] [i_1] [i_8] [i_8] [i_9] [i_9] = (((--1) ^ -51987));
                            var_26 = (max((((arr_0 [i_0]) | (arr_0 [i_1]))), ((min(64, (arr_0 [i_0]))))));
                        }
                    }
                }
                var_27 = 32764;
            }
        }
    }
    #pragma endscop
}
