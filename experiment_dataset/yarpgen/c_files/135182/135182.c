/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 135182
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=135182 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/135182
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    /* vectorizable */
    for (int i_0 = 4; i_0 < 23;i_0 += 1)
    {
        var_15 = (~12922741679881248615);
        var_16 = var_10;
    }
    /* vectorizable */
    for (int i_1 = 2; i_1 < 19;i_1 += 1)
    {
        var_17 = arr_3 [i_1];

        for (int i_2 = 0; i_2 < 1;i_2 += 1)
        {
            var_18 = (max(var_18, (arr_0 [i_1 + 2] [i_1 + 2])));
            var_19 = 3533543276;
        }
    }
    var_20 = ((var_1 ? ((max(var_2, 0))) : (((((var_11 & 2389912126) <= (~12922741679881248615)))))));
    #pragma endscop
}
