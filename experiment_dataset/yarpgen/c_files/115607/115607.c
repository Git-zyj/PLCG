/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 115607
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=115607 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/115607
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_18 = (~var_2);

    /* vectorizable */
    for (int i_0 = 1; i_0 < 13;i_0 += 1)
    {
        var_19 = 127;

        for (int i_1 = 2; i_1 < 13;i_1 += 1)
        {
            var_20 = 34008;
            var_21 = (((arr_1 [i_0 + 1] [i_1 - 2]) << (((arr_1 [i_0 - 1] [i_1 - 1]) - 36))));
        }
        var_22 = (arr_1 [i_0] [i_0]);
        var_23 = 1023;
    }
    #pragma endscop
}
