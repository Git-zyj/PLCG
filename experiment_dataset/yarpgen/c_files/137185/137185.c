/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 137185
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=137185 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/137185
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_12 = (((~-108) ? (((-9223372036854775806 + 9223372036854775807) << (var_7 - 11451922423946350339))) : (~var_6)));

    /* vectorizable */
    for (int i_0 = 3; i_0 < 12;i_0 += 1)
    {
        arr_2 [i_0 - 3] = var_6;
        arr_3 [i_0 - 3] [i_0] = (arr_1 [1] [i_0]);
    }
    for (int i_1 = 0; i_1 < 25;i_1 += 1)
    {
        var_13 = ((((max((arr_5 [i_1]), 241))) / (((arr_5 [i_1]) ? 8240764259857607913 : -2142606505))));
        var_14 = ((((((-2142606489 + 2147483647) << (5949634232515482720 - 5949634232515482720)))) ? (arr_5 [i_1]) : (((((((var_7 ? var_10 : var_0))) != (arr_5 [i_1])))))));
        var_15 -= var_1;
    }
    for (int i_2 = 0; i_2 < 19;i_2 += 1)
    {
        var_16 = (min(var_4, var_7));
        arr_10 [i_2] [i_2] = (~(((~5949634232515482720) ? 1912160533 : ((0 ? 5949634232515482720 : var_1)))));
        arr_11 [i_2] = (max(56, (max((arr_6 [i_2] [i_2]), (arr_6 [i_2] [i_2])))));
    }
    var_17 = -var_2;
    #pragma endscop
}
