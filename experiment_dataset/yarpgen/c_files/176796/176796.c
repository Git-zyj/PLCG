/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 176796
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=176796 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/176796
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 0; i_0 < 23;i_0 += 1)
    {
        arr_2 [i_0] = 169;
        arr_3 [i_0] = (~0);
    }
    var_16 = var_14;
    var_17 = ((var_0 ? (((((-3429860980893494168 ? var_8 : var_4))) ? var_4 : var_10)) : var_8));
    var_18 = (var_11 && (((-((-36 ? 62 : 36))))));
    var_19 = (max(var_19, (((5622 ? 10829 : 129)))));
    #pragma endscop
}
