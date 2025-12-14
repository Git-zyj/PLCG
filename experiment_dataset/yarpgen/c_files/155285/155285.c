/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 155285
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=155285 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/155285
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_15 = (max(var_15, var_3));
    var_16 = var_4;

    for (int i_0 = 2; i_0 < 22;i_0 += 1)
    {
        arr_2 [i_0 + 1] = ((1 >> ((((((arr_0 [2]) ? 1 : var_2))) ? 1 : ((var_14 ? (arr_0 [i_0]) : (arr_1 [i_0])))))));
        var_17 = ((~var_5) ? ((0 ? (arr_1 [i_0 + 1]) : 8)) : ((~(arr_1 [i_0 + 1]))));
    }
    var_18 = ((~((3926715015 ? var_10 : (!var_1)))));
    #pragma endscop
}
