/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 181416
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=181416 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/181416
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_16 = ((((((max(var_11, var_0)) & -var_10))) ? (((!var_4) + (max(var_2, 1)))) : (((var_14 ? (1 < 84) : var_5)))));
    var_17 = ((var_11 ? var_7 : (!var_7)));
    var_18 = ((~(var_9 || var_11)));
    var_19 = (max((((var_7 ? 1 : var_1))), (((!(!var_14))))));

    for (int i_0 = 0; i_0 < 21;i_0 += 1)
    {
        var_20 |= (((-(arr_3 [i_0]))));
        var_21 = ((!(~var_11)));
    }
    #pragma endscop
}
