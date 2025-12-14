/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 171750
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=171750 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/171750
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_17 = var_15;
    var_18 = var_13;

    for (int i_0 = 0; i_0 < 1;i_0 += 1)
    {
        var_19 = (min(var_19, var_7));
        var_20 = (arr_0 [10] [10]);
        var_21 = (max(var_21, (((((var_3 ? (((236 ? var_12 : 242))) : (min(var_13, (arr_1 [i_0]))))) - ((((9 << 1) ? -55300093 : (~-55300086)))))))));
        var_22 = (arr_0 [i_0] [i_0]);
    }
    for (int i_1 = 0; i_1 < 1;i_1 += 1)
    {
        var_23 = 1;
        var_24 &= (min(var_15, 14633532800290825024));
    }
    #pragma endscop
}
