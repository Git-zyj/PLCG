/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 104733
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=104733 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/104733
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 2; i_0 < 11;i_0 += 1)
    {
        arr_2 [i_0] [i_0] = (max((min((max(var_9, var_10)), 1)), ((((arr_1 [i_0 + 2]) ? (arr_0 [i_0 + 1]) : (arr_0 [i_0 - 1]))))));
        var_12 = (min(var_12, (((((((max(var_3, 1))) ? (arr_1 [i_0 - 1]) : (arr_1 [i_0 + 2]))) | -39)))));
        arr_3 [i_0] [i_0] = (min((max((((arr_0 [i_0]) ? 1 : var_1)), (arr_1 [i_0 - 2]))), 1));
        var_13 = ((-(max(((max((arr_1 [i_0]), (arr_1 [10])))), ((1 ? var_5 : 1))))));
        arr_4 [i_0] = (~1508713192);
    }
    var_14 = (min(var_14, var_3));
    var_15 = ((3706169634325421924 - (((-6 ? -var_6 : 2047)))));
    #pragma endscop
}
