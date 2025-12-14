/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 147228
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=147228 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/147228
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 3; i_0 < 18;i_0 += 1)
    {
        var_17 = (arr_1 [i_0 + 3] [i_0 - 3]);
        var_18 = ((((min((arr_0 [i_0 - 2] [i_0 + 1]), ((0 << (((arr_0 [i_0 + 4] [i_0 + 1]) + 86))))))) ? var_7 : ((((((var_13 ? 4294967295 : (arr_1 [i_0] [13]))) < (((max((arr_0 [4] [i_0 - 1]), 255))))))))));
    }
    var_19 = 163;
    var_20 = var_6;
    #pragma endscop
}
