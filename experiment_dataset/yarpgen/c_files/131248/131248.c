/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 131248
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=131248 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/131248
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_14 ^= var_8;

    for (int i_0 = 1; i_0 < 18;i_0 += 1)
    {
        var_15 = ((((max((((arr_1 [i_0]) ? -1592336620293639706 : (arr_1 [i_0]))), var_4))) ? ((var_11 ? (((arr_0 [i_0]) & -1921923634806934969)) : var_11)) : (max((23617 != var_5), var_4))));
        var_16 &= (arr_1 [i_0]);
    }
    for (int i_1 = 1; i_1 < 18;i_1 += 1)
    {
        arr_5 [i_1] = var_9;
        var_17 ^= ((!(((min(var_3, var_9))))));
        var_18 = (min(var_18, (((~((var_1 ? (((arr_3 [i_1] [13]) ? -32746 : var_1)) : (arr_3 [i_1 + 1] [i_1 + 2]))))))));
        var_19 &= ((((max(23615, (((-73 > (arr_3 [i_1] [i_1]))))))) != 1));
    }
    #pragma endscop
}
