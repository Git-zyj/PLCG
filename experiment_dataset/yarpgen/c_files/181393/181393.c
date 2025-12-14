/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 181393
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=181393 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/181393
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_17 = (max(var_17, (((var_11 ? 4784132450130647063 : (((((var_7 ? var_1 : var_8))) ? ((var_15 ? var_1 : 6663091763667097777)) : (var_16 | var_5))))))));

    for (int i_0 = 1; i_0 < 20;i_0 += 1)
    {
        arr_2 [i_0] [i_0] = var_6;
        var_18 = (~var_10);
        arr_3 [i_0] = (~((var_8 | (arr_0 [i_0]))));
    }
    #pragma endscop
}
