/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 114290
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=114290 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/114290
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_18 = ((((((min(var_16, var_8))))) ? (~var_15) : var_8));

    for (int i_0 = 2; i_0 < 12;i_0 += 1)
    {
        var_19 = (min(var_19, var_3));
        arr_2 [i_0] = (min((max(var_11, var_11)), (var_11 | var_17)));
    }
    for (int i_1 = 3; i_1 < 18;i_1 += 1)
    {
        var_20 = ((((min(((min(var_8, var_10))), (max(var_0, var_2))))) ? var_0 : (min((max(var_17, var_0)), var_2))));
        var_21 = (min(var_21, ((((var_5 + var_13) ? ((-(min(var_0, var_5)))) : (max((((var_17 ? var_14 : var_12))), (min(var_11, var_0)))))))));
        arr_6 [8] |= ((-var_5 ? ((var_3 ? var_6 : var_6)) : ((min(var_8, var_14)))));
    }
    #pragma endscop
}
