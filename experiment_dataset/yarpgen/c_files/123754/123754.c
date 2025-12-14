/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 123754
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=123754 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/123754
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_14 = (min(var_0, ((((max(22, var_0))) ? var_0 : (var_11 / -39)))));
    var_15 = var_0;
    var_16 |= var_2;
    /* LoopNest 3 */
    for (int i_0 = 0; i_0 < 17;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 17;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 17;i_2 += 1)
            {
                {
                    var_17 = max(((((41115 >= 32765) ? 53 : var_1))), (max(-var_8, (min(0, 121)))));
                    var_18 = (max(var_18, (~var_6)));

                    for (int i_3 = 0; i_3 < 17;i_3 += 1)
                    {
                        var_19 -= (max((((!(arr_7 [i_0])))), (((-9 + 9223372036854775807) << (((arr_7 [i_1]) - 232))))));
                        var_20 = (max(var_20, 85));
                        arr_8 [i_0] = ((((max((arr_1 [i_3] [i_1]), var_5))) ? ((792727731 ? -23593 : (arr_0 [i_0]))) : (arr_5 [i_0] [i_1] [i_2] [i_3])));
                    }
                    for (int i_4 = 0; i_4 < 17;i_4 += 1)
                    {
                        var_21 = var_10;
                        var_22 = (((arr_2 [i_0] [i_0]) ? ((min(var_6, (arr_7 [i_0])))) : ((7804382550724066051 << (185 - 185)))));

                        for (int i_5 = 0; i_5 < 17;i_5 += 1)
                        {
                            arr_16 [i_0] [i_1] [i_2] [i_2] [i_4] [i_5] [i_5] = var_3;
                            var_23 ^= (((((((max(-2486953197505843623, -6657))) ? ((((0 == (arr_9 [i_1]))))) : -1))) ? (arr_15 [i_5] [i_4]) : -4));
                            arr_17 [i_2] [i_2] [i_2] [i_2] [i_2] [i_2] [i_2] = ((((((arr_15 [i_2] [i_0]) ? (arr_14 [i_1] [i_2]) : (arr_15 [i_2] [i_1])))) ? (arr_15 [i_2] [i_5]) : (arr_15 [i_1] [i_5])));
                            arr_18 [i_0] [i_4] [i_2] [i_2] [i_5] = ((((((-(arr_6 [i_0] [i_1] [i_2] [i_5]))))) ? (~var_8) : ((((9223372036854775796 - 19) >= (arr_4 [i_0] [i_0]))))));
                        }
                        for (int i_6 = 0; i_6 < 17;i_6 += 1) /* same iter space */
                        {
                            var_24 = (((arr_5 [i_0] [i_0] [i_0] [i_0]) << (((((28618 ? (arr_11 [i_0] [i_1] [i_4]) : 105)) == (max(var_9, (arr_12 [i_0] [i_1] [i_2]))))))));
                            var_25 = (arr_15 [i_4] [i_2]);
                            arr_23 [i_0] [i_0] [i_6] [i_0] = (((24420 ^ (arr_14 [i_0] [i_1]))));
                        }
                        for (int i_7 = 0; i_7 < 17;i_7 += 1) /* same iter space */
                        {
                            var_26 = 117;
                            arr_28 [i_0] [i_0] [i_1] [i_7] [i_2] [i_4] [i_7] = (min((arr_24 [i_0] [i_0] [i_7] [i_1] [i_2] [i_4] [i_7]), -108));
                            var_27 = (((~var_2) - (((max((arr_6 [i_0] [i_1] [i_2] [i_4]), (arr_19 [i_0] [i_1] [i_1] [i_2] [i_4] [i_7] [i_7])))))));
                        }
                    }
                }
            }
        }
    }
    #pragma endscop
}
