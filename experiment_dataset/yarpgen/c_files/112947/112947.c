/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 112947
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=112947 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/112947
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 1; i_0 < 6;i_0 += 1)
    {
        var_16 = ((-(max((arr_0 [i_0]), (arr_1 [i_0])))));
        arr_2 [i_0] = (~((min((-9223372036854775807 - 1), (arr_1 [i_0 + 4])))));
        arr_3 [i_0] = var_5;
        var_17 = 0;
        var_18 = 330981216;
    }
    for (int i_1 = 1; i_1 < 19;i_1 += 1)
    {
        var_19 &= (3963986084 * 1);
        var_20 = var_6;
    }
    var_21 = ((((var_3 ? 1 : var_0)) - var_14));
    var_22 ^= 58720256;
    var_23 = var_3;
    #pragma endscop
}
