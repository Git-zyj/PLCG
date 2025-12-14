/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 113480
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=113480 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/113480
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 23;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 0;i_1 += 1)
        {
            {
                var_11 = var_10;
                arr_4 [i_0] |= ((((max(var_1, 11484576461923619493))) ? (54130 - var_9) : ((((max(var_5, var_0))) ? (~54116) : (min((arr_3 [i_0]), (arr_2 [1] [i_0] [15])))))));
            }
        }
    }
    /* LoopNest 2 */
    for (int i_2 = 1; i_2 < 19;i_2 += 1)
    {
        for (int i_3 = 0; i_3 < 0;i_3 += 1)
        {
            {
                arr_10 [i_2] [11] [i_2] = (arr_7 [i_2 + 1]);

                /* vectorizable */
                for (int i_4 = 0; i_4 < 20;i_4 += 1)
                {
                    arr_15 [3] [i_2] [i_2] = ((((((122 || (arr_14 [i_2] [i_2] [i_4]))))) & (((var_1 + 9223372036854775807) >> 0))));
                    var_12 = (var_4 ? (-32767 - 1) : (~var_9));
                    arr_16 [i_2] [i_3 + 1] [i_2] [i_4] = ((54130 ? (arr_1 [4] [i_3]) : ((1 ? 2505206935510958547 : var_9))));
                    var_13 *= (0 ^ 54145);
                }
                for (int i_5 = 0; i_5 < 20;i_5 += 1)
                {
                    /* LoopNest 2 */
                    for (int i_6 = 2; i_6 < 17;i_6 += 1)
                    {
                        for (int i_7 = 3; i_7 < 19;i_7 += 1)
                        {
                            {
                                var_14 *= ((~((1343765930 ? 127 : 0))));
                                var_15 = ((((0 ? (arr_5 [i_2]) : var_9)) - (max((arr_21 [i_6] [i_2] [i_2] [7]), (arr_9 [i_2] [i_7])))));
                            }
                        }
                    }
                    /* LoopNest 2 */
                    for (int i_8 = 4; i_8 < 19;i_8 += 1)
                    {
                        for (int i_9 = 1; i_9 < 18;i_9 += 1)
                        {
                            {
                                arr_28 [i_2] [i_3] [1] [i_3] [i_3] = 18446744073709551599;
                                var_16 = ((((max((arr_1 [i_2] [i_2 + 1]), (arr_1 [i_2] [i_2 + 1])))) + (arr_1 [i_2] [i_2 + 1])));
                            }
                        }
                    }

                    /* vectorizable */
                    for (int i_10 = 0; i_10 < 20;i_10 += 1)
                    {
                        arr_31 [i_2] [i_10] = (((arr_26 [1] [i_5] [i_3 + 1]) * (arr_26 [i_3 + 1] [i_10] [i_3 + 1])));
                        var_17 |= ((!(arr_27 [i_2 + 1] [i_3] [i_3 + 1] [i_10] [i_10])));
                        arr_32 [17] [17] [i_2] = arr_12 [i_2] [i_3] [i_5];
                    }
                    for (int i_11 = 0; i_11 < 20;i_11 += 1)
                    {
                        var_18 = (~151);
                        var_19 = (((((arr_3 [i_2 - 1]) ? (arr_3 [i_2 - 1]) : (arr_3 [i_2 - 1])))) ? (arr_19 [i_2] [i_2] [i_2 + 1] [i_2]) : (65535 / 11406));
                        arr_36 [8] [15] [11] [i_2] = (-105 * (max((arr_3 [i_5]), (var_2 * 1))));
                    }
                    for (int i_12 = 0; i_12 < 20;i_12 += 1)
                    {
                        var_20 += (arr_8 [i_12] [i_12] [i_12]);
                        var_21 = (~-116);
                    }
                    for (int i_13 = 1; i_13 < 18;i_13 += 1)
                    {
                        var_22 = 151;

                        for (int i_14 = 0; i_14 < 20;i_14 += 1)
                        {
                            arr_44 [17] [i_2] = var_6;
                            var_23 = 1;
                        }
                        for (int i_15 = 0; i_15 < 1;i_15 += 1)
                        {
                            arr_48 [i_2] [i_2] [i_5] = (i_2 % 2 == 0) ? ((max((arr_23 [i_2] [i_3 + 1] [i_3 + 1] [i_5] [i_13 + 2] [1]), (((arr_34 [i_5] [11] [15] [i_13 + 1]) ? ((((arr_33 [13] [i_3 + 1] [i_5] [18] [i_2]) >> (((arr_41 [16] [i_3] [i_3] [i_3] [i_3] [i_3 + 1] [i_2]) - 10315))))) : (max(-7176475421698380802, var_0))))))) : ((max((arr_23 [i_2] [i_3 + 1] [i_3 + 1] [i_5] [i_13 + 2] [1]), (((arr_34 [i_5] [11] [15] [i_13 + 1]) ? ((((arr_33 [13] [i_3 + 1] [i_5] [18] [i_2]) >> (((((arr_41 [16] [i_3] [i_3] [i_3] [i_3] [i_3 + 1] [i_2]) - 10315)) - 43954))))) : (max(-7176475421698380802, var_0)))))));
                            var_24 = (arr_18 [i_2]);
                        }
                        var_25 = (min((((!(((2056677298 ? (arr_3 [i_2]) : (arr_8 [i_2] [i_2] [12]))))))), ((var_7 + (arr_7 [i_2])))));
                        var_26 ^= ((var_2 || (((var_6 % -2147483646) != var_8))));
                    }
                }
                var_27 = 170;
            }
        }
    }
    #pragma endscop
}
