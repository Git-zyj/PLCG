/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 167851
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=167851 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/167851
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_10 = var_5;
    var_11 = (max(((((var_7 ? var_6 : var_9)))), (((((var_1 ? var_1 : var_4))) ? (max(var_8, var_4)) : var_4))));

    for (int i_0 = 1; i_0 < 1;i_0 += 1)
    {
        arr_2 [i_0 - 1] [i_0] = ((((-193382613 <= (arr_0 [i_0 - 1]))) ? ((max((arr_1 [i_0] [i_0]), (max((arr_1 [i_0] [i_0]), (arr_0 [i_0 - 1])))))) : (arr_0 [i_0])));
        var_12 = ((((min((((((arr_1 [i_0] [i_0 - 1]) + 2147483647)) >> (((arr_1 [i_0] [i_0]) + 24655)))), ((var_1 ? (arr_0 [i_0]) : (arr_0 [i_0])))))) ? (((arr_1 [i_0] [i_0 - 1]) ^ (arr_1 [i_0] [i_0 - 1]))) : (((arr_1 [i_0 - 1] [i_0]) % (arr_1 [i_0 - 1] [2])))));
        var_13 = (max(var_13, (max((((arr_0 [i_0 - 1]) ? (arr_0 [i_0 - 1]) : var_5)), (arr_0 [i_0])))));
        arr_3 [1] [i_0] |= (arr_1 [i_0] [i_0]);
        var_14 += max((arr_1 [i_0 - 1] [i_0]), ((!(arr_0 [i_0 - 1]))));
    }
    /* vectorizable */
    for (int i_1 = 4; i_1 < 18;i_1 += 1)
    {
        /* LoopNest 3 */
        for (int i_2 = 0; i_2 < 1;i_2 += 1)
        {
            for (int i_3 = 2; i_3 < 16;i_3 += 1)
            {
                for (int i_4 = 0; i_4 < 20;i_4 += 1)
                {
                    {
                        var_15 = (min(var_15, (((-(arr_15 [i_1 + 2] [i_1 + 1] [i_4] [i_3 + 1]))))));
                        var_16 = (min(var_16, ((((var_1 ? var_2 : var_7))))));
                        var_17 = (((arr_8 [i_1] [i_1 - 2]) ? (arr_8 [i_1] [i_1 - 3]) : (arr_9 [i_1] [i_3 + 1])));
                        var_18 -= ((arr_10 [i_1 - 3] [i_3 + 1] [i_3 - 1]) ? (arr_10 [i_1 + 2] [i_3 + 3] [i_3 - 2]) : var_5);
                    }
                }
            }
        }
        /* LoopNest 3 */
        for (int i_5 = 0; i_5 < 20;i_5 += 1)
        {
            for (int i_6 = 1; i_6 < 1;i_6 += 1)
            {
                for (int i_7 = 0; i_7 < 20;i_7 += 1)
                {
                    {
                        var_19 = (arr_5 [i_5] [i_7]);
                        var_20 = (min(var_20, ((((arr_14 [i_1 - 3]) ? (arr_14 [i_1 - 4]) : (arr_24 [i_1 - 2]))))));
                        var_21 -= ((arr_11 [i_1 - 1] [18] [i_6 - 1] [i_7]) + (arr_8 [i_1 + 2] [i_6 - 1]));
                        arr_25 [i_1] [i_1] [i_6] [i_7] = (arr_5 [i_7] [i_6 - 1]);
                    }
                }
            }
        }
    }
    for (int i_8 = 0; i_8 < 21;i_8 += 1)
    {
        arr_29 [i_8] = ((((((arr_28 [i_8]) ? (max(var_1, var_3)) : -1))) ? (arr_26 [i_8] [i_8]) : (((((arr_28 [i_8]) & var_1))))));
        var_22 = (min(var_22, ((max(32765, 9078)))));
    }
    for (int i_9 = 0; i_9 < 24;i_9 += 1)
    {
        arr_32 [i_9] = var_6;
        var_23 &= arr_30 [i_9] [14];
    }
    var_24 = var_7;
    #pragma endscop
}
