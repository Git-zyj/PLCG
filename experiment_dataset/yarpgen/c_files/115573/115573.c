/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 115573
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=115573 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/115573
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    /* vectorizable */
    for (int i_0 = 0; i_0 < 0;i_0 += 1) /* same iter space */
    {
        var_11 = ((1 ? (arr_0 [i_0 + 1]) : (arr_0 [i_0 + 1])));
        var_12 ^= ((-(arr_0 [i_0 + 1])));
        arr_2 [i_0] [i_0] = 1372175279;
    }
    /* vectorizable */
    for (int i_1 = 0; i_1 < 0;i_1 += 1) /* same iter space */
    {
        var_13 = (((arr_5 [i_1 + 1] [i_1 + 1]) ^ (arr_0 [i_1 + 1])));

        for (int i_2 = 0; i_2 < 20;i_2 += 1)
        {
            var_14 = var_0;
            /* LoopNest 2 */
            for (int i_3 = 0; i_3 < 20;i_3 += 1)
            {
                for (int i_4 = 0; i_4 < 1;i_4 += 1)
                {
                    {
                        var_15 = ((arr_12 [i_1 + 1]) ? (arr_9 [i_1 + 1]) : (arr_9 [i_4]));
                        var_16 ^= (((arr_4 [i_1 + 1] [i_1 + 1]) | (arr_15 [i_3] [i_3] [i_4])));
                        arr_16 [1] [i_3] [i_4] [1] [i_1 + 1] = ((arr_8 [i_1 + 1]) << (-var_9 - 592268488));
                    }
                }
            }
            arr_17 [i_1] [i_2] = (((var_4 >> var_10) ? (arr_0 [i_1 + 1]) : -1));
        }
        /* LoopNest 2 */
        for (int i_5 = 0; i_5 < 1;i_5 += 1)
        {
            for (int i_6 = 1; i_6 < 1;i_6 += 1)
            {
                {
                    arr_24 [i_1] [i_5] [i_6] [i_6 - 1] = (((arr_0 [i_1 + 1]) < var_6));
                    var_17 = ((var_10 ? (arr_23 [i_1 + 1] [i_1 + 1]) : (arr_23 [i_1 + 1] [i_1 + 1])));
                }
            }
        }
    }
    for (int i_7 = 0; i_7 < 0;i_7 += 1) /* same iter space */
    {
        var_18 = (min(var_18, (((((min(var_3, (arr_28 [i_7 + 1] [i_7 + 1])))) ? (var_3 - -1) : ((((arr_28 [i_7] [i_7 + 1]) + var_1))))))));

        /* vectorizable */
        for (int i_8 = 0; i_8 < 1;i_8 += 1)
        {
            var_19 = (arr_12 [i_7]);
            var_20 = (arr_15 [18] [i_8] [i_8]);
            var_21 = (arr_18 [i_8] [i_7] [i_7 + 1]);
        }
        /* vectorizable */
        for (int i_9 = 0; i_9 < 1;i_9 += 1)
        {
            arr_36 [i_7] [i_9] = (var_6 + var_7);
            var_22 = (arr_9 [i_7 + 1]);
            var_23 = (((((arr_31 [i_9] [i_7]) ? 512330576 : -1)) << (((arr_0 [i_7 + 1]) + 1478642683))));
            /* LoopNest 2 */
            for (int i_10 = 3; i_10 < 18;i_10 += 1)
            {
                for (int i_11 = 1; i_11 < 1;i_11 += 1)
                {
                    {
                        var_24 = (!-4030651874847841298);
                        arr_43 [i_7 + 1] [i_10] [i_7 + 1] = ((0 ? (~2060553525) : (arr_5 [i_7] [17])));
                        arr_44 [i_10] [10] [i_7] [i_10] = (((arr_1 [i_7 + 1]) ? (arr_9 [i_7 + 1]) : (arr_9 [i_10 - 3])));
                        var_25 = (+(((arr_4 [i_7] [i_7]) ? (arr_9 [i_7]) : var_4)));
                    }
                }
            }
        }
        var_26 = (((max((((arr_32 [i_7]) ? var_5 : var_3)), var_3)) > (arr_34 [i_7] [i_7])));
        /* LoopNest 2 */
        for (int i_12 = 3; i_12 < 19;i_12 += 1)
        {
            for (int i_13 = 0; i_13 < 20;i_13 += 1)
            {
                {
                    var_27 = var_3;
                    var_28 = (min((((arr_22 [i_12 - 2]) ? (arr_22 [i_12 - 2]) : var_10)), (((arr_12 [i_7 + 1]) >> (var_3 - 5944551437054440179)))));
                }
            }
        }
        /* LoopNest 3 */
        for (int i_14 = 0; i_14 < 0;i_14 += 1)
        {
            for (int i_15 = 0; i_15 < 1;i_15 += 1)
            {
                for (int i_16 = 0; i_16 < 1;i_16 += 1)
                {
                    {
                        var_29 = arr_42 [i_14 + 1] [10];
                        var_30 = ((((max((860086336 - 0), -24870268))) ? -1691096415 : 2181639096601195101));
                        var_31 = (!var_5);
                    }
                }
            }
        }
    }
    /* vectorizable */
    for (int i_17 = 0; i_17 < 16;i_17 += 1)
    {
        var_32 = ((var_1 ? (((9 ? -271621082 : 1))) : 7));
        var_33 = ((-var_3 + 9223372036854775807) >> (((((arr_3 [i_17]) * (arr_42 [i_17] [14]))) - 1569148394)));

        for (int i_18 = 1; i_18 < 15;i_18 += 1)
        {
            arr_67 [i_18 - 1] [i_18 + 1] [i_18] = -1;
            var_34 = (!-2145119077);
        }
        for (int i_19 = 1; i_19 < 15;i_19 += 1)
        {
            arr_70 [i_17] = arr_19 [i_19];

            for (int i_20 = 0; i_20 < 16;i_20 += 1)
            {
                arr_73 [i_17] [i_17] [i_19 - 1] [i_17] = var_0;
                /* LoopNest 2 */
                for (int i_21 = 1; i_21 < 1;i_21 += 1)
                {
                    for (int i_22 = 0; i_22 < 1;i_22 += 1)
                    {
                        {
                            var_35 -= (218186618 / var_8);
                            var_36 = var_2;
                            var_37 = ((arr_33 [i_21 - 1] [i_22]) <= (arr_62 [i_17]));
                        }
                    }
                }
            }
        }
        for (int i_23 = 0; i_23 < 16;i_23 += 1)
        {

            for (int i_24 = 0; i_24 < 1;i_24 += 1)
            {
                /* LoopNest 2 */
                for (int i_25 = 0; i_25 < 16;i_25 += 1)
                {
                    for (int i_26 = 1; i_26 < 15;i_26 += 1)
                    {
                        {
                            var_38 = (!(!var_1));
                            var_39 ^= 1;
                            var_40 = (var_2 >> (!var_3));
                        }
                    }
                }
                var_41 = arr_79 [i_17] [1];
            }
            for (int i_27 = 2; i_27 < 14;i_27 += 1) /* same iter space */
            {
                arr_90 [i_17] [i_27 - 2] = (((arr_72 [i_27] [i_27 - 2] [i_27] [i_17]) <= var_1));
                arr_91 [i_17] [i_17] [15] [i_27] = ((-((10 ^ (arr_14 [i_17] [i_23] [i_27] [i_27])))));
            }
            for (int i_28 = 2; i_28 < 14;i_28 += 1) /* same iter space */
            {
                arr_95 [i_17] [5] [i_17] = (arr_19 [i_28 + 1]);
                var_42 = (max(var_42, 0));

                for (int i_29 = 0; i_29 < 1;i_29 += 1)
                {
                    var_43 = (arr_29 [i_17] [i_17]);
                    var_44 = 1;
                }
                for (int i_30 = 0; i_30 < 16;i_30 += 1)
                {
                    var_45 = ((!(arr_88 [i_17] [i_17] [i_17] [13])));

                    for (int i_31 = 0; i_31 < 1;i_31 += 1)
                    {
                        var_46 = var_8;
                        arr_104 [i_30] [i_30] [i_30] [i_30] [i_30] [i_31] [i_30] = (~var_9);
                        arr_105 [i_30] [i_23] [i_23] [i_30] [i_30] = ((1 ? (((arr_37 [12] [i_17]) - 0)) : (arr_71 [i_28 - 2])));
                    }
                }
                for (int i_32 = 0; i_32 < 16;i_32 += 1)
                {
                    var_47 ^= ((arr_58 [i_17] [i_23] [i_28]) ? (arr_7 [i_17] [i_32]) : ((((-1754942708744022467 > (arr_72 [i_17] [i_23] [i_23] [i_32]))))));
                    var_48 = ((!(((var_3 ? 1 : 34359738367)))));
                }
                arr_110 [i_28] [i_28] [i_23] [i_17] = var_0;
            }
            var_49 = var_6;
        }
        var_50 |= (((arr_49 [i_17] [i_17]) ? (arr_49 [i_17] [i_17]) : (arr_37 [i_17] [i_17])));
    }
    var_51 = ((max(var_3, var_10)));
    #pragma endscop
}
