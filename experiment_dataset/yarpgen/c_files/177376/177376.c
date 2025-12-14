/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 177376
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=177376 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/177376
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_10 -= ((!(((((max(5, 213))) * ((var_2 ? var_5 : var_8)))))));

    for (int i_0 = 0; i_0 < 18;i_0 += 1)
    {
        var_11 = (~var_6);
        var_12 = (arr_1 [i_0]);
        var_13 = ((-((((var_2 ? var_4 : var_7)) * (((-31 ? 31 : var_5)))))));
    }
    #pragma endscop
}
