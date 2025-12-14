/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 158538
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=158538 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/158538
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 0; i_0 < 10;i_0 += 1)
    {
        var_13 = 12136528097329740925;
        var_14 = (var_3 ? (((((-(arr_0 [i_0])))) ? (arr_0 [i_0]) : (arr_1 [i_0]))) : (-var_0 + var_1));
        var_15 -= (((arr_0 [3]) != (min((arr_0 [i_0]), var_11))));
    }
    /* vectorizable */
    for (int i_1 = 0; i_1 < 14;i_1 += 1)
    {
        var_16 = -32767;
        var_17 = (min(var_17, ((~((31 ? var_6 : var_7))))));
        arr_5 [0] [i_1] |= (arr_4 [i_1] [2]);
    }
    var_18 ^= var_12;
    var_19 -= (-var_7 % var_2);
    var_20 = var_1;
    #pragma endscop
}
