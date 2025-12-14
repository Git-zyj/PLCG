/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 123359
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=123359 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/123359
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_18 |= ((max(var_7, var_3)) & (((((~var_2) > (((var_12 ? var_12 : var_7))))))));

    /* vectorizable */
    for (int i_0 = 2; i_0 < 9;i_0 += 1)
    {
        var_19 *= (-9223372036854775807 - 1);
        var_20 ^= (((arr_1 [i_0 + 2]) | (arr_0 [i_0 + 2])));
        var_21 = (((((var_11 & (arr_0 [i_0 + 1])))) ? (((arr_2 [i_0] [i_0]) ? 770589054 : var_12)) : (((((arr_2 [i_0] [i_0]) == 65535))))));
    }
    for (int i_1 = 2; i_1 < 22;i_1 += 1)
    {
        var_22 = (max(var_6, (((arr_4 [i_1 - 1] [i_1 + 1]) ? (max((arr_5 [i_1 - 1]), 0)) : ((((var_17 != (arr_3 [i_1 - 1])))))))));
        var_23 = var_2;
    }
    #pragma endscop
}
