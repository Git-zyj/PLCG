/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 122485
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=122485 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/122485
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_14 = (134213632 ? var_2 : (!var_12));
    var_15 = (~var_7);
    var_16 = max((var_2 % var_8), ((((var_3 ? var_5 : var_12)))));

    for (int i_0 = 0; i_0 < 13;i_0 += 1)
    {
        arr_2 [i_0] = (-var_6 >= ((min((((arr_1 [i_0]) << (((arr_0 [i_0] [i_0]) + 109)))), -110))));

        for (int i_1 = 1; i_1 < 11;i_1 += 1) /* same iter space */
        {
            var_17 |= (((arr_3 [i_0]) ? (arr_1 [i_0]) : (((!(((var_2 ? 134213611 : (arr_4 [i_1] [i_1] [i_0])))))))));
            /* LoopNest 3 */
            for (int i_2 = 0; i_2 < 13;i_2 += 1)
            {
                for (int i_3 = 0; i_3 < 13;i_3 += 1)
                {
                    for (int i_4 = 2; i_4 < 12;i_4 += 1)
                    {
                        {
                            var_18 = var_11;
                            arr_14 [i_3] [6] [i_2] [i_1] [i_3] = ((((((arr_5 [i_1 - 1]) / (arr_5 [i_1 - 1])))) ? (arr_5 [i_1 + 1]) : (arr_5 [i_1 + 2])));
                        }
                    }
                }
            }
        }
        /* vectorizable */
        for (int i_5 = 1; i_5 < 11;i_5 += 1) /* same iter space */
        {
            /* LoopNest 3 */
            for (int i_6 = 0; i_6 < 13;i_6 += 1)
            {
                for (int i_7 = 0; i_7 < 13;i_7 += 1)
                {
                    for (int i_8 = 0; i_8 < 13;i_8 += 1)
                    {
                        {
                            var_19 = (max(var_19, (((var_6 ? var_9 : var_5)))));
                            arr_24 [i_6] |= ((var_3 << (((((arr_15 [i_5 - 1] [i_6] [i_6]) + 6383397842562515308)) - 26))));
                        }
                    }
                }
            }
            arr_25 [i_0] [i_5] |= -var_12;
            var_20 |= ((var_1 ? ((((arr_11 [i_0] [i_0]) ? (arr_0 [i_5] [i_5]) : (arr_7 [i_5] [2] [i_0])))) : var_8));
        }
        for (int i_9 = 3; i_9 < 11;i_9 += 1)
        {
            var_21 = (max(((!(!134213628))), (!var_7)));
            arr_29 [i_0] [i_0] [i_0] |= (max((min(((0 ? (arr_7 [3] [i_9] [i_0]) : (arr_3 [i_9]))), (var_12 & var_1))), -var_4));
        }
        arr_30 [i_0] = (max(((var_11 ? (arr_8 [10] [10] [i_0] [i_0]) : (arr_8 [0] [i_0] [i_0] [i_0]))), (((var_1 != (arr_8 [10] [i_0] [i_0] [i_0]))))));
    }
    for (int i_10 = 1; i_10 < 17;i_10 += 1)
    {
        var_22 = ((((max(26, (arr_32 [i_10 + 1]))))) ? var_12 : ((9 ? var_2 : 59627)));
        arr_33 [i_10] [i_10] = ((((min((var_4 - var_2), (arr_32 [i_10 + 1])))) ? (((arr_32 [i_10 + 1]) >> (5884153360608788264 - 5884153360608788250))) : (arr_32 [i_10 - 1])));
        arr_34 [i_10] = var_3;
    }
    /* vectorizable */
    for (int i_11 = 3; i_11 < 20;i_11 += 1)
    {
        arr_38 [i_11] |= (((arr_35 [i_11 - 1]) <= (arr_35 [i_11 - 2])));

        for (int i_12 = 0; i_12 < 21;i_12 += 1)
        {
            var_23 = (var_5 != var_13);
            arr_41 [i_11] [i_12] = var_6;
            arr_42 [i_11 - 3] |= var_12;
            arr_43 [i_12] [i_11] = var_3;
        }
        for (int i_13 = 2; i_13 < 20;i_13 += 1)
        {
            var_24 = (((arr_39 [i_11 - 3]) >= var_2));

            for (int i_14 = 4; i_14 < 19;i_14 += 1) /* same iter space */
            {
                /* LoopNest 2 */
                for (int i_15 = 0; i_15 < 21;i_15 += 1)
                {
                    for (int i_16 = 0; i_16 < 21;i_16 += 1)
                    {
                        {
                            arr_56 [i_13] [i_13] [i_14] [5] [i_16] = ((var_6 ? var_4 : var_12));
                            arr_57 [i_13] [i_15] [i_13] = var_6;
                            var_25 = (((arr_53 [i_16] [i_15] [i_14] [i_14 - 2] [i_13] [i_11] [i_11]) || (arr_53 [i_16] [i_16] [i_16] [i_16] [i_16] [i_16] [i_16])));
                            var_26 = (((arr_40 [i_11 + 1] [i_11 + 1] [i_13 - 1]) ? (arr_39 [i_11 - 2]) : (((((arr_52 [i_15] [i_14] [i_13] [i_11]) || var_4))))));
                            var_27 = (((arr_50 [3] [i_14 + 2] [i_11 - 3] [i_11]) - 134213632));
                        }
                    }
                }
                arr_58 [6] [i_13 - 2] [i_13] = var_9;
            }
            for (int i_17 = 4; i_17 < 19;i_17 += 1) /* same iter space */
            {
                /* LoopNest 2 */
                for (int i_18 = 0; i_18 < 21;i_18 += 1)
                {
                    for (int i_19 = 0; i_19 < 1;i_19 += 1)
                    {
                        {
                            arr_66 [i_13] [15] [i_17] [i_13] [i_13] = (arr_48 [i_17 - 4] [i_13 - 2] [1] [1]);
                            var_28 = ((((var_2 ? (arr_62 [i_13] [i_13] [3] [i_13] [i_13] [i_13]) : (arr_51 [i_11 - 2] [i_13] [i_17] [i_18] [i_19]))) < 134213627));
                            var_29 = (max(var_29, ((((arr_46 [i_13 - 2] [i_17 - 3] [i_18]) || (arr_46 [i_13 + 1] [i_17 - 4] [i_18]))))));
                            arr_67 [i_11] [i_13 - 1] [i_17] [i_18] [i_19] [i_13] [i_19] = var_10;
                        }
                    }
                }
                /* LoopNest 2 */
                for (int i_20 = 3; i_20 < 18;i_20 += 1)
                {
                    for (int i_21 = 2; i_21 < 19;i_21 += 1)
                    {
                        {
                            arr_72 [i_13] = var_4;
                            arr_73 [i_11] [i_11] [i_13] [i_11] [i_17 - 2] [i_13] [i_21 + 2] = (arr_71 [i_17] [i_13] [i_13] [i_17 - 1]);
                            var_30 = (((((arr_62 [i_13] [i_13] [i_13] [i_13] [i_13] [i_13]) ? var_11 : var_7))) ? var_7 : var_8);
                            var_31 = (min(var_31, var_3));
                        }
                    }
                }
                arr_74 [14] [i_13] [14] |= (((arr_49 [0] [0] [0] [i_13 - 2]) ? (arr_55 [i_17 - 3] [2] [i_17 + 1] [2] [i_13 - 1]) : (arr_55 [i_17] [2] [i_17] [2] [i_13 - 2])));
            }
            for (int i_22 = 0; i_22 < 1;i_22 += 1)
            {
                var_32 = ((-(arr_68 [i_13])));
                arr_78 [i_13] [i_13] = (((arr_65 [i_11 - 2] [i_13] [i_13] [i_22]) * 2456911956));
                var_33 = var_11;
            }
            var_34 = (((arr_75 [i_13] [i_13]) ? (arr_65 [i_13 - 2] [i_13] [i_13] [i_11 - 1]) : var_11));
            var_35 = (((arr_55 [i_11 - 3] [i_11 - 1] [i_11] [i_13] [i_11]) ? (arr_55 [i_11 - 3] [i_11 - 1] [i_11 - 3] [i_13] [i_11 - 3]) : (arr_55 [i_11 - 2] [i_11 - 3] [i_11 - 2] [i_13] [i_13 - 1])));
        }
    }
    #pragma endscop
}
