/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 161112
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=161112 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/161112
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_10 = ((!((((268435456 != var_3) ? (!var_2) : (-494250351 - 3758096384))))));
    var_11 = var_9;

    for (int i_0 = 0; i_0 < 17;i_0 += 1)
    {
        var_12 = (((max(((2255666991 ? 0 : 0)), 89)) & (arr_2 [i_0])));
        arr_3 [i_0] [i_0] = ((((167 ? ((1605137274 ? var_0 : var_9)) : (((arr_1 [i_0]) / (arr_2 [i_0]))))) != (((arr_1 [i_0]) - (arr_1 [i_0])))));
    }
    /* vectorizable */
    for (int i_1 = 0; i_1 < 17;i_1 += 1)
    {
        var_13 = ((2141909699 >> ((((-(arr_5 [i_1]))) + 32842))));
        var_14 = (min(var_14, (((~(arr_1 [i_1]))))));
    }
    for (int i_2 = 1; i_2 < 16;i_2 += 1)
    {
        var_15 = (max(var_15, (((-4294967295 ? (((-((min(-64, (arr_9 [i_2]))))))) : ((((((arr_7 [12]) ? (arr_7 [16]) : (arr_7 [14])))) ? (max((arr_9 [i_2 + 1]), (arr_7 [0]))) : ((max((arr_9 [i_2]), var_5))))))))));
        var_16 *= (((arr_8 [i_2 - 1] [0]) ? (arr_8 [i_2 - 1] [14]) : (((arr_8 [i_2 + 2] [10]) ? (arr_8 [i_2 - 1] [1]) : 18014397435740160))));
        arr_10 [i_2] = ((((((((arr_7 [i_2]) ? 12288 : (arr_7 [i_2]))) << 1))) && (!1)));
        var_17 = ((((max((!8), (arr_8 [i_2] [i_2])))) ? (-127 - 1) : (((((var_3 ? (arr_7 [i_2]) : 0))) ? ((((arr_9 [i_2 + 2]) && (arr_9 [i_2])))) : ((106 * (arr_9 [i_2])))))));
    }
    var_18 = var_0;
    #pragma endscop
}
