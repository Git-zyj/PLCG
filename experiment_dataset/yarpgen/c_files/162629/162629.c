/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 162629
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=162629 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/162629
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_15 = ((((((~43800) ? var_10 : (~-19997)))) ? (((~((min(var_14, var_10)))))) : (min(((3995393990 ^ (-2147483647 - 1))), 85))));
    var_16 |= (((min(((127 ? -2147483639 : 1)), 30447)) & ((min(var_0, (var_13 <= var_1))))));

    for (int i_0 = 0; i_0 < 10;i_0 += 1)
    {
        arr_3 [i_0] [i_0] = ((-(((arr_1 [i_0]) ? (arr_1 [i_0]) : 1))));
        var_17 *= 1;
        var_18 -= (-1 ? 33117 : -2513011906986266960);
        var_19 |= 2513011906986266960;
    }
    #pragma endscop
}
