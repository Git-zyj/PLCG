/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 141579
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=141579 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/141579
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_18 = (min(-var_9, 49691));

    for (int i_0 = 0; i_0 < 25;i_0 += 1)
    {
        var_19 = (((max(var_4, (arr_1 [i_0] [i_0])))) * ((+(((arr_1 [i_0] [i_0]) ? 49691 : -52)))));
        arr_4 [i_0] [i_0] = (max((min((((var_5 + 9223372036854775807) >> (var_11 - 1678521497424991655))), ((min(15845, var_17))))), (~var_9)));
    }
    for (int i_1 = 2; i_1 < 9;i_1 += 1)
    {
        arr_8 [i_1] = ((15841 * (var_13 / var_12)));
        var_20 = (min(var_20, var_4));
    }
    for (int i_2 = 0; i_2 < 19;i_2 += 1)
    {
        arr_12 [i_2] = 60067;
        arr_13 [i_2] [16] = (max(((((min(var_12, var_4))) ? (arr_3 [0]) : -var_5)), (min(((((arr_0 [i_2]) ? (arr_3 [7]) : (arr_11 [i_2] [i_2])))), ((-82 ? 1101594849582620450 : var_4))))));
    }
    #pragma endscop
}
