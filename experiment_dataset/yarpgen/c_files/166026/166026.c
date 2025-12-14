/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 166026
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=166026 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/166026
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 3; i_0 < 11;i_0 += 1)
    {
        var_16 = (+(min((arr_0 [i_0 - 3] [i_0 - 2]), (arr_0 [i_0 - 1] [i_0]))));
        arr_2 [i_0] = ((~(max((5157489889719332103 | 2923164935639399943), (min(75719018538369173, (arr_1 [i_0])))))));
    }
    for (int i_1 = 0; i_1 < 15;i_1 += 1)
    {
        var_17 -= ((((var_11 || (arr_3 [11] [i_1]))) && (arr_5 [i_1])));
        /* LoopNest 3 */
        for (int i_2 = 0; i_2 < 15;i_2 += 1)
        {
            for (int i_3 = 1; i_3 < 14;i_3 += 1)
            {
                for (int i_4 = 0; i_4 < 15;i_4 += 1)
                {
                    {
                        var_18 = ((!var_6) ? ((((max(-573627775, var_1))) ? ((var_12 ? 65535 : var_0)) : (arr_9 [i_3 + 1]))) : 573627775);
                        arr_15 [i_1] [i_2] [i_3] [i_4] = (arr_8 [i_4]);
                        var_19 = ((((26540 ? 1 : 9223372036854775807))) ? (min(var_12, ((min((arr_12 [i_1]), 231003262))))) : (((~(arr_7 [i_3 - 1] [i_3 + 1] [i_3])))));

                        /* vectorizable */
                        for (int i_5 = 1; i_5 < 12;i_5 += 1)
                        {
                            arr_18 [i_1] [2] [i_3] [i_3 + 1] [i_4] [i_5 - 1] = (((var_10 ? var_3 : var_11)) + (arr_7 [i_4] [i_2] [13]));
                            var_20 = (min(var_20, (((arr_7 [i_5 - 1] [i_3 - 1] [i_3]) ? (arr_13 [i_5 + 1] [i_2]) : (arr_17 [i_5] [i_4] [i_4] [i_3] [i_2] [i_1])))));
                        }
                        for (int i_6 = 1; i_6 < 14;i_6 += 1)
                        {
                            arr_21 [i_6] [i_6] [i_3] [i_3] [i_6] [i_1] = (min((max((arr_13 [i_1] [i_2]), var_3)), 27942));
                            var_21 = (min(((((max(573627774, var_3))) ? var_15 : var_10)), (((var_5 ? var_13 : var_0)))));
                        }
                    }
                }
            }
        }
    }
    var_22 = ((var_14 ? var_10 : ((max(var_0, ((max(169, var_4))))))));
    #pragma endscop
}
