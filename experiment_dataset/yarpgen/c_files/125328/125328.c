/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 125328
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=125328 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/125328
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_14 = -var_7;

    for (int i_0 = 0; i_0 < 24;i_0 += 1)
    {
        var_15 = (min((max((arr_1 [i_0]), var_1)), var_7));
        var_16 = (var_3 == var_4);
        var_17 = ((-(arr_0 [i_0] [i_0])));

        for (int i_1 = 0; i_1 < 24;i_1 += 1)
        {
            var_18 = (max(var_18, ((max((arr_0 [i_1] [i_1]), (!128))))));
            /* LoopNest 3 */
            for (int i_2 = 0; i_2 < 24;i_2 += 1)
            {
                for (int i_3 = 0; i_3 < 1;i_3 += 1)
                {
                    for (int i_4 = 0; i_4 < 24;i_4 += 1)
                    {
                        {
                            var_19 = 1551108193739275368;
                            var_20 = 0;
                        }
                    }
                }
            }
        }

        /* vectorizable */
        for (int i_5 = 2; i_5 < 23;i_5 += 1)
        {
            arr_15 [i_0] = ((~(arr_2 [i_0])));

            for (int i_6 = 4; i_6 < 23;i_6 += 1)
            {
                arr_18 [i_0] [i_0] = 3646010918;
                var_21 = (((~var_9) ? var_5 : var_3));
            }
            arr_19 [i_0] [i_0] [i_5] = var_10;
        }
        for (int i_7 = 0; i_7 < 24;i_7 += 1)
        {
            var_22 |= (((~var_5) ? (arr_0 [i_0] [i_7]) : (((!(arr_0 [i_0] [i_0]))))));

            for (int i_8 = 2; i_8 < 23;i_8 += 1)
            {
                arr_26 [i_0] = var_12;

                /* vectorizable */
                for (int i_9 = 0; i_9 < 24;i_9 += 1) /* same iter space */
                {
                    var_23 |= (arr_8 [i_8 + 1] [i_9]);
                    arr_30 [i_0] [i_0] = (-68 ? (!var_11) : var_12);
                    var_24 = (arr_24 [i_8 + 1] [i_8 - 2] [i_0] [i_8 - 2]);
                }
                /* vectorizable */
                for (int i_10 = 0; i_10 < 24;i_10 += 1) /* same iter space */
                {
                    var_25 = (max(var_25, ((((arr_0 [i_8 + 1] [i_8 - 2]) ? var_7 : var_7)))));
                    arr_33 [i_8] [i_8] [i_8 + 1] [i_0] [i_8] [i_8] = (!659795280);
                    arr_34 [i_10] [i_0] [i_0] [i_0] = var_7;
                    var_26 = (((arr_9 [i_8 + 1] [i_0] [i_8 + 1]) >> (68 - 40)));
                }
                for (int i_11 = 0; i_11 < 24;i_11 += 1) /* same iter space */
                {
                    arr_39 [i_0] [i_0] [i_0] [i_0] = ((!(arr_37 [i_0] [i_11])));

                    for (int i_12 = 0; i_12 < 24;i_12 += 1)
                    {
                        arr_42 [i_0] [i_7] [i_8 + 1] [i_8] [i_11] [i_8] = ((((var_12 ? (arr_32 [i_8 - 1] [i_8 - 2] [i_8 - 2] [i_11]) : (arr_32 [i_0] [i_8 + 1] [21] [i_11]))) >= var_10));
                        arr_43 [i_0] [i_7] [i_7] [i_7] [i_7] = var_4;
                        var_27 = (max(140135897, ((65527 + (arr_16 [i_0] [i_0] [i_0] [i_11])))));
                        arr_44 [i_0] [i_7] [i_7] [i_8] [i_0] [i_0] [i_12] = ((~(((((11561938917650564316 >> (13944038077025025455 - 13944038077025025424)))) ? 0 : (arr_13 [i_0])))));
                    }
                    var_28 = ((!((((~var_4) + (arr_9 [i_0] [i_0] [i_11]))))));
                    var_29 = ((!(--140135897)));
                }
                var_30 = arr_7 [i_8 - 2] [i_8 + 1] [i_8] [i_8];
            }
            for (int i_13 = 2; i_13 < 21;i_13 += 1)
            {
                arr_48 [i_0] [i_7] [i_13] = (min(((+((min((arr_6 [i_13] [i_13] [i_7] [i_0] [i_0] [i_0]), var_3))))), -8));
                arr_49 [i_0] [i_0] [i_13] [20] = var_7;
                arr_50 [i_0] [i_0] [3] [i_0] = var_6;
                var_31 = ((0 ? (max((arr_16 [i_13 + 2] [i_0] [i_13 + 2] [i_13 - 2]), (arr_27 [i_13 + 3] [i_13] [i_13 + 2] [i_13 - 1] [i_13]))) : ((8 ? (arr_45 [i_13 + 1] [i_0] [i_13 + 2] [i_13 + 1]) : (arr_45 [i_13 + 1] [i_0] [i_13 + 2] [i_13 + 2])))));
            }
        }
    }
    for (int i_14 = 0; i_14 < 22;i_14 += 1)
    {
        arr_55 [i_14] = ((var_11 ? 659795280 : ((max((arr_6 [i_14] [i_14] [i_14] [i_14] [i_14] [i_14]), 1851402896)))));
        arr_56 [18] [18] = ((-(((arr_7 [i_14] [i_14] [i_14] [i_14]) ? (arr_5 [i_14] [i_14] [i_14] [i_14]) : (arr_41 [i_14])))));
    }
    /* vectorizable */
    for (int i_15 = 0; i_15 < 13;i_15 += 1)
    {
        var_32 += -730611492;
        var_33 = (((!8200) ? (arr_5 [i_15] [i_15] [i_15] [i_15]) : var_9));
        var_34 = ((~((145 ? var_2 : 1132988652))));

        for (int i_16 = 0; i_16 < 13;i_16 += 1)
        {
            /* LoopNest 2 */
            for (int i_17 = 0; i_17 < 13;i_17 += 1)
            {
                for (int i_18 = 3; i_18 < 10;i_18 += 1)
                {
                    {
                        arr_67 [i_15] [i_15] [i_15] [i_15] [i_15] [5] = var_6;
                        var_35 = ((-(arr_7 [i_18 + 3] [i_15] [23] [i_15])));

                        for (int i_19 = 0; i_19 < 13;i_19 += 1) /* same iter space */
                        {
                            var_36 = ((((9 ? (arr_5 [i_19] [i_18] [i_15] [i_15]) : var_6)) << (((arr_20 [i_15]) - 15097))));
                            arr_70 [i_19] [i_16] [i_17] = ((-(((arr_2 [i_15]) ? var_10 : var_9))));
                            var_37 = var_13;
                        }
                        for (int i_20 = 0; i_20 < 13;i_20 += 1) /* same iter space */
                        {
                            var_38 |= 2520586844;
                            var_39 = ((~(!var_5)));
                            arr_73 [5] [i_16] [i_17] [i_18] [i_20] = var_3;
                        }
                        for (int i_21 = 0; i_21 < 13;i_21 += 1) /* same iter space */
                        {
                            var_40 = 65531;
                            arr_76 [i_15] [i_15] [i_15] [i_15] [i_15] = var_7;
                        }
                        for (int i_22 = 0; i_22 < 13;i_22 += 1)
                        {
                            var_41 = ((var_12 >= (arr_40 [i_18 + 3] [i_18] [i_18] [i_22] [i_18])));
                            arr_80 [i_16] |= ((var_0 ? var_4 : -30220));
                            arr_81 [i_15] [i_15] [i_22] [i_15] [i_15] [i_15] = 319068743;
                            var_42 = (arr_77 [i_18 - 2] [i_17] [i_17] [i_18 + 3] [i_22]);
                        }

                        for (int i_23 = 0; i_23 < 13;i_23 += 1)
                        {
                            var_43 = ((arr_46 [i_18] [5] [i_18 - 1] [i_18 - 1]) ? (arr_46 [i_18 - 2] [11] [1] [i_18 - 3]) : var_11);
                            var_44 = var_4;
                        }
                    }
                }
            }
            var_45 = (((arr_72 [i_15] [i_15] [i_15] [i_15] [i_15]) ? var_8 : (arr_72 [i_15] [11] [i_15] [i_15] [12])));
        }
    }
    #pragma endscop
}
