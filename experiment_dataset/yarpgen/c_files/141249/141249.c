/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 141249
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=141249 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/141249
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_17 = max(((min(((var_10 ? var_5 : var_1)), var_7))), (max(4026531840, ((var_1 ? var_16 : 1)))));

    for (int i_0 = 0; i_0 < 17;i_0 += 1)
    {
        arr_4 [i_0] &= (max((arr_1 [i_0] [i_0]), 2932749867));
        var_18 &= (max((max(var_3, 0)), 3584));
        var_19 = (var_6 ^ ((((arr_1 [i_0] [i_0]) ^ (-2147483647 - 1)))));
    }
    #pragma endscop
}
