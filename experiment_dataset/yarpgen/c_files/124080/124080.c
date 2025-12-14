/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 124080
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=124080 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/124080
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 4; i_0 < 21;i_0 += 1)
    {
        for (int i_1 = 1; i_1 < 1;i_1 += 1)
        {
            {
                var_11 = (min(var_11, (((16 ? -24646 : -2115466777)))));
                var_12 |= (arr_0 [10]);
                var_13 = (max(var_13, (arr_3 [1])));
                var_14 = (((arr_1 [i_0 + 1]) ? ((-24640 / (arr_0 [i_0]))) : (arr_0 [i_0])));
                var_15 = (max(var_15, (!-24649)));
            }
        }
    }

    /* vectorizable */
    for (int i_2 = 1; i_2 < 18;i_2 += 1)
    {
        var_16 = (max(var_16, var_8));
        arr_8 [12] &= (127 & (arr_3 [0]));
    }
    var_17 |= var_7;
    var_18 = (min(var_18, var_2));
    #pragma endscop
}
