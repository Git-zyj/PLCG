/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 145878
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=145878 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/145878
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 24;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 24;i_1 += 1)
        {
            {

                /* vectorizable */
                for (int i_2 = 0; i_2 < 24;i_2 += 1)
                {
                    var_16 = ((!(!1020)));
                    arr_6 [i_0] [i_1] [i_0] [i_2] &= (~-1020);
                    var_17 = (max(var_17, (((-((~(arr_0 [i_1]))))))));
                    var_18 -= ((((!(arr_1 [10])))));
                    var_19 = ((~(((!(arr_2 [i_0] [i_0] [i_0]))))));
                }

                for (int i_3 = 0; i_3 < 24;i_3 += 1)
                {

                    /* vectorizable */
                    for (int i_4 = 0; i_4 < 24;i_4 += 1)
                    {
                        var_20 = (min(var_20, (~var_9)));
                        arr_15 [i_0] [i_1] [i_3] [i_1] [19] = (--1005);
                    }
                    for (int i_5 = 0; i_5 < 24;i_5 += 1)
                    {
                        arr_20 [9] [i_1] [2] [i_3] [i_1] [i_0] = ((!(((~(!0))))));
                        arr_21 [15] [i_1] [8] [14] = (!-var_15);
                    }
                    /* LoopNest 2 */
                    for (int i_6 = 0; i_6 < 24;i_6 += 1)
                    {
                        for (int i_7 = 0; i_7 < 24;i_7 += 1)
                        {
                            {
                                arr_29 [i_0] [i_1] [i_6] = ((~(((!(((-(arr_10 [i_1] [3] [3])))))))));
                                arr_30 [0] [i_1] [i_1] [i_1] [i_1] [18] = (((!((!(arr_9 [i_3] [i_3] [i_0]))))));
                                var_21 = ((((-(arr_18 [i_0] [i_1] [i_3] [7] [i_6] [7])))));
                                var_22 = ((-(((!((!(-32767 - 1))))))));
                            }
                        }
                    }

                    for (int i_8 = 0; i_8 < 24;i_8 += 1)
                    {
                        arr_33 [i_0] [i_1] [12] [3] = ((!(!var_0)));
                        arr_34 [i_0] [i_1] [i_0] [20] = ((!(~2257521010)));
                        var_23 = (-(arr_24 [i_0] [i_0] [i_8] [i_0]));
                    }
                    var_24 = ((~(!-var_9)));
                    arr_35 [i_0] [i_0] [i_1] = ((~(~-var_8)));
                }
                for (int i_9 = 0; i_9 < 24;i_9 += 1)
                {
                    arr_40 [i_0] [i_1] [16] [i_9] = ((!((!(!var_15)))));
                    arr_41 [i_0] [i_0] &= -var_1;
                    arr_42 [i_0] [i_1] [i_1] [i_0] = (~-var_12);
                    /* LoopNest 2 */
                    for (int i_10 = 0; i_10 < 24;i_10 += 1)
                    {
                        for (int i_11 = 0; i_11 < 24;i_11 += 1)
                        {
                            {
                                arr_49 [3] [i_10] [i_1] [i_10] = (((-((~(arr_8 [i_0] [i_9]))))));
                                arr_50 [i_0] [i_10] [i_1] [i_1] [i_0] [19] = (((~(!350129744))));
                            }
                        }
                    }
                    arr_51 [i_0] [i_1] [i_0] = ((!(!var_3)));
                }
                for (int i_12 = 0; i_12 < 24;i_12 += 1)
                {
                    var_25 = ((!(((~(!0))))));
                    var_26 -= ((-(arr_14 [3] [i_0] [3])));

                    for (int i_13 = 0; i_13 < 24;i_13 += 1)
                    {

                        for (int i_14 = 0; i_14 < 24;i_14 += 1)
                        {
                            var_27 = ((-(!var_1)));
                            arr_61 [i_1] = (((-(arr_13 [i_0] [14] [i_0] [i_0] [i_0]))));
                            var_28 = ((-(arr_48 [i_0] [15] [i_12])));
                        }
                        /* vectorizable */
                        for (int i_15 = 0; i_15 < 24;i_15 += 1)
                        {
                            var_29 += ((~((~(arr_39 [4] [4] [i_0] [i_13])))));
                            arr_65 [4] [9] [i_1] = (!-197);
                            var_30 = (max(var_30, (((-(!255))))));
                            var_31 ^= (~-1020);
                            var_32 = (--2984042008308271893);
                        }
                        for (int i_16 = 0; i_16 < 24;i_16 += 1)
                        {
                            var_33 = (min(var_33, (!var_10)));
                            arr_68 [2] [2] [12] [2] [i_0] [i_0] &= (~((-(!var_7))));
                            var_34 = (min(var_34, (((~(((!(!var_3)))))))));
                            arr_69 [i_1] = (((~((-(arr_22 [i_0] [i_0] [i_0] [i_0] [i_0]))))));
                            var_35 = (max(var_35, (((-(+-4))))));
                        }
                        arr_70 [i_1] = ((~((-((~(arr_52 [i_13] [i_12] [i_1] [i_0])))))));

                        /* vectorizable */
                        for (int i_17 = 0; i_17 < 24;i_17 += 1)
                        {
                            var_36 = (!11);
                            var_37 -= ((~(!var_6)));
                        }
                    }

                    for (int i_18 = 0; i_18 < 24;i_18 += 1)
                    {
                        var_38 -= (~-var_11);
                        var_39 = ((((!((!(arr_3 [i_0] [i_18])))))));
                    }
                    /* vectorizable */
                    for (int i_19 = 0; i_19 < 24;i_19 += 1)
                    {
                        var_40 |= ((~((~(arr_54 [4] [i_1] [i_1])))));
                        arr_79 [18] [i_1] [i_12] = ((!(~0)));
                    }
                    var_41 = ((!(~2147483625)));
                }
                var_42 = (min(var_42, (~-65535)));
            }
        }
    }
    var_43 = ((!(((-(!var_8))))));
    #pragma endscop
}
