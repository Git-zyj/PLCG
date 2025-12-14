/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 187768
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=187768 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/187768
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_14 += ((28905 / var_1) ? var_4 : (min(var_7, var_1)));

    for (int i_0 = 0; i_0 < 11;i_0 += 1)
    {
        var_15 = (((-16 * var_4) ? -var_9 : (arr_1 [i_0])));
        var_16 ^= var_5;
    }
    var_17 = (var_0 * var_13);
    #pragma endscop
}
