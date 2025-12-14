/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 112915
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=112915 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/112915
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_10 = (max(var_8, ((min(var_0, 1610612736)))));

    for (int i_0 = 2; i_0 < 9;i_0 += 1)
    {
        arr_4 [i_0] = (min((!var_8), (min(var_2, (arr_1 [8] [1])))));
        arr_5 [i_0] [10] = max(var_9, (max((~var_0), (!4501))));
        var_11 = ((~((max(var_9, 30592)))));
        var_12 += 29339;
        var_13 = (min(var_13, (~var_1)));
    }
    #pragma endscop
}
