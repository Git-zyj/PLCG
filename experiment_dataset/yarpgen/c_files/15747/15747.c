/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 15747
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=15747 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/15747
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 0; i_0 < 25;i_0 += 1)
    {
        arr_4 [i_0] [i_0] = (((~34753) ? ((min(34753, (max((arr_2 [i_0]), (arr_1 [i_0])))))) : (((((min((arr_3 [0]), 7936)))) & (max((arr_2 [i_0]), (arr_0 [5])))))));
        var_11 = (max(((min(118, var_5))), (arr_0 [i_0])));
    }
    for (int i_1 = 1; i_1 < 12;i_1 += 1)
    {
        var_12 = ((((7936 ? (arr_7 [i_1 + 2] [i_1 + 2]) : -119)) >= (((((arr_2 [i_1 + 2]) <= (1022 + 84)))))));
        arr_9 [i_1] = ((1 ? (!var_1) : (((716177371547623201 > (arr_7 [i_1 + 2] [i_1 + 2]))))));
        var_13 = (max(var_13, (arr_3 [i_1])));
    }
    for (int i_2 = 2; i_2 < 22;i_2 += 1)
    {
        var_14 = (max(var_14, (min((arr_0 [i_2]), (min((arr_1 [i_2]), (max((arr_10 [i_2]), (arr_11 [i_2] [i_2])))))))));
        var_15 = (arr_0 [i_2 + 1]);
        var_16 = (arr_1 [i_2 - 1]);
    }
    var_17 &= (((((114 | 2147483647) ? var_1 : (var_5 ^ var_9))) ^ var_8));
    #pragma endscop
}
