/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 182716
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=182716 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/182716
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_20 = (max(var_20, ((((((((((var_4 ? var_13 : var_15))) || var_0)))) * var_17)))));
    /* LoopNest 2 */
    for (int i_0 = 3; i_0 < 17;i_0 += 1)
    {
        for (int i_1 = 1; i_1 < 20;i_1 += 1)
        {
            {
                var_21 = var_2;
                var_22 = (((arr_3 [i_0] [i_0] [i_0]) ? (((-2039525746 % ((min((arr_3 [i_1] [i_0 + 2] [i_0 + 4]), (arr_2 [i_0]))))))) : (max((min(-2039525748, 104877576037772436)), (arr_2 [i_0])))));
            }
        }
    }
    var_23 = 480;
    /* LoopNest 3 */
    for (int i_2 = 4; i_2 < 15;i_2 += 1)
    {
        for (int i_3 = 2; i_3 < 15;i_3 += 1)
        {
            for (int i_4 = 0; i_4 < 17;i_4 += 1)
            {
                {
                    /* LoopNest 2 */
                    for (int i_5 = 0; i_5 < 17;i_5 += 1)
                    {
                        for (int i_6 = 0; i_6 < 17;i_6 += 1)
                        {
                            {
                                var_24 &= (max(((((((38 < (arr_14 [i_2] [i_6] [i_4] [i_5]))))) + (arr_7 [i_6]))), (((-821868237 ? 14178 : 15728)))));
                                var_25 = arr_9 [i_3] [i_4] [i_6];
                                var_26 = (min(var_26, (((((max(var_19, ((((arr_14 [i_2] [i_3] [i_4] [12]) <= -3400922515459635492)))))) - (min((max(-50797875, (arr_17 [i_2] [i_2] [i_2 - 2] [4] [i_2]))), (max((arr_18 [i_3] [i_3 - 1] [i_4] [4] [i_6]), (arr_3 [12] [1] [i_3]))))))))));
                            }
                        }
                    }
                    var_27 = (min(var_27, var_7));
                    var_28 = ((((((arr_10 [i_2] [i_2 + 1] [i_2]) ? (arr_3 [i_4] [i_3] [i_2]) : (((!(arr_14 [i_2 + 2] [i_3] [i_2 + 2] [16]))))))) ? (((!(arr_8 [7] [i_2 - 2])))) : (arr_13 [i_2 + 2] [i_3] [i_3])));

                    /* vectorizable */
                    for (int i_7 = 0; i_7 < 17;i_7 += 1)
                    {
                        var_29 = (max(var_29, (arr_9 [i_3 - 1] [i_3 + 2] [i_3 + 1])));
                        var_30 = (arr_12 [i_7] [13] [i_2 + 1]);

                        for (int i_8 = 0; i_8 < 17;i_8 += 1)
                        {
                            var_31 |= (arr_7 [i_2 + 2]);
                            var_32 *= (((arr_15 [i_2 - 1] [i_2 - 1] [i_4] [i_2 - 1] [i_2 - 4]) ? (arr_15 [i_2] [i_3 + 1] [i_4] [i_7] [i_8]) : (arr_15 [i_2 - 2] [i_2 - 2] [i_4] [15] [i_2 - 2])));
                        }
                    }
                    /* vectorizable */
                    for (int i_9 = 0; i_9 < 17;i_9 += 1)
                    {
                        var_33 = (arr_15 [7] [1] [i_4] [i_3] [i_2]);

                        for (int i_10 = 0; i_10 < 17;i_10 += 1)
                        {
                            var_34 = (max(var_34, (~var_19)));
                            var_35 = ((!(arr_18 [i_3 - 1] [i_3 - 1] [i_2 - 3] [i_10] [i_10])));
                            var_36 = -93;
                        }
                        var_37 = (arr_23 [i_2 - 1]);
                    }
                }
            }
        }
    }
    #pragma endscop
}
