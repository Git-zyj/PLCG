/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 115101
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=115101 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/115101
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 1; i_0 < 12;i_0 += 1)
    {
        var_19 = (max(var_19, (((min((arr_0 [i_0 + 1] [i_0 + 3]), (arr_0 [i_0 - 1] [i_0 - 1])))))));
        var_20 = ((((min(1, -7280896675230319752))) ? (max((((-33 ? var_5 : 98))), -7280896675230319752)) : (((min(1, -17704))))));
        var_21 = (max(1, (arr_0 [i_0] [i_0 + 1])));
    }
    var_22 = (min(var_2, ((var_8 ? -63 : ((max(var_7, var_18)))))));
    var_23 = ((((((((1 ? var_2 : 12268))) ? ((var_1 ? var_16 : var_5)) : (43271 + var_6)))) ? (min((-26313 & 29715), var_15)) : var_15));
    var_24 = ((var_8 ? 32640 : var_1));
    #pragma endscop
}
