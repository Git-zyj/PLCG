/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 151663
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=151663 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/151663
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_13 = ((var_8 & (((~14908980903566064500) | ((max(var_7, 617807050)))))));
    var_14 = (((((var_9 ? 0 : -3852574681457582728))) ? var_7 : (((((var_3 ? var_0 : var_7))) ? ((var_5 ? var_11 : 14908980903566064486)) : ((var_8 ? var_8 : 0))))));
    var_15 = (((var_6 ? (var_4 && var_1) : (max(2147483647, var_3)))));

    for (int i_0 = 0; i_0 < 16;i_0 += 1)
    {
        arr_2 [13] = (max(((max(((((arr_0 [i_0]) ? (arr_0 [i_0]) : 1))), 5836538079438226902))), ((516124695 ? 65535 : 16728065915652246862))));
        var_16 = (min(var_10, (((((arr_0 [i_0]) && (arr_0 [i_0]))) ? (arr_1 [i_0]) : (min((arr_1 [i_0]), -3852574681457582728))))));
        var_17 = min(((((arr_0 [i_0]) ? (arr_1 [i_0]) : 3852574681457582727))), (arr_1 [i_0]));
    }
    var_18 = (max((min((!2147483647), var_11)), (((((max(4294967295, var_10))) && var_12)))));
    #pragma endscop
}
