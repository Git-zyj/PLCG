/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 184318
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=184318 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/184318
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_14 ^= ((!(((-(~0))))));
    var_15 &= ((((((min(3588864373227310494, var_8))) ? ((max(var_0, var_7))) : (~16433261686654884907)))) ? (((~-46) ? var_11 : var_7)) : var_1);
    var_16 = (max(((((max(5330780342644534977, var_5))) ? ((1 ? 268434432 : 5330780342644534977)) : var_11)), (!var_5)));

    for (int i_0 = 2; i_0 < 19;i_0 += 1) /* same iter space */
    {
        var_17 = (min(var_17, ((((((((1 ? 5330780342644534977 : var_0))) ? var_0 : ((var_12 ? var_12 : var_10)))) < ((((arr_2 [13]) - ((var_6 ? 3867932512 : (arr_1 [i_0])))))))))));
        /* LoopNest 3 */
        for (int i_1 = 2; i_1 < 19;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 20;i_2 += 1)
            {
                for (int i_3 = 0; i_3 < 20;i_3 += 1)
                {
                    {

                        for (int i_4 = 2; i_4 < 17;i_4 += 1)
                        {
                            var_18 = ((((var_11 ? (max(-2726593931497461568, var_12)) : (var_3 < var_5))) | ((((arr_3 [i_4] [i_3] [i_0 - 2]) ? var_11 : var_8)))));
                            var_19 = (max(var_19, (!var_8)));
                            var_20 = (max(((-(~var_2))), (-268434432 ^ -2726593931497461568)));
                            arr_15 [i_0] [i_0] [18] [i_2] [i_2] [i_1] [10] &= (~(max(-268434432, 0)));
                        }
                        arr_16 [i_1] = ((((((arr_4 [i_0 - 2]) * var_0))) ? (max(var_1, 5330780342644534991)) : var_11));
                    }
                }
            }
        }
        arr_17 [i_0] = (~-var_1);
        var_21 = 1006632960;
    }
    /* vectorizable */
    for (int i_5 = 2; i_5 < 19;i_5 += 1) /* same iter space */
    {

        for (int i_6 = 0; i_6 < 20;i_6 += 1)
        {

            for (int i_7 = 1; i_7 < 19;i_7 += 1)
            {
                var_22 *= var_10;
                var_23 = (min(var_23, var_2));
            }
            for (int i_8 = 0; i_8 < 20;i_8 += 1)
            {
                var_24 = (((var_8 << 0) << (((((~268434432) + 268434449)) - 16))));
                /* LoopNest 2 */
                for (int i_9 = 0; i_9 < 20;i_9 += 1)
                {
                    for (int i_10 = 0; i_10 < 20;i_10 += 1)
                    {
                        {
                            var_25 = (arr_34 [i_5 + 1] [i_6] [i_10] [i_10]);
                            var_26 = (min(var_26, (((((((arr_21 [i_5] [2] [i_5]) | var_2))) ? var_2 : var_8)))));
                            var_27 = 0;
                            var_28 = ((!(arr_0 [i_6] [i_6])));
                        }
                    }
                }
                arr_35 [i_5 - 1] [i_6] [i_6] [i_8] |= (var_7 / -2726593931497461566);
                var_29 = var_3;
            }
            for (int i_11 = 0; i_11 < 20;i_11 += 1)
            {
                arr_40 [i_11] [i_5] [3] = ((arr_10 [i_5] [i_5 - 2] [i_5 - 1] [i_5] [i_5 - 2] [i_5]) < var_8);
                var_30 = (min(var_30, (((!(arr_21 [i_5 - 1] [i_5 - 1] [i_5 - 2]))))));
            }
            var_31 ^= (!var_2);
        }
        for (int i_12 = 3; i_12 < 18;i_12 += 1) /* same iter space */
        {
            var_32 = (((~0) ? -8379102293411616146 : var_3));
            /* LoopNest 2 */
            for (int i_13 = 0; i_13 < 20;i_13 += 1)
            {
                for (int i_14 = 1; i_14 < 17;i_14 += 1)
                {
                    {
                        var_33 = (arr_30 [i_12 - 1] [i_13] [i_14 + 3]);
                        var_34 = (var_1 - var_2);
                        var_35 = ((3720092320271455167 >= (~-11373)));
                    }
                }
            }
        }
        for (int i_15 = 3; i_15 < 18;i_15 += 1) /* same iter space */
        {
            var_36 = var_13;
            var_37 = (!var_9);
        }
        for (int i_16 = 0; i_16 < 20;i_16 += 1)
        {
            var_38 = ((-var_9 ? ((var_8 - (arr_19 [i_5] [i_5]))) : var_9));
            var_39 = 2726593931497461546;
            var_40 = (min(var_40, (~1)));
        }
        /* LoopNest 2 */
        for (int i_17 = 3; i_17 < 19;i_17 += 1)
        {
            for (int i_18 = 1; i_18 < 18;i_18 += 1)
            {
                {

                    for (int i_19 = 0; i_19 < 20;i_19 += 1)
                    {
                        arr_63 [i_19] [i_17] [i_17] [i_17] = var_9;
                        arr_64 [i_19] [14] [i_17] [i_17 - 3] [14] [i_5] &= (((arr_20 [15] [i_5]) / (arr_39 [18] [i_5] [i_5] [i_5])));
                        var_41 ^= ((21675 ? var_5 : (arr_39 [0] [i_5 + 1] [i_17 + 1] [0])));
                    }
                    arr_65 [i_18] [i_17] = ((~-1620249367) ? (var_7 ^ var_9) : (~var_5));
                }
            }
        }
        arr_66 [9] [18] = (((var_7 | 56459) ? var_5 : ((var_11 ? var_8 : var_3))));
        var_42 = (min(var_42, (!2040)));
        var_43 = (((var_11 ^ var_7) ? var_1 : -var_3));
    }
    for (int i_20 = 2; i_20 < 19;i_20 += 1) /* same iter space */
    {
        /* LoopNest 2 */
        for (int i_21 = 1; i_21 < 18;i_21 += 1)
        {
            for (int i_22 = 0; i_22 < 20;i_22 += 1)
            {
                {
                    var_44 = (max(var_44, ((~(min((max(var_5, -821312449390734717)), (arr_1 [i_20])))))));
                    var_45 = (arr_32 [i_20] [i_20] [i_21] [i_21] [i_21] [i_22] [i_22]);
                    /* LoopNest 2 */
                    for (int i_23 = 0; i_23 < 20;i_23 += 1)
                    {
                        for (int i_24 = 3; i_24 < 19;i_24 += 1)
                        {
                            {
                                arr_81 [i_20] [i_21] [i_22] [1] [i_24] [i_22] = (min(var_1, ((~(min((arr_21 [i_24] [i_23] [i_22]), var_12))))));
                                arr_82 [i_20] [i_22] [i_22] [10] = (((((var_3 < (arr_57 [i_20 - 1] [i_21 - 1])))) >> (var_2 + 8485066237249861998)));
                            }
                        }
                    }
                }
            }
        }
        arr_83 [i_20 - 2] [i_20] = (((((var_12 ? var_13 : 0))) ^ (((!2726593931497461552) ? ((max(-42, 8))) : (arr_5 [14])))));
    }
    for (int i_25 = 2; i_25 < 19;i_25 += 1) /* same iter space */
    {

        for (int i_26 = 0; i_26 < 20;i_26 += 1)
        {
            var_46 = ((((~var_10) ? var_2 : (((max(65535, 1)))))));
            var_47 = (-(!-var_1));
            var_48 ^= ((((-2726593931497461568 ? -19973696 : 672839467)) > ((((arr_11 [i_25] [i_25] [18] [i_26]) || var_1)))));
            /* LoopNest 2 */
            for (int i_27 = 0; i_27 < 20;i_27 += 1)
            {
                for (int i_28 = 3; i_28 < 19;i_28 += 1)
                {
                    {
                        var_49 = (min(var_49, -821312449390734698));
                        var_50 = (min((min(var_7, var_0)), (((var_5 ? var_4 : 15)))));
                        var_51 = ((((((max(var_10, (arr_53 [i_28 - 2] [i_28])))) ? -821312449390734722 : (((128 ? var_13 : var_13)))))) ? -var_11 : (var_6 >= -var_2));
                    }
                }
            }
        }
        var_52 = (max(((~(arr_90 [i_25 + 1] [i_25 - 2] [18] [i_25]))), (var_11 == var_2)));
    }
    /* LoopNest 2 */
    for (int i_29 = 0; i_29 < 18;i_29 += 1)
    {
        for (int i_30 = 4; i_30 < 15;i_30 += 1)
        {
            {
                arr_100 [i_30] = var_8;
                /* LoopNest 3 */
                for (int i_31 = 0; i_31 < 18;i_31 += 1)
                {
                    for (int i_32 = 4; i_32 < 17;i_32 += 1)
                    {
                        for (int i_33 = 0; i_33 < 18;i_33 += 1)
                        {
                            {
                                arr_108 [i_30] = ((~((min((arr_104 [i_29] [i_29] [i_31] [i_32]), (arr_104 [i_29] [i_31] [i_30] [i_29]))))));
                                var_53 = (max(var_53, ((((266338304 - 18446744073709551615) ? -0 : ((max(var_4, (arr_39 [6] [i_32 - 4] [i_31] [i_32])))))))));
                            }
                        }
                    }
                }
            }
        }
    }
    #pragma endscop
}
