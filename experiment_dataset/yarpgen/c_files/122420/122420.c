/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 122420
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=122420 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/122420
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 3; i_0 < 17;i_0 += 1)
    {
        var_16 = (arr_0 [i_0 - 2]);
        var_17 = 1060479378;
    }
    var_18 = (max(var_18, 1285244611));
    #pragma endscop
}
