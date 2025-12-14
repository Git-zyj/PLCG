/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 175652
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=175652 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/175652
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 1; i_0 < 1;i_0 += 1)
    {
        for (int i_1 = 4; i_1 < 24;i_1 += 1)
        {
            {
                arr_6 [i_1] [i_1 + 1] = ((236 ? -var_2 : (((arr_5 [i_1] [i_1]) - var_10))));
                var_20 -= (arr_2 [i_0] [i_1]);
                arr_7 [1] [i_1] &= ((~(max((((arr_2 [i_0] [i_1]) % 246)), (arr_2 [i_0] [i_1 - 2])))));
            }
        }
    }
    var_21 &= (((((~var_2) + ((1 << (var_1 - 1956715685279924151)))))) ? ((-((var_6 ? var_13 : var_16)))) : (((((min(var_9, var_16))) ? ((var_17 ? var_0 : var_0)) : (var_6 | 1)))));
    var_22 -= var_15;
    var_23 = var_9;
    #pragma endscop
}
