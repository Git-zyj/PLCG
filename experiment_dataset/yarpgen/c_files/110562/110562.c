/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 110562
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=110562 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/110562
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_20 = ((33 ? 127 : 40));

    for (int i_0 = 2; i_0 < 10;i_0 += 1)
    {
        arr_2 [i_0] = ((((((202 > 171) ? ((var_3 ? var_11 : var_10)) : (var_3 & var_3)))) ? var_1 : var_4));
        var_21 -= ((((((var_5 == var_14) ? ((var_3 ? var_16 : var_15)) : ((var_1 ? 198 : var_8))))) ? (((((var_8 ? var_14 : var_9))) ? var_6 : (((var_6 ? var_13 : var_2))))) : (var_13 || var_1)));
    }
    #pragma endscop
}
