/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 16637
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=16637 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/16637
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 3 */
    for (int i_0 = 0; i_0 < 20;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 20;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 1;i_2 += 1)
            {
                {
                    var_16 = (arr_6 [i_0] [i_1] [i_2]);

                    for (int i_3 = 0; i_3 < 20;i_3 += 1)
                    {

                        for (int i_4 = 1; i_4 < 19;i_4 += 1) /* same iter space */
                        {
                            arr_14 [i_0] [i_0] [i_0] [i_0] [i_4] [i_0] = ((((arr_12 [i_4 + 1] [i_4] [4] [i_4 + 1] [i_4]) ? (arr_12 [i_2] [i_2] [i_2] [i_4 + 1] [i_4]) : var_13)));
                            arr_15 [i_3] [i_3] [i_2] [i_1] [i_4 + 1] &= (((((var_0 ? var_10 : (arr_9 [i_4 - 1])))) ? var_5 : ((((arr_13 [i_4 - 1] [i_4 - 1] [i_4 + 1] [i_1] [i_1]) < (arr_4 [i_1] [i_3] [i_4]))))));
                        }
                        /* vectorizable */
                        for (int i_5 = 1; i_5 < 19;i_5 += 1) /* same iter space */
                        {
                            var_17 = arr_5 [i_5 + 1] [i_5 + 1] [i_5 + 1];
                            arr_20 [i_0] [i_0] [i_2] [i_3] [i_0] [i_5] = ((-(arr_17 [i_5 - 1] [i_5 - 1])));
                            var_18 = (((arr_18 [i_3] [i_5 + 1] [i_5 + 1] [i_5 + 1] [i_5 - 1]) ? (arr_18 [i_1] [i_5 - 1] [i_5 - 1] [i_5 + 1] [i_5 + 1]) : (arr_13 [i_5] [i_5 - 1] [i_5 + 1] [i_5 + 1] [i_5 + 1])));
                            var_19 = var_6;
                        }
                        for (int i_6 = 2; i_6 < 19;i_6 += 1)
                        {
                            var_20 = (arr_0 [i_0]);
                            var_21 -= (arr_1 [i_6 - 1]);
                            var_22 = (((arr_16 [i_6 + 1] [i_6] [i_6 - 2]) == ((var_3 ? (arr_21 [i_0] [i_1] [i_1]) : (arr_21 [i_0] [3] [i_3])))));
                            arr_23 [i_1] [i_2] [i_6] = (arr_5 [i_0] [i_1] [i_3]);
                            arr_24 [i_0] [i_1] [i_1] [i_1] [i_1] [i_0] = ((-8070450532247928832 == (((arr_17 [i_6 + 1] [i_6 + 1]) ? var_11 : ((var_3 ? var_13 : var_2))))));
                        }
                        for (int i_7 = 0; i_7 < 20;i_7 += 1)
                        {
                            var_23 -= (((arr_13 [i_0] [i_0] [i_0] [i_0] [i_7]) & var_7));
                            var_24 ^= ((var_6 <= ((((var_15 ? (arr_16 [i_0] [i_3] [i_7]) : (arr_25 [i_1] [i_1] [i_2])))))));
                            arr_28 [i_0] [i_1] [i_2] [i_1] [i_7] = var_11;
                            arr_29 [i_0] [i_3] [i_7] |= (((arr_3 [i_1] [i_7]) ? (arr_3 [i_1] [i_3]) : (arr_3 [i_1] [i_3])));
                        }

                        for (int i_8 = 0; i_8 < 20;i_8 += 1)
                        {
                            var_25 = (max(var_12, var_8));
                            var_26 ^= ((((-(arr_31 [i_2])))) ? (arr_31 [i_8]) : (arr_31 [i_0]));
                            var_27 = ((24 && (!var_7)));
                            arr_33 [i_1] &= (((arr_7 [i_8]) ? (min(((var_3 ? (arr_0 [i_1]) : var_0)), var_5)) : (((var_12 ? (arr_9 [i_3]) : var_8)))));
                        }
                    }
                    for (int i_9 = 0; i_9 < 20;i_9 += 1)
                    {
                        arr_36 [i_0] [i_0] [i_2] [i_2] [i_9] [i_9] = var_3;
                        var_28 = ((var_9 ? ((((max(var_14, var_7))) ? (~var_0) : var_8)) : (arr_21 [i_1] [i_1] [i_9])));
                        var_29 -= var_5;
                        arr_37 [i_0] [i_1] [12] [i_9] [i_9] = ((+(((((arr_27 [i_0] [0] [2] [2] [2] [1]) ? var_10 : var_14))))));
                    }
                }
            }
        }
    }
    var_30 = var_1;
    #pragma endscop
}
