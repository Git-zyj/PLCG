/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 100199
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=100199 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/100199
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    /* vectorizable */
    for (int i_0 = 0; i_0 < 21;i_0 += 1)
    {
        /* LoopNest 2 */
        for (int i_1 = 1; i_1 < 19;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 21;i_2 += 1)
            {
                {
                    var_16 = ((!((!(arr_10 [i_0] [i_1] [i_2] [i_0])))));
                    /* LoopNest 2 */
                    for (int i_3 = 1; i_3 < 20;i_3 += 1)
                    {
                        for (int i_4 = 1; i_4 < 20;i_4 += 1)
                        {
                            {
                                arr_16 [i_0] [i_1] [i_0] [i_3] [i_4] = (3225231747 ? 3225231761 : 10213010117840538359);
                                var_17 = ((((((arr_5 [20] [i_1] [1]) ? -41 : var_7))) ? (((arr_9 [i_0] [i_3] [1]) - var_13)) : (arr_2 [i_4 - 1] [i_1])));
                                arr_17 [10] [i_0] [i_2] [4] [1] [i_4] [i_4 + 1] = (~-7367057797653735961);
                            }
                        }
                    }
                    /* LoopNest 2 */
                    for (int i_5 = 3; i_5 < 19;i_5 += 1)
                    {
                        for (int i_6 = 0; i_6 < 21;i_6 += 1)
                        {
                            {
                                var_18 = (((((arr_0 [19]) ? (arr_0 [i_0]) : 2441271227473706350))) ? (arr_15 [i_5 + 1] [i_5] [i_0] [i_5 + 2] [i_5 - 3]) : ((((arr_0 [i_1]) ? (arr_6 [i_0] [10] [i_0]) : var_11))));
                                var_19 *= var_10;
                            }
                        }
                    }
                }
            }
        }
        arr_22 [i_0] [i_0] = (((((arr_8 [i_0] [i_0] [10]) ? var_7 : (arr_4 [i_0] [i_0])))) ? (arr_3 [i_0]) : (arr_0 [i_0]));
        /* LoopNest 2 */
        for (int i_7 = 0; i_7 < 21;i_7 += 1)
        {
            for (int i_8 = 0; i_8 < 21;i_8 += 1)
            {
                {
                    arr_28 [i_0] [i_7] [i_8] [i_7] = (~var_5);
                    var_20 = ((((var_0 ? (-2147483647 - 1) : var_2))) ? (arr_13 [16] [i_0] [i_7] [i_7] [i_8]) : ((var_11 + (arr_6 [i_0] [i_0] [6]))));
                }
            }
        }
    }
    var_21 = (min(var_21, ((((((((var_1 ? 8258386913886878192 : var_9))) ? ((min(var_9, var_8))) : ((var_2 ? var_15 : 1))))) ? var_10 : (((((408952422 ? var_7 : var_9))) ? (var_10 / var_15) : -var_13))))));
    var_22 = (min(var_22, (var_1 != var_3)));
    var_23 = var_9;

    for (int i_9 = 0; i_9 < 21;i_9 += 1)
    {
        var_24 = (arr_2 [i_9] [i_9]);
        var_25 = (min(var_25, var_4));
        var_26 *= var_0;
    }
    for (int i_10 = 0; i_10 < 11;i_10 += 1)
    {
        var_27 = (var_8 * ((((min(5, 423425645))) ? (-127 - 1) : 1)));
        /* LoopNest 3 */
        for (int i_11 = 0; i_11 < 11;i_11 += 1)
        {
            for (int i_12 = 0; i_12 < 11;i_12 += 1)
            {
                for (int i_13 = 3; i_13 < 10;i_13 += 1)
                {
                    {
                        arr_43 [i_13] [i_10] [i_12] [i_10] [i_10] = (arr_18 [i_10] [i_10] [i_12] [i_13]);
                        var_28 *= arr_9 [i_10] [i_10] [i_12];
                    }
                }
            }
        }
    }
    #pragma endscop
}
