/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 166127
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=166127 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/166127
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_14 = var_4;
    var_15 *= (min((((!((max(78, var_12)))))), (((~15685155757381654485) / 15685155757381654485))));

    for (int i_0 = 3; i_0 < 10;i_0 += 1)
    {
        arr_4 [i_0] = (min(((-10 ? (arr_0 [i_0] [i_0 + 1]) : (((arr_0 [i_0] [i_0 - 3]) ? (arr_1 [i_0]) : (-32767 - 1))))), (((((65535 ? (arr_3 [5] [i_0]) : -20712))) ? (((arr_2 [7] [i_0]) ? (arr_1 [i_0 - 1]) : var_0)) : ((2761588316327897144 ? (arr_1 [i_0]) : (arr_2 [i_0] [i_0])))))));
        var_16 = ((+((((arr_2 [i_0 - 2] [i_0 + 1]) || 15685155757381654470)))));
        arr_5 [i_0] = (((arr_0 [i_0] [1]) < (((arr_3 [i_0] [i_0]) ? (arr_2 [1] [1]) : (((arr_2 [i_0] [1]) - 47330))))));
    }
    #pragma endscop
}
