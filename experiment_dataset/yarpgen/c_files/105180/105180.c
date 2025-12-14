/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 105180
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=105180 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/105180
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    /* vectorizable */
    for (int i_0 = 1; i_0 < 11;i_0 += 1)
    {
        /* LoopNest 2 */
        for (int i_1 = 1; i_1 < 1;i_1 += 1)
        {
            for (int i_2 = 2; i_2 < 13;i_2 += 1)
            {
                {
                    var_17 = (min(var_17, -3358964258002157250));
                    /* LoopNest 2 */
                    for (int i_3 = 0; i_3 < 1;i_3 += 1)
                    {
                        for (int i_4 = 0; i_4 < 14;i_4 += 1)
                        {
                            {
                                arr_12 [5] [i_1 - 1] [i_1 - 1] [i_0] [i_3] [i_4] [i_4] = (arr_3 [i_0]);
                                var_18 = (var_7 % -63);
                                var_19 = (var_16 / 52);
                                arr_13 [i_0] [13] [i_0] [i_0] [i_0] [i_4] [i_4] = (arr_5 [i_4]);
                            }
                        }
                    }
                }
            }
        }
        arr_14 [i_0] [i_0] = ((var_13 ? (arr_5 [i_0 + 2]) : (arr_5 [i_0 - 1])));
        arr_15 [i_0] [i_0] = (arr_10 [i_0] [i_0] [i_0] [i_0] [i_0] [i_0] [i_0]);
        /* LoopNest 2 */
        for (int i_5 = 1; i_5 < 13;i_5 += 1)
        {
            for (int i_6 = 2; i_6 < 13;i_6 += 1)
            {
                {

                    for (int i_7 = 3; i_7 < 11;i_7 += 1)
                    {
                        arr_23 [i_0] [i_0] [i_6 - 2] [i_7] = (((arr_20 [i_6] [i_6 - 2] [i_7]) - (arr_7 [12])));

                        for (int i_8 = 0; i_8 < 14;i_8 += 1)
                        {
                            arr_26 [i_0] [8] [2] [i_0] [2] [i_0] &= (var_15 < var_8);
                            var_20 = (max(var_20, (arr_7 [i_0 + 3])));
                            arr_27 [i_0] [i_0] [i_0] [i_0] [i_0] = var_14;
                        }
                    }
                    for (int i_9 = 0; i_9 < 14;i_9 += 1)
                    {
                        arr_30 [i_0] [i_0] [i_0] [i_9] [i_0] [i_6] = (((arr_21 [i_0 + 1] [i_5 - 1] [i_6] [i_6 - 1]) == ((((arr_4 [2]) != var_13)))));
                        var_21 &= ((-(arr_19 [i_0] [i_9] [1])));
                        arr_31 [i_0] [i_0] [i_0] [i_0] = (((arr_29 [i_0] [i_5 - 1] [10] [i_0]) ? (arr_29 [10] [i_5 - 1] [i_6 - 1] [i_0]) : (arr_29 [1] [i_5 + 1] [1] [i_0])));
                    }
                    for (int i_10 = 1; i_10 < 12;i_10 += 1)
                    {
                        var_22 = (min(var_22, ((((arr_3 [2]) ? (!var_7) : (arr_24 [i_6 - 2] [i_6] [i_10 + 1] [i_10 + 1]))))));
                        var_23 = (min(var_23, (((~-60) ? var_10 : (arr_5 [i_0])))));

                        for (int i_11 = 0; i_11 < 14;i_11 += 1)
                        {
                            var_24 ^= (~var_3);
                            arr_37 [i_0] [i_0] [11] [i_0] [i_0] = (((var_5 ? (-9223372036854775807 - 1) : var_14)));
                            arr_38 [i_0] [i_0] = (((arr_20 [i_0 + 1] [i_5 - 1] [i_6]) ? (arr_36 [i_0 + 1]) : (arr_11 [8] [i_10 - 1] [i_6] [i_5] [i_0 - 1])));
                        }

                        for (int i_12 = 3; i_12 < 11;i_12 += 1)
                        {
                            var_25 = (min(var_25, ((((((var_3 ? (arr_16 [i_0 - 1] [i_0 - 1]) : var_16))) ? (arr_4 [i_10]) : (((var_6 ? (arr_35 [i_0 + 1] [i_0] [i_0] [i_0]) : 209))))))));
                            arr_43 [i_0] [i_5] [i_5] [i_0] = (arr_11 [i_12] [i_10] [4] [4] [4]);
                            var_26 = (-(arr_11 [i_5 + 1] [i_5] [i_5] [i_0 + 2] [8]));
                        }
                    }
                    arr_44 [i_0] = ((13 ? (arr_39 [i_0] [i_0] [i_6]) : var_1));
                }
            }
        }
        arr_45 [i_0] = (~1);
    }
    var_27 = (min(((((((min(var_12, -36)))) <= ((var_13 ? -7 : var_13))))), (((((var_2 ? var_16 : 225))) ? var_16 : var_6))));
    #pragma endscop
}
