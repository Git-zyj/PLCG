/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 170130
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=170130 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/170130
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    /* vectorizable */
    for (int i_0 = 3; i_0 < 12;i_0 += 1)
    {
        arr_2 [i_0] [i_0 + 1] &= ((-39 && -144115188075855872) ? (arr_1 [1]) : (arr_0 [i_0]));
        var_16 = ((var_0 ? (arr_1 [i_0 - 3]) : (arr_1 [i_0 + 2])));
    }
    var_17 = var_14;
    var_18 = (((((~(~-36)))) ? 1 : ((-var_8 ? (~-7447065287704226466) : 1))));
    var_19 = ((var_13 ? var_11 : (((((var_6 >> (var_15 - 25)))) ? var_11 : (var_5 != var_15)))));
    var_20 = (((((~((var_6 ? var_9 : var_14))))) ? var_10 : (max((~244), (max(7988035174401510295, var_6))))));
    #pragma endscop
}
