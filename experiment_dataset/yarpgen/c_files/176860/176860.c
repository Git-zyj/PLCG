/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 176860
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=176860 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/176860
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 1; i_0 < 15;i_0 += 1)
    {
        for (int i_1 = 4; i_1 < 14;i_1 += 1)
        {
            {
                arr_6 [i_0] [i_0] = min(98, -99);

                for (int i_2 = 4; i_2 < 13;i_2 += 1)
                {
                    var_10 = ((((min(var_9, (arr_2 [i_0 + 1])))) ? ((min((min(var_0, var_8)), -98))) : (((arr_1 [i_0]) ? (!var_9) : ((min((arr_5 [i_2] [i_1] [i_0]), (arr_5 [i_0] [i_1] [i_0]))))))));
                    var_11 = (((arr_1 [i_0]) * (((98 && 0) ? ((((arr_7 [i_2]) && 127))) : 0))));
                }
                for (int i_3 = 0; i_3 < 17;i_3 += 1)
                {
                    var_12 -= ((((((~var_2) | ((min(-60, (arr_5 [i_0] [i_1] [i_3]))))))) ? ((max((arr_3 [i_1]), var_0))) : var_3));
                    /* LoopNest 2 */
                    for (int i_4 = 1; i_4 < 13;i_4 += 1)
                    {
                        for (int i_5 = 0; i_5 < 17;i_5 += 1)
                        {
                            {
                                arr_16 [i_5] [i_4] [i_0] [i_1] [i_0] = (max(var_4, var_7));
                                arr_17 [i_0] [i_1] [i_0] [i_4 + 4] [i_5] [i_0] = ((1 ? (arr_14 [i_0] [i_1 - 1] [i_3] [i_0] [i_5]) : (arr_15 [i_0 + 1] [i_0])));
                                arr_18 [i_0] = (min(((~(var_9 * var_3))), ((((arr_13 [i_0] [i_0 + 2] [i_0] [i_4 - 1] [i_0]) > var_6)))));
                                var_13 -= (min(((min((arr_14 [i_0] [i_1] [i_3] [i_5] [i_5]), var_8))), (min(1, (arr_4 [i_4 + 2] [i_5] [i_4])))));
                            }
                        }
                    }
                    arr_19 [i_0] [i_3] [i_1] [i_0] = (arr_8 [i_0] [i_1 + 1]);
                    var_14 = arr_7 [i_0];
                }
                for (int i_6 = 0; i_6 < 17;i_6 += 1)
                {
                    arr_24 [i_0 - 1] [i_0] [i_0] [i_0] = (min((max((((arr_9 [i_0] [i_1 - 1] [i_0]) ? var_7 : (arr_8 [i_0] [i_6]))), ((var_7 ? var_5 : 1)))), -var_4));
                    arr_25 [i_0] [i_0] = ((~(arr_5 [i_0 - 1] [i_0 - 1] [i_1])));
                }
                var_15 = (min(var_15, ((max((((((1 ? var_1 : -418798974)) > 124))), -418798974)))));
                arr_26 [i_0] [i_0] = var_7;
            }
        }
    }
    var_16 = var_5;
    var_17 = (min((((min(0, 36129)))), var_3));
    #pragma endscop
}
