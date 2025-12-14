/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 117106
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=117106 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/117106
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 2; i_0 < 18;i_0 += 1)
    {

        for (int i_1 = 4; i_1 < 20;i_1 += 1)
        {
            var_19 = var_8;
            var_20 = ((-var_12 ? 9223372036854775807 : (var_13 || 175)));
        }
        for (int i_2 = 0; i_2 < 21;i_2 += 1) /* same iter space */
        {
            arr_7 [7] [i_0] = (((min(16, 3321421578367114672)) + var_2));

            for (int i_3 = 1; i_3 < 19;i_3 += 1)
            {
                arr_10 [i_3] = var_5;
                var_21 += -4637;
                arr_11 [i_3] [i_3] = ((((min(var_6, -123))) * (((min(var_14, 1))))));
                arr_12 [i_3] = 0;
                var_22 = (max(var_22, (((!(((((max(19421, 254)))) >= 8)))))));
            }
            for (int i_4 = 0; i_4 < 21;i_4 += 1)
            {
                arr_16 [i_4] [i_4] [i_4] = 68;

                /* vectorizable */
                for (int i_5 = 0; i_5 < 21;i_5 += 1)
                {
                    var_23 = (min(var_23, -32755));
                    var_24 = (~4294967295);
                    arr_20 [i_4] [i_4] [i_2] [i_4] = ((~(var_17 & -66)));
                    var_25 = (max(var_25, (var_7 || var_9)));
                }
            }
            /* LoopNest 3 */
            for (int i_6 = 0; i_6 < 21;i_6 += 1)
            {
                for (int i_7 = 0; i_7 < 21;i_7 += 1)
                {
                    for (int i_8 = 0; i_8 < 21;i_8 += 1)
                    {
                        {
                            arr_30 [i_7] [i_2] [4] [i_2] [i_7] [i_2] = var_6;
                            var_26 ^= min(-71, (min(32743, 143)));
                        }
                    }
                }
            }

            for (int i_9 = 3; i_9 < 20;i_9 += 1)
            {
                arr_33 [i_0] = var_18;
                var_27 = (min((var_1 & var_3), ((max(var_0, var_15)))));
            }
        }
        for (int i_10 = 0; i_10 < 21;i_10 += 1) /* same iter space */
        {
            arr_36 [i_10] [i_0] [i_0] = (min((var_10 || -84), (min(var_0, 156))));
            /* LoopNest 3 */
            for (int i_11 = 0; i_11 < 21;i_11 += 1)
            {
                for (int i_12 = 3; i_12 < 18;i_12 += 1)
                {
                    for (int i_13 = 1; i_13 < 18;i_13 += 1)
                    {
                        {
                            var_28 *= (min(1694517629, 0));
                            var_29 = (min(var_29, 62));
                            var_30 = (max(var_30, (((((max(-111, var_15))) > (-9223372036854775807 - 1))))));
                        }
                    }
                }
            }
            var_31 = (min(var_31, (81 == var_18)));
            var_32 &= (((!-var_0) * 18928));
        }
        var_33 = (min(var_33, 1));
    }
    var_34 *= ((var_8 ? var_16 : (~11536)));

    for (int i_14 = 2; i_14 < 10;i_14 += 1)
    {
        arr_49 [i_14] [i_14] = (((var_1 != var_10) - 9647360273048988545));

        /* vectorizable */
        for (int i_15 = 2; i_15 < 9;i_15 += 1)
        {
            var_35 = -var_5;
            arr_54 [i_14] = var_5;
            arr_55 [i_14] [i_15] [i_14] &= var_9;
        }

        /* vectorizable */
        for (int i_16 = 1; i_16 < 10;i_16 += 1)
        {
            arr_59 [i_14 - 2] [i_16 - 1] [i_16] = 2195;
            /* LoopNest 2 */
            for (int i_17 = 0; i_17 < 11;i_17 += 1)
            {
                for (int i_18 = 3; i_18 < 9;i_18 += 1)
                {
                    {
                        var_36 = (min(var_36, (87 || var_17)));
                        var_37 = (var_1 * 58);
                        var_38 = var_3;

                        for (int i_19 = 0; i_19 < 11;i_19 += 1)
                        {
                            var_39 = (min(var_39, 32767));
                            arr_67 [i_18] [i_17] [i_17] = 3572964821;
                            arr_68 [i_14] [i_18] [i_17] [i_14] [i_17] [i_14] [i_14] = var_15;
                        }
                        for (int i_20 = 2; i_20 < 10;i_20 += 1) /* same iter space */
                        {
                            arr_71 [4] [i_16] [i_18] [i_16] [10] [i_16] = (0 >= var_8);
                            arr_72 [i_18] [i_20] [i_18] [i_18] [i_18] [i_18] = var_2;
                        }
                        for (int i_21 = 2; i_21 < 10;i_21 += 1) /* same iter space */
                        {
                            var_40 = (min(var_40, var_17));
                            var_41 ^= ((var_4 ? 62 : 65521));
                        }
                        var_42 = (!var_1);
                    }
                }
            }
            var_43 = (min(var_43, (81 == var_10)));
            arr_75 [i_14 - 1] &= (163 >= 197);
        }
        for (int i_22 = 4; i_22 < 9;i_22 += 1) /* same iter space */
        {
            /* LoopNest 2 */
            for (int i_23 = 0; i_23 < 0;i_23 += 1)
            {
                for (int i_24 = 0; i_24 < 11;i_24 += 1)
                {
                    {
                        arr_85 [i_24] [i_23] [i_23] [1] [i_14] [i_24] = 1948585578;

                        /* vectorizable */
                        for (int i_25 = 0; i_25 < 11;i_25 += 1)
                        {
                            arr_89 [i_25] [i_25] [i_25] [i_25] [i_24] = (~var_8);
                            arr_90 [i_14] [i_14] [i_14] [i_23] [i_24] [i_25] = ((var_16 >> (var_17 + 101)));
                            arr_91 [i_24] [i_24] [i_24] [i_24] [i_24] = 198;
                            arr_92 [i_14] [i_14] [i_22] [i_14] [i_14] [i_22] [i_14] &= (!var_0);
                        }
                        for (int i_26 = 0; i_26 < 11;i_26 += 1)
                        {
                            var_44 *= var_18;
                            var_45 = var_8;
                            var_46 = (max(var_46, -95));
                        }
                        /* vectorizable */
                        for (int i_27 = 0; i_27 < 1;i_27 += 1)
                        {
                            arr_98 [i_27] [i_24] [i_24] [i_22] = (!var_10);
                            arr_99 [i_24] [i_22] [i_14 - 1] = var_7;
                            var_47 -= ((var_14 ? -32764 : -67));
                        }
                        /* vectorizable */
                        for (int i_28 = 1; i_28 < 9;i_28 += 1)
                        {
                            var_48 = 652228649;
                            var_49 = (min(var_49, (var_13 - var_16)));
                            arr_104 [i_24] [i_22 - 4] [i_23] [i_23] [i_23] [i_28] [i_28] = var_7;
                            arr_105 [i_14] [i_14] [i_22] [i_24] [i_14] [i_24] [i_28] = 1;
                            var_50 = (min(var_50, var_6));
                        }
                        arr_106 [i_24] [i_22] [i_23 + 1] [i_22] [i_24] = ((-(min(62, var_1))));
                    }
                }
            }
            var_51 = (max(var_51, ((min(var_15, ((1 ? 255 : 198)))))));
        }
        /* vectorizable */
        for (int i_29 = 4; i_29 < 9;i_29 += 1) /* same iter space */
        {
            var_52 *= 3536296895;
            /* LoopNest 2 */
            for (int i_30 = 0; i_30 < 11;i_30 += 1)
            {
                for (int i_31 = 3; i_31 < 8;i_31 += 1)
                {
                    {

                        for (int i_32 = 0; i_32 < 11;i_32 += 1)
                        {
                            arr_117 [i_14] [i_30] [i_30] [i_31 + 3] [i_30] = 63;
                            var_53 = (~78);
                        }
                        var_54 *= 79;
                        var_55 = (min(var_55, 20626));
                    }
                }
            }

            for (int i_33 = 0; i_33 < 1;i_33 += 1)
            {
                var_56 += var_11;
                var_57 = (min(var_57, (0 || var_15)));
                arr_122 [i_29] = 5;
            }
        }
    }
    for (int i_34 = 0; i_34 < 24;i_34 += 1)
    {
        arr_126 [i_34] = (var_7 || -62);
        arr_127 [i_34] = ((-((var_15 ? var_0 : 0))));
    }
    var_58 = 115;
    #pragma endscop
}
