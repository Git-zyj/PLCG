/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 139997
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=139997 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/139997
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_10 = var_3;
    var_11 = var_8;
    var_12 = var_3;
    var_13 = (max(((~((var_8 ? var_8 : 2894087735661496324)))), ((max(var_8, var_0)))));

    /* vectorizable */
    for (int i_0 = 1; i_0 < 20;i_0 += 1)
    {
        var_14 = ((-((var_0 ? (arr_1 [i_0]) : var_2))));
        arr_3 [i_0] [i_0] = (((arr_1 [i_0]) >> (((((arr_2 [i_0] [i_0]) ? 32767 : var_0)) - 32749))));
    }
    for (int i_1 = 2; i_1 < 9;i_1 += 1)
    {
        var_15 = (min(((((((min(9056, var_8))) + 2147483647)) >> (var_6 - 512669477))), ((~(arr_1 [i_1])))));
        var_16 = (arr_1 [i_1]);
    }
    for (int i_2 = 1; i_2 < 16;i_2 += 1)
    {
        var_17 = (max(var_17, 12014774846156787883));
        var_18 ^= (min(((min(30362, 6344))), (arr_9 [4])));
        var_19 -= (((arr_10 [1]) & (arr_10 [10])));
        var_20 = (min((arr_8 [i_2]), (min(1, 18446744073709551599))));
    }
    #pragma endscop
}
