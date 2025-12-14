/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 113067
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=113067 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/113067
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_14 = (((max(var_12, (max(var_10, var_11))))) ? var_13 : (((var_13 + 2147483647) >> var_7)));

    for (int i_0 = 2; i_0 < 16;i_0 += 1)
    {
        /* LoopNest 3 */
        for (int i_1 = 2; i_1 < 18;i_1 += 1)
        {
            for (int i_2 = 2; i_2 < 18;i_2 += 1)
            {
                for (int i_3 = 1; i_3 < 1;i_3 += 1)
                {
                    {

                        for (int i_4 = 0; i_4 < 0;i_4 += 1)
                        {
                            arr_13 [i_4] [0] [i_0] [i_0] [i_0] [i_0] [i_0] = var_13;
                            arr_14 [i_0] = ((((max(((var_2 ? var_12 : var_0)), (var_7 - var_12)))) || ((max(var_11, var_3)))));
                            var_15 = (min(var_15, ((max(782026899, (782026895 / 51404))))));
                        }
                        for (int i_5 = 1; i_5 < 18;i_5 += 1)
                        {
                            arr_19 [i_0] [i_1 - 2] [i_0] [i_3] [i_5] = min(((min(782026900, 782026882))), (min(((var_12 ? var_10 : var_4)), ((var_5 ? var_6 : var_0)))));
                            var_16 = (((((var_4 ? (var_8 >> var_7) : (min(var_9, var_6))))) && var_4));
                            arr_20 [i_0] = ((((((max(var_3, 0))) ? var_11 : (max(var_10, var_1)))) > (((((var_1 >> (var_11 + 1425894033507797593)))) + (var_0 - var_8)))));
                            arr_21 [i_0] [i_0] = (((min(((min(var_13, var_7))), (min(var_0, var_2)))) ^ var_1));
                        }
                        arr_22 [i_0] = (min(506415493, (max((min(41673, var_3)), (((0 >> (var_3 - 12866037647570309963))))))));
                        arr_23 [i_0] [i_3] [3] [3] [i_0] = (min(782026904, (((140 << (16851670010584282521 - 16851670010584282507))))));
                    }
                }
            }
        }
        var_17 = (min(var_17, ((max((max(var_9, var_8)), (var_10 - var_0))))));

        for (int i_6 = 2; i_6 < 17;i_6 += 1)
        {
            arr_26 [i_0] [i_0] [i_0] = (max(((var_4 ? var_1 : var_4)), ((min(var_5, var_7)))));
            var_18 -= (max((((var_13 / var_11) * (max(var_9, var_7)))), (max(var_3, (var_1 || var_7)))));

            for (int i_7 = 2; i_7 < 16;i_7 += 1)
            {
                arr_30 [i_0] [i_0] [i_0] = (min((((1240 << (-1 + 9)))), 14));
                var_19 = (((((max(var_6, var_9)) >> (var_2 + 5226577062267218959))) - var_13));
                var_20 = max(((var_4 + ((var_10 ? var_5 : var_9)))), ((var_2 ? var_9 : var_10)));
            }
            for (int i_8 = 2; i_8 < 18;i_8 += 1)
            {
                arr_35 [i_0] [i_6] [i_8] = (((((((min(var_7, var_5))) ? (var_3 * var_10) : (var_8 != var_6)))) ? var_12 : var_6));
                var_21 = (((((var_4 / var_13) ? (var_4 / var_12) : ((var_1 ? var_4 : var_3)))) / (var_2 / var_0)));
            }
        }
        for (int i_9 = 4; i_9 < 18;i_9 += 1)
        {
            arr_40 [i_0] = ((((var_4 || (var_0 < var_8))) && (((var_13 ? var_9 : var_12)))));
            arr_41 [i_0] = (((((min(-3, 2042456797)) + (((var_10 ? -112 : 41695))))) - var_1));
            var_22 = var_10;
        }
    }
    for (int i_10 = 0; i_10 < 21;i_10 += 1)
    {
        arr_45 [i_10] = (min((min(var_0, var_6)), (var_12 <= var_5)));
        var_23 = (min(var_23, (min((((var_4 ? var_8 : var_13))), (min(var_1, (max(var_10, var_5))))))));
        var_24 |= ((((min((((var_9 ? var_11 : var_5))), var_9))) ? (((var_12 ? var_8 : var_1))) : (min((min(var_9, var_11)), ((max(var_2, var_12)))))));
    }

    for (int i_11 = 2; i_11 < 8;i_11 += 1)
    {

        /* vectorizable */
        for (int i_12 = 1; i_12 < 8;i_12 += 1)
        {

            for (int i_13 = 1; i_13 < 8;i_13 += 1)
            {
                var_25 = ((var_8 <= (var_10 > var_10)));
                arr_55 [i_11] [i_12] = ((var_12 ? var_13 : var_13));
            }
            var_26 = ((var_1 ? var_10 : var_11));
            arr_56 [i_11] [i_11] = ((((var_12 >> (var_5 + 15922))) >> (var_3 - 12866037647570309978)));
        }

        /* vectorizable */
        for (int i_14 = 2; i_14 < 8;i_14 += 1)
        {
            var_27 ^= ((var_7 ? var_1 : var_8));
            var_28 = (var_0 < var_7);
        }

        for (int i_15 = 1; i_15 < 1;i_15 += 1)
        {

            for (int i_16 = 0; i_16 < 11;i_16 += 1)
            {
                arr_63 [i_11] [i_15] [i_15] [i_15 - 1] = (min(0, 3));
                var_29 = (max(var_29, ((((var_10 + var_13) <= (((min(var_5, var_0)) - (var_10 - var_4))))))));
            }

            for (int i_17 = 4; i_17 < 10;i_17 += 1)
            {
                arr_66 [i_17] [i_15] = (((2042456797 - 32760) + ((var_10 ? var_1 : var_6))));
                var_30 = var_9;
                arr_67 [i_15] [i_15] = ((var_5 & (var_12 * var_6)));
            }
            var_31 = (((((((var_5 ? var_12 : var_11))) && var_0)) ? (((((var_12 ? var_7 : var_10))) ? ((max(var_2, var_2))) : (min(4294967295, 3008468551962781388)))) : ((((((min(var_11, var_13))) || ((min(var_12, var_6)))))))));
        }
        for (int i_18 = 4; i_18 < 9;i_18 += 1)
        {
            var_32 = var_6;
            arr_70 [i_18] = var_2;
        }
        /* vectorizable */
        for (int i_19 = 0; i_19 < 11;i_19 += 1)
        {
            var_33 = (((var_9 ? var_11 : var_3)) << (var_8 - 1482569820));
            var_34 = ((((((var_2 + 9223372036854775807) << (((var_4 + 4858205114847290035) - 24))))) != var_9));
        }
        for (int i_20 = 1; i_20 < 10;i_20 += 1)
        {
            var_35 = (((((17613918360393740878 ? 0 : 3512940401))) ? (((var_1 + var_7) * var_12)) : var_7));

            for (int i_21 = 3; i_21 < 9;i_21 += 1)
            {
                var_36 = ((var_5 < (((var_8 & var_4) ? var_6 : (var_13 - var_5)))));
                var_37 = (((max((var_3 == var_6), var_10)) - (min(((var_13 ? var_3 : var_13)), (var_8 && var_0)))));

                for (int i_22 = 4; i_22 < 7;i_22 += 1)
                {
                    arr_80 [i_11] [i_20] [i_21 + 1] [i_20] = (min((var_13 && var_11), ((var_10 ? (max(var_1, var_10)) : ((min(var_4, var_1)))))));
                    arr_81 [i_22 - 3] [i_20] [i_21] [i_20] [i_20] [i_11] = (var_5 == var_1);
                    var_38 = (((var_12 - var_10) + (var_11 + var_10)));

                    for (int i_23 = 1; i_23 < 10;i_23 += 1)
                    {
                        var_39 ^= ((((((min((min(var_5, var_7)), ((min(var_7, var_12)))))) + 2147483647)) >> (((max(var_5, (max(var_13, var_1)))) - 28020))));
                        var_40 = (((min(var_10, var_9)) >> (((min(var_13, var_13)) + 1992843783))));
                        var_41 = (((max(var_0, var_6)) - (((var_8 << (var_1 - 28031))))));
                    }
                    for (int i_24 = 2; i_24 < 10;i_24 += 1)
                    {
                        arr_87 [i_21] [i_20] [i_21] [i_11] [i_11] [i_22] [i_20] = (((((min(var_9, var_2)) << (((min(var_8, var_10)) - 1482569830))))) ? (((41676 * (137 / 23840)))) : (min(var_6, ((var_3 ? var_3 : var_13)))));
                        arr_88 [i_20] [i_22 - 1] [i_21] [i_22] [i_24] [i_20] = var_2;
                        arr_89 [i_11] [i_20] [i_11] [i_20] [i_24] = var_7;
                        var_42 = (min((((((min(var_10, var_10))) || (((var_13 ? var_9 : var_12)))))), ((var_9 ? var_0 : var_0))));
                        var_43 = (max((((max(var_9, var_5)) * (var_3 * var_7))), ((var_10 >> (((max(var_8, var_12)) - 1482569782))))));
                    }
                    for (int i_25 = 1; i_25 < 10;i_25 += 1)
                    {
                        var_44 = max((var_0 * var_6), (23830 + 0));
                        arr_92 [i_11] [i_20] [i_21] [i_20] [i_25] = min((max(var_7, var_3)), (var_9 <= var_2));
                    }
                }
                var_45 = (((((((min(var_7, var_5))) ? (min(var_0, var_9)) : (var_6 / var_6)))) ? (var_6 - var_8) : var_1));
            }
            var_46 = (((124 * 0) * var_7));
            var_47 ^= ((((var_1 ? (116 || 217) : ((var_13 ? var_9 : var_6)))) << (((var_2 / var_13) - 2622672741))));
        }

        /* vectorizable */
        for (int i_26 = 4; i_26 < 9;i_26 += 1)
        {
            var_48 = var_6;
            /* LoopNest 3 */
            for (int i_27 = 0; i_27 < 11;i_27 += 1)
            {
                for (int i_28 = 0; i_28 < 11;i_28 += 1)
                {
                    for (int i_29 = 0; i_29 < 1;i_29 += 1)
                    {
                        {
                            var_49 = ((var_13 ? (var_6 * var_7) : ((var_8 ? var_10 : var_4))));
                            arr_105 [i_11] [i_29] [i_11] = (var_7 || var_8);
                        }
                    }
                }
            }
        }
    }
    #pragma endscop
}
