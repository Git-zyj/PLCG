/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 146585
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=146585 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/146585
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    /* vectorizable */
    for (int i_0 = 0; i_0 < 14;i_0 += 1)
    {
        var_17 -= (((arr_0 [i_0]) & (((!(arr_0 [i_0]))))));
        arr_2 [i_0] = (((arr_1 [i_0]) ? (arr_1 [1]) : (arr_1 [i_0])));
        var_18 = (arr_1 [i_0]);
    }
    for (int i_1 = 0; i_1 < 22;i_1 += 1)
    {
        var_19 += ((~(arr_3 [i_1] [16])));
        var_20 = (max(var_20, ((min(0, ((~(((arr_3 [i_1] [20]) ? 0 : var_7)))))))));
    }
    var_21 = (min(var_21, (min(var_5, ((((var_12 << (var_10 - 183544645))) >> (var_3 + 18754)))))));
    var_22 = ((~(max(((255 << (12804 - 12797))), (var_13 | var_8)))));
    #pragma endscop
}
