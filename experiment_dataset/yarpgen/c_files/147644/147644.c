/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 147644
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=147644 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/147644
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_18 += (~69);
    var_19 ^= (((var_12 - 536870912) + (min((-1395145325 / 1623990646), (var_4 + 1865471747)))));
    var_20 = 69;
    var_21 = (var_14 ? ((-((var_10 ? 180 : var_9)))) : var_9);

    /* vectorizable */
    for (int i_0 = 0; i_0 < 15;i_0 += 1)
    {
        var_22 ^= 8537241055654271978;
        var_23 = (8537241055654271978 + 69);
        var_24 = (arr_1 [i_0]);
    }
    #pragma endscop
}
