/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 135279
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=135279 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/135279
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_20 = ((var_1 / (~var_19)));
    var_21 -= var_17;

    /* vectorizable */
    for (int i_0 = 1; i_0 < 8;i_0 += 1)
    {
        var_22 |= var_2;

        for (int i_1 = 0; i_1 < 10;i_1 += 1)
        {
            arr_6 [i_1] = (((247 - 384) << (var_10 + 5872178708836598046)));
            var_23 = var_6;
            var_24 = ((9858 >> (-17083 + 17094)));
        }
    }
    var_25 ^= var_9;
    var_26 = ((+(max((var_16 < var_16), ((var_11 ? var_12 : var_16))))));
    #pragma endscop
}
