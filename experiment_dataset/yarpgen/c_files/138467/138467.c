/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 138467
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=138467 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/138467
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_10 = ((62413 ? 65535 : 3149));
    /* LoopNest 3 */
    for (int i_0 = 3; i_0 < 22;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 1;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 23;i_2 += 1)
            {
                {
                    arr_6 [i_1] [i_1] [i_1] = ((((+((var_3 ? (arr_0 [i_2]) : (arr_5 [i_0] [i_1] [i_2]))))) > ((((!(~2)))))));
                    /* LoopNest 2 */
                    for (int i_3 = 0; i_3 < 23;i_3 += 1)
                    {
                        for (int i_4 = 0; i_4 < 1;i_4 += 1)
                        {
                            {
                                var_11 &= ((65535 ? ((~(~5657667555022086903))) : (arr_11 [i_3])));
                                var_12 = (!50947);
                            }
                        }
                    }

                    for (int i_5 = 0; i_5 < 23;i_5 += 1)
                    {
                        var_13 &= (((((!-6497) ? 12747408822560161370 : 18446744073709551615)) >= 0));
                        arr_15 [i_2] [i_2] [i_2] [i_1] [i_2] = (arr_8 [i_5] [i_5] [i_1]);
                    }
                    /* vectorizable */
                    for (int i_6 = 0; i_6 < 0;i_6 += 1)
                    {
                        arr_18 [i_0 + 1] [i_1] [i_2] [i_6 + 1] = (arr_12 [i_0 + 1] [i_6 + 1] [i_2] [i_1]);
                        arr_19 [i_0] [i_1] [i_1] [i_1] [i_2] [i_6] = ((31744 <= (arr_12 [7] [4] [i_0 - 1] [i_1])));
                        arr_20 [8] [8] &= (((((arr_12 [i_0] [i_1] [i_2] [8]) >= var_7)) ? (arr_10 [21] [21] [i_2] [i_6] [i_6]) : (arr_12 [i_0 - 3] [i_1] [i_2] [4])));
                        var_14 = (max(var_14, (((~(arr_12 [i_0 - 1] [i_1] [i_2] [6]))))));
                    }
                    for (int i_7 = 0; i_7 < 1;i_7 += 1)
                    {

                        for (int i_8 = 0; i_8 < 23;i_8 += 1) /* same iter space */
                        {
                            var_15 = 5657667555022086903;
                            arr_29 [i_0] [i_1] [i_2] [i_1] [i_8] = ((((var_9 && (arr_16 [i_1] [i_2] [i_7] [i_1])))));
                            var_16 = ((-((((arr_0 [i_0 + 1]) == (arr_0 [i_0 - 1]))))));
                        }
                        for (int i_9 = 0; i_9 < 23;i_9 += 1) /* same iter space */
                        {
                            arr_34 [i_1] [i_1] = ((((((var_0 >> (arr_4 [i_1] [i_2] [i_1] [i_9]))) * (((!(arr_17 [i_1] [i_0 + 1] [i_1] [i_2] [i_7] [i_9])))))) & 43166));
                            arr_35 [i_0] [i_1] [i_7] [i_0] [i_1] [i_1] = (((~(arr_14 [i_0] [i_0] [i_1] [i_0]))));
                            arr_36 [i_0] [i_1] = (((((arr_10 [i_0] [i_0] [i_2] [i_7] [i_9]) ? (arr_12 [i_0] [i_2] [9] [i_1]) : var_1)) > (arr_4 [i_0] [i_1] [i_1] [i_1])));
                        }
                        for (int i_10 = 0; i_10 < 23;i_10 += 1) /* same iter space */
                        {
                            var_17 = (max(var_17, 2002186159));
                            arr_41 [i_1] [i_7] [i_2] [i_1] [i_1] = (min(2251799813423104, 77));
                            var_18 = ((((((arr_7 [i_1] [i_0] [i_1] [i_1]) / (arr_9 [i_0 - 1] [i_1] [i_0 - 1] [i_1]))) | ((min(var_3, var_6))))));
                            arr_42 [i_0] [i_2] [i_1] [i_10] = (!1);
                            var_19 = (arr_5 [i_0] [1] [i_0]);
                        }
                        var_20 -= min((((arr_17 [4] [i_1] [i_1] [1] [1] [i_7]) ? (((arr_24 [i_0] [0] [0] [0]) ? var_4 : (arr_5 [i_1] [i_2] [i_7]))) : ((((arr_39 [i_0 + 1] [i_0] [8] [14] [i_0]) ? (arr_0 [i_0]) : var_7))))), (((!((min((arr_32 [14] [14] [i_2] [i_7]), var_1)))))));
                        arr_43 [i_1] [i_2] [i_1] [i_1] = max(((max((arr_5 [i_0 - 2] [i_0 - 1] [i_0 - 1]), (arr_0 [i_0 - 2])))), (var_9 * 9223372036854775782));
                    }
                }
            }
        }
    }
    var_21 = (var_2 * 6);
    #pragma endscop
}
