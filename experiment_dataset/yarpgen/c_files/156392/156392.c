/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 156392
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=156392 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/156392
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_18 -= ((!((min(var_15, (max(var_9, -286849145)))))));

    for (int i_0 = 0; i_0 < 17;i_0 += 1)
    {
        var_19 = ((!(arr_0 [i_0] [i_0])));
        var_20 = ((32763 ? (((((arr_1 [i_0] [i_0]) <= (arr_1 [i_0] [i_0]))))) : (((arr_0 [i_0] [i_0]) ? var_8 : (arr_1 [i_0] [i_0])))));
        var_21 = (max(((((((-113 + 2147483647) << (113 - 113))) - ((var_16 ? var_4 : var_3))))), (((-104 < -1) ? (arr_0 [i_0] [i_0]) : -2105289070))));
    }
    #pragma endscop
}
