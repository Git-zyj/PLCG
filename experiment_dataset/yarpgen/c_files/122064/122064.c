/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 122064
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=122064 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/122064
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_19 = var_5;
    var_20 = var_6;

    for (int i_0 = 0; i_0 < 20;i_0 += 1)
    {
        arr_3 [i_0] = (((((((arr_0 [i_0]) - var_10))) ? (arr_0 [i_0]) : (var_8 * var_12))));
        arr_4 [i_0] [i_0] = ((!((min(var_11, (arr_1 [i_0]))))));
    }
    /* vectorizable */
    for (int i_1 = 0; i_1 < 25;i_1 += 1)
    {
        arr_7 [9] = ((((var_7 ? var_1 : (arr_5 [i_1] [i_1]))) <= ((var_3 ? var_3 : var_6))));
        arr_8 [i_1] [i_1] = var_17;
        /* LoopNest 2 */
        for (int i_2 = 0; i_2 < 25;i_2 += 1)
        {
            for (int i_3 = 2; i_3 < 22;i_3 += 1)
            {
                {
                    var_21 = (!var_0);
                    var_22 = (arr_11 [i_2]);
                }
            }
        }
        var_23 = (max(var_23, ((((!var_2) ? ((((arr_9 [i_1] [22] [i_1]) ? var_3 : var_9))) : ((var_4 ? var_17 : var_3)))))));
    }
    var_24 = ((var_8 << (var_11 - 2491899438163091661)));
    var_25 = ((((((((~var_16) + 2147483647)) >> (((~var_15) + 1522849580))))) ? (((((var_14 ? var_15 : var_16)) << ((((var_7 ? var_11 : var_10)) - 2491899438163091656))))) : ((var_2 ? var_10 : ((min(var_15, var_6)))))));
    #pragma endscop
}
