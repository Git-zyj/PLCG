/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 187220
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=187220 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/187220
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_14 |= var_1;
    var_15 = var_10;

    for (int i_0 = 0; i_0 < 18;i_0 += 1)
    {
        var_16 = ((!((min(288195191779622912, (arr_1 [i_0] [i_0]))))));
        var_17 ^= ((((((arr_3 [i_0]) ? var_12 : 2302694257))) ? (min((min((arr_3 [0]), (arr_3 [i_0]))), (min((arr_3 [i_0]), var_7)))) : (((((arr_3 [i_0]) && (((~(arr_3 [i_0]))))))))));
    }
    var_18 = (min(((var_0 | ((1 ? var_3 : 58655)))), (max(var_5, var_13))));
    #pragma endscop
}
