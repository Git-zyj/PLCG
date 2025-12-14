/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 164656
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=164656 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/164656
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_13 = (min(var_13, (((131071 ? 0 : 131071)))));
    var_14 = var_10;

    for (int i_0 = 0; i_0 < 11;i_0 += 1)
    {
        var_15 = ((((81 ? (arr_1 [i_0] [i_0]) : 18446744073709420544)) > (((-(arr_2 [i_0] [i_0]))))));
        var_16 = (min((max(-var_9, (((-113 != (arr_1 [i_0] [i_0])))))), -0));
        var_17 = (max(var_5, (((arr_1 [i_0] [1]) ? ((((arr_1 [i_0] [i_0]) > var_8))) : (max((arr_2 [i_0] [i_0]), 0))))));
    }
    var_18 = (min(var_18, ((max(var_4, var_3)))));
    #pragma endscop
}
