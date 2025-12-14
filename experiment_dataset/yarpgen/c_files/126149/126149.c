/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 126149
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=126149 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/126149
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_16 = 1048568;
    var_17 = var_1;
    var_18 = var_8;

    for (int i_0 = 0; i_0 < 18;i_0 += 1)
    {
        var_19 = ((var_15 <= ((var_15 | (-1048569 != -1048573)))));
        arr_3 [i_0] [i_0] = var_4;
    }
    for (int i_1 = 2; i_1 < 23;i_1 += 1)
    {
        arr_6 [i_1 + 2] [21] = (((min(0, (min(var_13, var_11)))) ^ ((min(((min((arr_5 [i_1 + 2]), var_14))), (arr_4 [22]))))));
        var_20 = 747730622;
    }
    #pragma endscop
}
