/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 18731
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=18731 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/18731
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 0; i_0 < 14;i_0 += 1)
    {
        var_12 = (min((arr_0 [i_0] [i_0]), ((-var_10 ? (((min(var_1, var_5)))) : (arr_0 [i_0] [i_0])))));
        var_13 = (min((((-77 ? 16068 : 376387819))), var_3));
    }
    /* vectorizable */
    for (int i_1 = 0; i_1 < 12;i_1 += 1)
    {
        var_14 = (~-14079);
        var_15 = ((1 ? (arr_2 [i_1] [i_1]) : (arr_2 [i_1] [i_1])));
        var_16 = ((16068 ? (arr_5 [i_1]) : -8152010144844286140));
    }
    /* vectorizable */
    for (int i_2 = 1; i_2 < 14;i_2 += 1)
    {
        var_17 = (((arr_8 [i_2 - 1]) ? 21 : (arr_6 [i_2 + 1] [i_2 + 1])));
        var_18 = ((((var_0 ? 0 : 216))) ? (((var_1 ? var_0 : (arr_8 [i_2 - 1])))) : (arr_6 [i_2 + 1] [i_2]));
        var_19 = ((var_3 ? var_5 : (arr_6 [i_2 + 1] [i_2])));
    }
    var_20 = (min(var_2, -6086127522402642783));
    var_21 = (min(var_1, (min(-3157546419205406238, var_6))));
    #pragma endscop
}
