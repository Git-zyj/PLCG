/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 11933
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=11933 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/11933
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_15 = (max((min((!-167194890), ((var_0 ? var_6 : var_6)))), ((min((((88443849 ? var_10 : var_13))), var_4)))));
    var_16 ^= 24974;
    var_17 = ((46 ? ((((max(var_13, var_13))) ? var_2 : var_4)) : var_3));
    var_18 = var_0;

    for (int i_0 = 0; i_0 < 13;i_0 += 1)
    {
        var_19 *= (min(((-33 ? var_4 : (var_9 < var_3))), var_8));
        var_20 = (((((~(((arr_0 [i_0]) ? 10166895331502561578 : var_3))))) ? (max(((min((arr_1 [1]), var_8))), (~var_2))) : (arr_0 [i_0])));
    }
    #pragma endscop
}
