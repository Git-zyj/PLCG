/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 132506
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=132506 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/132506
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_15 = (max(var_15, var_1));

    for (int i_0 = 0; i_0 < 24;i_0 += 1)
    {
        var_16 = (max(var_5, (arr_1 [i_0])));
        var_17 = 0;
        var_18 = (min(var_18, 7727201960805439528));

        /* vectorizable */
        for (int i_1 = 0; i_1 < 24;i_1 += 1)
        {

            for (int i_2 = 2; i_2 < 21;i_2 += 1)
            {
                /* LoopNest 2 */
                for (int i_3 = 0; i_3 < 24;i_3 += 1)
                {
                    for (int i_4 = 0; i_4 < 24;i_4 += 1)
                    {
                        {
                            var_19 = (arr_2 [i_4]);
                            arr_13 [i_2] = (!var_9);
                        }
                    }
                }
                arr_14 [i_2] = ((-(((arr_9 [i_2]) | 10719542112904112087))));
                arr_15 [i_0] [i_0] [i_0] [i_2] = (((arr_12 [i_1] [i_2] [i_2 + 2] [i_2 + 3] [i_1] [i_2 + 2] [i_1]) ? (arr_3 [i_0]) : 7727201960805439529));
            }
            var_20 = (246 < 204);
            arr_16 [i_0] = (~12268);
            arr_17 [i_0] [i_1] [i_1] = (((arr_11 [i_0] [i_1] [i_1] [i_0] [i_1]) * var_10));
            var_21 = (((arr_6 [i_0] [i_1] [i_1] [i_0]) ? var_6 : (arr_6 [i_1] [i_1] [i_0] [i_0])));
        }
        /* LoopNest 2 */
        for (int i_5 = 0; i_5 < 1;i_5 += 1)
        {
            for (int i_6 = 4; i_6 < 23;i_6 += 1)
            {
                {
                    /* LoopNest 2 */
                    for (int i_7 = 0; i_7 < 24;i_7 += 1)
                    {
                        for (int i_8 = 0; i_8 < 24;i_8 += 1)
                        {
                            {
                                arr_29 [i_8] = ((((min((((9223372036854775807 ? 127 : 0))), (max(2947669393, 20230))))) ? (((arr_8 [i_0] [i_5] [i_6 - 4] [i_7] [i_8]) ? (((((-9223372036854775807 - 1) < var_14)))) : var_11)) : var_8));
                                arr_30 [i_8] = ((!9223372036854775787) ? (((((~(arr_18 [i_0] [i_5] [i_7])))) ? (((arr_2 [i_8]) ? (arr_3 [i_5]) : 1195033665013284607)) : ((min(-20231, var_8))))) : (~var_7));
                            }
                        }
                    }
                    var_22 = (min(var_22, ((((~var_4) + (min((arr_26 [i_0]), var_0)))))));
                    var_23 = 9223372036854775807;
                }
            }
        }
    }
    var_24 = (min(3035034408, var_0));
    #pragma endscop
}
