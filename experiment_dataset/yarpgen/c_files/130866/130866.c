/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 130866
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=130866 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/130866
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    /* vectorizable */
    for (int i_0 = 0; i_0 < 21;i_0 += 1)
    {
        /* LoopNest 2 */
        for (int i_1 = 0; i_1 < 21;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 21;i_2 += 1)
            {
                {

                    for (int i_3 = 3; i_3 < 20;i_3 += 1)
                    {
                        var_10 = (min(var_10, ((((9223372036854775807 - 9223372036854775807) / (arr_3 [i_3 - 2] [i_3 - 1]))))));
                        arr_11 [i_1] [i_1] [i_1] = (246 / (((arr_5 [i_0] [i_1] [i_1]) ? (arr_5 [i_1] [i_2] [i_1]) : 9223372036854775807)));
                        var_11 = 27749;
                    }
                    for (int i_4 = 1; i_4 < 18;i_4 += 1)
                    {
                        var_12 = (max(var_12, (arr_5 [i_0] [i_0] [1])));

                        for (int i_5 = 2; i_5 < 20;i_5 += 1)
                        {
                            var_13 = ((-(arr_6 [i_5 + 1] [i_4 + 1] [i_4 + 1])));
                            arr_18 [i_5 - 2] [i_4] [2] [6] [i_0] &= (+-239);
                            arr_19 [10] [i_1] [4] [i_4] [i_5 - 2] |= arr_2 [2];
                            var_14 = (((arr_1 [i_4 + 1]) != (arr_1 [i_4 - 1])));
                        }
                        for (int i_6 = 0; i_6 < 21;i_6 += 1)
                        {
                            var_15 = 246;
                            var_16 = ((!(arr_1 [i_4 + 2])));
                        }
                        for (int i_7 = 0; i_7 < 21;i_7 += 1)
                        {
                            arr_25 [i_1] = ((-(arr_24 [i_4 - 1] [i_0] [4] [i_0])));
                            var_17 = ((63694 ? -27749 : 180));
                        }
                        for (int i_8 = 0; i_8 < 21;i_8 += 1)
                        {
                            var_18 = (min(var_18, 0));
                            var_19 = (arr_28 [i_1] [i_1] [i_4 + 2] [i_4] [i_4] [i_4 + 1]);
                        }
                    }
                    for (int i_9 = 0; i_9 < 1;i_9 += 1)
                    {
                        var_20 = (((17 ? 255 : (arr_20 [i_1] [i_0] [i_9] [i_9] [i_9]))));
                        arr_32 [i_9] [i_1] = (i_1 % 2 == zero) ? ((((((arr_2 [i_1]) / (arr_1 [i_0]))) << (((arr_4 [12] [i_1] [i_2] [i_9]) - 104))))) : ((((((((arr_2 [i_1]) / (arr_1 [i_0]))) + 9223372036854775807)) << (((((arr_4 [12] [i_1] [i_2] [i_9]) - 104)) - 2)))));
                    }
                    /* LoopNest 2 */
                    for (int i_10 = 0; i_10 < 21;i_10 += 1)
                    {
                        for (int i_11 = 4; i_11 < 17;i_11 += 1)
                        {
                            {
                                var_21 += (15325 % -835966443);
                                var_22 = ((~(arr_35 [i_11 - 2] [i_11] [i_11 - 2] [i_11 - 2] [i_11 - 2])));
                                var_23 = (min(var_23, 50211));
                            }
                        }
                    }
                    var_24 = (max(var_24, (arr_29 [i_0] [i_1] [i_2] [i_2])));
                }
            }
        }
        arr_38 [i_0] [i_0] = ((1 << (((9223372036854775807 | 33563) - 9223372036854775782))));
    }
    for (int i_12 = 0; i_12 < 11;i_12 += 1)
    {
        arr_43 [i_12] [i_12] |= -30610;
        var_25 = (-(((arr_30 [i_12] [i_12] [i_12] [i_12]) ? (arr_23 [i_12] [i_12] [i_12] [i_12] [1] [16]) : (arr_30 [i_12] [i_12] [i_12] [i_12]))));
    }
    var_26 = 1967534332;
    var_27 = var_0;
    #pragma endscop
}
