/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 143072
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=143072 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/143072
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    /* vectorizable */
    for (int i_0 = 2; i_0 < 11;i_0 += 1)
    {
        arr_3 [i_0] = ((-1310619296 | (253 | var_11)));
        arr_4 [i_0] = ((!(var_5 & var_11)));
    }
    for (int i_1 = 1; i_1 < 12;i_1 += 1)
    {
        arr_7 [i_1] = ((+((max((arr_6 [i_1 - 1]), (max(-28820, (arr_5 [i_1]))))))));
        arr_8 [i_1] = (max(((-113 ? (arr_6 [i_1 - 1]) : -1)), (((arr_6 [i_1 + 1]) + (arr_6 [i_1 - 1])))));
    }
    var_13 = ((56200 ? ((var_8 ? (var_4 * var_0) : (var_1 - var_5))) : ((0 % ((1 ? var_11 : var_4))))));
    var_14 = var_0;
    var_15 = (min((max(15614866900885244555, 1)), (1 & 176)));
    var_16 = (min(var_16, var_7));
    #pragma endscop
}
