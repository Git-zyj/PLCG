/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 187564
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=187564 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/187564
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_16 = (((((min(var_6, var_13)))) == var_4));
    var_17 ^= var_15;

    /* vectorizable */
    for (int i_0 = 0; i_0 < 24;i_0 += 1)
    {
        var_18 += (((arr_2 [i_0]) / (arr_2 [i_0])));

        for (int i_1 = 0; i_1 < 24;i_1 += 1)
        {
            var_19 *= (((arr_4 [i_0] [i_0]) || (arr_4 [i_0] [11])));
            arr_5 [i_0] [i_0] [i_0] = (((arr_3 [i_0] [20] [i_0]) ? (arr_0 [i_0]) : 64124));
        }
        for (int i_2 = 0; i_2 < 24;i_2 += 1)
        {
            arr_8 [18] |= 2145002628;
            arr_9 [i_0] = (((arr_3 [i_0] [i_2] [i_2]) ? (arr_3 [i_0] [14] [i_2]) : var_7));
        }
    }
    for (int i_3 = 0; i_3 < 16;i_3 += 1)
    {
        arr_12 [i_3] = (min((((arr_1 [20]) || (arr_1 [20]))), ((36118 || (arr_1 [22])))));
        arr_13 [i_3] [i_3] = min((((arr_11 [i_3]) ? (arr_11 [i_3]) : (arr_11 [i_3]))), (((arr_11 [i_3]) + 1)));
    }
    for (int i_4 = 0; i_4 < 24;i_4 += 1)
    {
        var_20 = (arr_1 [i_4]);
        arr_16 [i_4] = (((arr_7 [i_4] [19] [18]) * (arr_7 [i_4] [i_4] [i_4])));
        arr_17 [i_4] = ((((((arr_0 [i_4]) ? (arr_2 [i_4]) : (arr_2 [i_4])))) ? (arr_2 [i_4]) : (max(3246976509, var_11))));
    }
    var_21 = ((!((((((var_4 ? var_15 : var_15))) ? ((var_8 ? 8372224 : 199)) : var_8)))));
    #pragma endscop
}
