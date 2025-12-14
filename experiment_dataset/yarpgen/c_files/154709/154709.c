/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 154709
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=154709 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/154709
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_11 = ((((max(((20836 ? -32759 : var_3)), ((1 ? var_0 : var_2))))) ? (max((((var_7 ? var_1 : var_3))), (max(107251794, 24597)))) : (--1)));

    /* vectorizable */
    for (int i_0 = 0; i_0 < 18;i_0 += 1)
    {
        /* LoopNest 2 */
        for (int i_1 = 0; i_1 < 18;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 18;i_2 += 1)
            {
                {
                    var_12 = (((((-20992 ? var_2 : var_3))) ? ((1 ? 107251791 : 4187715503)) : ((var_8 ? 9096 : 4187715509))));
                    arr_7 [i_0] [i_1] [i_2] [i_2] = (!(((9102 ? (arr_1 [i_0] [15]) : (arr_6 [i_0] [i_0] [i_0])))));
                }
            }
        }
        arr_8 [i_0] = ((-((-1 ? (arr_2 [i_0] [i_0]) : (arr_3 [14] [i_0])))));
    }
    /* vectorizable */
    for (int i_3 = 0; i_3 < 13;i_3 += 1)
    {
        arr_11 [i_3] [i_3] = ((((((arr_2 [i_3] [i_3]) ? (arr_10 [7] [i_3]) : -10774))) ? ((1 ? (arr_5 [i_3] [i_3] [i_3] [8]) : 28974)) : (((107251802 ? 1 : -9868)))));
        var_13 = ((-(arr_9 [i_3] [4])));
        arr_12 [i_3] [i_3] = ((((((arr_5 [i_3] [i_3] [1] [i_3]) ? 1 : -7907190248283608091))) ? (arr_9 [i_3] [i_3]) : ((var_2 ? (arr_6 [15] [7] [7]) : var_1))));
        arr_13 [i_3] = ((((((arr_5 [i_3] [9] [i_3] [7]) ? var_0 : 14579))) ? (~var_8) : (!var_5)));
    }
    #pragma endscop
}
