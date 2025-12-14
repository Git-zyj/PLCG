/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 185541
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=185541 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/185541
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_10 = (min(var_5, -1902729280));

    for (int i_0 = 0; i_0 < 20;i_0 += 1)
    {
        var_11 &= (~7518);
        var_12 = ((min((arr_1 [i_0] [i_0]), 4639)));
        var_13 = ((((max((min(var_6, -14484)), ((((-14479 + 2147483647) >> (var_0 - 5820362722408906200))))))) ? (((arr_0 [i_0]) / 4550142573085551514)) : ((((min(2, -125))) ? var_2 : var_8))));
        /* LoopNest 2 */
        for (int i_1 = 0; i_1 < 20;i_1 += 1)
        {
            for (int i_2 = 4; i_2 < 18;i_2 += 1)
            {
                {
                    var_14 -= var_0;
                    arr_7 [i_1] [i_1] [i_1] = ((((min((var_0 & -14474), var_6))) ? (arr_1 [i_0] [i_0]) : -14465));
                }
            }
        }
    }
    for (int i_3 = 3; i_3 < 15;i_3 += 1)
    {
        var_15 = ((((((arr_9 [i_3] [i_3]) ? ((min(1, 1400672962622698979))) : (min(224, 2))))) ? (((~3669921589143066630) + ((max((arr_5 [i_3 - 1] [16] [16] [i_3]), 1400672962622698984))))) : (((max((min(var_1, 1)), (min(1, var_9))))))));
        arr_10 [i_3] = (((((min(-1400672962622698967, 252)) + 9223372036854775807)) << ((-(!var_2)))));
        arr_11 [i_3] = var_3;
    }
    #pragma endscop
}
