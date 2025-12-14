/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 144272
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=144272 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/144272
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_18 = (max((((0 ? 1 : 46))), (((((var_3 << (var_12 - 574747621)))) ? var_7 : var_7))));
    var_19 ^= var_4;

    for (int i_0 = 0; i_0 < 16;i_0 += 1)
    {
        var_20 = ((((((((arr_1 [i_0] [i_0]) && var_2)) ? (18446744073709551611 * var_10) : (((var_10 ? (arr_0 [i_0] [i_0]) : (arr_1 [i_0] [i_0]))))))) ? 7589624045940131433 : (arr_1 [15] [i_0])));
        var_21 = (min(var_21, (((~((~((var_6 ? (-9223372036854775807 - 1) : var_8)))))))));
        var_22 = (arr_1 [i_0] [i_0]);
    }
    #pragma endscop
}
