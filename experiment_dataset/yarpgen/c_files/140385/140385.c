/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 140385
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=140385 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/140385
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_12 = var_3;
    var_13 = (max((((max(var_10, 1)))), var_1));
    var_14 = (max(var_14, ((max(((max((max(1, var_10)), var_10))), 2643705011914748745)))));

    /* vectorizable */
    for (int i_0 = 0; i_0 < 21;i_0 += 1)
    {
        arr_2 [i_0] = (~-1199184774);
        var_15 = (((arr_0 [i_0]) ? 1 : (arr_0 [i_0])));
    }
    /* vectorizable */
    for (int i_1 = 2; i_1 < 13;i_1 += 1)
    {
        arr_5 [i_1] = (((arr_1 [i_1 + 2]) * var_2));
        arr_6 [i_1] = (arr_1 [i_1]);
    }
    var_16 &= ((((18446744073709551596 ? var_11 : 1)) / ((~(158099610 || 288230376151711744)))));
    #pragma endscop
}
