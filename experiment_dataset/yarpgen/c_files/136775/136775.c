/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 136775
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=136775 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/136775
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 0; i_0 < 22;i_0 += 1)
    {
        var_16 = max(var_10, (((arr_0 [i_0]) ? (arr_2 [i_0]) : (arr_1 [i_0] [i_0]))));
        var_17 = -1;
        var_18 = (arr_0 [i_0]);
    }
    for (int i_1 = 0; i_1 < 21;i_1 += 1)
    {
        var_19 += -1464822562;
        var_20 = arr_0 [i_1];
    }
    var_21 = (((((var_14 % 1161035978) ? var_6 : (((max(var_15, 63)))))) % var_12));
    #pragma endscop
}
