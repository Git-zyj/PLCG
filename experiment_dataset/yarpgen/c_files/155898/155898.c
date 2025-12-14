/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 155898
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=155898 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/155898
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_12 = -1815401283;
    var_13 = ((((~-1815401283) & (max(var_10, 1815401310)))));
    var_14 = (-var_8 - var_3);

    for (int i_0 = 0; i_0 < 18;i_0 += 1)
    {
        var_15 -= (((((arr_1 [i_0]) < (arr_1 [i_0]))) ? -var_8 : (arr_1 [i_0])));
        var_16 = (min(var_16, (((-(arr_1 [i_0]))))));
    }
    #pragma endscop
}
