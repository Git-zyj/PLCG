/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 114115
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=114115 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/114115
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_18 = (var_2 ? ((255 ? 27 : -43)) : (max((~var_5), ((var_17 ? var_16 : var_17)))));
    var_19 = var_17;

    for (int i_0 = 0; i_0 < 17;i_0 += 1)
    {
        arr_3 [i_0] = (min(((((((90 ? -51 : 94))) ? (((arr_0 [i_0]) ? 51 : (arr_0 [i_0]))) : (((arr_0 [i_0]) ? var_8 : -242156122))))), (min((-5944449406173153861 && var_5), (((arr_0 [7]) ? 43 : (arr_1 [i_0])))))));
        arr_4 [i_0] [5] = ((((min((arr_2 [i_0]), 34))) ? (((~var_10) ? (((arr_2 [i_0]) ? -51 : var_5)) : var_16)) : (((~1) ? (((arr_0 [i_0]) ? var_2 : 1)) : -28))));
    }
    /* vectorizable */
    for (int i_1 = 0; i_1 < 14;i_1 += 1)
    {
        var_20 = (((arr_2 [i_1]) ? (arr_2 [i_1]) : 1));
        arr_7 [i_1] [i_1] = var_14;
        /* LoopNest 2 */
        for (int i_2 = 1; i_2 < 11;i_2 += 1)
        {
            for (int i_3 = 0; i_3 < 14;i_3 += 1)
            {
                {
                    var_21 = (1 - -28);
                    arr_14 [i_1] [i_2 + 3] [i_3] [i_2 + 3] = ((46102 ? 38652 : 1));
                }
            }
        }
    }
    var_22 = (((~var_14) ? ((var_17 ? var_14 : ((max(3851006054, 476558755))))) : (((((min(var_15, var_9))) ? (~var_8) : var_8)))));
    #pragma endscop
}
