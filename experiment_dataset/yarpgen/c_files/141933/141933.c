/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 141933
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=141933 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/141933
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 0; i_0 < 19;i_0 += 1)
    {
        arr_3 [i_0] = var_6;
        var_17 = var_4;
        arr_4 [i_0] = var_3;
        arr_5 [i_0] = (((-1764023431 || 0) > (~-49)));
    }
    var_18 = (~var_0);
    #pragma endscop
}
