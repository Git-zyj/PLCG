/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 167134
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=167134 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/167134
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 0; i_0 < 25;i_0 += 1)
    {
        var_11 = ((((((arr_0 [i_0] [i_0]) ? (arr_0 [i_0] [16]) : (arr_1 [i_0])))) ? ((((max(var_6, var_4)) < ((min(var_3, var_2)))))) : (var_1 < var_0)));
        var_12 = var_5;
        var_13 = ((((min((arr_0 [i_0] [i_0]), 28558))) ? (((!((((arr_0 [i_0] [i_0]) ? (arr_0 [i_0] [i_0]) : var_7)))))) : (((var_2 > (min(var_10, (arr_2 [i_0]))))))));
    }
    var_14 = (min(var_14, var_7));
    #pragma endscop
}
