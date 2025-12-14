/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 185510
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=185510 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/185510
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_17 = (((((min(var_2, 724923344)) - (((var_7 ? 724923344 : var_13))))) != 1));

    for (int i_0 = 0; i_0 < 25;i_0 += 1)
    {
        var_18 = (((((((var_2 ? var_9 : (arr_0 [i_0])))) ? 1 : (arr_1 [i_0]))) >> (-var_3 + 124)));
        var_19 *= ((((((-(arr_1 [i_0]))) + 2147483647)) >> ((((+(max((arr_0 [i_0]), 4365190110017024875)))) - 4365190110017024859))));
        var_20 = ((-(min(((-(arr_0 [i_0]))), var_12))));
        var_21 ^= -724923334;
    }
    #pragma endscop
}
