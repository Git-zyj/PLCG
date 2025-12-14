/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 162222
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=162222 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/162222
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 0; i_0 < 25;i_0 += 1)
    {
        arr_2 [i_0] [i_0] = ((-(max(1207570649, 18410182084799082410))));

        /* vectorizable */
        for (int i_1 = 0; i_1 < 25;i_1 += 1)
        {
            var_19 = (!-4214);
            var_20 = ((var_6 ? 18410182084799082414 : var_5));
            /* LoopNest 2 */
            for (int i_2 = 0; i_2 < 25;i_2 += 1)
            {
                for (int i_3 = 3; i_3 < 24;i_3 += 1)
                {
                    {

                        for (int i_4 = 4; i_4 < 21;i_4 += 1)
                        {
                            var_21 = (max(var_21, (((var_5 - (~var_16))))));
                            var_22 = (~-25039);
                            arr_14 [i_0] [i_2] [i_2] [i_1] [i_0] = (!9223372036854775807);
                        }
                        for (int i_5 = 0; i_5 < 25;i_5 += 1)
                        {
                            var_23 = (min(var_23, var_8));
                            var_24 = var_15;
                            var_25 = (~var_5);
                            var_26 ^= ((!(((63 ? 36561988910469210 : var_18)))));
                            arr_17 [i_0] [3] [i_2] [i_3] [i_2] [21] = -var_3;
                        }
                        var_27 = (min(var_27, 22));
                        var_28 = ((!(249 | 0)));

                        for (int i_6 = 0; i_6 < 1;i_6 += 1)
                        {
                            arr_21 [i_0] [i_1] [i_2] [i_1] [i_6] [12] = ((268435455 ? (((var_6 ? var_1 : var_1))) : (var_10 * 36561988910469216)));
                            var_29 = (!var_7);
                            arr_22 [i_0] [i_6] [i_3] [i_1] [i_1] [i_1] [i_0] = ((var_5 ? var_14 : var_12));
                        }
                        for (int i_7 = 0; i_7 < 25;i_7 += 1)
                        {
                            arr_27 [20] [i_0] [i_1] [16] [i_2] [16] |= (var_10 && 249);
                            var_30 = 12478;
                            arr_28 [1] [i_1] [2] [i_1] [10] &= var_13;
                            var_31 ^= var_16;
                            var_32 = ((0 ? (((198 ? 29811 : 1207570649))) : (var_12 / var_1)));
                        }
                        for (int i_8 = 4; i_8 < 24;i_8 += 1)
                        {
                            arr_32 [i_0] [5] [i_2] [i_3 - 3] [i_1] [i_0] [i_0] = (((~var_14) ? -1850833874 : var_9));
                            var_33 = -10;
                            var_34 &= (!91759264);
                            var_35 = (max(var_35, (1 <= var_16)));
                            var_36 = (min(var_36, ((((!9223372036854775807) <= var_13)))));
                        }
                        for (int i_9 = 1; i_9 < 1;i_9 += 1)
                        {
                            var_37 = (min(var_37, -5439659683997138796));
                            arr_35 [i_0] [6] = -1;
                            var_38 = (min(var_38, (~var_6)));
                        }
                    }
                }
            }
        }
        for (int i_10 = 0; i_10 < 25;i_10 += 1)
        {
            arr_39 [i_0] = ((((((~1) ? (var_7 * 0) : (max(var_13, 1))))) ? (!var_0) : var_5));

            /* vectorizable */
            for (int i_11 = 3; i_11 < 23;i_11 += 1) /* same iter space */
            {
                var_39 = (((-9223372036854775807 - 1) < 1));
                var_40 = var_10;

                for (int i_12 = 0; i_12 < 25;i_12 += 1)
                {
                    arr_44 [i_12] [i_12] [i_11 - 3] [i_11] [i_11] [i_0] = (!var_15);
                    var_41 = (max(var_41, (((~(1 != 16735551699654063987))))));
                }
                for (int i_13 = 0; i_13 < 1;i_13 += 1)
                {
                    var_42 += ((((-9223372036854775807 - 1) ^ var_15)));
                    arr_48 [i_0] [i_11] [i_0] = (((var_3 != var_16) >= var_14));
                    var_43 ^= (var_9 & var_0);
                    arr_49 [i_0] [i_10] [i_10] [12] [i_0] [i_13] = (119 >= var_0);
                }
                for (int i_14 = 0; i_14 < 25;i_14 += 1)
                {
                    arr_53 [1] [i_14] &= ((!(((var_7 ? var_4 : -23)))));
                    var_44 |= -1;
                }
            }
            /* vectorizable */
            for (int i_15 = 3; i_15 < 23;i_15 += 1) /* same iter space */
            {
                arr_58 [i_10] [i_0] = (((var_18 ? -3112587478133502996 : var_13)));
                arr_59 [i_0] [i_0] = 22350;
                arr_60 [i_0] [i_15 + 2] = (((1 ? var_18 : 1)));
            }
            for (int i_16 = 0; i_16 < 25;i_16 += 1)
            {
                var_45 = ((((0 ? -913370964 : var_9)) != (((var_18 != (!var_8))))));
                var_46 = (max(var_46, ((+((((var_18 < var_9) <= (!119))))))));
            }
            for (int i_17 = 0; i_17 < 25;i_17 += 1)
            {
                var_47 = -var_12;
                arr_67 [i_0] [i_0] [i_0] [i_17] = var_5;
                /* LoopNest 2 */
                for (int i_18 = 1; i_18 < 23;i_18 += 1)
                {
                    for (int i_19 = 0; i_19 < 25;i_19 += 1)
                    {
                        {
                            var_48 = (840609599 > var_6);
                            var_49 ^= (((var_4 - 80) ? (((23863 ? (252 > var_14) : ((268427264 ? 1 : 130))))) : var_16));
                        }
                    }
                }
            }
        }
        for (int i_20 = 0; i_20 < 25;i_20 += 1)
        {

            /* vectorizable */
            for (int i_21 = 4; i_21 < 23;i_21 += 1) /* same iter space */
            {
                /* LoopNest 2 */
                for (int i_22 = 2; i_22 < 22;i_22 += 1)
                {
                    for (int i_23 = 1; i_23 < 23;i_23 += 1)
                    {
                        {
                            var_50 = (max(var_50, var_8));
                            arr_84 [i_0] [i_0] [i_0] = 23;
                        }
                    }
                }
                var_51 = var_9;
            }
            for (int i_24 = 4; i_24 < 23;i_24 += 1) /* same iter space */
            {
                arr_88 [i_0] [20] [i_20] &= (var_6 <= var_16);
                var_52 = (~var_16);
                var_53 ^= ((0 | (var_11 & 252)));
            }
            var_54 = ((-(min(((var_10 ? var_15 : 4294967295)), (((var_17 ? 190 : 0)))))));
        }
        for (int i_25 = 0; i_25 < 25;i_25 += 1)
        {
            arr_92 [i_0] [i_0] [i_25] = (((-45 ? var_17 : (142 < var_15))));
            arr_93 [i_0] [i_0] = ((~((var_9 ? -1828243116 : 6721896617589731146))));
            arr_94 [i_0] [i_0] = (4 % -123);
        }
    }
    for (int i_26 = 2; i_26 < 12;i_26 += 1)
    {
        /* LoopNest 3 */
        for (int i_27 = 2; i_27 < 11;i_27 += 1)
        {
            for (int i_28 = 0; i_28 < 13;i_28 += 1)
            {
                for (int i_29 = 1; i_29 < 10;i_29 += 1)
                {
                    {
                        var_55 = (((-8 % 2449173924) + (((28360 ? var_3 : var_0)))));

                        for (int i_30 = 0; i_30 < 13;i_30 += 1)
                        {
                            var_56 = (!-8);
                            var_57 = 3414301414;
                            var_58 = ((-(~var_4)));
                        }
                    }
                }
            }
        }
        /* LoopNest 2 */
        for (int i_31 = 0; i_31 < 13;i_31 += 1)
        {
            for (int i_32 = 0; i_32 < 1;i_32 += 1)
            {
                {
                    arr_111 [i_26] [i_26] [i_31] [i_32] = (((((594377742 - 23) - (max(var_2, var_8))))) ? -0 : (8 - 3677050556879179226));
                    var_59 = (min(var_59, var_4));
                }
            }
        }
    }
    /* LoopNest 2 */
    for (int i_33 = 0; i_33 < 23;i_33 += 1)
    {
        for (int i_34 = 0; i_34 < 23;i_34 += 1)
        {
            {
                var_60 = (((((-var_13 <= (((var_9 ? 403168929 : var_10)))))) > ((((var_11 ? var_10 : var_7)) | ((max(var_5, var_1)))))));
                /* LoopNest 2 */
                for (int i_35 = 2; i_35 < 21;i_35 += 1)
                {
                    for (int i_36 = 1; i_36 < 22;i_36 += 1)
                    {
                        {
                            arr_123 [i_33] = (min((min(((var_11 ? var_14 : var_3)), 17396)), (((((var_9 ? var_9 : 1244766456))) ? 3584 : 2862))));
                            var_61 = (((((229 ? ((12212552608388317259 ? 0 : var_8)) : -791163932007209966))) ? ((((!((max(-11298, 65535))))))) : ((var_17 ? (104 + var_16) : var_0))));
                            var_62 ^= ((((18446744004990074880 % 54717) ? 791163932007209983 : 9223372036854775807)));
                        }
                    }
                }
            }
        }
    }
    var_63 = -23;
    var_64 = var_8;
    var_65 = var_13;
    #pragma endscop
}
