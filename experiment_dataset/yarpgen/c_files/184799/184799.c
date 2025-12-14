/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 184799
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=184799 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/184799
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_11 = (max(var_8, (min((var_1 - 65531), var_2))));
    var_12 = (var_7 ^ var_6);
    var_13 = (min(var_13, var_1));

    for (int i_0 = 3; i_0 < 8;i_0 += 1)
    {
        var_14 = ((((var_2 ? var_8 : ((var_7 >> (var_1 - 111)))))) ? var_7 : (max((arr_1 [i_0 - 3] [i_0]), (arr_1 [i_0 + 1] [i_0]))));
        var_15 = (max((min(var_0, var_8)), (min(((var_1 ? var_0 : var_8)), (min(var_10, -4477))))));
        var_16 = (arr_0 [i_0]);
        var_17 = var_10;
    }
    var_18 = ((!var_5) >> (11789 - 11774));
    #pragma endscop
}
