/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 129539
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=129539 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/129539
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_17 = ((var_15 ? (((~(var_13 < 3633450397941960249)))) : var_16));

    for (int i_0 = 0; i_0 < 15;i_0 += 1)
    {
        arr_3 [i_0] |= (arr_1 [9]);
        var_18 = (((-8797227581944067922 ? -var_12 : (min(var_12, var_7)))));
    }
    #pragma endscop
}
