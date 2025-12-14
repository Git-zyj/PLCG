/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 139958
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=139958 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/139958
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_19 = (((((((max(var_10, 0))) ? var_7 : ((min(62, var_16)))))) ? (min((var_14 - var_3), var_8)) : var_4));

    for (int i_0 = 0; i_0 < 17;i_0 += 1)
    {
        var_20 *= (((((min(var_12, var_11)) - 32767)) - ((min((max((arr_1 [i_0]), 296670806)), (max((arr_0 [1] [i_0]), 2997483498)))))));
        arr_2 [i_0] = ((!(((42587 - (-2617360572996775606 - 5765))))));
    }
    for (int i_1 = 0; i_1 < 15;i_1 += 1)
    {
        var_21 = (min(var_21, 42587));
        arr_6 [6] [i_1] = (max(((3637838836 - (arr_5 [12]))), ((max((arr_3 [i_1]), (arr_3 [i_1]))))));
        arr_7 [11] = (((((arr_0 [i_1] [i_1]) ? (((arr_4 [9]) ? 32765 : var_18)) : ((((arr_3 [12]) + (arr_1 [i_1])))))) - (((max((arr_0 [13] [i_1]), (arr_0 [i_1] [i_1])))))));
        arr_8 [i_1] [5] = (arr_1 [i_1]);
    }
    #pragma endscop
}
