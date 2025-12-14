/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 161554
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=161554 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/161554
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_13 = (min(var_13, ((max((var_2 || var_9), var_1)))));

    /* vectorizable */
    for (int i_0 = 0; i_0 < 21;i_0 += 1) /* same iter space */
    {

        for (int i_1 = 0; i_1 < 21;i_1 += 1)
        {
            var_14 = var_6;
            var_15 = (((var_12 * var_11) ? var_1 : var_4));
            arr_6 [i_0] [i_0] = (31 - var_9);
        }
        for (int i_2 = 0; i_2 < 21;i_2 += 1)
        {
            var_16 -= var_12;

            for (int i_3 = 1; i_3 < 17;i_3 += 1) /* same iter space */
            {
                var_17 &= var_12;
                /* LoopNest 2 */
                for (int i_4 = 0; i_4 < 21;i_4 += 1)
                {
                    for (int i_5 = 0; i_5 < 21;i_5 += 1)
                    {
                        {
                            var_18 = (min(var_18, var_11));
                            var_19 = (max(var_19, (((20503 ? -4816261608036286472 : var_5)))));
                            var_20 = (max(var_20, -var_6));
                        }
                    }
                }
                arr_18 [i_0] [12] [i_3] = (var_3 / var_6);
            }
            for (int i_6 = 1; i_6 < 17;i_6 += 1) /* same iter space */
            {
                arr_21 [i_2] [i_0] = 1706806461;
                var_21 = (max(var_21, var_10));
            }
            for (int i_7 = 1; i_7 < 17;i_7 += 1) /* same iter space */
            {

                for (int i_8 = 2; i_8 < 19;i_8 += 1)
                {
                    var_22 = (min(var_22, 4));
                    var_23 ^= (-4556408786827956039 && 1668371707);
                    arr_27 [i_0] [i_0] [15] [i_0] = ((2626595573 ? 55828 : 1706806463));
                }
                for (int i_9 = 0; i_9 < 21;i_9 += 1)
                {
                    var_24 = -173994363893874740;
                    var_25 = var_1;
                    var_26 = var_4;
                }
                for (int i_10 = 4; i_10 < 19;i_10 += 1) /* same iter space */
                {
                    var_27 = (max(var_27, (((53 ? -173994363893874741 : 1668371726)))));

                    for (int i_11 = 0; i_11 < 21;i_11 += 1)
                    {
                        var_28 = (((28 ? 11 : 34095)));
                        var_29 = (((var_9 != 4556408786827956039) << ((var_4 ? 28 : var_0))));
                        var_30 += var_3;
                        arr_36 [i_0] [i_2] [i_7] [i_0] = (var_2 | var_12);
                        var_31 = var_5;
                    }
                    var_32 = (min(var_32, -4816261608036286445));
                }
                for (int i_12 = 4; i_12 < 19;i_12 += 1) /* same iter space */
                {

                    for (int i_13 = 1; i_13 < 19;i_13 += 1)
                    {
                        arr_44 [i_0] [18] [i_2] [13] = ((1565 ? var_9 : 63));
                        var_33 = var_5;
                    }
                    var_34 ^= (((var_10 / var_3) ^ (-102 > var_0)));
                }
                var_35 = (min(var_35, ((var_7 != ((var_11 ? -4556408786827956033 : var_12))))));
                var_36 = var_12;
            }
            arr_45 [i_0] [i_2] = var_12;
            /* LoopNest 2 */
            for (int i_14 = 3; i_14 < 20;i_14 += 1)
            {
                for (int i_15 = 2; i_15 < 20;i_15 += 1)
                {
                    {

                        for (int i_16 = 0; i_16 < 21;i_16 += 1)
                        {
                            arr_55 [i_0] [i_2] [i_14] [i_15] [i_16] [i_0] = (var_6 <= var_2);
                            arr_56 [i_16] [i_15] [i_0] [i_2] [i_0] = (((var_2 >= var_2) - var_12));
                        }
                        for (int i_17 = 0; i_17 < 21;i_17 += 1)
                        {
                            var_37 = (max(var_37, var_1));
                            var_38 = 1668371707;
                        }
                        var_39 = ((var_4 ? var_7 : var_4));
                        var_40 = 1;

                        for (int i_18 = 0; i_18 < 21;i_18 += 1)
                        {
                            var_41 = ((var_0 ? var_7 : var_8));
                            var_42 &= 76;
                            var_43 = ((var_2 * (!var_3)));
                            var_44 = (max(var_44, var_7));
                        }
                    }
                }
            }
        }
        arr_61 [i_0] [i_0] = var_3;
        /* LoopNest 3 */
        for (int i_19 = 0; i_19 < 21;i_19 += 1)
        {
            for (int i_20 = 0; i_20 < 21;i_20 += 1)
            {
                for (int i_21 = 1; i_21 < 19;i_21 += 1)
                {
                    {
                        var_45 = (var_1 ? var_7 : var_5);
                        var_46 = (max(var_46, var_2));

                        for (int i_22 = 0; i_22 < 21;i_22 += 1) /* same iter space */
                        {
                            var_47 = var_7;
                            var_48 = 2304717109306851328;
                            var_49 = (32761 / 1668371723);
                            arr_72 [i_19] [i_20] [i_20] &= 511;
                            arr_73 [i_0] = (var_11 / 3459575120);
                        }
                        for (int i_23 = 0; i_23 < 21;i_23 += 1) /* same iter space */
                        {
                            var_50 = (!var_12);
                            arr_76 [i_0] [i_0] = var_11;
                            var_51 = (min(var_51, (!1)));
                            var_52 = (-12410 <= var_0);
                            var_53 = (min(var_53, 21331));
                        }
                        for (int i_24 = 0; i_24 < 21;i_24 += 1) /* same iter space */
                        {
                            var_54 ^= ((!(((var_9 ? 26 : 1)))));
                            var_55 = var_12;
                            arr_79 [8] [8] [i_0] [i_0] [12] = -4556408786827956015;
                        }
                        var_56 = (!var_5);
                    }
                }
            }
        }
        var_57 = ((-1706806469 ? var_10 : var_11));
        /* LoopNest 3 */
        for (int i_25 = 3; i_25 < 18;i_25 += 1)
        {
            for (int i_26 = 0; i_26 < 21;i_26 += 1)
            {
                for (int i_27 = 0; i_27 < 1;i_27 += 1)
                {
                    {
                        var_58 = var_6;
                        var_59 = ((4556408786827956056 >= 3177063903) > (var_1 > var_8));
                        var_60 = (var_1 ^ -26989);
                        var_61 = 2722995892243633750;
                    }
                }
            }
        }
    }
    for (int i_28 = 0; i_28 < 21;i_28 += 1) /* same iter space */
    {
        var_62 = (min(((4816261608036286446 << (var_7 - 1))), (!var_12)));
        var_63 = ((((min(var_10, var_12))) & (var_0 == 15302)));
        /* LoopNest 2 */
        for (int i_29 = 1; i_29 < 18;i_29 += 1)
        {
            for (int i_30 = 0; i_30 < 21;i_30 += 1)
            {
                {
                    var_64 = (min(var_64, var_3));
                    /* LoopNest 2 */
                    for (int i_31 = 0; i_31 < 1;i_31 += 1)
                    {
                        for (int i_32 = 2; i_32 < 18;i_32 += 1)
                        {
                            {
                                arr_104 [i_32] [i_30] [i_30] [i_29] [i_28] = (((106 ? 65535 : 5263242758491109040)));
                                var_65 = (min(var_65, (((((var_0 ? 34 : var_12)) >= (~-5577))))));
                                arr_105 [i_29 + 2] [i_29] [i_30] [i_31] [15] = (max((!var_9), (max(((var_7 ? 2722995892243633742 : var_1)), var_9))));
                            }
                        }
                    }
                }
            }
        }
    }
    /* LoopNest 3 */
    for (int i_33 = 0; i_33 < 10;i_33 += 1)
    {
        for (int i_34 = 0; i_34 < 10;i_34 += 1)
        {
            for (int i_35 = 0; i_35 < 10;i_35 += 1)
            {
                {
                    var_66 = (max(var_66, ((max(175, 9223372036854775807)))));
                    var_67 = 1980354889;
                }
            }
        }
    }
    #pragma endscop
}
