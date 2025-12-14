/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 138561
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=138561 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/138561
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_18 = -var_13;

    for (int i_0 = 0; i_0 < 25;i_0 += 1)
    {
        arr_2 [i_0] = -18930;
        var_19 -= (min((max((var_17 || var_9), (min(53723, (arr_1 [9]))))), ((((((arr_1 [i_0]) ? 86 : (arr_1 [i_0])))) ? ((~(-127 - 1))) : ((max(18950, 0)))))));
        var_20 = (min(var_20, ((max(6519294190258091142, (((var_16 > (var_2 + 52)))))))));
        arr_3 [i_0] = (((max(1608675066718111325, 7)) / (((-(arr_1 [i_0]))))));
    }
    #pragma endscop
}
