/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 141859
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=141859 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/141859
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_15 = var_13;
    var_16 = var_0;

    for (int i_0 = 0; i_0 < 10;i_0 += 1)
    {
        var_17 = (max(((~(arr_3 [i_0]))), -0));
        var_18 = var_12;
        var_19 &= (((arr_1 [i_0]) | 65535));
    }
    for (int i_1 = 1; i_1 < 19;i_1 += 1)
    {
        var_20 = (min((((~0) ? (var_1 & var_4) : 1344149532)), ((((var_11 != var_7) < (arr_5 [16] [16]))))));
        arr_6 [16] = -1876760727;
    }
    #pragma endscop
}
