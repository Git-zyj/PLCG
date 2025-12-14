/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 148029
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=148029 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/148029
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 1; i_0 < 23;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 25;i_1 += 1)
        {
            {
                arr_4 [21] [i_0] = (min(((max((arr_2 [i_0 + 2]), var_11))), ((-(arr_2 [i_0 - 1])))));

                for (int i_2 = 0; i_2 < 25;i_2 += 1) /* same iter space */
                {
                    var_16 = var_0;
                    var_17 = (((((var_6 % ((13514 ? 5301070180939882642 : var_0))))) ? var_10 : (5301070180939882642 | -5301070180939882643)));
                }
                for (int i_3 = 0; i_3 < 25;i_3 += 1) /* same iter space */
                {
                    arr_10 [i_0] [11] [i_3] [i_3] |= arr_0 [i_3];
                    /* LoopNest 2 */
                    for (int i_4 = 1; i_4 < 23;i_4 += 1)
                    {
                        for (int i_5 = 0; i_5 < 25;i_5 += 1)
                        {
                            {
                                var_18 = var_13;
                                arr_15 [i_5] [i_4] [i_3] [i_1] [i_5] = ((-36 ? (((((!1) >= ((-5301070180939882642 ? (arr_12 [i_5] [i_1] [i_3] [i_4 + 2] [i_4 + 2]) : 5301070180939882641)))))) : (5301070180939882633 & 50)));
                            }
                        }
                    }
                }
                /* vectorizable */
                for (int i_6 = 0; i_6 < 25;i_6 += 1) /* same iter space */
                {
                    arr_18 [i_0 + 1] [i_1] [i_6] [i_1] = 5301070180939882606;

                    for (int i_7 = 1; i_7 < 24;i_7 += 1)
                    {

                        for (int i_8 = 3; i_8 < 24;i_8 += 1)
                        {
                            arr_23 [0] [i_0] [i_1] [i_6] [i_1] [i_7 - 1] [i_1] = (((arr_5 [22] [i_1] [i_8 + 1] [i_0 + 2]) && (((-10 ? -11 : -50)))));
                            var_19 = (min(var_19, ((((arr_11 [7] [7] [i_6] [i_7 + 1] [i_8 - 3] [i_7]) ^ (arr_2 [i_0 + 2]))))));
                        }

                        for (int i_9 = 0; i_9 < 0;i_9 += 1)
                        {
                            arr_28 [i_9] = (((-696810241 ? var_14 : (arr_11 [i_1] [0] [2] [i_1] [12] [12]))));
                            var_20 = arr_26 [i_7 + 1] [i_7] [i_7 + 1] [4] [i_1] [i_0 - 1] [i_0];
                            arr_29 [i_0] [i_1] [8] [i_9] [i_9] = 1272459540;
                            arr_30 [10] [10] [i_6] [i_9] [i_6] = ((5301070180939882645 ? ((var_15 ? var_9 : 6)) : (arr_27 [19] [i_1] [i_6] [i_6] [i_9 + 1] [i_6])));
                            var_21 = (arr_3 [i_0 + 1] [i_0 + 1] [i_0 + 1]);
                        }
                        for (int i_10 = 1; i_10 < 21;i_10 += 1)
                        {
                            arr_34 [i_0] [i_0] [i_0] [1] [i_0 - 1] = (arr_8 [i_6] [i_1] [i_0]);
                            var_22 = (((((var_3 & (arr_6 [i_10 - 1] [i_1] [i_0 + 1] [i_0 + 1])))) ? 160 : -var_9));
                            var_23 = ((var_10 ? (-50 & var_4) : 87));
                        }
                    }
                }
            }
        }
    }

    for (int i_11 = 0; i_11 < 25;i_11 += 1)
    {
        arr_37 [i_11] [i_11] = (-5301070180939882643 & 70);
        var_24 |= max(((((((!(arr_2 [i_11])))) ^ var_14))), (((((var_3 << (((arr_35 [i_11] [i_11]) - 442796998829003196))))) % ((-46 ? -5301070180939882641 : -76)))));
        /* LoopNest 3 */
        for (int i_12 = 0; i_12 < 25;i_12 += 1)
        {
            for (int i_13 = 0; i_13 < 25;i_13 += 1)
            {
                for (int i_14 = 3; i_14 < 23;i_14 += 1)
                {
                    {

                        for (int i_15 = 0; i_15 < 25;i_15 += 1)
                        {
                            var_25 = 10;
                            var_26 = (max(var_26, ((max(((1 == ((var_9 ? var_7 : var_10)))), ((((max(var_11, (arr_12 [8] [i_12] [i_13] [i_12] [20])))) && var_12)))))));
                        }
                        var_27 ^= (((((-((var_12 ? -127 : 1))))) ? (max(var_6, ((var_12 ? var_2 : var_7)))) : var_14));
                        var_28 = var_0;
                    }
                }
            }
        }
    }
    for (int i_16 = 1; i_16 < 1;i_16 += 1)
    {
        var_29 = (max(var_29, (((-(((arr_19 [21] [18] [i_16 - 1] [i_16]) ? 49 : var_8)))))));
        var_30 = var_15;
    }
    for (int i_17 = 0; i_17 < 22;i_17 += 1)
    {
        /* LoopNest 2 */
        for (int i_18 = 1; i_18 < 20;i_18 += 1)
        {
            for (int i_19 = 4; i_19 < 19;i_19 += 1)
            {
                {
                    var_31 = (min((((-((min(50, var_11)))))), (arr_20 [17] [i_18] [i_18 - 1] [i_18])));
                    var_32 = (arr_1 [i_19 - 2]);
                    var_33 ^= ((max(-5301070180939882640, (arr_21 [i_17] [i_17] [i_18 - 1] [i_18 - 1] [i_19 - 2]))));
                }
            }
        }
        var_34 = (min(var_5, (arr_22 [i_17] [i_17] [i_17] [i_17] [i_17])));
        arr_54 [19] [i_17] = ((1 - (((((-(arr_21 [i_17] [i_17] [i_17] [i_17] [i_17])))) ? ((var_12 ? -665414136 : -79)) : (!-61)))));
        var_35 = (min((((9223372036854775807 ? -38 : (arr_7 [i_17])))), ((-((min(118, 97)))))));
    }
    var_36 = (max(var_4, -var_10));
    #pragma endscop
}
