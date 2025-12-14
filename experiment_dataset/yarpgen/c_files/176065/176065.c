/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 176065
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=176065 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/176065
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 0; i_0 < 16;i_0 += 1)
    {
        var_13 = (arr_1 [i_0]);
        arr_4 [i_0] [i_0] = ((!(((150 ? ((min(var_2, -704174278))) : (max(-96012749, (arr_2 [i_0]))))))));
    }
    for (int i_1 = 3; i_1 < 11;i_1 += 1)
    {
        var_14 = (max(var_14, (((11 ? (((((((!(arr_2 [i_1 - 3]))))) + (arr_2 [i_1 + 1])))) : (((arr_7 [i_1 + 1] [i_1 - 2]) - (arr_7 [i_1 - 3] [i_1 + 1]))))))));
        var_15 = 3758096384;
        var_16 = var_2;
        arr_8 [i_1] [i_1] = (arr_0 [i_1]);
    }
    for (int i_2 = 0; i_2 < 11;i_2 += 1)
    {
        arr_13 [i_2] [i_2] = (min((((arr_6 [i_2]) & (arr_6 [i_2]))), ((~(arr_6 [i_2])))));
        var_17 = ((-12 ? (min((arr_2 [i_2]), var_5)) : (((103972980 ? (arr_2 [i_2]) : (arr_2 [i_2]))))));
        var_18 = (max(var_18, (arr_1 [i_2])));
        var_19 = (max(var_19, (((!-85) ? (~6885054236110386687) : 0))));
        arr_14 [i_2] = ((!(((1916072952 & ((11 ? 1568488461 : -60)))))));
    }
    for (int i_3 = 0; i_3 < 19;i_3 += 1)
    {
        arr_19 [i_3] [i_3] = (((((((1964250346 ? -412434034 : var_6))) ? (max(2850886542763261680, 77)) : 0))) ? (6622442618075643870 > var_2) : ((+(((-9223372036854775807 - 1) ? 255 : 4436155469233401231)))));
        arr_20 [i_3] [i_3] = (((min((1696795317 + 262112), var_4))) ? (arr_17 [i_3]) : (((~-96012755) ? (max((arr_17 [i_3]), (arr_15 [13]))) : (var_5 != 18))));
        var_20 = (min((~1), (((arr_15 [i_3]) ^ 1566658479))));
    }
    var_21 = (min(var_21, 111));
    var_22 = var_0;
    var_23 = ((((!(((var_3 ? 249809916 : 0))))) ? var_5 : (max(var_7, var_3))));
    #pragma endscop
}
