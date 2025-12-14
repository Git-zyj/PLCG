/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 172412
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=172412 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/172412
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 3 */
    for (int i_0 = 1; i_0 < 15;i_0 += 1)
    {
        for (int i_1 = 1; i_1 < 1;i_1 += 1)
        {
            for (int i_2 = 1; i_2 < 18;i_2 += 1)
            {
                {

                    for (int i_3 = 0; i_3 < 19;i_3 += 1)
                    {
                        arr_13 [1] [1] [i_0] [1] = arr_4 [i_0];

                        for (int i_4 = 0; i_4 < 0;i_4 += 1)
                        {
                            arr_17 [i_1] [i_1] [i_1] [i_1] [i_0] [i_1] [i_1] = -12600;
                            var_18 = (max(var_18, ((max((((arr_0 [i_4 + 1]) ? (((arr_5 [i_0 - 1]) ? var_4 : var_11)) : var_10)), (arr_11 [i_0] [i_3] [i_2]))))));
                        }
                        for (int i_5 = 3; i_5 < 18;i_5 += 1)
                        {
                            arr_21 [i_0] [i_3] [i_2] [i_0 + 3] [i_0 + 3] [i_0] = ((var_11 ? (((((-(arr_19 [i_5] [i_1 - 1] [i_1 - 1] [i_3] [i_1 - 1] [i_5])))) ? (arr_19 [i_0] [i_0] [i_2 + 1] [10] [i_0] [i_3]) : (arr_16 [i_0] [i_1 - 1] [4]))) : ((1056659997 ? var_8 : (arr_14 [i_0])))));
                            var_19 = (max(var_19, (((12627 ? var_5 : var_11)))));
                        }
                        arr_22 [i_0] [1] [i_1 - 1] [1] [i_2 - 1] [i_0] = arr_16 [9] [9] [i_3];
                    }
                    for (int i_6 = 0; i_6 < 1;i_6 += 1)
                    {

                        for (int i_7 = 0; i_7 < 1;i_7 += 1)
                        {
                            var_20 = var_5;
                            var_21 = ((-(((arr_23 [i_0] [i_0] [i_2 + 1] [i_2 + 1]) - (arr_23 [i_2 + 1] [i_2] [i_2 + 1] [i_2])))));
                            var_22 += (((arr_3 [10]) | (((min(var_6, (arr_16 [1] [i_1 - 1] [i_2 - 1])))))));
                            var_23 = 1;
                        }
                        for (int i_8 = 0; i_8 < 1;i_8 += 1)
                        {
                            var_24 ^= var_11;
                            arr_32 [i_1] [i_1] [i_2] [i_0] [i_8] [i_2] [i_2 - 1] = (max(-512, -1));
                            var_25 = ((((~(arr_14 [i_0])))));
                        }
                        for (int i_9 = 0; i_9 < 19;i_9 += 1)
                        {
                            arr_37 [i_0 + 2] [i_1] [i_0] = min((arr_2 [i_0 + 2]), 20320);
                            arr_38 [i_0] [i_0] [i_1] [i_2 - 1] [i_6] [7] [i_9] = ((1 || (((var_8 ? (arr_31 [i_0] [i_0] [i_0] [i_0] [i_0 + 1] [i_1 - 1] [4]) : var_13)))));
                            arr_39 [i_0 + 1] [i_0 + 1] [i_0 + 1] [i_0] [i_0 + 1] = ((-((~((var_15 ? var_1 : var_13))))));
                            var_26 = (max(var_26, (((!(arr_24 [i_2 - 1] [i_2 - 1] [i_2 - 1] [i_2 - 1]))))));
                            arr_40 [i_0] [i_1 - 1] [i_0] [1] = var_6;
                        }
                        arr_41 [i_0] = ((!(((var_12 ^ var_12) || ((min((arr_6 [i_1]), 1)))))));
                        var_27 -= var_8;
                    }
                    for (int i_10 = 0; i_10 < 19;i_10 += 1)
                    {
                        var_28 = (min(((4294967283 ? var_10 : ((var_5 ? (arr_26 [i_0] [i_10]) : -21986)))), (((var_0 == 1) / 1))));
                        var_29 = (((var_17 / var_5) || (((20797 ? (((arr_23 [5] [i_1] [i_2] [i_10]) ? var_8 : var_4)) : (((arr_30 [1] [i_0] [3] [1] [3]) ? (arr_0 [i_0 + 3]) : (arr_11 [i_0] [i_0] [i_2]))))))));
                    }
                    var_30 = (arr_24 [i_0 + 4] [i_1 - 1] [i_1 - 1] [i_2 + 1]);
                }
            }
        }
    }
    /* LoopNest 3 */
    for (int i_11 = 0; i_11 < 12;i_11 += 1)
    {
        for (int i_12 = 0; i_12 < 12;i_12 += 1)
        {
            for (int i_13 = 0; i_13 < 12;i_13 += 1)
            {
                {
                    /* LoopNest 2 */
                    for (int i_14 = 1; i_14 < 1;i_14 += 1)
                    {
                        for (int i_15 = 0; i_15 < 12;i_15 += 1)
                        {
                            {
                                arr_59 [i_12] [i_14 - 1] [i_15] = (min(((3763295773 ? 1 : (arr_1 [i_15]))), var_0));
                                var_31 = (!-28409);
                            }
                        }
                    }
                    var_32 -= (!(((var_1 ? 12600 : var_0))));
                }
            }
        }
    }
    var_33 = min(var_1, var_14);
    #pragma endscop
}
