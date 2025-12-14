/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 102623
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=102623 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/102623
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_12 = (!60903);

    /* vectorizable */
    for (int i_0 = 1; i_0 < 17;i_0 += 1)
    {
        /* LoopNest 2 */
        for (int i_1 = 0; i_1 < 19;i_1 += 1)
        {
            for (int i_2 = 2; i_2 < 18;i_2 += 1)
            {
                {
                    var_13 = (arr_4 [i_1] [i_1] [i_2 - 2]);
                    var_14 = (arr_8 [i_0 - 1]);

                    for (int i_3 = 0; i_3 < 0;i_3 += 1)
                    {
                        var_15 = (max(var_15, (((((-(arr_9 [i_2]))) >= (arr_2 [i_0] [i_0] [i_2]))))));
                        var_16 = (arr_7 [i_3 + 1]);
                        arr_11 [i_1] [i_1] [i_2] [11] = var_4;
                        var_17 |= ((((arr_6 [i_0] [i_0] [i_2 - 2] [i_3]) / var_8)));
                        var_18 ^= (((arr_0 [i_0]) ? (arr_10 [i_0 + 2] [i_0 + 1] [i_0 - 1] [i_0] [i_0 - 1]) : (arr_4 [i_2] [8] [i_2])));
                    }
                }
            }
        }
        /* LoopNest 2 */
        for (int i_4 = 0; i_4 < 19;i_4 += 1)
        {
            for (int i_5 = 0; i_5 < 19;i_5 += 1)
            {
                {
                    var_19 = (arr_8 [i_0 - 1]);
                    var_20 = (!-5265511752588480029);
                    var_21 = var_6;
                }
            }
        }
        arr_16 [i_0] = (arr_4 [8] [i_0 - 1] [i_0]);
        var_22 = -255;
        arr_17 [i_0] = (((arr_10 [i_0] [i_0] [i_0 + 2] [i_0 - 1] [11]) && (arr_10 [i_0] [i_0] [i_0] [i_0 - 1] [i_0 + 2])));
    }
    /* vectorizable */
    for (int i_6 = 0; i_6 < 15;i_6 += 1)
    {
        var_23 = (arr_5 [i_6]);
        var_24 = var_5;
        arr_21 [i_6] = (((((arr_0 [i_6]) * (arr_18 [i_6]))) + (((var_8 ? (arr_2 [i_6] [i_6] [i_6]) : (arr_18 [i_6]))))));
    }
    /* vectorizable */
    for (int i_7 = 0; i_7 < 1;i_7 += 1)
    {
        /* LoopNest 3 */
        for (int i_8 = 0; i_8 < 12;i_8 += 1)
        {
            for (int i_9 = 0; i_9 < 12;i_9 += 1)
            {
                for (int i_10 = 3; i_10 < 10;i_10 += 1)
                {
                    {
                        var_25 |= (((arr_10 [i_10 - 1] [i_10] [i_10] [i_10 - 2] [i_10 - 3]) ? (arr_10 [i_10 - 1] [i_10] [i_10] [i_10] [i_10 - 1]) : (arr_10 [i_10 + 2] [i_10] [i_10] [i_10] [i_10 - 1])));
                        arr_32 [i_7] [i_7] [i_7] [9] = var_10;
                        var_26 = (arr_30 [i_7] [i_10] [8] [8] [i_10 + 2]);

                        for (int i_11 = 1; i_11 < 10;i_11 += 1) /* same iter space */
                        {
                            arr_36 [i_10] [i_7] = (((147 ? 1 : 1)));
                            arr_37 [i_7] [i_8] [8] [i_8] [i_8] [i_8] = (arr_20 [i_9] [i_10]);
                        }
                        for (int i_12 = 1; i_12 < 10;i_12 += 1) /* same iter space */
                        {
                            var_27 = ((-(arr_33 [i_10 - 2] [i_12 - 1] [i_8] [i_10 - 2] [i_12 + 1] [i_12 - 1] [i_12])));
                            var_28 = ((var_6 ? (arr_38 [i_7] [i_7] [i_9] [i_8] [i_12 + 1]) : (arr_30 [i_7] [i_9] [i_10] [i_10 - 1] [i_10 - 2])));
                        }
                        for (int i_13 = 3; i_13 < 8;i_13 += 1)
                        {
                            var_29 = (((arr_34 [4] [4] [4] [4] [4]) / 255));
                            arr_43 [i_7] = (arr_22 [i_8] [i_9]);
                            var_30 = (min(var_30, ((((((var_7 ? (arr_40 [i_7] [i_8] [i_9] [i_10 - 1] [i_13 + 3] [0]) : (arr_39 [i_7] [i_7] [i_8])))) ? (arr_41 [i_13] [i_13] [i_13 + 1] [i_13] [i_13]) : ((((!(arr_22 [i_9] [i_10 - 2]))))))))));
                        }
                        var_31 = (max(var_31, var_10));
                    }
                }
            }
        }
        /* LoopNest 2 */
        for (int i_14 = 0; i_14 < 12;i_14 += 1)
        {
            for (int i_15 = 0; i_15 < 12;i_15 += 1)
            {
                {
                    arr_49 [i_7] = ((arr_9 [i_7]) | (arr_9 [i_7]));
                    /* LoopNest 2 */
                    for (int i_16 = 2; i_16 < 11;i_16 += 1)
                    {
                        for (int i_17 = 0; i_17 < 12;i_17 += 1)
                        {
                            {
                                var_32 = (((16977532239863869702 ? 10 : 15)));
                                var_33 = (((((13486689831877735461 ? 32760 : 255))) ? (((arr_28 [i_7] [2]) ? var_7 : (arr_0 [i_15]))) : (arr_10 [i_7] [i_14] [i_15] [i_16] [i_15])));
                            }
                        }
                    }
                }
            }
        }
        arr_55 [i_7] [i_7] = ((60908 ? -46953 : 1));
        var_34 = (((arr_30 [i_7] [11] [i_7] [i_7] [10]) ^ (((var_4 == (arr_47 [1]))))));
        arr_56 [i_7] = (((arr_41 [i_7] [i_7] [i_7] [i_7] [i_7]) ? 2147483647 : 1));
    }
    #pragma endscop
}
