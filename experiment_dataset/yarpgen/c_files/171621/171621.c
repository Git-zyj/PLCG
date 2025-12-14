/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 171621
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=171621 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/171621
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_15 = var_3;
    var_16 = ((((((-1024 || var_5) || 1))) + var_13));

    for (int i_0 = 1; i_0 < 16;i_0 += 1)
    {
        var_17 = 65535;
        var_18 = (max(var_18, (((((min(1, var_9))) && (((-var_13 ? 9223372036854775807 : ((1040384 ? -2184876865560735133 : 2184876865560735158))))))))));
        arr_2 [i_0] = var_11;
    }
    var_19 = (max(var_19, var_4));
    #pragma endscop
}
