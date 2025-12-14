/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 141203
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=141203 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/141203
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 1;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 20;i_1 += 1)
        {
            {
                arr_5 [12] [i_0] = (max(((((min(-3966389482121271556, var_10))) ? (((3966389482121271532 ? (arr_0 [i_0]) : (arr_3 [i_0])))) : 1239000222897091433)), (((3966389482121271532 ^ var_16) ? ((var_12 ? var_0 : (arr_1 [i_0] [i_0]))) : 3966389482121271564))));
                arr_6 [i_0] [i_0] = (min((((((-32761 ? 255 : (arr_2 [i_0] [4])))) ? (((min(26194, var_8)))) : (arr_1 [i_1] [i_0]))), ((((arr_3 [i_0]) <= 70368744144896)))));
                arr_7 [16] [i_0] = (((((arr_0 [i_0]) ? (arr_3 [i_0]) : 26191))));
            }
        }
    }
    var_17 = var_6;

    /* vectorizable */
    for (int i_2 = 2; i_2 < 8;i_2 += 1)
    {
        var_18 = (min(var_18, (((~((32830719 << (var_7 - 1505))))))));

        for (int i_3 = 2; i_3 < 9;i_3 += 1)
        {
            var_19 = (min(var_19, ((((arr_9 [i_3] [i_2]) == (arr_12 [i_2] [2]))))));
            arr_13 [i_2] [i_2] = var_11;
        }
        for (int i_4 = 0; i_4 < 12;i_4 += 1)
        {
            var_20 = (min(var_20, var_12));
            var_21 = (arr_2 [i_2 - 2] [1]);
            arr_18 [i_2] [i_2] [i_2] = (arr_12 [i_2] [i_2]);
            var_22 = 15;
        }
        for (int i_5 = 0; i_5 < 1;i_5 += 1)
        {
            arr_21 [i_2] [i_2] [i_2] = var_12;

            for (int i_6 = 0; i_6 < 12;i_6 += 1)
            {

                for (int i_7 = 0; i_7 < 12;i_7 += 1) /* same iter space */
                {
                    arr_29 [3] [i_5] [i_6] [i_2] = var_10;
                    arr_30 [i_2] [8] [8] [11] [i_2] [i_7] = 18;
                    arr_31 [i_2 + 2] [i_2] = (arr_15 [i_2] [i_7] [i_2 + 4]);
                    arr_32 [i_2] [i_2] = (((arr_17 [0] [i_5] [10]) ? var_3 : (arr_17 [i_2] [i_2 + 2] [6])));
                }
                for (int i_8 = 0; i_8 < 12;i_8 += 1) /* same iter space */
                {
                    arr_35 [i_8] [i_2] [i_6] [i_2] [i_2] [i_2] = (((arr_9 [i_8] [i_2 + 3]) + 39340));
                    var_23 = ((var_14 ? (((arr_12 [i_2] [i_2]) ? -2328296611603081180 : 49237)) : (var_5 * 1)));

                    for (int i_9 = 0; i_9 < 1;i_9 += 1)
                    {
                        arr_39 [i_2] [i_2] [i_2] [i_2] [i_2] [i_8] [i_9] = var_10;
                        var_24 = -0;
                        arr_40 [i_2] [i_5] [7] [i_5] = (arr_33 [i_2] [i_2] [i_9]);
                        var_25 = 15;
                    }

                    for (int i_10 = 0; i_10 < 1;i_10 += 1)
                    {
                        var_26 = (arr_22 [i_5] [i_5] [i_5]);
                        arr_45 [i_2] = ((((arr_27 [i_5] [i_5] [2] [i_5] [i_5] [i_5]) % -3966389482121271560)));
                        var_27 = (max(var_27, (((4083440150 ? (arr_23 [9] [i_2 + 2] [i_2 + 3]) : ((var_1 ? var_15 : 31741)))))));
                        arr_46 [i_8] [i_10] [i_8] [i_2] = var_7;
                    }
                    for (int i_11 = 4; i_11 < 10;i_11 += 1)
                    {
                        var_28 = (((arr_36 [i_2] [i_2] [i_6] [i_8] [i_11 + 1] [i_2]) < 0));
                        arr_49 [i_2] [1] [i_2] [7] [i_2] = 240;
                        arr_50 [i_2] [i_2] [1] = ((!(arr_16 [i_2] [0] [10])));
                    }
                }
                for (int i_12 = 0; i_12 < 12;i_12 += 1) /* same iter space */
                {
                    var_29 = (((arr_36 [i_2] [i_5] [0] [i_5] [i_12] [i_2]) ? (arr_33 [i_2] [3] [i_2]) : -4270206960271471734));
                    arr_54 [9] [i_5] [5] [i_2] [i_6] [i_12] = (arr_44 [i_2 + 1] [i_5] [i_5] [i_2] [i_12]);
                }
                arr_55 [9] [i_2] [0] = -7765;
                arr_56 [i_2] [i_2] [i_2 - 1] [1] = 1;
            }
            for (int i_13 = 0; i_13 < 12;i_13 += 1) /* same iter space */
            {
                arr_59 [i_2] [i_5] [i_2] = (arr_58 [i_2 + 1] [i_2] [i_2 + 1]);
                var_30 = 0;
            }
            for (int i_14 = 0; i_14 < 12;i_14 += 1) /* same iter space */
            {
                arr_63 [i_2] [7] [i_5] [i_14] = (arr_14 [i_2] [i_5] [i_2]);
                arr_64 [i_2] [i_2] [i_14] [i_2 + 3] = (((var_3 % (arr_51 [i_2]))));
                var_31 = ((-3966389482121271564 ? (26179 + 1956225441) : var_10));
            }
        }
        for (int i_15 = 0; i_15 < 12;i_15 += 1)
        {
            var_32 &= (arr_44 [i_2 + 4] [i_2 + 3] [i_2 + 4] [i_15] [i_2]);
            /* LoopNest 3 */
            for (int i_16 = 0; i_16 < 12;i_16 += 1)
            {
                for (int i_17 = 0; i_17 < 12;i_17 += 1)
                {
                    for (int i_18 = 0; i_18 < 12;i_18 += 1)
                    {
                        {
                            arr_77 [i_2] [i_15] [i_2] [i_2] [i_18] = 24573;
                            arr_78 [i_2] [i_2] [i_16] [i_2] [i_17] [i_2] = 39340;
                            arr_79 [11] [i_2] [i_16] [i_17] [i_18] = 18446673704965406720;
                            var_33 = (arr_23 [i_2 + 4] [i_2 + 1] [i_2 + 3]);
                        }
                    }
                }
            }
        }
    }
    #pragma endscop
}
