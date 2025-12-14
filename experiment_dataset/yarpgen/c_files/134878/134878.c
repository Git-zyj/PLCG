/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 134878
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=134878 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/134878
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_18 = 1;

    for (int i_0 = 0; i_0 < 16;i_0 += 1)
    {
        var_19 ^= 35660;
        /* LoopNest 2 */
        for (int i_1 = 0; i_1 < 1;i_1 += 1)
        {
            for (int i_2 = 1; i_2 < 15;i_2 += 1)
            {
                {
                    arr_8 [i_2] [i_2] = (~1336918601);
                    arr_9 [i_0] [i_0] [i_2] [i_2 + 1] = -4790106376033880860;
                }
            }
        }
    }
    var_20 &= var_6;

    /* vectorizable */
    for (int i_3 = 0; i_3 < 11;i_3 += 1)
    {
        var_21 = 428324629;
        arr_12 [i_3] [i_3] = var_1;
    }
    for (int i_4 = 0; i_4 < 11;i_4 += 1)
    {
        arr_16 [i_4] [0] = ((0 ? (max(69, 70368744177408)) : var_13));
        var_22 = (max(var_15, 0));
    }

    for (int i_5 = 0; i_5 < 14;i_5 += 1)
    {
        var_23 = (min(((max(var_17, 1))), (~70368744177408)));
        arr_20 [i_5] = (min(-32766, ((69 ? var_12 : ((max(var_15, var_14)))))));
        arr_21 [i_5] = (min(((max(-4620560078294747248, 46))), (max(var_6, ((min(var_2, var_4)))))));
    }
    #pragma endscop
}
