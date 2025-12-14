/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 162074
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=162074 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/162074
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_14 = 15;

    for (int i_0 = 4; i_0 < 18;i_0 += 1)
    {
        var_15 = (min(var_15, (((((((min(var_3, (arr_0 [i_0] [i_0])))) ? 3119333343 : (((arr_2 [i_0]) ? (arr_2 [i_0]) : var_4)))) * ((((!(arr_0 [i_0 + 2] [i_0 - 4]))))))))));

        for (int i_1 = 2; i_1 < 16;i_1 += 1)
        {
            var_16 = (((arr_0 [i_0 - 3] [i_0 - 1]) ? (((((1175633948 >> (var_3 - 857763064)))) ? 182 : (((arr_3 [i_0] [i_1]) ? (arr_4 [i_1] [i_0]) : (arr_2 [i_0]))))) : ((3119333320 ? (arr_0 [16] [i_0]) : (arr_0 [i_1 + 3] [i_0 + 2])))));
            var_17 = 15360;
        }
        arr_5 [i_0] [i_0] = (max((((((((arr_1 [i_0]) ? var_13 : (arr_3 [5] [5])))) && ((!(arr_4 [i_0] [18])))))), (((!1737830712753764839) ? (max(1737830712753764839, (arr_1 [i_0 - 1]))) : (arr_4 [i_0] [i_0])))));
    }
    for (int i_2 = 1; i_2 < 15;i_2 += 1)
    {

        /* vectorizable */
        for (int i_3 = 1; i_3 < 15;i_3 += 1)
        {
            var_18 = ((((arr_9 [i_2]) ? (arr_3 [i_3] [7]) : (arr_9 [i_2]))));
            var_19 = (arr_2 [i_2 + 1]);
        }
        arr_10 [i_2] = (((-3119333370 & (arr_8 [i_2 - 1] [i_2 + 1] [i_2]))));
    }
    var_20 = (max(var_20, var_0));
    #pragma endscop
}
