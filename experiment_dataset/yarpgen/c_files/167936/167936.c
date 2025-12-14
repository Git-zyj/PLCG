/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 167936
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=167936 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/167936
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_10 += ((((((((var_4 ? var_6 : 24274))) ? (max(var_0, 1095107693)) : (((var_7 ? 24291 : var_7)))))) ? ((126 ? 23 : 13260328693849126731)) : (((((255 >> (var_2 - 3790))) << (var_6 <= var_3))))));
    var_11 = ((((max(var_8, var_7))) - (max(41262, 3973886921061900983))));
    var_12 ^= var_8;

    /* vectorizable */
    for (int i_0 = 0; i_0 < 19;i_0 += 1)
    {
        var_13 = (((arr_0 [i_0] [6]) | (arr_0 [15] [i_0])));
        arr_3 [i_0] = (((arr_1 [i_0] [i_0]) | (arr_1 [i_0] [i_0])));
        var_14 = (var_2 / var_4);
    }
    #pragma endscop
}
