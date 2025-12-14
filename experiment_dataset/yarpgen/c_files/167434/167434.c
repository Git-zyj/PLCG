/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 167434
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=167434 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/167434
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 0; i_0 < 10;i_0 += 1)
    {
        arr_4 [i_0] = (((18612 > 46723) & (((18582 < var_7) ? var_4 : (46914 | 2369414685)))));
        arr_5 [i_0] = ((46919 ? (((((46953 ? var_5 : 3847907071))) ? 1 : 27394)) : var_1));
        var_17 = 18564;
    }
    var_18 = (min(var_18, var_0));
    var_19 = (max(var_19, (1 || var_12)));
    var_20 = 4145914116;
    #pragma endscop
}
