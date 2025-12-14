/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 125190
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=125190 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/125190
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_18 = (((((((min(41959, var_6))) ? 11110 : ((min(var_0, var_7)))))) ? (max(var_13, ((-14681 ? 8355840 : 288230376151711743)))) : ((((((max(96, var_3))) && (((-72057594037927936 ? var_10 : var_0)))))))));

    for (int i_0 = 1; i_0 < 9;i_0 += 1)
    {
        var_19 = (-9223372036854775807 - 1);
        arr_3 [i_0] = ((((((arr_0 [4]) ? (max(3319825388217674420, 9007199254740991)) : (arr_0 [i_0])))) ? ((((arr_0 [3]) ? ((min(var_0, (arr_2 [i_0])))) : (arr_0 [i_0])))) : (((((var_11 ? (arr_2 [i_0]) : var_17))) ? (((max(var_7, 0)))) : ((var_6 ? 5294711438530892308 : var_16))))));
    }
    for (int i_1 = 0; i_1 < 22;i_1 += 1)
    {
        arr_7 [i_1] = ((((max(0, 0))) ? ((21 ? (arr_5 [i_1]) : ((0 ? 32768 : 32767)))) : ((min((min((arr_6 [i_1]), (arr_6 [i_1]))), (arr_4 [i_1]))))));
        arr_8 [i_1] = (min((((((var_15 ? var_16 : (arr_4 [i_1])))) ? var_4 : ((max((arr_5 [i_1]), var_4))))), -92));
        arr_9 [i_1] = var_5;
    }
    for (int i_2 = 0; i_2 < 15;i_2 += 1)
    {
        arr_13 [i_2] = ((((var_10 == (arr_4 [i_2]))) ? (arr_4 [i_2]) : (max((arr_4 [i_2]), ((18158513697557839875 ? (arr_5 [i_2]) : 32756))))));
        arr_14 [i_2] [i_2] = ((var_0 ? ((((min(var_8, 38))) ? (arr_11 [1]) : ((var_2 ? (-9223372036854775807 - 1) : (arr_5 [6]))))) : var_0));
        var_20 = var_8;
    }
    #pragma endscop
}
