/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 175104
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=175104 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/175104
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_16 = ((((~var_2) ^ 3832)));
    var_17 = ((~((~(~var_2)))));

    for (int i_0 = 0; i_0 < 11;i_0 += 1)
    {
        var_18 &= ((~((((max(var_7, var_3))) ? ((var_1 ? var_5 : var_0)) : var_15))));
        arr_4 [i_0] = var_1;
        var_19 = (max(var_19, var_8));
    }
    #pragma endscop
}
