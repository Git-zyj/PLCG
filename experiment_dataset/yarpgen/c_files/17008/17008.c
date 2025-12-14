/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 17008
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=17008 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/17008
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    /* vectorizable */
    for (int i_0 = 1; i_0 < 15;i_0 += 1)
    {
        arr_3 [12] &= var_13;
        arr_4 [i_0] = var_8;
    }
    for (int i_1 = 0; i_1 < 21;i_1 += 1)
    {
        /* LoopNest 2 */
        for (int i_2 = 2; i_2 < 19;i_2 += 1)
        {
            for (int i_3 = 0; i_3 < 21;i_3 += 1)
            {
                {
                    var_18 = ((var_2 ? (~5837316715130466260) : var_1));
                    arr_13 [i_2] [i_2] [i_2] [i_1] |= (min(((var_16 / (min(12609427358579085362, 57)))), var_4));
                }
            }
        }
        /* LoopNest 2 */
        for (int i_4 = 0; i_4 < 21;i_4 += 1)
        {
            for (int i_5 = 0; i_5 < 21;i_5 += 1)
            {
                {
                    var_19 = (min(((63 ^ ((-(arr_8 [12]))))), (max(((var_7 - (arr_6 [i_1]))), -119))));
                    var_20 = (min(((var_8 ? 199 : 32764)), 63));
                    var_21 ^= ((var_12 ? (max(((~(arr_8 [i_4]))), ((var_3 ? 44 : var_7)))) : var_14));
                    arr_20 [i_5] = (((arr_7 [i_5]) >= (min((arr_7 [i_5]), (arr_7 [i_4])))));
                }
            }
        }
        /* LoopNest 2 */
        for (int i_6 = 2; i_6 < 20;i_6 += 1)
        {
            for (int i_7 = 0; i_7 < 21;i_7 += 1)
            {
                {
                    /* LoopNest 2 */
                    for (int i_8 = 0; i_8 < 21;i_8 += 1)
                    {
                        for (int i_9 = 1; i_9 < 20;i_9 += 1)
                        {
                            {
                                var_22 = ((((min((((arr_23 [i_6] [i_6] [i_6]) ? var_1 : var_8)), (((~(arr_15 [i_8]))))))) ? ((12609427358579085355 * (((arr_21 [i_1]) ? 12609427358579085355 : 31)))) : ((((((arr_22 [i_1]) ? (arr_24 [i_6] [i_6] [i_6] [i_6]) : var_5)) & (!var_17))))));
                                var_23 = var_1;
                            }
                        }
                    }
                    var_24 = (+(((max((arr_7 [i_1]), (arr_21 [i_1]))))));
                    arr_31 [6] [10] [i_6] = max((((arr_5 [i_1] [15]) ? var_7 : (arr_5 [i_7] [i_6 + 1]))), (arr_29 [i_6 - 2] [i_6 + 1] [i_6] [i_6 - 2] [i_6 + 1] [i_6 - 1]));
                }
            }
        }
    }

    for (int i_10 = 0; i_10 < 12;i_10 += 1)
    {
        arr_34 [i_10] = 5552436493219321582;
        /* LoopNest 2 */
        for (int i_11 = 0; i_11 < 12;i_11 += 1)
        {
            for (int i_12 = 0; i_12 < 12;i_12 += 1)
            {
                {
                    arr_39 [i_11] [i_10] [i_10] = ((((var_8 ? (arr_19 [10] [i_11] [i_12] [10]) : var_6)) >= (min(3449607592, 5837316715130466260))));
                    arr_40 [i_10] [i_11] [i_10] = ((((arr_37 [5] [5] [i_11]) ? (arr_15 [2]) : (arr_5 [i_10] [i_11]))));
                }
            }
        }
        arr_41 [i_10] [i_10] = max((1414333480 & -949231732), (((arr_14 [i_10]) ? var_17 : (arr_14 [i_10]))));
    }
    var_25 -= var_14;
    #pragma endscop
}
