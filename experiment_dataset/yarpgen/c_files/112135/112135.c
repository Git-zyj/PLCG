/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 112135
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=112135 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/112135
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_17 ^= ((max((min(var_15, 107)), ((16384 ? -427790586 : 4095)))));

    for (int i_0 = 2; i_0 < 23;i_0 += 1)
    {
        arr_2 [13] [i_0] = (min(var_9, ((min((arr_0 [i_0] [i_0]), -var_14)))));
        var_18 *= 240;
        var_19 = ((((min(var_16, 127))) ? ((42 ? var_12 : 1)) : ((max(233, 5)))));

        for (int i_1 = 0; i_1 < 24;i_1 += 1)
        {
            var_20 -= var_12;
            var_21 = var_11;
        }
        for (int i_2 = 0; i_2 < 0;i_2 += 1)
        {
            /* LoopNest 2 */
            for (int i_3 = 0; i_3 < 24;i_3 += 1)
            {
                for (int i_4 = 0; i_4 < 24;i_4 += 1)
                {
                    {
                        var_22 = ((((((2147483647 + -37) ? ((min(92, var_13))) : var_1))) ? ((max(105, var_9))) : var_0));
                        arr_12 [i_4] [i_0] [i_0] [i_0] = (max((((max((arr_6 [i_0]), 967144599)) >> (((((var_2 + 2147483647) >> 17)) - 4860)))), ((((arr_0 [i_0] [i_0]) || (arr_9 [i_3] [i_2] [i_0 - 1]))))));

                        for (int i_5 = 2; i_5 < 21;i_5 += 1)
                        {
                            var_23 = (arr_8 [i_0] [i_2]);
                            arr_16 [i_0] [i_0] [i_0] [i_0] = 254;
                            var_24 = ((((max((arr_4 [i_4] [i_5 + 3]), (min(var_16, 28638))))) ? ((((!(arr_7 [i_0] [i_0]))))) : ((var_12 ? (max((arr_11 [i_0] [i_2] [i_2] [i_5]), var_16)) : 1200463535))));
                        }

                        /* vectorizable */
                        for (int i_6 = 0; i_6 < 0;i_6 += 1)
                        {
                            var_25 = ((!(((-183404199 ? 1 : 1)))));
                            arr_20 [i_0] [i_0] [i_3] = ((var_9 << (((((arr_5 [i_3] [i_6 + 1] [i_6]) + 804483069)) - 56))));
                            arr_21 [i_0] [i_0] [i_3] [i_0] [i_6] [i_6] [i_4] = var_15;
                        }
                        for (int i_7 = 1; i_7 < 22;i_7 += 1)
                        {
                            arr_25 [i_0] [i_0] [i_0] [18] [i_7] = var_0;
                            arr_26 [i_7 + 1] [i_4] [i_0] [i_0] [i_0] [i_0] = (arr_15 [i_0] [i_2] [i_7 + 1] [i_2] [i_7] [i_2] [i_7]);
                            arr_27 [i_0] [i_2] [i_3] = (min((((!27745) << (var_6 - 7103215447489962688))), (arr_4 [i_0] [i_4])));
                        }
                    }
                }
            }
            /* LoopNest 2 */
            for (int i_8 = 0; i_8 < 1;i_8 += 1)
            {
                for (int i_9 = 0; i_9 < 24;i_9 += 1)
                {
                    {

                        /* vectorizable */
                        for (int i_10 = 0; i_10 < 24;i_10 += 1)
                        {
                            var_26 *= (((52 ? 2147483647 : 32001)));
                            var_27 = (arr_23 [i_0] [i_0 - 2] [i_10] [i_0] [5]);
                            arr_34 [i_0 - 2] [i_2 + 1] [i_2 + 1] [4] [i_9] &= ((2147483647 || (-92 % -67)));
                        }
                        arr_35 [i_0 - 1] [i_2] [i_8] [i_9] [i_0] = (arr_1 [i_0] [i_0]);
                    }
                }
            }
            arr_36 [i_0 - 2] [1] [0] &= (min(127, ((((min(1, (arr_0 [i_2] [i_0])))) * (var_13 * var_0)))));
            /* LoopNest 3 */
            for (int i_11 = 0; i_11 < 24;i_11 += 1)
            {
                for (int i_12 = 0; i_12 < 1;i_12 += 1)
                {
                    for (int i_13 = 0; i_13 < 24;i_13 += 1)
                    {
                        {
                            var_28 -= (((arr_37 [i_2] [i_13]) != (min(var_0, ((var_4 ? (arr_31 [i_0 - 1] [i_2 + 1] [i_0 - 1] [i_12] [i_12] [i_13]) : -28209))))));
                            arr_43 [i_0] [i_0] [i_0] [i_12] = ((((max((((arr_8 [i_12] [i_2 + 1]) - (arr_9 [i_2 + 1] [i_11] [i_13]))), 39))) ? (arr_14 [i_0 + 1] [i_0 + 1]) : ((((arr_15 [i_0] [i_2 + 1] [16] [i_0] [i_13] [i_2] [i_2 + 1]) < (arr_15 [i_13] [i_11] [i_12] [i_11] [i_11] [i_2 + 1] [i_0 - 1]))))));
                            var_29 = (min(1200463546, (~11)));
                        }
                    }
                }
            }
        }
    }
    #pragma endscop
}
