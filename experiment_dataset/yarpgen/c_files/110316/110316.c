/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 110316
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=110316 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/110316
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_20 = var_3;
    var_21 = var_17;
    var_22 = var_18;
    var_23 = ((~(max((~3), var_13))));

    for (int i_0 = 0; i_0 < 22;i_0 += 1)
    {
        var_24 += 550379871319579114;
        var_25 = (min(var_25, (arr_1 [i_0])));
    }
    #pragma endscop
}
