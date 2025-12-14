/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 131713
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=131713 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/131713
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_10 = ((var_5 >> (524287 - 524282)));
    /* LoopNest 3 */
    for (int i_0 = 0; i_0 < 18;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 18;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 18;i_2 += 1)
            {
                {
                    arr_7 [i_2] [i_1] [i_0] [i_0] = ((((var_2 && (arr_5 [i_0] [i_1] [i_2] [i_1]))) ? (arr_0 [i_1]) : (max((arr_4 [i_1]), var_6))));
                    arr_8 [i_1] = (arr_0 [i_0]);
                    arr_9 [12] [i_1] [12] [i_1] = (min(var_2, (((arr_4 [8]) ? (arr_6 [i_2] [i_1] [11] [i_0]) : var_6))));

                    /* vectorizable */
                    for (int i_3 = 0; i_3 < 18;i_3 += 1)
                    {

                        for (int i_4 = 4; i_4 < 15;i_4 += 1)
                        {
                            var_11 = ((4294443014 ? var_2 : var_5));
                            var_12 = ((var_0 ? var_8 : var_5));
                        }
                        for (int i_5 = 0; i_5 < 18;i_5 += 1) /* same iter space */
                        {
                            var_13 = var_9;
                            var_14 = ((1 ? 8191 : 48334));
                        }
                        for (int i_6 = 0; i_6 < 18;i_6 += 1) /* same iter space */
                        {
                            arr_19 [i_0] [i_0] [i_0] [i_0] [i_0] [i_0] [i_0] = (((arr_10 [i_2] [i_6]) ? ((4294443016 ? -8192 : 3053324583)) : (((var_4 ? var_1 : (arr_2 [0] [i_3]))))));
                            arr_20 [i_0] [i_0] [i_2] [i_0] [i_0] [i_0] = 524291;
                        }
                        arr_21 [i_0] [i_1] [i_3] [i_3] [i_1] = ((((((arr_0 [i_1]) / var_1))) <= var_7));
                        arr_22 [i_0] [i_1] = (arr_0 [i_2]);
                        var_15 = (min(var_15, (((4294442999 ? 31404 : var_4)))));
                    }
                    for (int i_7 = 0; i_7 < 18;i_7 += 1)
                    {
                        arr_25 [i_7] [i_0] = (!(4294443014 > 7));
                        var_16 -= (arr_18 [i_7] [i_7] [i_7] [i_7] [9] [3] [i_7]);
                        var_17 = (((((524287 ? ((24 - (arr_17 [i_2] [i_2] [i_2] [i_7] [i_7]))) : 264038356))) ? ((max((arr_17 [i_0] [i_1] [i_2] [i_7] [i_2]), var_6))) : (var_4 * var_9)));

                        /* vectorizable */
                        for (int i_8 = 0; i_8 < 18;i_8 += 1)
                        {
                            arr_28 [i_8] [i_7] [5] [i_7] [i_0] = ((var_8 ? var_0 : -0));
                            var_18 = 127;
                        }
                    }
                    for (int i_9 = 1; i_9 < 16;i_9 += 1)
                    {
                        arr_31 [i_1] [i_1] [i_9] = (!60);
                        arr_32 [i_0] [i_9] [i_0] [i_0] = (arr_27 [i_0] [i_0] [i_1] [i_1] [i_2] [i_9] [i_9]);
                    }
                }
            }
        }
    }
    var_19 = var_2;
    #pragma endscop
}
