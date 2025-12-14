/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 164978
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=164978 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/164978
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    /* vectorizable */
    for (int i_0 = 0; i_0 < 11;i_0 += 1)
    {
        var_13 = ((~(((var_8 > (arr_2 [i_0]))))));
        arr_4 [i_0] = ((var_12 ? (arr_3 [7]) : var_4));
        arr_5 [i_0] = var_12;
    }
    for (int i_1 = 4; i_1 < 23;i_1 += 1)
    {
        arr_8 [i_1] = ((((((((arr_6 [i_1]) ? var_8 : (arr_7 [8] [i_1 - 4])))) ? (((arr_6 [i_1]) * var_2)) : ((min(var_7, (arr_6 [i_1])))))) & ((((!((!(arr_6 [i_1])))))))));

        /* vectorizable */
        for (int i_2 = 1; i_2 < 23;i_2 += 1)
        {
            var_14 = (((var_12 & var_7) << ((((var_11 ^ (arr_9 [i_2]))) - 1354013679893485665))));
            var_15 = ((var_3 ^ ((((!(arr_11 [i_2] [i_2])))))));
        }
        var_16 = (((arr_11 [i_1] [i_1]) < var_2));
    }
    var_17 = (min(((max((var_10 == var_4), var_7))), ((((min(var_7, var_9))) | ((var_7 ? var_3 : var_9))))));
    #pragma endscop
}
