/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 163056
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=163056 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/163056
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 0; i_0 < 1;i_0 += 1)
    {
        var_18 *= arr_2 [i_0] [1];
        var_19 = ((112 << (((max(var_0, ((0 ? 6 : var_16)))) - 1072799368))));
        var_20 -= 6;
    }
    for (int i_1 = 2; i_1 < 20;i_1 += 1)
    {
        var_21 = var_5;
        var_22 = (max(var_22, ((min((min(-6, (arr_4 [i_1]))), ((((max(var_2, 1))) ? (((arr_4 [i_1]) | var_8)) : (((max(-108, 56445)))))))))));
        var_23 = (max(var_23, ((((-6 != 4) | ((var_16 >> (((((arr_4 [i_1 - 1]) << var_16)) - 7294702899932890334)))))))));
        var_24 = ((+(max((arr_4 [i_1]), 151))));
    }
    var_25 = (max((max(-113, 4)), var_14));
    var_26 = (7 <= 0);
    #pragma endscop
}
