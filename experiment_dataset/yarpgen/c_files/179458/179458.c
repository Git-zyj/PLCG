/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 179458
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=179458 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/179458
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_16 = (max(var_6, var_12));

    for (int i_0 = 0; i_0 < 12;i_0 += 1)
    {
        /* LoopNest 2 */
        for (int i_1 = 3; i_1 < 10;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 12;i_2 += 1)
            {
                {
                    var_17 |= (((arr_4 [i_1 + 2] [1] [i_1]) ? ((~(arr_4 [i_1 + 2] [8] [i_1 + 2]))) : (((arr_4 [i_1 - 1] [1] [i_2]) ? (arr_4 [i_1 - 2] [0] [i_2]) : (arr_4 [i_1 + 2] [8] [i_1])))));
                    /* LoopNest 2 */
                    for (int i_3 = 3; i_3 < 9;i_3 += 1)
                    {
                        for (int i_4 = 3; i_4 < 11;i_4 += 1)
                        {
                            {
                                var_18 += ((max(10, ((var_3 - (-127 - 1))))));
                                arr_10 [i_0] [i_1] [i_2] [i_1] [i_2] = (!0);
                            }
                        }
                    }
                }
            }
        }
        var_19 = (arr_6 [8] [8]);
        var_20 = (max(var_20, (((min(-1273661710, -4793866063946579410))))));
    }
    /* vectorizable */
    for (int i_5 = 0; i_5 < 20;i_5 += 1)
    {
        /* LoopNest 2 */
        for (int i_6 = 0; i_6 < 20;i_6 += 1)
        {
            for (int i_7 = 0; i_7 < 20;i_7 += 1)
            {
                {
                    arr_18 [i_5] [i_6] [i_7] [i_6] = (((arr_11 [i_7]) % (arr_16 [i_5] [i_5] [i_5] [i_5])));
                    var_21 = ((!(arr_14 [i_5] [i_5])));

                    for (int i_8 = 0; i_8 < 20;i_8 += 1)
                    {
                        var_22 = var_12;
                        var_23 = -20977;
                        var_24 = (arr_15 [i_7] [i_6] [i_7]);
                        var_25 = ((-(!var_14)));
                    }
                    for (int i_9 = 0; i_9 < 20;i_9 += 1) /* same iter space */
                    {
                        arr_25 [i_9] [i_9] [i_9] [i_5] = ((~(arr_22 [i_6] [i_7] [i_9])));
                        arr_26 [i_5] [i_6] [i_9] = 20977;
                        var_26 = (arr_23 [i_5] [5] [i_5] [i_5] [i_5] [i_5]);
                    }
                    for (int i_10 = 0; i_10 < 20;i_10 += 1) /* same iter space */
                    {

                        for (int i_11 = 0; i_11 < 20;i_11 += 1)
                        {
                            var_27 = (var_9 || var_1);
                            var_28 -= (!var_12);
                        }
                        for (int i_12 = 1; i_12 < 19;i_12 += 1)
                        {
                            var_29 = (arr_33 [i_5] [i_7] [i_12]);
                            var_30 = (max(var_30, (arr_12 [i_12 - 1] [i_12 - 1])));
                            var_31 = (arr_27 [i_10] [i_12 + 1]);
                        }
                        var_32 = var_4;
                        var_33 = var_12;
                    }
                    arr_34 [i_6] [i_7] = (arr_33 [i_5] [i_5] [i_5]);
                }
            }
        }
        var_34 = (min(var_34, ((((var_12 || var_10) ? (var_0 | var_10) : var_2)))));

        for (int i_13 = 0; i_13 < 20;i_13 += 1)
        {
            var_35 = -var_2;
            var_36 = (((arr_20 [i_13] [i_13] [i_5] [i_5]) ^ (arr_16 [i_5] [i_5] [i_5] [i_5])));
            var_37 += (arr_15 [i_5] [i_5] [i_13]);
        }
        var_38 = ((-(arr_24 [i_5] [i_5] [i_5] [i_5])));
        arr_38 [i_5] = ((-(((arr_19 [i_5] [i_5] [15] [i_5] [i_5]) ? var_11 : (arr_28 [19] [19])))));
    }
    for (int i_14 = 3; i_14 < 14;i_14 += 1)
    {
        var_39 = (max((min(var_1, (!var_9))), (arr_20 [i_14] [i_14] [i_14] [i_14])));
        arr_43 [i_14] = ((((!((min(219456888, (arr_12 [i_14] [i_14])))))) ? (((arr_37 [i_14 + 1] [i_14 - 1]) ? (arr_37 [i_14 + 1] [i_14 - 1]) : (arr_37 [i_14 + 1] [i_14 - 1]))) : (((max((arr_39 [i_14] [i_14 - 1]), (arr_39 [i_14] [i_14 - 2])))))));
        /* LoopNest 3 */
        for (int i_15 = 0; i_15 < 15;i_15 += 1)
        {
            for (int i_16 = 1; i_16 < 12;i_16 += 1)
            {
                for (int i_17 = 0; i_17 < 15;i_17 += 1)
                {
                    {
                        var_40 = var_2;
                        var_41 = (arr_29 [i_14] [i_14] [i_14] [i_14] [i_14] [i_14] [i_14]);
                    }
                }
            }
        }
        var_42 = (!0);
    }
    for (int i_18 = 0; i_18 < 1;i_18 += 1)
    {
        var_43 = (!336540453);
        arr_55 [i_18] = ((min(((var_15 ? var_1 : (arr_54 [i_18] [i_18]))), (arr_54 [i_18] [i_18]))));
        var_44 = 336540453;
    }
    var_45 = ((var_14 / ((-var_7 ? var_6 : 907073989))));
    #pragma endscop
}
