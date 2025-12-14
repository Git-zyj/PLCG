/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 163479
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=163479 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/163479
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 0; i_0 < 20;i_0 += 1)
    {

        for (int i_1 = 0; i_1 < 20;i_1 += 1)
        {
            /* LoopNest 3 */
            for (int i_2 = 4; i_2 < 18;i_2 += 1)
            {
                for (int i_3 = 0; i_3 < 1;i_3 += 1)
                {
                    for (int i_4 = 0; i_4 < 1;i_4 += 1)
                    {
                        {
                            var_15 = 7227080735690309706;
                            arr_16 [i_4] [i_3] [i_2] [i_1] [i_0] = (((!(arr_13 [i_0] [i_2 + 2] [i_2] [i_2] [i_4] [i_2]))));
                            var_16 = (arr_3 [i_4] [i_2] [i_0]);
                        }
                    }
                }
            }
            var_17 &= (arr_1 [i_1]);
            arr_17 [14] [i_1] = (arr_5 [i_1]);
        }

        for (int i_5 = 0; i_5 < 20;i_5 += 1)
        {
            var_18 += -3671946920942422704;
            var_19 = 1010300257;

            /* vectorizable */
            for (int i_6 = 0; i_6 < 20;i_6 += 1)
            {

                for (int i_7 = 2; i_7 < 17;i_7 += 1)
                {
                    arr_26 [i_6] [i_6] = arr_8 [i_5] [i_6] [9];
                    var_20 = (arr_8 [i_5] [i_6] [i_7]);
                }
                /* LoopNest 2 */
                for (int i_8 = 0; i_8 < 20;i_8 += 1)
                {
                    for (int i_9 = 1; i_9 < 17;i_9 += 1)
                    {
                        {
                            var_21 = (arr_25 [i_0] [i_0]);
                            var_22 = arr_6 [i_0];
                        }
                    }
                }
                /* LoopNest 2 */
                for (int i_10 = 0; i_10 < 0;i_10 += 1)
                {
                    for (int i_11 = 0; i_11 < 1;i_11 += 1)
                    {
                        {
                            var_23 = (!11219663338019241909);
                            var_24 = var_4;
                            var_25 = (((arr_10 [i_0] [i_5] [i_6] [i_6] [i_10] [i_11]) ? (arr_10 [i_10] [i_5] [i_6] [i_10 + 1] [i_11] [i_5]) : (arr_10 [19] [i_11] [i_10] [i_6] [12] [12])));
                        }
                    }
                }
            }
            /* vectorizable */
            for (int i_12 = 0; i_12 < 20;i_12 += 1)
            {
                var_26 = (arr_36 [i_0] [i_0] [i_0]);
                arr_41 [i_12] [i_5] [i_5] [11] = ((~(arr_13 [i_0] [16] [0] [10] [0] [i_0])));
            }
            var_27 = var_6;
        }
        /* vectorizable */
        for (int i_13 = 0; i_13 < 20;i_13 += 1) /* same iter space */
        {
            var_28 = (min(var_28, ((-(arr_3 [i_0] [i_13] [i_13])))));
            var_29 += ((~(arr_15 [i_13] [i_13] [i_0] [i_0] [i_0] [i_0])));
        }
        for (int i_14 = 0; i_14 < 20;i_14 += 1) /* same iter space */
        {
            arr_48 [1] [i_14] [13] = var_9;
            arr_49 [i_0] [i_0] [i_0] = (arr_1 [i_0]);
        }
        for (int i_15 = 0; i_15 < 20;i_15 += 1)
        {
            var_30 = ((~(min(11219663338019241913, 3681))));

            /* vectorizable */
            for (int i_16 = 0; i_16 < 20;i_16 += 1)
            {
                var_31 = (((((-(arr_15 [i_0] [i_0] [i_15] [i_16] [i_16] [i_16])))) ? var_8 : (((((arr_12 [i_16] [i_15] [i_15] [i_0] [6]) != (arr_30 [i_0] [i_0] [i_0] [i_0] [i_0] [i_0])))))));
                arr_55 [i_0] [i_0] [i_15] [i_0] = (arr_19 [i_15] [i_16]);

                for (int i_17 = 1; i_17 < 17;i_17 += 1)
                {
                    arr_58 [i_0] [i_0] [i_0] [i_0] [i_0] [i_0] = (arr_54 [i_0] [i_0]);
                    arr_59 [9] [i_17] = (arr_27 [8] [i_17 + 2] [i_17] [i_17]);
                }
                /* LoopNest 2 */
                for (int i_18 = 2; i_18 < 19;i_18 += 1)
                {
                    for (int i_19 = 0; i_19 < 20;i_19 += 1)
                    {
                        {
                            var_32 = (arr_35 [19] [i_18] [6]);
                            var_33 = var_2;
                            var_34 = 18446744073709551615;
                        }
                    }
                }
            }
            for (int i_20 = 0; i_20 < 20;i_20 += 1)
            {
                var_35 += (arr_21 [i_0] [i_15]);
                var_36 ^= (~((min((arr_32 [i_0] [13] [i_0] [i_0] [i_0]), (max((arr_25 [i_0] [i_0]), 1))))));
                arr_66 [i_0] [i_15] [i_20] [i_20] = var_8;
            }
        }
        var_37 ^= -683;
    }
    /* vectorizable */
    for (int i_21 = 1; i_21 < 9;i_21 += 1)
    {
        var_38 = (arr_22 [i_21 - 1] [i_21] [i_21]);
        arr_69 [i_21] = (arr_54 [i_21 - 1] [i_21 + 1]);

        for (int i_22 = 1; i_22 < 8;i_22 += 1)
        {
            var_39 = var_2;
            arr_73 [i_21 - 1] [i_21] = (arr_70 [i_21] [i_21]);
        }
        var_40 = (((arr_8 [i_21 - 1] [i_21 + 1] [i_21 - 1]) ? (arr_56 [i_21 + 1] [i_21 - 1]) : var_13));
        var_41 ^= 32564;
    }
    /* LoopNest 3 */
    for (int i_23 = 2; i_23 < 11;i_23 += 1)
    {
        for (int i_24 = 0; i_24 < 14;i_24 += 1)
        {
            for (int i_25 = 1; i_25 < 11;i_25 += 1)
            {
                {
                    var_42 = (arr_31 [i_25] [i_25 + 3] [i_25] [i_25 + 3] [i_25] [i_25 + 1]);
                    arr_80 [12] [i_24] [i_24] = (arr_1 [1]);
                    var_43 = (max(var_43, (!var_8)));
                }
            }
        }
    }
    /* LoopNest 2 */
    for (int i_26 = 0; i_26 < 25;i_26 += 1)
    {
        for (int i_27 = 0; i_27 < 1;i_27 += 1)
        {
            {
                var_44 = (min(var_44, ((max((((arr_82 [i_27] [i_27]) + (arr_82 [i_26] [i_26]))), (arr_82 [i_26] [i_27]))))));
                var_45 = (min(var_12, ((2066254947 * (arr_84 [i_26] [i_27])))));
            }
        }
    }
    var_46 = ((var_3 ? (((-672 ? -683 : 702))) : var_3));

    /* vectorizable */
    for (int i_28 = 2; i_28 < 13;i_28 += 1)
    {
        var_47 ^= (arr_36 [i_28 + 2] [i_28 + 1] [i_28]);

        for (int i_29 = 0; i_29 < 15;i_29 += 1)
        {
            arr_92 [i_28] = -var_10;
            var_48 = arr_28 [i_28 + 1] [i_28 + 2] [i_28 + 1] [i_28 - 2];
            var_49 -= (-(arr_50 [i_28 - 1] [i_28] [i_28 + 1]));
        }
        /* LoopNest 3 */
        for (int i_30 = 0; i_30 < 15;i_30 += 1)
        {
            for (int i_31 = 2; i_31 < 12;i_31 += 1)
            {
                for (int i_32 = 0; i_32 < 1;i_32 += 1)
                {
                    {
                        arr_102 [i_32] [i_31] [i_30] [i_28] = (((arr_90 [i_28 - 2] [i_31 - 2]) * var_12));
                        arr_103 [11] [i_31 - 2] [i_31 + 1] [i_31] = var_8;
                    }
                }
            }
        }
    }
    for (int i_33 = 0; i_33 < 1;i_33 += 1)
    {
        var_50 = arr_40 [i_33] [i_33] [i_33];
        /* LoopNest 2 */
        for (int i_34 = 0; i_34 < 16;i_34 += 1)
        {
            for (int i_35 = 0; i_35 < 16;i_35 += 1)
            {
                {
                    var_51 += (((min(var_3, 1))));
                    arr_110 [i_34] [i_34] = (~-2147483622);
                    arr_111 [i_34] [1] [i_34] [i_35] = ((~(arr_65 [i_33] [5])));
                }
            }
        }

        for (int i_36 = 2; i_36 < 13;i_36 += 1)
        {
            var_52 = (min(var_52, var_2));
            arr_114 [i_36 + 3] = var_0;
        }
        for (int i_37 = 1; i_37 < 14;i_37 += 1)
        {
            var_53 = var_7;
            var_54 = -32768;
            arr_117 [1] [i_37] [i_37] = (min((arr_62 [i_33] [i_37 + 1] [i_37 + 2]), 2147483629));
            arr_118 [8] [i_37] = (arr_2 [i_33] [i_37 + 1]);
            var_55 = ((~((max((arr_13 [i_37 + 1] [i_37] [i_33] [i_37 + 2] [i_37 - 1] [14]), (arr_13 [i_37 + 1] [i_37 + 1] [4] [i_37 + 1] [i_33] [9]))))));
        }

        for (int i_38 = 1; i_38 < 15;i_38 += 1)
        {

            for (int i_39 = 0; i_39 < 1;i_39 += 1)
            {

                /* vectorizable */
                for (int i_40 = 2; i_40 < 14;i_40 += 1)
                {
                    arr_126 [i_40] [i_40] [i_39] [i_38] [13] = var_6;
                    var_56 = (arr_6 [i_33]);
                    arr_127 [i_40] [i_39] [i_33] = ((!(arr_64 [i_40] [0] [14] [0])));
                }
                var_57 -= (arr_2 [1] [6]);
                arr_128 [i_39] [i_38] = var_12;
            }
            for (int i_41 = 0; i_41 < 16;i_41 += 1)
            {
                var_58 = (max((min(2228712348, (arr_31 [i_33] [i_38] [i_41] [15] [i_38 + 1] [i_33]))), ((((arr_31 [i_33] [i_38] [i_41] [i_33] [i_38 + 1] [15]) > var_1)))));
                arr_133 [i_33] [i_33] [i_33] = var_10;
                var_59 = (min(var_59, ((min((min(-var_5, (min((arr_20 [i_33] [i_38 - 1] [i_33]), (arr_29 [i_33] [9] [i_33] [i_33] [i_33] [i_33]))))), ((max((arr_124 [i_41] [i_38] [i_38 - 1] [i_33]), (arr_11 [i_38 + 1] [i_38 - 1] [i_38 + 1] [10] [i_33])))))))));
                var_60 = 2228712347;
            }
            var_61 = (arr_107 [10] [10]);
            var_62 = (max(var_62, 18446744073709551605));
            arr_134 [i_38 - 1] [i_38] [i_38] = (arr_54 [i_33] [i_33]);
        }
    }
    #pragma endscop
}
