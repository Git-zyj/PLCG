/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 128121
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=128121 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/128121
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_18 -= (((((var_0 ? (var_3 - 20481) : var_1))) ? (min(((var_13 ? var_0 : 4294967295)), var_8)) : ((min(-4294967273, 562949953421312)))));

    /* vectorizable */
    for (int i_0 = 0; i_0 < 12;i_0 += 1)
    {
        var_19 = ((-72 ? 3758096384 : 14344));
        var_20 = (!var_7);
        var_21 ^= (!172);
    }
    var_22 = (max(var_22, (((-9005754345722471246 ? var_7 : 14344)))));
    #pragma endscop
}
