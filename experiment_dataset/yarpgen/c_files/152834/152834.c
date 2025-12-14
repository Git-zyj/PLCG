/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 152834
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=152834 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/152834
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_16 = ((var_2 / ((((min(var_5, 0))) ? -31 : ((var_9 ? var_13 : var_11))))));
    var_17 = ((((min(var_5, ((30 ? -1 : 443417046))))) ? var_6 : ((((min(var_3, var_7)))))));

    for (int i_0 = 0; i_0 < 22;i_0 += 1)
    {
        var_18 = (max(var_18, (((((((arr_0 [i_0]) ? (min((arr_1 [i_0]), var_2)) : ((7 ? var_4 : var_15))))) ? ((min(var_7, 11324))) : 6)))));
        var_19 = ((min(var_8, (arr_0 [i_0]))));
        var_20 = var_15;
    }
    var_21 |= (var_7 ? var_2 : 17);
    #pragma endscop
}
