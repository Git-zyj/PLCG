/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 173034
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=173034 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/173034
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 0; i_0 < 12;i_0 += 1)
    {
        var_12 = (min((arr_0 [i_0]), (!-1)));
        arr_2 [i_0] = (~3652584282836223818);
        var_13 = (arr_0 [i_0]);
        var_14 = ((((arr_0 [i_0]) % var_6)) > (((arr_0 [i_0]) ? (arr_0 [i_0]) : var_1)));
        var_15 = (((arr_0 [i_0]) ? ((((arr_1 [i_0]) > (arr_1 [i_0])))) : (((arr_1 [i_0]) ? (arr_1 [i_0]) : (arr_1 [i_0])))));
    }
    var_16 = (min((~-3349), ((var_0 ? var_3 : (var_0 ^ var_5)))));
    /* LoopNest 2 */
    for (int i_1 = 2; i_1 < 11;i_1 += 1)
    {
        for (int i_2 = 0; i_2 < 12;i_2 += 1)
        {
            {

                /* vectorizable */
                for (int i_3 = 0; i_3 < 12;i_3 += 1)
                {
                    var_17 = (-3652584282836223819 ? (arr_7 [i_2] [i_2]) : ((38538 ? (arr_3 [i_1]) : var_0)));
                    var_18 = ((((((arr_5 [1]) < 164))) % (arr_1 [i_1 - 2])));

                    for (int i_4 = 0; i_4 < 12;i_4 += 1)
                    {

                        for (int i_5 = 3; i_5 < 11;i_5 += 1) /* same iter space */
                        {
                            var_19 = (((arr_5 [i_5]) ? ((((arr_4 [i_5] [i_3]) ? 0 : (arr_6 [i_1] [i_5])))) : 4611686018427387904));
                            arr_17 [i_4] [i_4] = ((-(arr_3 [i_1])));
                            arr_18 [i_1 + 1] [i_4] [3] [10] [i_1 + 1] = ((-(arr_12 [i_1 - 2] [i_1] [1] [i_1])));
                        }
                        for (int i_6 = 3; i_6 < 11;i_6 += 1) /* same iter space */
                        {
                            arr_22 [i_1] [i_4] = (((var_7 ? (arr_20 [i_1] [i_1] [2] [i_3] [i_4] [i_4] [i_6]) : (arr_13 [i_1] [i_1] [i_3] [i_4]))));
                            arr_23 [i_4] [i_4] [i_3] [8] [i_2] [i_4] = -32202;
                            var_20 = (arr_4 [i_1 - 1] [i_6 + 1]);
                        }
                        for (int i_7 = 4; i_7 < 10;i_7 += 1) /* same iter space */
                        {
                            var_21 = ((!var_9) - (arr_14 [i_7 - 4] [i_2] [i_3] [i_4] [i_7] [i_4]));
                            arr_27 [i_1] [i_4] [i_3] [i_3] [i_7] = var_7;
                        }
                        for (int i_8 = 4; i_8 < 10;i_8 += 1) /* same iter space */
                        {
                            var_22 = (((((var_9 ? 26998 : (arr_25 [i_8] [i_4] [i_3] [i_1])))) ? (!var_3) : (arr_6 [i_8 + 1] [i_1 - 2])));
                            arr_30 [i_1] [7] [i_2] [i_3] [4] [i_4] [i_8] = ((~(arr_11 [i_1 + 1] [i_2] [i_3] [i_2])));
                            arr_31 [i_4] [i_1] [i_2] [i_1] [i_3] [i_4] [i_8] = (((arr_15 [i_8] [i_8] [i_8 - 1] [i_8 + 2] [i_8] [i_8 - 4] [i_8 - 1]) && -32172));
                        }
                        var_23 = ((-3652584282836223818 ? 20407 : 27015));
                        var_24 = (-32217 <= 4294967295);
                    }
                    for (int i_9 = 0; i_9 < 12;i_9 += 1)
                    {

                        for (int i_10 = 0; i_10 < 12;i_10 += 1)
                        {
                            arr_37 [i_1 - 2] [i_2] [i_1 - 2] [i_1] [i_10] [i_1 - 2] = (arr_33 [i_1] [i_9] [i_1 - 1] [i_9] [i_10] [i_3]);
                            var_25 = (((((var_11 ? (arr_29 [i_10] [i_10]) : (arr_20 [i_1] [i_1] [i_3] [i_3] [i_9] [i_9] [i_10])))) ? ((var_7 ? (arr_5 [i_1]) : (arr_34 [i_10] [i_9] [i_2] [i_2] [i_1]))) : (arr_11 [i_1] [i_3] [i_1 + 1] [i_1 + 1])));
                            var_26 = (((arr_9 [i_1 + 1]) ? (((arr_33 [3] [i_2] [i_3] [i_3] [8] [i_10]) ? var_7 : (arr_35 [i_1] [i_1 + 1] [i_1] [i_1] [i_1] [i_1] [i_1]))) : (arr_14 [i_1] [i_1] [i_1] [i_1 + 1] [i_1] [i_1 - 2])));
                            arr_38 [i_10] [i_9] [i_9] [i_9] [i_3] [i_2] [i_1] = arr_26 [i_1 - 1] [i_2] [i_3] [i_9] [i_1 - 1];
                        }
                        var_27 = (arr_34 [i_1 - 1] [i_1] [i_1 + 1] [i_1 + 1] [i_1 + 1]);
                    }
                    var_28 = (((arr_34 [i_1] [i_1] [i_1] [i_1] [i_1 - 2]) ? (arr_36 [i_1 + 1] [i_1 + 1] [i_1 - 1] [i_1 + 1] [i_3]) : (arr_25 [i_1 + 1] [i_1 + 1] [i_1] [i_1 + 1])));
                }

                for (int i_11 = 0; i_11 < 12;i_11 += 1) /* same iter space */
                {
                    arr_41 [8] [i_2] [i_1] = ((-2024082732147385736 ? (((arr_16 [i_11] [i_1] [i_1 + 1] [i_1 + 1] [i_1] [1] [i_1 - 1]) ? (arr_16 [i_2] [i_1] [i_1] [i_1 + 1] [i_1] [i_1] [i_1 - 2]) : (arr_16 [i_2] [i_1] [i_1] [0] [i_1] [i_1] [i_1 - 2]))) : (((!(arr_36 [i_11] [i_2] [i_1 + 1] [i_1 + 1] [i_1]))))));
                    var_29 = (max(((((var_5 % 61480) ? 0 : ((var_9 ? 24836 : (arr_32 [i_1 + 1] [i_2] [i_11] [i_11] [i_11])))))), (arr_21 [i_1 + 1] [i_1] [i_1 - 2] [5] [i_1] [i_1])));
                }
                /* vectorizable */
                for (int i_12 = 0; i_12 < 12;i_12 += 1) /* same iter space */
                {
                    /* LoopNest 2 */
                    for (int i_13 = 4; i_13 < 10;i_13 += 1)
                    {
                        for (int i_14 = 0; i_14 < 12;i_14 += 1)
                        {
                            {
                                arr_49 [i_14] [i_13] [i_13] [i_12] [i_13] [i_1 - 1] = (((arr_19 [i_13] [i_13]) & (arr_15 [i_1] [i_1] [i_2] [i_12] [i_13] [i_13] [i_14])));
                                var_30 = (((arr_29 [i_13] [i_12]) | (arr_29 [i_13] [i_1 + 1])));
                                var_31 = var_7;
                            }
                        }
                    }
                    arr_50 [i_1] [i_1] [i_2] [i_1] = arr_32 [i_12] [i_12] [i_2] [0] [i_1];
                }
                for (int i_15 = 0; i_15 < 12;i_15 += 1) /* same iter space */
                {
                    /* LoopNest 2 */
                    for (int i_16 = 0; i_16 < 12;i_16 += 1)
                    {
                        for (int i_17 = 0; i_17 < 12;i_17 += 1)
                        {
                            {
                                var_32 = (arr_29 [i_16] [i_2]);
                                var_33 = (arr_39 [i_1 + 1] [i_1 - 1]);
                            }
                        }
                    }
                    var_34 = (arr_1 [i_1 - 2]);
                }
            }
        }
    }
    #pragma endscop
}
