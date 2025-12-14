/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 165602
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=165602 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/165602
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_18 = ((var_7 << (var_17 - 65146)));
    var_19 = (max(var_19, var_1));
    var_20 = var_2;

    for (int i_0 = 1; i_0 < 20;i_0 += 1)
    {
        var_21 = (min(var_21, (((((~((var_10 >> (((arr_1 [i_0] [i_0]) - 3017865702564492700)))))) > var_7)))));
        arr_3 [i_0] = (((((41752 ? -90 : 4881873256226791658))) ? (((((((arr_0 [12]) + 2147483647)) >> (var_15 + 73))) >> (((arr_0 [i_0]) + 2497)))) : ((~(73 > var_15)))));
        arr_4 [10] &= ((~((var_14 ? (arr_1 [i_0 + 2] [i_0 + 2]) : 4217454800))));
        arr_5 [5] = (min((~64), ((((arr_0 [i_0 + 3]) > var_1)))));
    }
    #pragma endscop
}
