/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 16788
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=16788 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/16788
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_20 = (((var_7 + 2147483647) << (var_17 - 3642567257136399422)));

    for (int i_0 = 0; i_0 < 21;i_0 += 1)
    {
        var_21 -= (((~42398) ? 0 : 1));
        arr_3 [19] [i_0] = (min(0, ((((~(arr_2 [i_0]))) >= (var_0 % -13)))));
    }
    for (int i_1 = 1; i_1 < 17;i_1 += 1)
    {
        var_22 = (min(((((((arr_0 [13]) | -45))) + var_16)), (((((min((arr_2 [i_1]), 25351))) ? (max(var_8, var_17)) : (arr_2 [i_1 + 1]))))));
        var_23 = (((((~(arr_2 [i_1])))) ? (max((32 / var_16), (arr_6 [i_1]))) : (((~(arr_0 [i_1 + 1]))))));
        var_24 = (max(((((((-9223372036854775807 - 1) && (arr_6 [i_1]))) ? (!var_2) : var_10))), (((arr_2 [i_1 - 1]) & (min(var_4, 1305497840))))));
    }
    #pragma endscop
}
