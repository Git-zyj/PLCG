/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 169348
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=169348 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/169348
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_19 = var_5;
    var_20 = ((150 ? 112 : 28));

    for (int i_0 = 1; i_0 < 22;i_0 += 1)
    {
        var_21 = (max(var_21, ((((~-132) ? (246 == 150) : -81)))));
        arr_3 [22] &= (max(-1, var_18));
        var_22 = 15;
    }
    #pragma endscop
}
