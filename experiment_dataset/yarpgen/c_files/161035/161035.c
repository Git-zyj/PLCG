/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 161035
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=161035 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/161035
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_15 = (min(((var_0 ? var_1 : var_13)), (((var_0 ? -8192 : 225)))));
    var_16 = var_11;

    for (int i_0 = 0; i_0 < 11;i_0 += 1)
    {
        /* LoopNest 2 */
        for (int i_1 = 0; i_1 < 11;i_1 += 1)
        {
            for (int i_2 = 1; i_2 < 10;i_2 += 1)
            {
                {
                    var_17 = (255 % 2615600198);
                    var_18 = ((var_0 > (((((arr_2 [7] [i_2 - 1] [i_2 + 1]) && var_7))))));
                    var_19 = (min((~var_13), (((1802378051 << (2492589244 - 2492589234))))));
                }
            }
        }
        arr_6 [i_0] [i_0] = var_3;
        var_20 = ((-((-((max((arr_3 [i_0]), 24395)))))));
        var_21 = var_5;
        var_22 = var_12;
    }
    for (int i_3 = 0; i_3 < 20;i_3 += 1)
    {
        var_23 = (min((1802378026 * -24), (arr_8 [i_3])));
        var_24 = arr_7 [i_3];
    }
    #pragma endscop
}
