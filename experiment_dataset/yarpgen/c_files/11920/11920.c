/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 11920
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=11920 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/11920
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_19 = (max(var_2, (-591833719269661379 * 9)));

    /* vectorizable */
    for (int i_0 = 2; i_0 < 20;i_0 += 1)
    {
        var_20 = var_14;
        var_21 *= 2535023873;
        var_22 += var_3;
    }
    for (int i_1 = 3; i_1 < 22;i_1 += 1)
    {
        var_23 = (min((max(((var_18 ? var_7 : var_0)), (var_9 ^ var_0))), var_1));
        var_24 = (~var_10);
        /* LoopNest 2 */
        for (int i_2 = 0; i_2 < 23;i_2 += 1)
        {
            for (int i_3 = 0; i_3 < 23;i_3 += 1)
            {
                {
                    var_25 = ((((1641652868 ? 7691032018352025034 : 12288))));
                    var_26 += -var_12;
                }
            }
        }
        var_27 ^= var_6;
        var_28 = ((((((max(var_6, var_4))))) & (min(var_13, (var_0 & var_6)))));
    }
    /* vectorizable */
    for (int i_4 = 0; i_4 < 25;i_4 += 1)
    {
        arr_13 [i_4] [i_4] = var_14;
        arr_14 [i_4] [i_4] = var_17;
        var_29 = ((var_10 ? var_5 : var_11));
    }
    for (int i_5 = 0; i_5 < 24;i_5 += 1)
    {
        arr_17 [i_5] = (min((var_17 >= var_3), ((229 ? 1 : 4561731600684637181))));
        var_30 ^= var_4;
    }
    var_31 = var_16;
    #pragma endscop
}
