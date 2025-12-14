/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 159839
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=159839 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/159839
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_14 = max(var_7, ((var_12 ? var_1 : ((var_2 ? var_8 : var_0)))));
    var_15 = (((((-8884354437393822668 || var_3) ? ((max(var_0, -12014))) : var_0)) >> (((-8884354437393822642 & 8884354437393822690) >> (-8884354437393822668 + 8884354437393822691)))));
    var_16 = (min(var_8, ((-8884354437393822668 ? (~8884354437393822667) : (var_2 == 8884354437393822676)))));

    /* vectorizable */
    for (int i_0 = 0; i_0 < 22;i_0 += 1)
    {
        var_17 = (min(var_17, (arr_1 [i_0])));
        var_18 = (var_6 != (arr_2 [i_0]));
    }
    /* vectorizable */
    for (int i_1 = 1; i_1 < 9;i_1 += 1)
    {
        arr_7 [1] = var_8;
        arr_8 [9] = (arr_5 [i_1 - 1]);
        arr_9 [i_1] [i_1 + 3] = arr_0 [i_1];
    }
    #pragma endscop
}
