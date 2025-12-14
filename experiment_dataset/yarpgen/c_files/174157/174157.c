/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 174157
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=174157 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/174157
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 0; i_0 < 15;i_0 += 1)
    {
        arr_2 [i_0] = (arr_0 [i_0] [i_0]);
        arr_3 [i_0] = (arr_0 [i_0] [i_0]);
        var_16 = (((58720256 ? var_15 : ((-6895 ? var_0 : var_11)))));
    }
    for (int i_1 = 2; i_1 < 14;i_1 += 1)
    {
        arr_7 [i_1] = (((~(arr_5 [i_1] [i_1 + 2]))));
        var_17 = ((((((!(2765466726637411859 & var_3))))) ^ ((-(arr_5 [i_1 + 1] [i_1 + 1])))));
        arr_8 [i_1] = (((arr_4 [i_1 + 1] [i_1]) ? var_2 : ((min((!16382), ((32767 ? 538980747245366533 : 16403)))))));
        var_18 = (((((var_5 / (max(var_11, var_15))))) ? -var_7 : ((var_10 ? (arr_4 [i_1 - 1] [i_1 + 1]) : 16382))));
    }
    var_19 = (min(var_19, var_6));
    var_20 |= ((((max(var_3, -500952982))) >= (((!(-538980747245366533 >= -5468316919837447570))))));
    /* LoopNest 2 */
    for (int i_2 = 1; i_2 < 20;i_2 += 1)
    {
        for (int i_3 = 0; i_3 < 21;i_3 += 1)
        {
            {
                arr_15 [i_3] = (((((((arr_14 [i_2] [i_3]) % var_15)))) ? (arr_10 [i_3]) : (((((arr_10 [i_2]) ? var_7 : var_11)) ^ ((max(var_13, var_9)))))));
                arr_16 [i_2] [14] [i_2] &= (arr_9 [i_3]);
            }
        }
    }
    #pragma endscop
}
