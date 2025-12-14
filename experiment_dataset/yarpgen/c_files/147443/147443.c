/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 147443
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=147443 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/147443
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 0; i_0 < 22;i_0 += 1)
    {
        arr_2 [i_0] = var_4;
        var_13 &= (min((((max(43552, 0)))), (max((arr_0 [i_0] [i_0]), (((var_7 << (var_4 - 3453611998))))))));
        var_14 += ((-((((-10 ? var_7 : var_7)) - (arr_1 [i_0] [i_0])))));
        var_15 = (~(max(((-(arr_0 [i_0] [i_0]))), (arr_0 [i_0] [i_0]))));
    }
    var_16 -= (max((min(-4316322811865057563, 21977)), var_6));
    #pragma endscop
}
