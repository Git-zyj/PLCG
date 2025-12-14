/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 144976
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=144976 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/144976
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 0; i_0 < 22;i_0 += 1)
    {
        var_15 = (max(1, 1));
        var_16 = (!var_14);
        var_17 = (arr_1 [i_0]);
        var_18 = (min(((+(((arr_1 [1]) / var_11)))), ((+(((arr_1 [i_0]) * (arr_0 [i_0] [i_0])))))));
    }
    var_19 = var_5;
    #pragma endscop
}
