/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 174801
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=174801 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/174801
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_14 = (((((((max(0, 1))) ? ((max(0, var_13))) : ((65535 ? 13955232039380786017 : var_8))))) ? ((var_0 ? var_1 : 0)) : ((min((var_2 || var_7), var_7)))));
    var_15 = ((-var_13 ? (max((46 && var_9), (max(12433, 6871872411248551333)))) : ((((17199849814676948299 ? var_0 : var_10))))));

    for (int i_0 = 1; i_0 < 1;i_0 += 1)
    {
        var_16 = (min((arr_1 [i_0]), ((min((arr_0 [i_0 - 1]), (((arr_0 [i_0]) * (arr_3 [i_0]))))))));
        arr_4 [1] = (max(((((((arr_2 [i_0 - 1] [i_0]) * 4491512034328765598))) ? (((arr_1 [0]) ? (arr_1 [i_0]) : -9)) : (arr_3 [i_0]))), 37097756));
        var_17 = 37097756;
        var_18 = (arr_0 [0]);
    }
    var_19 = var_10;
    #pragma endscop
}
