/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 177133
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=177133 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/177133
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 0; i_0 < 25;i_0 += 1)
    {
        var_11 = (~127);
        var_12 = -123;
    }

    for (int i_1 = 3; i_1 < 14;i_1 += 1)
    {
        var_13 = (min((((var_6 / (max(-111, (arr_1 [i_1] [i_1])))))), (min(var_8, (arr_4 [i_1 + 2])))));
        var_14 = (0 ? 0 : (-127 - 1));
    }
    var_15 = 53577;
    var_16 += (var_10 / (((55766 % 125) ? var_8 : -6794252638658181788)));
    #pragma endscop
}
