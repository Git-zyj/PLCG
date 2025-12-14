/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 11745
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=11745 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/11745
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_16 = var_14;
    /* LoopNest 2 */
    for (int i_0 = 2; i_0 < 19;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 20;i_1 += 1)
        {
            {
                var_17 = 65535;
                arr_5 [i_0] = (arr_3 [i_0]);
            }
        }
    }

    for (int i_2 = 0; i_2 < 22;i_2 += 1)
    {
        arr_8 [i_2] = (arr_6 [i_2] [1]);
        arr_9 [i_2] [5] = ((65535 ? 27497 : ((22 ? 0 : (var_4 + var_15)))));
    }
    /* vectorizable */
    for (int i_3 = 0; i_3 < 12;i_3 += 1)
    {
        arr_12 [i_3] = (arr_0 [i_3]);
        var_18 = ((((var_9 ? (arr_0 [i_3]) : var_2)) <= 65535));
    }
    for (int i_4 = 0; i_4 < 24;i_4 += 1)
    {
        var_19 = ((var_7 ? (arr_15 [i_4] [i_4]) : (max((arr_15 [i_4] [i_4]), var_3))));
        arr_16 [i_4] [i_4] = (max((min(((38014 ? var_2 : (arr_15 [i_4] [i_4]))), (min((arr_13 [i_4] [i_4]), var_7)))), var_14));
        arr_17 [11] [15] |= 1;
        var_20 = (min(var_20, ((((((((arr_15 [22] [i_4]) ? (arr_13 [i_4] [i_4]) : (arr_13 [i_4] [i_4]))))) ? var_10 : (((((arr_13 [i_4] [1]) != var_0)) ? (arr_15 [i_4] [i_4]) : (arr_15 [18] [i_4]))))))));
    }
    for (int i_5 = 0; i_5 < 17;i_5 += 1)
    {
        arr_21 [0] [i_5] &= ((-((~(arr_19 [8])))));
        var_21 -= (((((var_0 ? var_0 : 96))) % (max(((var_12 ? 65535 : var_5)), (arr_6 [i_5] [13])))));
    }
    /* LoopNest 2 */
    for (int i_6 = 0; i_6 < 19;i_6 += 1)
    {
        for (int i_7 = 0; i_7 < 19;i_7 += 1)
        {
            {
                arr_27 [i_6] [i_6] [i_6] = (((2147483647 ? (arr_4 [i_6] [i_7]) : (arr_2 [0]))));
                var_22 -= ((min((((arr_4 [3] [i_7]) | (arr_23 [i_7]))), (arr_4 [i_6] [i_6]))));
                var_23 = (min(((((arr_6 [i_6] [i_7]) / (arr_6 [i_6] [i_7])))), var_8));
            }
        }
    }
    #pragma endscop
}
