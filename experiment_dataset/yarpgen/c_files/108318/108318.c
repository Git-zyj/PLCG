/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 108318
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=108318 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/108318
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_11 *= min(8388607, 11145);
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 23;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 23;i_1 += 1)
        {
            {
                arr_6 [i_0] = (((arr_5 [i_0] [i_0] [i_0]) - (var_9 && var_2)));
                arr_7 [i_0] [i_1] [i_0] = 8388592;

                for (int i_2 = 0; i_2 < 23;i_2 += 1)
                {
                    var_12 = ((((((arr_5 [i_0] [i_0] [i_0]) | (arr_5 [i_0] [i_0] [i_0])))) && (arr_5 [i_1] [i_1] [i_1])));
                    var_13 = ((var_3 ? (min(((var_1 ? var_1 : 14988)), -var_8)) : (((-(arr_4 [i_2]))))));
                    var_14 *= (arr_5 [i_0] [i_0] [i_0]);
                    var_15 = -0;
                }
                for (int i_3 = 3; i_3 < 20;i_3 += 1)
                {
                    var_16 = (max(var_16, var_5));
                    var_17 = -var_8;
                    var_18 = (max(var_18, 4286578688));

                    for (int i_4 = 0; i_4 < 23;i_4 += 1)
                    {
                        arr_15 [i_4] [i_3] [i_3] [i_0] = (max(((~(arr_13 [i_0] [i_3 + 2] [i_3 + 1] [i_4] [i_3 + 2] [i_4]))), ((~(arr_13 [i_0] [i_3 - 3] [i_3 + 3] [i_3 - 3] [i_3] [i_3])))));

                        for (int i_5 = 1; i_5 < 22;i_5 += 1)
                        {
                            arr_20 [i_0] [i_3] [i_0] [i_0] [i_0] = (arr_19 [i_5 + 1] [i_3] [i_3] [i_3] [i_0]);
                            arr_21 [i_3] [i_1] [i_1] [i_4] [i_5] = ((((((((1 ? 22 : 4286578691))) ? (-1209592866 && 8388604) : (-9223372036854775807 - 1)))) ? (((((arr_9 [i_5 + 1] [i_5 + 1] [i_3 + 1]) <= (-9223372036854775807 - 1))))) : (((((~(arr_0 [i_1])))) ? (max((arr_18 [i_3]), (arr_2 [i_0]))) : (arr_16 [i_0] [i_3 + 1] [i_3] [i_5 + 1])))));
                            var_19 = ((var_5 - (max(var_9, -172))));
                            var_20 = (max(var_20, ((max(((max((((946983146509497470 || (-2147483647 - 1)))), (((arr_10 [i_1] [i_1] [i_3]) ? 0 : var_9))))), (arr_10 [i_1] [i_3 - 1] [i_1]))))));
                        }
                        for (int i_6 = 0; i_6 < 23;i_6 += 1)
                        {
                            var_21 = 0;
                            var_22 |= (arr_11 [i_0] [i_0] [i_0]);
                            var_23 = (min(var_23, (arr_12 [i_0] [i_0] [i_0] [i_1])));
                            var_24 = var_6;
                        }
                        for (int i_7 = 0; i_7 < 23;i_7 += 1)
                        {
                            var_25 = (max(var_25, var_4));
                            var_26 = (arr_22 [i_3]);
                        }
                        arr_29 [i_0] [i_1] [i_0] [i_1] |= (((~83) ? ((((((arr_0 [i_0]) | (arr_2 [i_0])))) ? (((min((arr_16 [i_0] [i_1] [i_1] [i_1]), var_4)))) : var_10)) : ((((arr_9 [i_3 - 2] [i_3 - 2] [i_3 + 2]) ? (arr_10 [i_1] [i_1] [i_3 - 1]) : (arr_10 [i_1] [i_3] [i_3 + 2]))))));
                        var_27 = (arr_10 [i_3] [i_1] [i_1]);
                        var_28 -= var_4;
                    }
                    for (int i_8 = 0; i_8 < 23;i_8 += 1)
                    {
                        var_29 = (min(var_29, ((((((min((arr_19 [i_3 + 2] [i_1] [i_1] [i_3] [i_1]), (arr_19 [i_3 - 2] [i_1] [i_3 - 2] [i_3 - 2] [i_3 - 2]))))) - 4504209304792022897)))));
                        var_30 = (arr_2 [i_1]);
                        arr_34 [i_0] [i_0] [i_0] [i_3] [i_0] = ((~(((arr_11 [i_1] [i_1] [i_1]) ? ((((17499760927200054145 > (arr_11 [i_0] [i_8] [i_0]))))) : 0))));
                    }
                }
                var_31 = ((((((arr_9 [i_0] [i_0] [i_0]) ? ((max(1, (arr_25 [i_0] [i_0] [i_0] [i_0] [i_0])))) : var_1))) ? (((arr_22 [i_1]) ? (~0) : -1)) : (~247)));
            }
        }
    }
    #pragma endscop
}
