/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 179693
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=179693 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/179693
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    /* vectorizable */
    for (int i_0 = 4; i_0 < 17;i_0 += 1)
    {
        /* LoopNest 2 */
        for (int i_1 = 1; i_1 < 18;i_1 += 1)
        {
            for (int i_2 = 3; i_2 < 20;i_2 += 1)
            {
                {
                    var_10 += ((var_0 ? -20709 : -20709));
                    var_11 = (var_0 - var_5);
                    /* LoopNest 2 */
                    for (int i_3 = 0; i_3 < 1;i_3 += 1)
                    {
                        for (int i_4 = 0; i_4 < 21;i_4 += 1)
                        {
                            {
                                var_12 += ((-(15773972898195923627 > 6721405063452975973)));
                                arr_13 [i_1] [i_1] = (((arr_8 [i_0] [i_1] [i_2 + 1] [i_2 + 1] [i_0 + 2] [i_1 + 1]) >= var_6));
                                var_13 = (arr_10 [i_1 + 2] [i_1 + 2] [i_2 + 1]);
                            }
                        }
                    }
                    var_14 = (max(var_14, (((20723 * (arr_3 [i_0] [i_1 - 1] [i_1 - 1]))))));
                    var_15 = (arr_7 [i_0] [i_1]);
                }
            }
        }
        var_16 = 127;
    }
    /* LoopNest 2 */
    for (int i_5 = 0; i_5 < 24;i_5 += 1)
    {
        for (int i_6 = 0; i_6 < 24;i_6 += 1)
        {
            {
                var_17 = (max(var_17, (((((~(arr_14 [i_6]))))))));
                /* LoopNest 2 */
                for (int i_7 = 0; i_7 < 24;i_7 += 1)
                {
                    for (int i_8 = 3; i_8 < 22;i_8 += 1)
                    {
                        {
                            var_18 = (((~(9007199254740990 <= 23407))));
                            var_19 += (max(((-((max(var_8, (arr_22 [i_5])))))), (arr_17 [i_5])));
                            var_20 = 1865994975012033676;

                            for (int i_9 = 0; i_9 < 24;i_9 += 1) /* same iter space */
                            {
                                arr_28 [i_5] [i_6] [10] [i_6] [8] = (max((((min((arr_24 [i_9] [16] [i_6] [i_5]), var_1)))), (var_7 >> 0)));
                                arr_29 [i_5] [i_6] = (arr_21 [i_8] [i_6]);
                                arr_30 [i_5] [i_6] [i_5] [i_8] = -4719;
                            }
                            for (int i_10 = 0; i_10 < 24;i_10 += 1) /* same iter space */
                            {
                                var_21 = (9104498414529293424 - 20);
                                arr_34 [i_5] = ((((~((9104498414529293423 ? (arr_18 [8]) : (arr_24 [i_5] [0] [i_5] [i_5]))))) <= var_4));
                                var_22 = (!9104498414529293411);
                            }
                        }
                    }
                }
                arr_35 [1] [i_5] [i_5] = ((((94 >> (var_6 - 904654210))) << (8104697793114275009 - 8104697793114274985)));
                arr_36 [i_5] [1] = (!-102);
            }
        }
    }
    var_23 = var_1;
    var_24 = (var_4 ? var_6 : ((min(var_9, var_7))));

    for (int i_11 = 0; i_11 < 13;i_11 += 1) /* same iter space */
    {
        var_25 = ((max(0, 1918)));
        arr_39 [i_11] &= max((((~(arr_38 [i_11] [i_11])))), (~-9104498414529293407));
        var_26 = var_1;
        var_27 = 1747505174;
    }
    for (int i_12 = 0; i_12 < 13;i_12 += 1) /* same iter space */
    {
        var_28 = (((((~65518) + 2147483647)) << (((var_0 + 3581467748428036343) - 17))));

        for (int i_13 = 2; i_13 < 10;i_13 += 1)
        {
            var_29 = (max(var_29, ((((var_4 != (!-20689)))))));
            /* LoopNest 2 */
            for (int i_14 = 0; i_14 < 13;i_14 += 1)
            {
                for (int i_15 = 1; i_15 < 12;i_15 += 1)
                {
                    {
                        var_30 = (~13);

                        for (int i_16 = 0; i_16 < 13;i_16 += 1)
                        {
                            arr_51 [i_12] [i_12] [4] [i_15 + 1] [i_16] [8] [i_12] &= (arr_10 [9] [i_14] [i_12]);
                            var_31 += (((((((arr_21 [6] [i_16]) ? (arr_0 [i_12]) : 11897)) << (((120 | -1) + 2)))) << (((arr_12 [i_16] [i_16] [i_15] [1] [9] [i_12] [i_12]) + 97))));
                        }
                        for (int i_17 = 1; i_17 < 1;i_17 += 1)
                        {
                            arr_54 [i_12] [i_12] [i_12] [i_13] [i_12] [i_14] &= (5932 >= 126);
                            var_32 = (((16816263251822324510 < var_0) || (arr_42 [i_12] [i_13 - 1] [i_15 + 1])));
                        }
                        for (int i_18 = 0; i_18 < 13;i_18 += 1) /* same iter space */
                        {
                            var_33 = 31215413;
                            var_34 = var_3;
                            arr_58 [i_15] [11] [i_13] [7] [i_15 - 1] [0] = ((-(arr_23 [22] [22])));
                            var_35 = (min(((var_7 ? 10192443253002181625 : (~0))), 35023));
                        }
                        /* vectorizable */
                        for (int i_19 = 0; i_19 < 13;i_19 += 1) /* same iter space */
                        {
                            var_36 = 6;
                            arr_61 [i_15] [i_13 + 1] [i_13] = var_1;
                            arr_62 [i_12] [i_12] [i_14] [i_15] [i_15] [i_12] [i_13 + 1] = 5932;
                            arr_63 [i_12] [i_12] [i_15] = (arr_5 [i_15 - 1] [i_13 + 2]);
                        }
                    }
                }
            }
            arr_64 [i_13 + 3] [i_13] [i_12] = 7965;
        }
        for (int i_20 = 0; i_20 < 13;i_20 += 1)
        {
            /* LoopNest 2 */
            for (int i_21 = 0; i_21 < 1;i_21 += 1)
            {
                for (int i_22 = 1; i_22 < 11;i_22 += 1)
                {
                    {
                        var_37 &= ((4381491258565411441 ? ((max(-75, 97))) : var_4));
                        arr_76 [i_12] [i_12] [i_21] [10] [i_22] [i_22] = var_0;
                    }
                }
            }
            var_38 = (~8913);
        }
    }
    /* vectorizable */
    for (int i_23 = 0; i_23 < 13;i_23 += 1) /* same iter space */
    {
        var_39 += var_6;
        arr_81 [i_23] = var_2;
    }
    #pragma endscop
}
