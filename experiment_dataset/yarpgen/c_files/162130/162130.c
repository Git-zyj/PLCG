/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 162130
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=162130 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/162130
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_10 = var_8;

    for (int i_0 = 3; i_0 < 12;i_0 += 1)
    {
        arr_3 [i_0] = (arr_1 [i_0]);
        var_11 = (min(var_5, (((arr_0 [i_0 - 1]) ? (arr_0 [i_0 - 1]) : var_7))));
    }
    var_12 = ((var_2 * (min(var_1, (1 % var_7)))));
    var_13 = ((min((min(var_5, 20887)), var_4)));
    #pragma endscop
}
