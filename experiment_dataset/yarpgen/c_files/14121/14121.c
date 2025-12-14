/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 14121
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=14121 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/14121
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_18 = ((19719 ? (max(-14, (min(13, var_16)))) : ((((var_11 > 0) ? var_4 : (-17 == var_4))))));

    /* vectorizable */
    for (int i_0 = 0; i_0 < 13;i_0 += 1)
    {
        /* LoopNest 2 */
        for (int i_1 = 2; i_1 < 12;i_1 += 1)
        {
            for (int i_2 = 3; i_2 < 11;i_2 += 1)
            {
                {
                    arr_7 [i_0] [i_1 - 2] [i_0] [i_2] = (((-32767 - 1) ? var_3 : -6861001091103025939));
                    var_19 -= (((((var_17 ? 13 : (-127 - 1)))) != var_8));
                }
            }
        }
        arr_8 [i_0] = var_16;
        var_20 = 22;
    }
    var_21 = var_10;
    #pragma endscop
}
