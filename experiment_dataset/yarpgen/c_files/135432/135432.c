/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 135432
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=135432 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/135432
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_18 = -4323575867732070080;

    for (int i_0 = 1; i_0 < 16;i_0 += 1)
    {
        var_19 = (((-2147483647 - 1) >= ((((max(2147483647, 2147483647))) ? 9223372036854775808 : (max(2147483642, 12))))));
        var_20 = (max(var_20, ((((((((4753317626865317033 * (arr_1 [i_0]))) * 4753317626865317017))) ? (min((arr_1 [i_0 + 1]), (arr_0 [i_0 + 2]))) : (max((arr_0 [i_0]), ((((arr_1 [i_0]) ? 2147483639 : -2147483634))))))))));
    }
    var_21 -= -32321;
    #pragma endscop
}
