/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 12225
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=12225 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/12225
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_19 = (((max((~38), var_4)) * var_5));

    for (int i_0 = 0; i_0 < 23;i_0 += 1)
    {
        var_20 = ((((((var_6 ? 31 : var_6))) ? (arr_1 [i_0]) : (min(var_14, var_1)))));
        var_21 -= min(((((arr_1 [i_0]) ? (arr_1 [i_0]) : var_10))), (min(1850208985, 13989665420050996652)));
        var_22 = ((((((arr_0 [i_0]) ? var_1 : var_10))) && ((max(13818, 176)))));
        arr_3 [i_0] [i_0] = (arr_1 [i_0]);
    }
    #pragma endscop
}
