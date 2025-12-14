/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 151109
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=151109 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/151109
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    /* vectorizable */
    for (int i_0 = 2; i_0 < 20;i_0 += 1)
    {
        var_11 |= 1;
        arr_2 [i_0] [i_0 - 2] |= (1 / 11336);
        var_12 = var_5;
        var_13 = var_2;
        var_14 = 4816767774589807295;
    }
    for (int i_1 = 1; i_1 < 22;i_1 += 1)
    {
        var_15 *= (((((~(arr_4 [i_1 + 1])))) ? ((~(~1))) : (~-2103926795)));
        var_16 |= (((min((arr_4 [i_1 + 1]), 2239065285)) >= (1 | 11331)));
    }
    var_17 = (!var_9);
    var_18 = (((!-2103926783) == (~var_8)));
    var_19 = (min(var_19, (~65535)));
    var_20 ^= var_9;
    #pragma endscop
}
