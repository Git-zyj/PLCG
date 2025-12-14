/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 147643
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=147643 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/147643
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 0; i_0 < 18;i_0 += 1)
    {
        arr_4 [i_0] = 88;
        var_20 = max(1122537950, var_11);
        arr_5 [i_0] = (((((9809 | (arr_1 [i_0])))) && (var_3 >> var_3)));
        var_21 += (((arr_0 [14] [i_0]) ? (((min((arr_0 [8] [i_0]), (arr_0 [1] [1]))))) : var_7));
    }
    var_22 = (max(var_22, ((min((((((15074 ? 65146 : var_5)) * 192))), 13)))));

    /* vectorizable */
    for (int i_1 = 2; i_1 < 9;i_1 += 1)
    {
        var_23 = var_16;
        var_24 = 65527;
        /* LoopNest 3 */
        for (int i_2 = 0; i_2 < 10;i_2 += 1)
        {
            for (int i_3 = 2; i_3 < 9;i_3 += 1)
            {
                for (int i_4 = 0; i_4 < 10;i_4 += 1)
                {
                    {

                        for (int i_5 = 0; i_5 < 10;i_5 += 1)
                        {
                            var_25 = (min(var_25, ((((arr_7 [i_1 - 1]) ? -32762 : var_10)))));
                            var_26 = (min(var_26, (!-1)));
                            arr_17 [i_5] [i_4] [i_2] [i_2] [i_1] [i_1] = (((arr_11 [i_1 - 2]) ? var_2 : var_16));
                            arr_18 [i_1 + 1] [i_2] [i_2] [i_3 - 1] [i_4] [i_2] [i_5] = ((-(1 < 0)));
                        }
                        var_27 = (((arr_8 [i_1 - 1] [i_3 + 1]) ? var_5 : var_3));
                    }
                }
            }
        }
    }
    var_28 = ((-92 / (max((min(var_9, var_18)), -6951))));
    #pragma endscop
}
