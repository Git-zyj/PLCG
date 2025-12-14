/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 106598
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=106598 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/106598
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 1; i_0 < 15;i_0 += 1)
    {
        var_20 = (((arr_1 [i_0] [i_0]) <= (arr_1 [i_0] [i_0])));
        var_21 = (((arr_1 [i_0] [i_0]) * (26 & var_17)));
        var_22 = (min(var_22, 6));
    }
    var_23 ^= ((var_13 << (var_2 - 37004)));
    var_24 = (max(var_24, (var_16 > 28915)));
    #pragma endscop
}
