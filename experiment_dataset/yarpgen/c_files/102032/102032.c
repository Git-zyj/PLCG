/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 102032
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=102032 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/102032
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_18 |= ((min(((var_13 ? var_14 : 18)), var_8)));

    for (int i_0 = 0; i_0 < 15;i_0 += 1)
    {
        arr_2 [i_0] = ((~(((arr_0 [i_0]) & 15534262230528429770))));
        var_19 ^= ((+((((((arr_1 [12]) * (arr_0 [2])))) + var_15))));
        var_20 = (((max((arr_0 [i_0]), (arr_0 [i_0]))) ? (arr_0 [i_0]) : (((arr_0 [i_0]) + 1063925478))));
        arr_3 [i_0] = (max(((~((max((arr_1 [i_0]), (arr_0 [i_0])))))), ((((arr_0 [i_0]) != var_3)))));
    }
    #pragma endscop
}
