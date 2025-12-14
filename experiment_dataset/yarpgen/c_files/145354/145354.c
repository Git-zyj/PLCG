/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 145354
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=145354 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/145354
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_15 = ((((((~var_14) ? var_14 : var_2))) ? ((min(var_8, 0))) : (((min(var_12, var_5))))));
    var_16 |= (((-11056349593277373502 ? (min(var_8, 577836907788370755) : ((max(var_0, var_10)))))));
    var_17 = ((((min((((var_6 ? 31978 : var_13))), var_2))) ? (((min((!var_10), var_1)))) : (((!var_8) ? (min(var_5, 18446744073709551615)) : (!var_0)))));
    var_18 = (min(var_13, (!-var_6)));

    for (int i_0 = 1; i_0 < 11;i_0 += 1)
    {
        var_19 = (!12171989835459492562);
        arr_3 [i_0] = ((!((max(3752, ((var_1 ? (arr_2 [i_0]) : 4194135653395762634)))))));
        arr_4 [i_0 + 1] [i_0] = ((-(!31984)));
    }
    #pragma endscop
}
