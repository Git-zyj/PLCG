/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 16805
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=16805 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/16805
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_18 = (min(var_3, ((var_0 ? var_8 : ((min(var_13, var_11)))))));

    for (int i_0 = 0; i_0 < 23;i_0 += 1)
    {
        var_19 = (min((min(((var_15 ? (arr_1 [i_0]) : -1)), (~-924158586234312883))), (((((arr_0 [19]) ? (arr_1 [i_0]) : var_10)) & (((arr_1 [i_0]) ^ (arr_1 [i_0])))))));
        var_20 = min((min((arr_1 [i_0]), (arr_1 [i_0]))), (min((arr_1 [i_0]), (arr_1 [i_0]))));
    }
    #pragma endscop
}
