/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 115576
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=115576 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/115576
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 0; i_0 < 13;i_0 += 1)
    {
        arr_2 [i_0] = (min(88, (~8453209377797450112)));
        arr_3 [i_0] = (((arr_1 [i_0] [i_0]) - (max((arr_0 [i_0]), (((arr_0 [i_0]) ? var_1 : (arr_0 [i_0])))))));
    }
    for (int i_1 = 0; i_1 < 23;i_1 += 1)
    {
        arr_6 [i_1] [i_1] = max((arr_4 [i_1]), 7612404856240508122);
        arr_7 [i_1] = (((~var_18) ? ((min((arr_4 [i_1]), var_0))) : ((((((arr_5 [i_1]) ? (arr_5 [i_1]) : (arr_4 [i_1])))) ? (((arr_5 [i_1]) << var_7)) : (arr_4 [5])))));
        var_19 -= (min(((((var_10 / (arr_5 [i_1]))) * (((-11 ? var_1 : var_13))))), (((min(var_15, -11))))));
        var_20 -= ((~(arr_4 [11])));
        var_21 = (((max(33210, (arr_4 [i_1])))) ? var_14 : ((max((!2), (((-1 + 2147483647) >> 1))))));
    }
    var_22 = var_5;
    var_23 = (min((!var_8), var_3));
    var_24 = (max(var_24, (var_16 != 32102)));
    var_25 = (min((max(0, var_0)), 226));
    #pragma endscop
}
