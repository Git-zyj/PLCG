/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 166409
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=166409 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/166409
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    /* vectorizable */
    for (int i_0 = 0; i_0 < 1;i_0 += 1) /* same iter space */
    {
        var_12 = (arr_3 [i_0]);

        for (int i_1 = 0; i_1 < 11;i_1 += 1) /* same iter space */
        {
            var_13 = (arr_5 [i_0]);
            var_14 = (arr_2 [i_0]);
            arr_7 [i_0] = (arr_5 [i_0]);
        }
        for (int i_2 = 0; i_2 < 11;i_2 += 1) /* same iter space */
        {
            var_15 &= var_6;
            /* LoopNest 3 */
            for (int i_3 = 0; i_3 < 11;i_3 += 1)
            {
                for (int i_4 = 4; i_4 < 8;i_4 += 1)
                {
                    for (int i_5 = 3; i_5 < 10;i_5 += 1)
                    {
                        {
                            var_16 = (((var_7 + var_9) / (arr_9 [10])));
                            var_17 = var_11;
                        }
                    }
                }
            }
        }
        arr_19 [i_0] = var_11;
        var_18 = (arr_17 [i_0] [1] [i_0] [i_0] [i_0] [i_0]);
    }
    /* vectorizable */
    for (int i_6 = 0; i_6 < 1;i_6 += 1) /* same iter space */
    {
        var_19 += ((((arr_10 [8] [8]) && (arr_4 [6]))));
        arr_24 [i_6] [i_6] = var_9;
    }
    for (int i_7 = 0; i_7 < 1;i_7 += 1) /* same iter space */
    {
        arr_27 [i_7] = ((0 || ((((var_4 || (arr_4 [1]))) && var_11))));
        arr_28 [i_7] = ((-(!var_0)));
    }

    for (int i_8 = 0; i_8 < 14;i_8 += 1)
    {
        arr_31 [i_8] = var_6;

        for (int i_9 = 0; i_9 < 14;i_9 += 1)
        {
            arr_35 [i_8] [i_8] = ((max((arr_32 [i_8]), (arr_32 [i_8]))));

            for (int i_10 = 0; i_10 < 14;i_10 += 1) /* same iter space */
            {
                var_20 = var_6;
                arr_39 [i_8] = 1;
            }
            for (int i_11 = 0; i_11 < 14;i_11 += 1) /* same iter space */
            {
                var_21 = ((((-(min(-1672496708, var_11)))) - (arr_36 [i_8] [i_8] [i_11])));
                var_22 = ((((((arr_30 [i_9]) & (arr_30 [i_8])))) ? (((58 & ((~(arr_41 [i_11] [i_8] [i_8] [i_8])))))) : var_9));

                for (int i_12 = 0; i_12 < 14;i_12 += 1)
                {
                    var_23 = ((1672496692 ? var_9 : (((((min(var_5, var_10)) == (0 - var_3)))))));
                    arr_44 [4] [i_11] [i_9] [i_11] |= var_7;
                }
                for (int i_13 = 0; i_13 < 14;i_13 += 1)
                {

                    /* vectorizable */
                    for (int i_14 = 0; i_14 < 1;i_14 += 1)
                    {
                        arr_52 [i_8] [12] [5] [i_14] [i_8] = (arr_50 [3] [i_8] [i_11] [i_13]);
                        var_24 = (arr_38 [i_14] [i_8] [i_8]);
                    }
                    for (int i_15 = 4; i_15 < 13;i_15 += 1)
                    {
                        arr_55 [i_8] [i_8] [i_11] [i_8] [i_8] = -1672496708;
                        var_25 = 31;
                        arr_56 [3] [i_8] [3] [i_11] [i_13] [5] [i_8] = ((3837711749 + (((((arr_48 [i_15 - 2] [i_8] [i_15 - 1] [i_8] [i_15 - 3]) == var_3))))));
                        arr_57 [i_15] [i_11] [2] [i_11] [2] &= (((((min(var_1, 33)) + var_5)) - 0));
                        arr_58 [i_8] [i_13] [i_13] [2] [i_9] [i_9] [i_8] = var_1;
                    }
                    for (int i_16 = 3; i_16 < 10;i_16 += 1) /* same iter space */
                    {
                        var_26 = ((-((var_7 ? var_0 : (~var_8)))));
                        var_27 = 78;
                        arr_62 [i_8] [8] [i_8] [4] [4] [4] = (var_6 - var_1);
                        var_28 = (max(var_28, 609475272));
                        var_29 = 1;
                    }
                    /* vectorizable */
                    for (int i_17 = 3; i_17 < 10;i_17 += 1) /* same iter space */
                    {
                        arr_66 [i_9] [i_9] [i_11] [i_9] [6] [i_9] |= ((!(arr_49 [10] [i_17] [i_17 + 3] [i_17] [i_11] [10])));
                        var_30 = var_7;
                        arr_67 [5] [i_8] [i_11] = (((((arr_54 [3] [i_13] [7] [i_11] [1] [1] [i_8]) ? var_10 : (arr_42 [i_8] [i_9] [i_8]))) != (arr_32 [i_17 + 4])));
                        arr_68 [i_8] [10] [10] [i_8] [i_17] = var_0;
                    }
                    var_31 = (((arr_65 [i_8] [i_9] [2] [i_9] [i_9] [0]) + ((((~14) != (arr_46 [i_8] [i_8] [i_8] [i_8] [i_13] [i_8]))))));
                    var_32 = (min(var_32, ((((var_4 - (arr_53 [i_8] [i_9] [i_8] [i_9] [8])))))));
                }
                var_33 = (max(((~(arr_37 [i_8] [i_9] [11]))), (((-var_2 + (687489321 == 26))))));
                var_34 = ((!(-1672496708 == 219)));
            }
            for (int i_18 = 0; i_18 < 14;i_18 += 1)
            {
                var_35 = -3289374885331051698;
                /* LoopNest 2 */
                for (int i_19 = 0; i_19 < 14;i_19 += 1)
                {
                    for (int i_20 = 0; i_20 < 14;i_20 += 1)
                    {
                        {
                            var_36 = (arr_32 [i_18]);
                            var_37 = ((!((!(arr_74 [i_8] [i_8] [i_8])))));
                            var_38 = (min(var_38, ((((!var_10) == (var_4 == var_1))))));
                            var_39 = (max(var_39, var_10));
                            var_40 = (min((arr_60 [i_8] [i_9] [i_8]), (max(var_11, var_5))));
                        }
                    }
                }
            }
        }
        var_41 ^= ((((var_6 == (arr_38 [i_8] [8] [8])))));
        var_42 = ((-(max((arr_45 [i_8]), 134217727))));
    }
    for (int i_21 = 0; i_21 < 13;i_21 += 1)
    {
        arr_80 [i_21] = 0;
        arr_81 [i_21] [12] &= 230;
    }
    var_43 = 1316847752;
    var_44 = var_5;
    #pragma endscop
}
