/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 144736
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=144736 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/144736
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_16 = (min(var_16, (((-((var_4 ? 9804 : var_8)))))));
    var_17 = (((((min(1, var_8))) * (var_8 - var_10))));

    for (int i_0 = 1; i_0 < 21;i_0 += 1)
    {
        var_18 = (arr_0 [i_0] [i_0]);
        var_19 = (min((((!3487330502) ^ (arr_0 [16] [i_0]))), ((min((arr_1 [i_0 - 1] [i_0 + 1]), (arr_1 [i_0 - 1] [i_0 + 2]))))));
        var_20 = ((!(~var_11)));
    }
    /* vectorizable */
    for (int i_1 = 0; i_1 < 1;i_1 += 1)
    {
        var_21 = ((~(arr_4 [i_1])));
        arr_6 [i_1] [i_1] = ((1 ? 1596659861 : (arr_2 [i_1])));
        arr_7 [i_1] = (var_0 || (arr_5 [i_1]));
    }
    var_22 = (max(1, 65535));
    #pragma endscop
}
