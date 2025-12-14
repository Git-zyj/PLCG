/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 14891
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=14891 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/14891
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_12 = 629237848887092498;

    /* vectorizable */
    for (int i_0 = 0; i_0 < 14;i_0 += 1)
    {
        arr_3 [i_0] = (arr_0 [i_0] [i_0]);
        var_13 = -1180039228;

        for (int i_1 = 1; i_1 < 11;i_1 += 1)
        {
            arr_6 [i_1] [i_1] = ((((((arr_2 [i_0]) || var_1))) != var_8));
            var_14 = ((!(arr_0 [i_1 + 1] [i_1 + 3])));
            /* LoopNest 3 */
            for (int i_2 = 2; i_2 < 12;i_2 += 1)
            {
                for (int i_3 = 0; i_3 < 14;i_3 += 1)
                {
                    for (int i_4 = 0; i_4 < 14;i_4 += 1)
                    {
                        {
                            var_15 = (((arr_7 [i_2 + 2] [i_2 + 2] [i_2 + 2] [i_2 - 1]) ? 59155 : (arr_11 [i_1] [i_3] [i_2] [i_1] [i_1])));
                            var_16 = (arr_12 [i_1] [i_1] [7] [i_1]);
                            var_17 = (arr_15 [10] [i_1 + 2] [i_1 + 1] [i_1] [1]);
                        }
                    }
                }
            }
            var_18 = ((!(((-21570 ? 1 : 1)))));
        }
        for (int i_5 = 4; i_5 < 10;i_5 += 1) /* same iter space */
        {
            arr_18 [i_0] [i_0] [13] = (((!1) << 1));
            arr_19 [13] [13] = (arr_7 [i_5] [i_5 + 3] [i_5 + 4] [i_5 + 4]);
            arr_20 [9] [i_5] = ((~(arr_5 [i_5 + 1])));
            var_19 = (((arr_5 [i_5 + 2]) ^ 1));
        }
        for (int i_6 = 4; i_6 < 10;i_6 += 1) /* same iter space */
        {
            arr_23 [i_0] = (arr_12 [i_6] [i_0] [i_6] [i_6]);

            for (int i_7 = 3; i_7 < 12;i_7 += 1)
            {
                /* LoopNest 2 */
                for (int i_8 = 0; i_8 < 14;i_8 += 1)
                {
                    for (int i_9 = 1; i_9 < 13;i_9 += 1)
                    {
                        {
                            var_20 = (min(var_20, ((((((!(arr_25 [i_8] [i_8] [i_8])))) >> (((arr_11 [i_0] [i_9] [i_9 + 1] [i_7 - 1] [i_0]) - 620755740)))))));
                            arr_32 [i_0] [i_0] [i_9] [i_0] [1] = (arr_15 [i_9 - 1] [i_8] [i_0] [i_6] [i_0]);
                        }
                    }
                }

                for (int i_10 = 0; i_10 < 14;i_10 += 1)
                {
                    arr_35 [i_0] [1] [1] [i_0] [0] = ((((arr_21 [i_0] [i_0]) >= var_7)));
                    var_21 = (!1);
                    var_22 = (arr_7 [i_0] [i_0] [i_0] [i_0]);
                    arr_36 [i_0] [3] [0] [7] = ((arr_21 [i_7] [i_7 + 1]) ? (arr_21 [i_7] [i_7 + 1]) : (arr_21 [i_7] [i_7 + 2]));
                }
            }
        }
        for (int i_11 = 0; i_11 < 14;i_11 += 1)
        {
            var_23 = (!((1 < (arr_34 [12] [i_11] [i_11] [i_11]))));
            arr_39 [i_11] = var_10;
            arr_40 [i_0] [i_0] [i_0] = (var_0 || var_5);
            var_24 = (var_4 < 1);
        }
        var_25 = ((~(((1 || (arr_5 [i_0]))))));
    }
    for (int i_12 = 0; i_12 < 11;i_12 += 1)
    {
        arr_44 [i_12] = (((((min((arr_7 [i_12] [1] [i_12] [i_12]), (arr_30 [i_12] [i_12] [i_12] [i_12] [i_12] [i_12]))))) == ((min((max(1, var_0)), var_8)))));
        arr_45 [i_12] = (((((max((arr_41 [i_12]), (arr_26 [i_12]))))) * (min(((min((arr_10 [11] [i_12] [i_12] [i_12]), (arr_14 [i_12] [i_12] [i_12] [i_12] [i_12])))), ((1 ? (arr_34 [i_12] [i_12] [7] [7]) : var_2))))));

        /* vectorizable */
        for (int i_13 = 0; i_13 < 1;i_13 += 1)
        {
            var_26 = (~var_8);
            var_27 += ((var_1 ? var_2 : var_9));
            /* LoopNest 2 */
            for (int i_14 = 0; i_14 < 1;i_14 += 1)
            {
                for (int i_15 = 3; i_15 < 10;i_15 += 1)
                {
                    {

                        for (int i_16 = 0; i_16 < 11;i_16 += 1)
                        {
                            var_28 = (((var_2 ? (arr_49 [i_16] [i_14] [i_12] [i_12]) : (arr_0 [i_15 - 1] [i_12]))));
                            var_29 = (max(var_29, var_9));
                        }

                        for (int i_17 = 0; i_17 < 11;i_17 += 1) /* same iter space */
                        {
                            var_30 = (arr_2 [i_15 + 1]);
                            arr_61 [1] [5] [i_14] [i_14] [i_14] [i_12] [i_12] = (arr_22 [10] [i_13] [10]);
                        }
                        for (int i_18 = 0; i_18 < 11;i_18 += 1) /* same iter space */
                        {
                            var_31 -= ((var_5 ? (arr_33 [7] [7] [8]) : ((1 ? 1 : (arr_16 [i_12] [i_12] [3])))));
                            arr_66 [i_14] = var_2;
                        }
                        var_32 = 1;
                    }
                }
            }
            /* LoopNest 2 */
            for (int i_19 = 0; i_19 < 1;i_19 += 1)
            {
                for (int i_20 = 2; i_20 < 9;i_20 += 1)
                {
                    {
                        arr_73 [1] [1] [1] [1] [9] [i_13] = (arr_22 [i_20] [i_12] [i_12]);
                        var_33 = 1;

                        for (int i_21 = 0; i_21 < 11;i_21 += 1)
                        {
                            var_34 = (max(var_34, var_2));
                            var_35 = (arr_28 [5]);
                        }
                    }
                }
            }
        }
        for (int i_22 = 0; i_22 < 11;i_22 += 1)
        {
            arr_79 [i_12] [i_12] [i_12] = (((((((min((arr_29 [i_22] [i_22] [i_12]), 1))) / ((((arr_31 [i_22] [i_22] [i_22]) != (arr_38 [i_12] [i_12] [i_12]))))))) ? (max((var_3 | var_3), (~var_11))) : (max(((min((arr_77 [i_12]), (arr_17 [i_12])))), ((1 ? 1 : 1))))));
            var_36 = (min((max(1, 1)), 1));
        }
        for (int i_23 = 0; i_23 < 11;i_23 += 1)
        {
            var_37 = (arr_75 [i_12]);
            var_38 = ((((max((arr_27 [i_23] [12] [i_12] [i_12]), (arr_27 [13] [i_12] [i_12] [1])))) ? (((arr_27 [i_12] [i_23] [i_12] [i_12]) ? (arr_12 [i_12] [i_23] [i_23] [i_23]) : (arr_12 [i_12] [i_23] [i_23] [i_23]))) : var_0));
        }
        var_39 = ((((!(arr_53 [i_12] [i_12] [i_12] [i_12]))) && (arr_28 [i_12])));
    }
    var_40 = 1;
    #pragma endscop
}
