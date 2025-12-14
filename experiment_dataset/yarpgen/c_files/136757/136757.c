/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 136757
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=136757 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/136757
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 0; i_0 < 14;i_0 += 1)
    {
        var_20 = (((var_12 ? var_8 : (arr_1 [i_0]))));
        var_21 = (((((var_2 ? (arr_0 [i_0]) : (arr_0 [i_0])))) ^ (((arr_0 [i_0]) / (arr_1 [i_0])))));
        var_22 = (min((((((arr_0 [i_0]) + 2147483647)) << (((((arr_0 [i_0]) + 104)) - 8)))), (min((arr_0 [i_0]), (arr_0 [i_0])))));
        var_23 = (min(var_23, ((((((arr_0 [i_0]) ? (arr_0 [i_0]) : (((arr_1 [i_0]) ? 3509071397 : 88)))) >= (((-(arr_0 [i_0])))))))));
    }
    var_24 *= var_0;
    #pragma endscop
}
