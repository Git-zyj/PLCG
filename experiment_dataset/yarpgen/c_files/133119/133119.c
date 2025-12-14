/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 133119
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=133119 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/133119
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_14 = var_7;
    var_15 = 38005;

    for (int i_0 = 0; i_0 < 24;i_0 += 1)
    {
        var_16 = ((~(!27531)));
        arr_4 [i_0] = (((27529 == 38005) || var_1));
    }
    #pragma endscop
}
