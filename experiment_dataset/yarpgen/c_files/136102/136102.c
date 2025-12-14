/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 136102
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=136102 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/136102
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_12 = (min(var_12, (((!(((-(var_2 / var_7)))))))));
    var_13 = (max(var_13, ((min(var_3, 9223372036854775807)))));

    for (int i_0 = 0; i_0 < 16;i_0 += 1)
    {
        var_14 = (max((max((arr_1 [i_0] [i_0]), 3471501645258363369)), (((-1 ? (arr_0 [i_0]) : (arr_0 [i_0]))))));
        var_15 = ((-(min(-5342860874247900858, -8913018790725493584))));
        var_16 = (~(arr_1 [i_0] [i_0]));
    }
    /* vectorizable */
    for (int i_1 = 3; i_1 < 21;i_1 += 1)
    {
        var_17 = ((var_6 ? (arr_3 [i_1 - 1]) : 12));
        var_18 = (((arr_2 [i_1 - 3]) << (((5342860874247900858 == (arr_3 [i_1 - 1]))))));
        var_19 = ((arr_3 [i_1 + 2]) ? 0 : (arr_3 [i_1 + 1]));
        arr_4 [i_1] = (arr_3 [i_1 - 3]);
        var_20 = (arr_3 [i_1]);
    }
    #pragma endscop
}
