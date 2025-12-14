/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 165691
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=165691 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/165691
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_18 ^= var_6;
    var_19 = var_8;

    for (int i_0 = 0; i_0 < 1;i_0 += 1)
    {
        var_20 = (arr_0 [i_0]);

        for (int i_1 = 0; i_1 < 14;i_1 += 1)
        {
            /* LoopNest 3 */
            for (int i_2 = 3; i_2 < 12;i_2 += 1)
            {
                for (int i_3 = 0; i_3 < 14;i_3 += 1)
                {
                    for (int i_4 = 1; i_4 < 1;i_4 += 1)
                    {
                        {
                            var_21 += ((-(max(((-(arr_16 [i_0] [i_1] [i_1] [7] [i_3] [i_1]))), (arr_16 [i_4] [i_4] [i_4 - 1] [0] [i_4 - 1] [i_4])))));
                            arr_17 [i_4] [i_0] = ((~(arr_8 [i_0])));
                            arr_18 [i_0] [i_1] [i_1] [7] [i_3] [i_3] = ((-(arr_15 [i_2] [i_2 - 1] [1] [i_2] [i_2])));
                        }
                    }
                }
            }
            var_22 = (arr_5 [i_0] [i_0]);
        }
        for (int i_5 = 0; i_5 < 1;i_5 += 1)
        {
            var_23 = (arr_8 [i_5]);
            var_24 = (((((arr_13 [i_0] [i_0] [i_0] [1] [i_5] [i_5]) || (arr_6 [i_0] [i_5] [i_0]))) ? ((((((!(arr_6 [i_5] [i_5] [i_0])))) | ((-(arr_8 [i_0])))))) : (max((arr_0 [i_0]), (arr_14 [1] [i_5] [i_0] [i_0] [i_0])))));

            for (int i_6 = 0; i_6 < 14;i_6 += 1) /* same iter space */
            {
                var_25 = arr_1 [i_0] [5];

                for (int i_7 = 2; i_7 < 12;i_7 += 1) /* same iter space */
                {
                    var_26 += max((--29), ((max((arr_20 [i_5]), (arr_25 [i_0] [i_5] [i_0] [i_0] [i_7])))));
                    var_27 = (max((arr_0 [i_7]), -24248));
                    arr_26 [i_0] [i_5] [i_0] [i_7 + 2] = ((-(((((arr_20 [i_0]) <= (arr_6 [i_0] [i_0] [i_6]))) ? (((arr_9 [i_5] [i_6]) ? (arr_23 [i_7] [i_6] [i_5] [i_0]) : (arr_14 [i_0] [i_0] [i_0] [9] [i_0]))) : (arr_5 [i_7] [2])))));
                }
                for (int i_8 = 2; i_8 < 12;i_8 += 1) /* same iter space */
                {

                    for (int i_9 = 3; i_9 < 11;i_9 += 1)
                    {
                        var_28 = ((-((((((~(arr_8 [i_5]))) + 2147483647)) << (((((arr_3 [i_6]) + 57)) - 1))))));
                        arr_32 [i_5] [i_0] [i_6] [i_5] [i_0] = ((arr_15 [i_5] [i_5] [i_5] [i_5] [i_5]) - (arr_1 [i_0] [i_0]));
                        var_29 = (arr_30 [i_8 - 1] [i_5] [8] [i_9 - 3] [i_9] [1]);
                    }
                    var_30 = (max((max((max((arr_1 [3] [i_5]), var_7)), (arr_20 [i_8 - 2]))), (!var_7)));
                }
                var_31 = (max((max(((255 ? 3132448042757577055 : (arr_7 [i_0]))), ((min(1, (arr_29 [i_5] [i_6])))))), (((~(((0 != (arr_15 [i_6] [i_6] [i_5] [i_0] [i_0])))))))));
            }
            /* vectorizable */
            for (int i_10 = 0; i_10 < 14;i_10 += 1) /* same iter space */
            {
                /* LoopNest 2 */
                for (int i_11 = 0; i_11 < 14;i_11 += 1)
                {
                    for (int i_12 = 2; i_12 < 13;i_12 += 1)
                    {
                        {
                            var_32 = (arr_16 [i_11] [i_11] [i_11] [i_11] [i_11] [1]);
                            arr_41 [i_5] = (-((25 ? (arr_34 [i_0] [12] [i_10]) : var_16)));
                            arr_42 [i_5] [i_12 - 2] = 2467535543855537917;
                        }
                    }
                }
                var_33 = var_4;
                arr_43 [0] [i_5] [i_5] = (((((~(arr_21 [i_0] [i_0] [i_10])))) ? ((((arr_14 [i_0] [i_0] [i_5] [i_10] [i_10]) * (arr_9 [i_0] [i_0])))) : (arr_30 [i_10] [i_5] [i_5] [i_5] [i_0] [i_0])));
            }
            for (int i_13 = 0; i_13 < 14;i_13 += 1)
            {
                var_34 = (arr_3 [1]);

                for (int i_14 = 1; i_14 < 12;i_14 += 1)
                {
                    var_35 = 1749391670817631573;

                    for (int i_15 = 0; i_15 < 14;i_15 += 1)
                    {
                        var_36 = var_0;
                        arr_51 [i_5] [i_13] [i_14] [i_5] = (arr_30 [i_0] [i_5] [i_0] [i_0] [i_15] [i_15]);
                    }
                }
                for (int i_16 = 0; i_16 < 14;i_16 += 1)
                {
                    var_37 = (min(var_37, (((((((((arr_39 [i_0] [i_0] [1] [i_0] [i_0]) > var_14))) / (arr_13 [i_0] [i_0] [i_0] [0] [i_13] [i_16]))) != (((((max(var_3, (arr_4 [i_13])))) == (min((arr_19 [i_13]), (arr_46 [i_0] [i_5] [i_0] [9])))))))))));
                    arr_56 [i_0] [0] [i_0] = (min(106183817, (min(15884697914707410439, (min((arr_31 [i_0] [i_0] [i_0] [i_13] [i_16]), 1749391670817631573))))));
                }
                /* vectorizable */
                for (int i_17 = 0; i_17 < 14;i_17 += 1)
                {
                    var_38 = (arr_52 [i_0] [i_5] [i_13] [i_17]);
                    var_39 = (-((((arr_55 [i_0] [i_0] [i_0] [4] [i_0]) == 9223372036854775807))));
                    arr_60 [i_0] [i_5] [i_13] [i_13] [i_0] = (~var_13);

                    for (int i_18 = 2; i_18 < 11;i_18 += 1)
                    {
                        arr_63 [i_13] [i_5] [i_13] [i_5] [0] [i_0] = ((~(arr_28 [i_0])));
                        arr_64 [i_0] [i_5] [i_0] [10] [i_18] = var_9;
                    }
                }
                var_40 = (((arr_44 [i_0] [4] [4]) < (arr_44 [i_0] [i_5] [13])));
                var_41 = -65;
            }
            /* LoopNest 2 */
            for (int i_19 = 0; i_19 < 14;i_19 += 1)
            {
                for (int i_20 = 0; i_20 < 1;i_20 += 1)
                {
                    {
                        var_42 = (min(var_42, (arr_4 [i_5])));

                        for (int i_21 = 2; i_21 < 13;i_21 += 1)
                        {
                            arr_73 [i_0] [i_0] [i_5] [i_5] [i_19] [i_5] [i_0] = (arr_50 [i_0] [i_21 - 1] [i_5]);
                            var_43 = (arr_29 [i_0] [i_5]);
                            var_44 = (arr_4 [i_0]);
                        }
                        for (int i_22 = 0; i_22 < 14;i_22 += 1) /* same iter space */
                        {
                            var_45 = ((((var_13 > ((-(arr_4 [i_0]))))) ? ((~(arr_13 [i_22] [i_5] [i_19] [i_20] [i_20] [i_5]))) : (arr_67 [i_0] [i_0] [i_0] [i_0])));
                            var_46 = (min((arr_16 [i_0] [i_5] [i_5] [i_5] [1] [i_5]), ((~(arr_12 [i_20] [i_19] [i_0] [i_0])))));
                        }
                        for (int i_23 = 0; i_23 < 14;i_23 += 1) /* same iter space */
                        {
                            arr_80 [i_20] [i_5] [i_23] [i_20] [i_20] [i_0] [i_20] = var_14;
                            arr_81 [i_0] = (((arr_75 [i_0] [i_0] [i_0] [i_0] [i_0] [i_0] [i_0]) / ((~(arr_71 [i_23] [i_20] [i_0] [i_5] [i_0])))));
                            arr_82 [2] = ((((max((~var_7), (arr_58 [i_0] [i_5] [2] [i_20])))) - (max((arr_21 [i_0] [i_0] [i_20]), (max((arr_6 [i_23] [i_19] [i_19]), (arr_72 [i_23] [i_5] [i_20] [i_19] [i_5] [i_0])))))));
                        }
                        /* vectorizable */
                        for (int i_24 = 0; i_24 < 14;i_24 += 1) /* same iter space */
                        {
                            arr_85 [i_0] [i_5] = (arr_11 [i_5] [i_5]);
                            var_47 = (~var_15);
                            var_48 = (arr_20 [i_5]);
                            var_49 = (min(var_49, var_16));
                            arr_86 [i_0] [i_0] [i_0] = (~var_3);
                        }
                        var_50 -= (min((17 | 3106198658903733309), (arr_71 [i_0] [i_5] [i_5] [i_19] [i_5])));
                        arr_87 [i_0] [i_5] [i_19] = var_10;
                        arr_88 [i_0] = ((((-371719579 == (arr_3 [i_5]))) ? (((((arr_3 [i_0]) || (arr_3 [i_0]))))) : -var_1));
                    }
                }
            }
            arr_89 [i_0] = var_12;
        }
    }
    for (int i_25 = 0; i_25 < 24;i_25 += 1)
    {

        for (int i_26 = 0; i_26 < 24;i_26 += 1)
        {
            arr_96 [i_26] = 1;
            var_51 -= ((var_16 | (min((max((arr_92 [1]), (arr_93 [i_25] [i_26] [i_26]))), (((~(arr_91 [i_26] [i_25]))))))));
        }
        var_52 = var_2;
    }

    /* vectorizable */
    for (int i_27 = 0; i_27 < 23;i_27 += 1)
    {
        arr_99 [i_27] = (arr_93 [i_27] [i_27] [i_27]);
        arr_100 [i_27] = (arr_92 [i_27]);
    }
    var_53 = (~-2467535543855537918);
    #pragma endscop
}
