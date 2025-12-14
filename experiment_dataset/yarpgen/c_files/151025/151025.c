/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 151025
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=151025 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/151025
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 1; i_0 < 11;i_0 += 1)
    {
        for (int i_1 = 2; i_1 < 14;i_1 += 1)
        {
            {
                var_15 &= (max((arr_1 [i_1 - 2]), ((-32 ? (arr_1 [i_1 - 2]) : (min((arr_0 [i_0]), var_5))))));
                var_16 = (max((arr_3 [i_0 + 1] [i_1 - 1] [4]), 4095));
            }
        }
    }
    var_17 &= ((((((min(var_3, 1))))) ? var_12 : var_5));
    var_18 &= 65535;

    for (int i_2 = 0; i_2 < 1;i_2 += 1) /* same iter space */
    {
        arr_8 [i_2] = ((((min((arr_6 [i_2] [i_2]), (min(var_0, (arr_6 [1] [10])))))) ? ((((((!(arr_7 [i_2])))) + var_3))) : ((((((arr_5 [i_2]) ^ var_13))) ? var_2 : (min((arr_6 [i_2] [4]), var_3))))));
        arr_9 [i_2] = ((((max(var_5, (~-36)))) ? (((((var_2 + (arr_7 [i_2]))) - (arr_7 [4])))) : (arr_6 [i_2] [i_2])));

        /* vectorizable */
        for (int i_3 = 0; i_3 < 20;i_3 += 1)
        {
            arr_14 [i_3] [i_2] [i_2] = var_14;
            var_19 = ((18446744073709551615 ? 35184372088831 : (-32767 - 1)));
            var_20 = ((~(arr_13 [i_2] [i_3])));
            arr_15 [3] = 0;
        }
    }
    for (int i_4 = 0; i_4 < 1;i_4 += 1) /* same iter space */
    {
        arr_18 [i_4] [i_4] = (var_3 ? (((min((arr_11 [i_4] [i_4] [i_4]), (((arr_10 [i_4] [i_4]) < (arr_7 [i_4]))))))) : (((arr_6 [i_4] [7]) ? (arr_6 [i_4] [i_4]) : (arr_6 [i_4] [i_4]))));
        var_21 = var_4;
        arr_19 [16] [16] = (((((((-32767 - 1) ? var_9 : 0)))) - var_2));
    }
    /* vectorizable */
    for (int i_5 = 0; i_5 < 1;i_5 += 1) /* same iter space */
    {
        arr_22 [2] [10] &= (arr_5 [i_5]);
        var_22 = (min(var_22, var_4));
        var_23 &= arr_21 [16];
    }
    #pragma endscop
}
