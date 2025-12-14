/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 105287
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=105287 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/105287
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_13 *= var_2;

    for (int i_0 = 0; i_0 < 20;i_0 += 1)
    {
        arr_2 [i_0] = (min((arr_1 [i_0]), (-126 != 98)));
        var_14 = (min(var_14, ((max((((var_0 ? (arr_1 [i_0]) : (arr_1 [i_0])))), var_0)))));
        var_15 = (arr_1 [i_0]);
        var_16 = -104;
    }
    var_17 = var_2;
    var_18 = (min(98, (min((max(6035694867098729194, 98)), -1))));
    var_19 = ((var_4 << (((min(var_9, var_2)) - 62))));
    #pragma endscop
}
