/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 141031
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=141031 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/141031
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_17 = (min(var_11, ((var_14 ? ((min(var_0, var_12))) : ((var_12 ? 32768 : var_6))))));

    /* vectorizable */
    for (int i_0 = 0; i_0 < 21;i_0 += 1)
    {
        var_18 = (arr_1 [i_0] [i_0]);
        var_19 = (((((var_10 ? 65535 : 0))) ? 4294967295 : (arr_1 [i_0] [i_0])));
    }
    /* vectorizable */
    for (int i_1 = 0; i_1 < 10;i_1 += 1)
    {
        var_20 = (max(var_20, 108));
        var_21 = (arr_1 [i_1] [i_1]);
    }
    for (int i_2 = 1; i_2 < 21;i_2 += 1)
    {
        var_22 &= ((((-var_4 ? (max((arr_5 [i_2]), 65535)) : (arr_6 [i_2]))) << (510 - 474)));
        var_23 = 0;
    }
    var_24 = var_7;
    var_25 = (var_4 == (((-1 % var_16) - var_1)));
    var_26 = ((((max((max(-1, var_3)), -1))) ? ((((!var_5) ? var_13 : var_7))) : 4294967291));
    #pragma endscop
}
