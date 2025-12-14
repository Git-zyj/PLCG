/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 169912
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=169912 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/169912
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_15 = ((!((max(var_4, var_11)))));
    /* LoopNest 3 */
    for (int i_0 = 1; i_0 < 19;i_0 += 1)
    {
        for (int i_1 = 3; i_1 < 18;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 22;i_2 += 1)
            {
                {
                    arr_10 [i_0] [13] [13] [i_2] = (((((17791 * (65535 < -14987)))) ? ((((((4355 ? 8876690598267470643 : 27907))) ? (1 + -443589007) : -31386))) : (10321462128495367958 / 65523)));
                    /* LoopNest 2 */
                    for (int i_3 = 2; i_3 < 20;i_3 += 1)
                    {
                        for (int i_4 = 0; i_4 < 22;i_4 += 1)
                        {
                            {
                                var_16 *= ((((((arr_12 [i_2] [i_1] [i_1] [i_4] [20] [i_4]) ? var_14 : var_11))) && (27910 < 12815293648940646434)));
                                var_17 = (((((max(65535, var_7)))) ? (arr_14 [i_0] [i_3] [i_1] [3] [i_1 - 2]) : (min((var_10 / var_14), 1))));
                            }
                        }
                    }
                    var_18 = ((~(~var_6)));

                    for (int i_5 = 2; i_5 < 20;i_5 += 1)
                    {
                        var_19 = (((((((arr_4 [i_0] [i_1] [i_1 + 4]) < (arr_4 [3] [i_1] [i_1 - 3]))))) * (max((!var_2), (min(17996806323437568, var_10))))));

                        for (int i_6 = 0; i_6 < 22;i_6 += 1)
                        {
                            var_20 = min(2020664054, 27907);
                            var_21 = ((((1287129821 ? 17996806323437568 : 4971)) >= (((((((var_8 - (arr_21 [i_0])))) != var_10))))));
                        }
                        /* vectorizable */
                        for (int i_7 = 0; i_7 < 22;i_7 += 1)
                        {
                            arr_24 [i_5 - 1] [i_7] = ((((var_14 != (arr_4 [i_1] [i_2] [i_7]))) ? (var_12 & var_11) : (((!(arr_2 [i_2] [i_2] [i_2]))))));
                            arr_25 [i_0] [18] = (((var_10 * var_13) ? var_11 : var_1));
                        }
                        for (int i_8 = 3; i_8 < 19;i_8 += 1)
                        {
                            var_22 = (((var_1 ? ((-(arr_6 [16] [i_5 - 2])) : -var_7))));
                            var_23 = (arr_17 [i_0 + 3] [10] [i_1 + 3] [i_1 + 3] [i_1 + 3] [i_8]);
                            var_24 = (max(var_24, ((((~var_11) ? (~var_0) : ((var_14 ? (arr_9 [i_1 + 2] [i_1] [i_1 - 2]) : var_5)))))));
                            var_25 = max((((arr_6 [i_0] [i_0]) ? (((min(8, var_11)))) : var_2)), (max(var_8, ((var_2 ? var_1 : var_14)))));
                        }
                        var_26 &= (max(((((min(var_2, var_8)) < var_8))), (((arr_22 [i_0] [i_1 + 4] [i_2]) ? (arr_15 [i_1 + 2] [i_0] [6] [6]) : var_0))));
                    }
                    for (int i_9 = 0; i_9 < 22;i_9 += 1)
                    {
                        arr_30 [i_0] [i_0] = (((max(((((arr_8 [i_1] [19] [6]) != var_8))), var_5)) > (((1 - 2103082695236079799) ? (((var_9 ? var_11 : (arr_9 [i_0] [i_1] [i_0])))) : (arr_29 [i_1] [i_1] [i_1] [i_1 - 3])))));
                        var_27 = (((max((((var_12 ? (arr_27 [i_0] [i_0] [i_0] [i_0 + 3] [i_0]) : -98))), (arr_14 [i_9] [i_2] [i_1 + 3] [i_2] [i_0]))) <= (max(((var_7 ? var_0 : var_5)), (max(var_10, var_3))))));
                        var_28 = (max((arr_9 [i_1 - 3] [i_1] [i_1]), (((arr_7 [21] [14] [i_2]) >> (((min(var_7, 1287129821)) - 1287129810))))));
                    }
                }
            }
        }
    }
    #pragma endscop
}
