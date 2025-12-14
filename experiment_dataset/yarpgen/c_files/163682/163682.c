/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 163682
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=163682 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/163682
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 2; i_0 < 14;i_0 += 1)
    {
        /* LoopNest 2 */
        for (int i_1 = 0; i_1 < 15;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 15;i_2 += 1)
            {
                {
                    var_20 = var_8;
                    arr_9 [i_2] [i_0] [i_0] [i_0] = var_11;
                    arr_10 [i_0] [i_0] [i_0] [i_2] = (max((arr_3 [i_0] [i_0] [i_0]), var_15));
                    /* LoopNest 2 */
                    for (int i_3 = 0; i_3 < 15;i_3 += 1)
                    {
                        for (int i_4 = 3; i_4 < 11;i_4 += 1)
                        {
                            {
                                arr_17 [i_0] [14] [i_0] [i_0] [i_0] = (~(arr_12 [i_0] [i_1] [i_0] [i_1] [i_1] [i_0]));
                                arr_18 [i_0] [14] [i_2] [i_2] = ((((((arr_16 [i_2] [i_2] [i_2] [i_3] [i_0]) ? (arr_16 [i_0] [i_1] [i_2] [i_1] [i_0]) : var_10))) ? var_0 : (!-51)));
                                arr_19 [i_0] [i_0] [i_0] [11] [i_0] [i_0 - 1] = var_15;
                            }
                        }
                    }
                }
            }
        }
        arr_20 [i_0] = var_17;
    }
    for (int i_5 = 0; i_5 < 24;i_5 += 1)
    {
        arr_23 [15] = (arr_21 [i_5]);
        arr_24 [i_5] = ((var_12 ? (((arr_21 [i_5]) ? (arr_21 [i_5]) : (arr_21 [i_5]))) : ((-(arr_21 [i_5])))));
        var_21 = (arr_21 [i_5]);
        var_22 = var_0;
    }
    /* LoopNest 2 */
    for (int i_6 = 1; i_6 < 14;i_6 += 1)
    {
        for (int i_7 = 0; i_7 < 17;i_7 += 1)
        {
            {
                arr_32 [i_6] = (arr_21 [i_7]);
                var_23 = (min((max((arr_31 [i_6] [i_6 + 2]), (arr_31 [i_6] [i_6 + 2]))), ((min((arr_21 [i_6 + 2]), (arr_21 [i_6 + 3]))))));
            }
        }
    }
    #pragma endscop
}
