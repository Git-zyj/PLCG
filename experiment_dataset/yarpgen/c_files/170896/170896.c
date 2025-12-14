/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 170896
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=170896 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/170896
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_16 = var_1;
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 12;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 12;i_1 += 1)
        {
            {
                arr_4 [i_0] [i_1] [i_0] = (arr_2 [i_1] [8]);
                var_17 = (arr_0 [9]);
                var_18 ^= (arr_2 [i_0] [i_1]);
                arr_5 [3] [i_1] = (arr_3 [i_0] [2]);

                for (int i_2 = 0; i_2 < 12;i_2 += 1) /* same iter space */
                {
                    /* LoopNest 2 */
                    for (int i_3 = 1; i_3 < 8;i_3 += 1)
                    {
                        for (int i_4 = 0; i_4 < 12;i_4 += 1)
                        {
                            {
                                var_19 = (arr_1 [i_0]);
                                arr_14 [i_1] = ((-(((!(arr_10 [i_3 + 3] [i_3 - 1] [i_3 + 2] [i_3]))))));
                                arr_15 [i_1] = (arr_8 [i_1]);
                                arr_16 [2] [i_1] [i_1] [i_1] [i_1] = ((-((~(arr_11 [i_0] [i_1] [i_1] [i_3] [i_3 + 4] [i_4])))));
                                var_20 -= ((-((-(arr_7 [i_3 + 3] [i_0])))));
                            }
                        }
                    }
                    var_21 ^= ((-(((!(((~(arr_12 [i_0] [0] [i_1] [i_1] [i_0])))))))));
                }
                for (int i_5 = 0; i_5 < 12;i_5 += 1) /* same iter space */
                {

                    for (int i_6 = 0; i_6 < 12;i_6 += 1)
                    {
                        var_22 -= ((~((~(arr_13 [i_6] [i_5] [i_1] [5] [i_0])))));

                        /* vectorizable */
                        for (int i_7 = 2; i_7 < 11;i_7 += 1)
                        {
                            var_23 = (arr_2 [i_1] [i_1]);
                            var_24 = ((-(arr_22 [i_7 - 2] [i_7 - 1] [i_7] [i_1] [i_7 - 2])));
                            var_25 -= ((-(arr_22 [i_7 - 1] [i_5] [i_7] [i_5] [i_7 - 1])));
                        }
                    }
                    for (int i_8 = 1; i_8 < 9;i_8 += 1) /* same iter space */
                    {
                        var_26 ^= (arr_11 [i_8] [i_5] [i_0] [i_0] [i_5] [i_0]);
                        arr_27 [i_0] [i_1] [i_0] = arr_26 [i_0] [i_0] [i_5] [i_1];
                        var_27 = (arr_19 [11] [1]);

                        /* vectorizable */
                        for (int i_9 = 1; i_9 < 1;i_9 += 1)
                        {
                            arr_30 [i_1] [i_1] [i_1] [6] [i_1] [i_1] = arr_10 [i_8 + 1] [i_8] [i_9] [5];
                            var_28 = (arr_11 [i_8 + 2] [i_1] [i_8 + 3] [i_8] [i_8 + 3] [i_9 - 1]);
                            var_29 = (arr_25 [i_9] [i_8] [i_5] [i_1] [i_0]);
                            var_30 = (arr_22 [i_0] [i_9] [i_8 + 3] [i_1] [i_9]);
                        }
                        for (int i_10 = 1; i_10 < 10;i_10 += 1)
                        {
                            var_31 ^= (arr_31 [i_0] [1] [i_5] [i_8] [6]);
                            var_32 = (arr_12 [i_1] [i_10 - 1] [i_10 - 1] [i_8 - 1] [i_1]);
                            arr_34 [i_1] [i_8 + 3] [i_5] [i_1] [i_1] = ((!(arr_13 [i_10] [i_10 + 2] [i_10 + 1] [1] [i_10])));
                        }
                    }
                    for (int i_11 = 1; i_11 < 9;i_11 += 1) /* same iter space */
                    {
                        var_33 = (arr_26 [11] [i_11 + 3] [3] [i_1]);
                        var_34 = (min(var_34, ((~(arr_0 [i_0])))));
                        var_35 = (arr_37 [i_1]);

                        /* vectorizable */
                        for (int i_12 = 0; i_12 < 12;i_12 += 1)
                        {
                            var_36 |= (arr_33 [i_12] [i_11 + 2] [5] [i_11 + 1] [i_11 + 1]);
                            var_37 -= (arr_18 [i_12] [i_12] [i_11 + 2] [i_11]);
                        }
                    }

                    for (int i_13 = 0; i_13 < 12;i_13 += 1)
                    {
                        var_38 = ((-(((!(arr_7 [i_0] [i_1]))))));
                        var_39 = (min(var_39, (((-((~(arr_32 [i_0] [i_0] [i_0] [i_5] [i_0] [i_0]))))))));
                    }
                    /* vectorizable */
                    for (int i_14 = 0; i_14 < 12;i_14 += 1)
                    {
                        arr_47 [1] [i_1] [i_5] [i_14] = ((-(arr_6 [i_14] [i_1] [i_1])));
                        arr_48 [i_0] [i_0] [i_1] [i_5] [i_1] = (!(arr_10 [1] [i_1] [i_1] [i_1]));
                    }
                    /* vectorizable */
                    for (int i_15 = 0; i_15 < 12;i_15 += 1)
                    {

                        for (int i_16 = 0; i_16 < 12;i_16 += 1)
                        {
                            var_40 = ((!(arr_7 [i_1] [i_1])));
                            arr_54 [i_0] [i_1] [i_5] [i_1] [1] [i_16] [1] = ((!(arr_39 [i_1])));
                        }
                        for (int i_17 = 0; i_17 < 1;i_17 += 1) /* same iter space */
                        {
                            var_41 = (max(var_41, (arr_25 [9] [9] [6] [i_1] [1])));
                            arr_57 [i_0] [1] [5] [i_5] [i_15] [i_1] = (arr_18 [i_15] [i_5] [i_1] [8]);
                            var_42 = (arr_12 [i_0] [i_0] [i_0] [9] [i_1]);
                        }
                        for (int i_18 = 0; i_18 < 1;i_18 += 1) /* same iter space */
                        {
                            var_43 ^= (!(arr_59 [6] [6] [i_5] [i_15] [0] [i_0]));
                            var_44 = (~(arr_25 [8] [i_1] [3] [i_1] [i_1]));
                        }
                        for (int i_19 = 0; i_19 < 1;i_19 += 1) /* same iter space */
                        {
                            var_45 = (max(var_45, (~5061)));
                            var_46 -= (arr_58 [i_0] [i_1] [i_5] [i_15] [i_19] [i_5] [i_0]);
                            arr_64 [8] [i_1] = ((~(arr_17 [i_0] [1] [i_15])));
                        }
                        arr_65 [i_1] = ((~(arr_24 [i_15] [i_1] [i_0])));
                        var_47 = (arr_19 [i_1] [i_5]);
                        var_48 = (min(var_48, (((-(arr_2 [i_0] [i_1]))))));
                    }
                    var_49 ^= (arr_59 [i_5] [i_5] [3] [3] [1] [4]);
                }
            }
        }
    }
    #pragma endscop
}
