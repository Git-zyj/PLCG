/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 10213
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=10213 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/10213
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_17 = (max((max(var_10, var_14)), (max(var_2, (max(var_6, var_5))))));
    var_18 = ((+((-var_12 ? (var_6 % var_15) : (max(var_4, var_7))))));
    var_19 |= ((1 ? 3 : var_13));
    var_20 += var_5;

    for (int i_0 = 0; i_0 < 25;i_0 += 1)
    {
        var_21 = var_8;
        arr_2 [i_0] [i_0] = (+((max((arr_1 [i_0]), (arr_1 [i_0])))));
    }
    #pragma endscop
}
