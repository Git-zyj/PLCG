/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 107514
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=107514 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/107514
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 4; i_0 < 20;i_0 += 1)
    {
        /* LoopNest 2 */
        for (int i_1 = 4; i_1 < 21;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 22;i_2 += 1)
            {
                {
                    arr_10 [i_2] [i_0] [i_2] [i_2] = (max((arr_9 [i_2]), (arr_6 [i_0] [i_0])));
                    var_18 = min(var_16, 21662);
                    arr_11 [i_2] [i_1] [i_2] = (arr_5 [i_2] [i_1] [i_2]);
                }
            }
        }
        arr_12 [i_0] &= var_7;
        arr_13 [i_0] &= ((var_8 ? (arr_7 [i_0] [i_0] [i_0]) : (arr_6 [14] [i_0])));
    }
    for (int i_3 = 0; i_3 < 24;i_3 += 1)
    {
        var_19 = (arr_14 [i_3]);
        arr_16 [i_3] = (((((~(((arr_15 [i_3]) % var_5))))) ? var_15 : ((max(-64, (((arr_15 [i_3]) ? 62 : var_9)))))));
    }
    for (int i_4 = 1; i_4 < 18;i_4 += 1)
    {
        var_20 = (+(((arr_9 [20]) | (arr_7 [i_4] [3] [i_4]))));
        var_21 -= (arr_6 [i_4 - 1] [15]);
        var_22 = (max(var_22, var_8));

        for (int i_5 = 0; i_5 < 21;i_5 += 1)
        {
            arr_22 [i_4] [i_4] [i_4] = (~var_14);
            var_23 = ((6 ? -6644957222299180867 : 106));
        }
    }
    var_24 = (max(((((((var_5 ? var_2 : var_16)) + 2147483647)) >> (-var_2 - 2131034482))), 63));
    var_25 = (max(var_25, (-21660 / var_14)));
    var_26 = var_1;
    #pragma endscop
}
