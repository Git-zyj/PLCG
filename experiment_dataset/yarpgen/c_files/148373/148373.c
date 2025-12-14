/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 148373
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=148373 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/148373
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_19 = (max(var_19, (~-4)));

    for (int i_0 = 3; i_0 < 8;i_0 += 1)
    {
        var_20 = ((((arr_1 [i_0] [i_0 - 1]) ? (arr_1 [i_0 - 1] [i_0]) : 1)) == ((min(((max(var_16, 240))), (((arr_0 [i_0]) | (arr_0 [i_0])))))));
        var_21 = var_8;
    }
    for (int i_1 = 0; i_1 < 19;i_1 += 1)
    {
        arr_5 [i_1] [i_1] = ((((((max(var_14, -4)) + -var_3))) && var_5));
        var_22 = (min(var_22, ((((((((0 | var_0) & -6)) + 9223372036854775807)) << (var_7 - 64))))));
        var_23 = ((var_8 ? var_18 : (-1223812735976157416 > -var_9)));
    }
    #pragma endscop
}
