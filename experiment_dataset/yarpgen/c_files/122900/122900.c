/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 122900
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=122900 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/122900
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_16 ^= 28941;
    var_17 ^= (max(var_13, (((var_6 / var_10) ? (((3141227401 ? 4294967295 : 1904832551))) : ((1 ? var_15 : 4294967295))))));
    var_18 *= var_0;

    for (int i_0 = 3; i_0 < 20;i_0 += 1)
    {
        var_19 = var_4;
        var_20 = (arr_1 [i_0]);
        var_21 = (min(4294967295, (max(0, 4294967295))));
    }
    var_22 = (min(((3344345664 ? (min(1, 4935649816678321195)) : (var_9 ^ 1))), (min(4935649816678321195, (((-256 ? var_3 : var_5)))))));
    #pragma endscop
}
