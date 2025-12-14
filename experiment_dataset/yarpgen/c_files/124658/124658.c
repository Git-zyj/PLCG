/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 124658
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=124658 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/124658
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 11;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 11;i_1 += 1)
        {
            {
                arr_5 [i_1] [7] [i_1] = (((arr_4 [i_1] [i_1]) ? (((!var_13) ? -113 : ((107 ? 113 : 6600635969622276991)))) : ((((arr_1 [i_1]) << (var_5 + 24130))))));
                arr_6 [i_1] [i_1] = (!11846108104087274639);
            }
        }
    }
    var_16 = var_13;
    var_17 = ((!((min(-113, var_11)))));
    /* LoopNest 2 */
    for (int i_2 = 0; i_2 < 24;i_2 += 1)
    {
        for (int i_3 = 0; i_3 < 24;i_3 += 1)
        {
            {
                /* LoopNest 2 */
                for (int i_4 = 0; i_4 < 24;i_4 += 1)
                {
                    for (int i_5 = 3; i_5 < 22;i_5 += 1)
                    {
                        {
                            arr_19 [i_5] [i_5] = (min((-88 / var_5), ((5373367615553798481 ? 11846108104087274637 : 121))));
                            arr_20 [i_2] [i_3] [i_5] [i_5 + 2] = ((~(max((~var_9), ((127 ? var_10 : 1204543734))))));
                            var_18 = ((-1024 && (!-1)));
                            arr_21 [i_2] [i_2] [i_4] [i_5 - 2] [i_5] [i_5] = ((((min((max(2665592797126868379, var_1)), var_14))) ? (((arr_15 [i_5 + 1] [i_5 + 1] [23] [20]) - var_10)) : var_5));
                        }
                    }
                }
                arr_22 [i_2] [i_3] [i_3] |= (min((arr_8 [i_3]), 78));
                var_19 *= ((((((arr_12 [i_2] [i_2]) * -122))) ? (arr_12 [i_2] [i_3]) : -var_0));
                var_20 = (max(var_20, (((((!-31288) / (6600635969622276977 % var_14))) % 4294967295))));
                /* LoopNest 3 */
                for (int i_6 = 0; i_6 < 24;i_6 += 1)
                {
                    for (int i_7 = 0; i_7 < 24;i_7 += 1)
                    {
                        for (int i_8 = 0; i_8 < 24;i_8 += 1)
                        {
                            {
                                var_21 = (min(var_21, ((((-7122 ? var_1 : (!var_1)))))));
                                arr_30 [i_2] [i_2] [i_2] [i_7] [i_2] [i_2] = 0;
                            }
                        }
                    }
                }
            }
        }
    }
    var_22 = (max(var_22, ((min((((((-30 ? 2764052427 : 11846108104087274656))) ? (~107) : var_8)), (((113 < 11846108104087274656) ? 12 : ((-22 ? 11846108104087274630 : 4418641659232960998)))))))));
    #pragma endscop
}
