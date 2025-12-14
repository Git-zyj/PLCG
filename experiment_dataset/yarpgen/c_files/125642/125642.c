/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 125642
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=125642 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/125642
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_17 = (min(72, ((2 ? -47 : 63350458))));
    var_18 = (max(var_18, ((min(var_1, ((((!var_4) ? (var_16 <= var_7) : ((var_1 ? var_11 : var_7))))))))));

    for (int i_0 = 0; i_0 < 16;i_0 += 1)
    {
        arr_2 [i_0] [i_0] = (((((arr_1 [2]) >= (((arr_1 [5]) ? (arr_1 [2]) : (arr_0 [i_0]))))) ? 72 : (((arr_1 [i_0]) ? (((arr_1 [7]) ? (arr_0 [i_0]) : (arr_0 [i_0]))) : ((((arr_0 [i_0]) <= (arr_0 [i_0]))))))));
        var_19 = (min(var_19, ((((min((arr_1 [i_0]), (arr_1 [i_0]))) < ((((max((arr_0 [i_0]), (arr_1 [i_0])))) ? ((~(arr_0 [i_0]))) : (min((arr_1 [i_0]), (arr_0 [10]))))))))));
    }
    /* vectorizable */
    for (int i_1 = 0; i_1 < 19;i_1 += 1)
    {
        var_20 = ((+(((arr_3 [i_1]) ? (arr_3 [i_1]) : (arr_4 [i_1])))));
        var_21 *= (arr_4 [i_1]);
    }
    var_22 = (max(((-(min(var_6, var_13)))), -var_12));
    #pragma endscop
}
