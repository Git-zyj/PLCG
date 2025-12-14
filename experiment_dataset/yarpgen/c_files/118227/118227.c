/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 118227
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=118227 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/118227
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 0; i_0 < 18;i_0 += 1)
    {
        arr_2 [i_0] = ((+(max((arr_1 [i_0]), var_16))));
        var_20 = var_18;
    }
    var_21 = var_11;
    var_22 = var_6;
    var_23 = (max((~251), (((255 ? -40 : 0)))));
    #pragma endscop
}
