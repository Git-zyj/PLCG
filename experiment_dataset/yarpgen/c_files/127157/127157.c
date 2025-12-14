/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 127157
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=127157 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/127157
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_15 = -var_12;

    /* vectorizable */
    for (int i_0 = 0; i_0 < 14;i_0 += 1)
    {
        var_16 ^= arr_0 [i_0];
        arr_2 [i_0] [i_0] = ((1 && var_4) ? 5233380063959622274 : (arr_0 [i_0]));
        var_17 = (~596806255032809421);
        arr_3 [i_0] &= (((arr_1 [i_0]) ? (arr_1 [i_0]) : (arr_0 [i_0])));
    }
    for (int i_1 = 0; i_1 < 11;i_1 += 1)
    {
        var_18 += (max((max((arr_0 [i_1]), (((var_3 > (arr_0 [i_1])))))), (((arr_0 [i_1]) ? (var_0 && var_10) : 3968))));
        arr_6 [i_1] = ((((max(var_4, (arr_4 [i_1]))))));
    }
    var_19 = var_13;
    #pragma endscop
}
