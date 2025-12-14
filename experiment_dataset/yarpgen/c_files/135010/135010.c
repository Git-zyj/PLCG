/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 135010
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=135010 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/135010
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_19 = (min(15643784016483517282, var_10));

    for (int i_0 = 0; i_0 < 16;i_0 += 1)
    {
        /* LoopNest 2 */
        for (int i_1 = 0; i_1 < 16;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 1;i_2 += 1)
            {
                {
                    arr_10 [i_0] [i_2] [i_0] = ((arr_9 [i_0] [i_1] [i_2]) * ((min(15643784016483517302, -32759))));
                    var_20 -= (arr_2 [i_1]);
                    var_21 = var_10;

                    for (int i_3 = 0; i_3 < 16;i_3 += 1)
                    {
                        arr_15 [i_2] = (((((-(((arr_8 [i_2] [i_2] [i_2]) ? (arr_5 [i_2] [i_2]) : 4670000812164457742))))) ? 1 : (((17068666402825198797 ? var_6 : ((var_8 ? var_10 : 1439488902)))))));
                        arr_16 [i_2] [i_2] [i_2] = ((-(max((((var_5 ? (-32767 - 1) : (arr_7 [i_0] [i_2] [i_0])))), (arr_11 [i_0] [i_0] [i_0] [i_0])))));
                        var_22 *= (!51644);
                    }
                    for (int i_4 = 0; i_4 < 16;i_4 += 1)
                    {
                        arr_20 [i_2] = ((-(arr_13 [i_0] [i_1])));
                        arr_21 [i_0] [i_1] [i_0] [i_1] &= (31 * 32759);
                    }
                    /* vectorizable */
                    for (int i_5 = 0; i_5 < 16;i_5 += 1)
                    {
                        var_23 = var_10;
                        arr_25 [i_0] [i_0] [i_2] = var_3;
                        arr_26 [i_0] [i_2] = (((arr_8 [i_2] [i_0] [i_0]) ? var_6 : 17878451877722629213));
                        arr_27 [i_0] [i_1] [i_2] [i_1] [i_1] = (arr_2 [i_0]);
                    }
                }
            }
        }
        arr_28 [i_0] = (max(var_5, 1848715420281767878));
        var_24 = ((-((var_15 ? (arr_6 [i_0]) : ((var_17 * (arr_0 [i_0])))))));
    }
    var_25 = (min(4670000812164457743, 32767));
    var_26 |= (!-7787055792534427691);
    #pragma endscop
}
