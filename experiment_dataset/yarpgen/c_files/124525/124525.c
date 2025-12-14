/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 124525
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=124525 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/124525
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 4; i_0 < 18;i_0 += 1)
    {
        arr_2 [i_0 - 3] = var_13;
        var_14 = (arr_1 [i_0 + 3]);
    }
    var_15 = var_12;
    var_16 = (max(var_16, 3862900825));
    var_17 = var_11;
    #pragma endscop
}
