/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 107812
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=107812 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/107812
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_18 = ((((min((17297 != 1), ((var_4 ? var_5 : var_1))))) ? var_5 : var_3));
    var_19 += (!var_11);

    for (int i_0 = 0; i_0 < 12;i_0 += 1)
    {
        var_20 *= (max(((((arr_1 [i_0]) || ((((arr_0 [1] [i_0]) ? 17297 : var_8)))))), (((arr_1 [i_0]) ? (arr_1 [i_0]) : -4583757698830992696))));
        var_21 *= ((((5298500300084880676 ? -5298500300084880660 : -1622521091)) >= (arr_2 [i_0])));
        arr_3 [i_0] = var_1;
        var_22 *= var_13;
        arr_4 [i_0] = -612781228;
    }
    /* vectorizable */
    for (int i_1 = 0; i_1 < 18;i_1 += 1)
    {
        arr_9 [i_1] = ((arr_7 [i_1] [i_1]) ? (arr_6 [i_1]) : (arr_5 [i_1]));
        var_23 = ((var_6 ? (((var_13 ? (arr_6 [i_1]) : var_9))) : (((arr_7 [i_1] [i_1]) ? (arr_6 [i_1]) : (arr_7 [i_1] [i_1])))));
    }
    var_24 = ((var_2 ? 0 : var_9));
    #pragma endscop
}
