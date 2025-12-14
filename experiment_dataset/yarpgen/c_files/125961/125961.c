/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 125961
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=125961 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/125961
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_13 = max(-1333064228, ((-29374 ? var_8 : (min(4294967295, 17)))));

    for (int i_0 = 2; i_0 < 14;i_0 += 1)
    {
        var_14 = (((((81 ? (!8388607) : 1277893437))) ? (((~((-1 ? (arr_1 [14]) : 1333064237))))) : -9223372036854775808));
        arr_2 [i_0] [i_0] = ((-((1333064228 ? (arr_0 [i_0 - 1]) : (~29374)))));
        var_15 = (((((((max(var_0, (arr_0 [i_0 - 1])))) ? (((!(arr_0 [3])))) : ((var_2 ? var_11 : var_11))))) ? (min((max((arr_1 [i_0]), 576460717943685120)), ((min(22933, 5))))) : ((-(((arr_1 [i_0 - 2]) ? var_11 : (arr_0 [i_0 - 2])))))));
    }
    var_16 = ((var_5 ? (((((min(var_10, 29374))) ? ((var_3 ? 599213123 : var_1)) : ((4294967295 ? var_0 : 104))))) : (max(var_10, 6557))));
    #pragma endscop
}
