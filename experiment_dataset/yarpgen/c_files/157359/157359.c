/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 157359
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=157359 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/157359
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    /* vectorizable */
    for (int i_0 = 0; i_0 < 1;i_0 += 1)
    {
        var_12 = var_4;
        var_13 += (18009588759014380130 >= (!var_3));
    }
    /* vectorizable */
    for (int i_1 = 0; i_1 < 1;i_1 += 1) /* same iter space */
    {

        for (int i_2 = 0; i_2 < 15;i_2 += 1)
        {
            var_14 = (((var_11 != var_10) ? var_5 : 18009588759014380130));
            /* LoopNest 3 */
            for (int i_3 = 0; i_3 < 15;i_3 += 1)
            {
                for (int i_4 = 0; i_4 < 15;i_4 += 1)
                {
                    for (int i_5 = 0; i_5 < 15;i_5 += 1)
                    {
                        {
                            var_15 = (!var_11);
                            var_16 = (var_7 * var_7);
                            arr_15 [i_1] [i_1] [i_1] [i_1] [i_1] [i_1] [i_1] = (~var_5);
                        }
                    }
                }
            }
            var_17 = (min(var_17, var_7));
            /* LoopNest 3 */
            for (int i_6 = 0; i_6 < 15;i_6 += 1)
            {
                for (int i_7 = 0; i_7 < 15;i_7 += 1)
                {
                    for (int i_8 = 0; i_8 < 15;i_8 += 1)
                    {
                        {
                            var_18 = (!437155314695171486);
                            var_19 = var_11;
                            arr_25 [i_1] [i_7] [i_1] [i_1] [i_1] [6] [i_1] = (1 ^ var_11);
                            var_20 = (!var_10);
                        }
                    }
                }
            }
            /* LoopNest 2 */
            for (int i_9 = 0; i_9 < 15;i_9 += 1)
            {
                for (int i_10 = 0; i_10 < 15;i_10 += 1)
                {
                    {
                        var_21 ^= ((var_6 ? 0 : 18009588759014380130));
                        arr_33 [i_1] [i_1] [i_1] [i_1] = (~var_4);
                        var_22 += ((var_6 ? var_10 : 10758));
                    }
                }
            }
        }
        for (int i_11 = 0; i_11 < 15;i_11 += 1)
        {
            var_23 = 3567729150052807685;

            for (int i_12 = 0; i_12 < 15;i_12 += 1)
            {
                var_24 = var_9;
                var_25 *= (((var_5 ^ var_3) * var_0));
                /* LoopNest 2 */
                for (int i_13 = 0; i_13 < 15;i_13 += 1)
                {
                    for (int i_14 = 0; i_14 < 15;i_14 += 1)
                    {
                        {
                            var_26 *= var_6;
                            var_27 = 437155314695171476;
                            var_28 = (!var_8);
                        }
                    }
                }
                var_29 = var_11;
            }
            for (int i_15 = 0; i_15 < 15;i_15 += 1)
            {
                var_30 = (var_3 >= var_11);
                arr_46 [14] [i_11] [3] = ((var_5 ? var_0 : var_10));
            }
            for (int i_16 = 0; i_16 < 15;i_16 += 1)
            {
                /* LoopNest 2 */
                for (int i_17 = 0; i_17 < 15;i_17 += 1)
                {
                    for (int i_18 = 0; i_18 < 15;i_18 += 1)
                    {
                        {
                            var_31 = ((var_9 ? 2147483647 : -19));
                            var_32 &= -var_0;
                            var_33 ^= (var_6 > var_2);
                            arr_54 [i_1] [i_1] [i_1] [i_1] [i_1] [i_11] [i_1] = (!437155314695171486);
                        }
                    }
                }
                var_34 = (var_3 % var_11);

                for (int i_19 = 0; i_19 < 15;i_19 += 1)
                {
                    var_35 = (!var_5);
                    var_36 = (((var_11 ? var_3 : var_1)));
                    arr_57 [i_11] [i_11] = (32756 ^ var_8);
                }
                for (int i_20 = 0; i_20 < 15;i_20 += 1)
                {
                    arr_61 [i_11] [11] [9] [i_20] = var_9;

                    for (int i_21 = 0; i_21 < 15;i_21 += 1)
                    {
                        var_37 = var_11;
                        var_38 = (min(var_38, var_0));
                        arr_65 [i_21] [i_11] [10] [i_11] [i_1] = (((1 - var_1) ^ var_1));
                    }
                }
                arr_66 [i_16] [i_11] [i_11] [i_1] = ((!(((var_6 ? var_5 : 7)))));
            }
            for (int i_22 = 0; i_22 < 15;i_22 += 1)
            {
                var_39 = (var_11 < var_11);
                var_40 |= -19;
                arr_70 [10] &= ((var_7 ? var_9 : var_8));
            }
            var_41 = (min(var_41, ((((((var_6 ? var_6 : 10821))) ? var_9 : var_5)))));
        }
        /* LoopNest 2 */
        for (int i_23 = 0; i_23 < 15;i_23 += 1)
        {
            for (int i_24 = 0; i_24 < 15;i_24 += 1)
            {
                {
                    /* LoopNest 2 */
                    for (int i_25 = 0; i_25 < 15;i_25 += 1)
                    {
                        for (int i_26 = 0; i_26 < 15;i_26 += 1)
                        {
                            {
                                var_42 = (min(var_42, var_2));
                                var_43 += var_11;
                            }
                        }
                    }
                    var_44 = ((var_9 ? var_0 : var_7));
                }
            }
        }

        for (int i_27 = 0; i_27 < 15;i_27 += 1)
        {
            arr_84 [i_27] = var_2;
            var_45 = (var_3 / var_11);

            for (int i_28 = 0; i_28 < 15;i_28 += 1)
            {
                arr_89 [i_1] [i_1] = ((var_11 ^ (var_4 / var_10)));
                var_46 *= (437155314695171502 * ((var_8 ? 18009588759014380114 : -1252552445)));
                var_47 = (!var_7);

                for (int i_29 = 0; i_29 < 15;i_29 += 1)
                {
                    var_48 = (~496);
                    var_49 *= (var_3 < 1);

                    for (int i_30 = 0; i_30 < 1;i_30 += 1)
                    {
                        arr_94 [i_29] [i_27] = (((1 & -22) >> (((~var_11) - 1604844930))));
                        arr_95 [i_1] [i_27] [i_27] [i_29] [i_29] = var_6;
                        arr_96 [0] [i_28] [i_28] [i_29] [13] = ((var_9 ? var_1 : (!var_0)));
                        arr_97 [i_29] [i_27] [i_27] [i_27] [i_27] [i_27] [i_27] = -var_4;
                        arr_98 [0] [0] [i_28] [7] [i_28] [i_29] = ((var_1 ? var_10 : 2739844398));
                    }
                    for (int i_31 = 0; i_31 < 15;i_31 += 1)
                    {
                        arr_101 [i_29] [i_29] [3] [i_28] [i_31] [i_28] [i_27] = ((var_3 ? var_0 : (-127 - 1)));
                        arr_102 [i_29] [i_27] [i_28] [i_29] [0] = 437155314695171486;
                        var_50 = (max(var_50, var_9));
                        arr_103 [i_29] [i_31] [i_29] [i_29] [i_29] [i_28] [i_28] = (!var_9);
                    }
                    for (int i_32 = 0; i_32 < 15;i_32 += 1)
                    {
                        var_51 *= var_4;
                        var_52 = (((((1 ? var_7 : var_10))) ^ ((var_3 ? var_6 : var_9))));
                    }
                    for (int i_33 = 0; i_33 < 15;i_33 += 1)
                    {
                        arr_108 [i_29] = ((-var_1 ? var_0 : var_5));
                        var_53 += var_9;
                        var_54 -= var_0;
                    }
                    var_55 = var_4;
                    arr_109 [8] [i_27] [8] [i_27] [8] |= ((var_3 ? -1252552445 : var_9));
                }
            }
            for (int i_34 = 0; i_34 < 15;i_34 += 1)
            {
                arr_112 [i_1] [i_27] [i_27] = (!var_8);
                var_56 = (min(var_56, (((var_0 << (((var_2 | var_2) + 146)))))));
            }
        }
        for (int i_35 = 0; i_35 < 15;i_35 += 1)
        {
            arr_116 [i_35] = (1 && var_9);
            arr_117 [i_35] = 32756;
            var_57 = (min(var_57, ((((~59016) ? ((var_11 ? 18009588759014380106 : var_0)) : var_9)))));
        }
    }
    for (int i_36 = 0; i_36 < 1;i_36 += 1) /* same iter space */
    {

        /* vectorizable */
        for (int i_37 = 0; i_37 < 15;i_37 += 1)
        {
            arr_122 [i_36] = var_7;
            var_58 -= (~var_6);
            var_59 = (((var_6 == var_11) ? (2251799813685247 >> 1) : (437155314695171485 - var_10)));
        }

        /* vectorizable */
        for (int i_38 = 0; i_38 < 15;i_38 += 1)
        {
            var_60 -= var_4;
            var_61 += 1;
        }
        for (int i_39 = 0; i_39 < 15;i_39 += 1)
        {
            var_62 += (((max(var_9, var_11))));
            var_63 = ((-(-1 / var_8)));
            var_64 = (((!var_3) ? ((17473459116696675705 ? (((123 ? var_0 : var_2))) : (437155314695171484 / 1))) : var_1));
            var_65 = ((-var_1 ? var_5 : var_0));
        }
        /* vectorizable */
        for (int i_40 = 0; i_40 < 15;i_40 += 1)
        {
            var_66 = ((var_6 ? ((var_11 << (var_6 - 2645090169))) : var_5));
            var_67 = (max(var_67, (-127 - 1)));
            var_68 += (~var_0);
        }

        /* vectorizable */
        for (int i_41 = 0; i_41 < 15;i_41 += 1)
        {
            arr_132 [i_36] = (var_3 + var_1);
            /* LoopNest 3 */
            for (int i_42 = 0; i_42 < 15;i_42 += 1)
            {
                for (int i_43 = 0; i_43 < 15;i_43 += 1)
                {
                    for (int i_44 = 0; i_44 < 15;i_44 += 1)
                    {
                        {
                            arr_142 [i_36] [i_41] [i_42] [i_36] [i_44] [i_43] [i_43] = var_9;
                            arr_143 [i_36] = 2147483635;
                            arr_144 [4] [i_36] [4] [i_43] [i_44] = 4095;
                        }
                    }
                }
            }
        }
        /* vectorizable */
        for (int i_45 = 0; i_45 < 1;i_45 += 1)
        {
            /* LoopNest 3 */
            for (int i_46 = 0; i_46 < 15;i_46 += 1)
            {
                for (int i_47 = 0; i_47 < 15;i_47 += 1)
                {
                    for (int i_48 = 0; i_48 < 1;i_48 += 1)
                    {
                        {
                            arr_154 [i_36] = (var_0 >= 0);
                            var_69 = ((1602508069526504431 - (-127 - 1)));
                            var_70 = var_4;
                        }
                    }
                }
            }
            /* LoopNest 2 */
            for (int i_49 = 0; i_49 < 15;i_49 += 1)
            {
                for (int i_50 = 0; i_50 < 15;i_50 += 1)
                {
                    {
                        var_71 += (var_2 % var_9);
                        var_72 += ((var_8 ? (-2147483647 - 1) : 9));
                    }
                }
            }
        }
        var_73 = (max(0, ((min((!var_0), 14336)))));
    }
    for (int i_51 = 0; i_51 < 19;i_51 += 1)
    {
        arr_164 [i_51] [17] = ((var_7 << (var_1 - 146)));
        var_74 = (max(var_74, ((min((!var_11), (-14336 > 952821279271180064))))));
        var_75 = (max((min(18009588759014380114, (((var_6 ? var_5 : 144097595889811456))))), ((min(var_4, var_7)))));
        arr_165 [i_51] [i_51] = var_6;
        var_76 -= ((~var_8) % (min((1 - var_2), var_1)));
    }
    var_77 = ((-(min((var_8 & var_3), var_8))));
    var_78 &= (max(((((15300235069515142135 << (var_8 - 1740964352))) >= var_9)), var_0));
    var_79 = var_9;
    #pragma endscop
}
