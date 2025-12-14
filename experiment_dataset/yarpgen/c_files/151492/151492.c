/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 151492
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=151492 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/151492
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 0; i_0 < 14;i_0 += 1)
    {
        var_19 = (arr_0 [i_0]);
        var_20 = (min(var_20, 594442038));
        arr_2 [i_0] = 26;
    }
    var_21 -= -var_8;
    var_22 = ((-((((max(var_7, var_13))) ? (min(var_6, var_17)) : var_13))));
    #pragma endscop
}
