/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 119221
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=119221 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/119221
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_14 -= 300339366;
    var_15 = var_6;

    for (int i_0 = 2; i_0 < 11;i_0 += 1)
    {
        var_16 = (((!300339379) ? 300339379 : (arr_1 [i_0 - 2])));
        var_17 = 1265249588;
    }
    #pragma endscop
}
