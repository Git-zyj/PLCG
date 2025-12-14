/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 127646
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=127646 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/127646
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 2; i_0 < 18;i_0 += 1)
    {
        arr_2 [15] = var_11;
        arr_3 [i_0 + 1] [i_0] = ((((min((arr_0 [6] [i_0]), (((arr_0 [i_0] [i_0]) ? (arr_1 [i_0]) : var_10))))) ? (((arr_0 [i_0 - 2] [i_0 + 1]) ? (arr_0 [i_0] [i_0 + 1]) : (((arr_0 [i_0] [i_0]) / var_0)))) : 1));
        arr_4 [i_0 - 2] = var_0;
        var_12 = ((+((-8808931771443192940 ? (arr_0 [i_0 + 1] [i_0 + 1]) : ((0 >> (103 - 72)))))));
    }
    for (int i_1 = 0; i_1 < 18;i_1 += 1)
    {
        var_13 = (((((var_6 ? (arr_6 [i_1]) : var_3))) ? ((((arr_6 [i_1]) > var_8))) : ((((arr_6 [i_1]) >= (arr_0 [i_1] [i_1]))))));

        for (int i_2 = 0; i_2 < 18;i_2 += 1)
        {
            var_14 = (((-(arr_1 [i_1]))));
            var_15 = arr_0 [i_1] [i_2];
        }
    }
    for (int i_3 = 0; i_3 < 0;i_3 += 1)
    {
        var_16 = ((~((72 ? var_9 : (arr_13 [i_3 + 1])))));
        var_17 ^= (((-var_10 + 2147483647) >> ((((arr_12 [i_3 + 1] [i_3 + 1]) > (arr_12 [i_3 + 1] [i_3 + 1]))))));
        arr_14 [18] [i_3] = (arr_12 [i_3] [15]);
    }
    for (int i_4 = 0; i_4 < 1;i_4 += 1)
    {
        var_18 *= ((-(((var_8 / (arr_15 [i_4]))))));
        arr_19 [i_4] = ((177 ? -3081 : 0));
    }
    var_19 = -321010266;
    var_20 = (var_0 ? (((max(var_6, var_3)))) : (((((~(-127 - 1)))) ? ((-355188393 ? var_0 : 2167321091051120428)) : (((74 ? 24 : -102))))));
    var_21 = ((var_5 ? (((var_6 ? -27213 : 990391810))) : ((var_3 ? var_8 : 5999223461933994189))));
    #pragma endscop
}
