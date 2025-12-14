/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 187238
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=187238 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/187238
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_18 = (((((var_2 && var_15) && var_13)) ? (((-var_13 ? ((-89 ? 1 : 65535)) : (!var_17)))) : var_10));
    var_19 = (max(var_19, ((min((((~-32765) ? (((min(var_0, 1)))) : ((var_0 ? var_5 : var_1)))), ((((((var_5 ? var_3 : var_2))) ? ((16 ? var_11 : var_6)) : ((var_6 ? var_8 : 28))))))))));

    for (int i_0 = 0; i_0 < 0;i_0 += 1)
    {
        var_20 = var_16;
        var_21 ^= (((((var_17 && (((var_1 ? var_5 : (arr_1 [i_0] [i_0])))))))) < (max((min(41, 1467204559)), (((~(arr_0 [i_0] [i_0])))))));
        var_22 = (min((((var_1 > (4 != var_16)))), var_3));
    }
    #pragma endscop
}
