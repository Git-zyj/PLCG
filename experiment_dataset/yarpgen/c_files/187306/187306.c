/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 187306
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=187306 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/187306
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_11 = var_2;

    for (int i_0 = 2; i_0 < 22;i_0 += 1)
    {
        arr_3 [i_0] = var_8;
        var_12 = (i_0 % 2 == zero) ? ((max((~-23172), (((((var_8 << (((arr_0 [i_0] [i_0]) - 2014))))) ? (arr_2 [i_0]) : ((var_8 * (arr_0 [i_0] [i_0])))))))) : ((max((~-23172), (((((var_8 << (((((((arr_0 [i_0] [i_0]) - 2014)) + 21878)) - 14))))) ? (arr_2 [i_0]) : ((var_8 * (arr_0 [i_0] [i_0]))))))));
        var_13 += ((var_6 + (arr_1 [i_0 - 1] [i_0 + 1])));
        var_14 = (max((((((arr_2 [i_0]) || 2137)) ? (var_1 && -23173) : (var_8 && var_2))), ((min((arr_2 [i_0]), (arr_2 [i_0]))))));
    }
    #pragma endscop
}
