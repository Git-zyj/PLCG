/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 133701
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=133701 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/133701
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_20 ^= ((var_19 ? -var_3 : var_11));

    /* vectorizable */
    for (int i_0 = 0; i_0 < 19;i_0 += 1)
    {
        var_21 = (!-6696872850797246368);
        var_22 = (6285 ^ 72057594037927936);
        var_23 = (arr_1 [i_0] [i_0]);
        var_24 = (~var_13);
        var_25 += var_0;
    }
    var_26 = (min(var_26, var_12));
    #pragma endscop
}
