/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 179839
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=179839 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/179839
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    /* vectorizable */
    for (int i_0 = 1; i_0 < 11;i_0 += 1)
    {
        var_14 = (min(var_14, (var_5 == var_0)));
        var_15 |= ((!(!var_10)));

        for (int i_1 = 1; i_1 < 11;i_1 += 1)
        {

            for (int i_2 = 2; i_2 < 12;i_2 += 1)
            {
                var_16 = (max(var_16, (var_5 != var_8)));
                arr_9 [2] [i_1] [i_0] = var_2;
                var_17 = -var_7;

                for (int i_3 = 0; i_3 < 13;i_3 += 1)
                {
                    var_18 = (~var_11);
                    var_19 = -var_8;

                    for (int i_4 = 2; i_4 < 10;i_4 += 1)
                    {
                        arr_17 [i_0 + 2] [8] = var_8;
                        var_20 = var_4;
                    }
                }
                for (int i_5 = 3; i_5 < 10;i_5 += 1)
                {
                    var_21 = ((-(!var_3)));
                    var_22 = var_5;
                }
            }
            for (int i_6 = 0; i_6 < 13;i_6 += 1)
            {
                var_23 = (~var_10);
                arr_23 [i_0] [i_0] [10] = (var_13 & (~var_13));
                var_24 += var_4;
                var_25 = (var_6 || var_13);
                var_26 += (!var_13);
            }
            arr_24 [i_1] = (((var_1 && var_1) == (~var_10)));
        }
        for (int i_7 = 0; i_7 < 13;i_7 += 1)
        {

            for (int i_8 = 0; i_8 < 13;i_8 += 1)
            {
                var_27 += (~(~var_7));
                var_28 = (~var_1);
            }
            for (int i_9 = 0; i_9 < 13;i_9 += 1)
            {
                var_29 *= var_9;
                /* LoopNest 2 */
                for (int i_10 = 2; i_10 < 10;i_10 += 1)
                {
                    for (int i_11 = 0; i_11 < 13;i_11 += 1)
                    {
                        {
                            arr_37 [2] = -195113426;
                            var_30 = (min(var_30, ((var_1 >> (var_0 - 2532565427)))));
                        }
                    }
                }
            }
            for (int i_12 = 3; i_12 < 12;i_12 += 1)
            {
                arr_41 [i_0 - 1] [i_7] [i_7] [i_12] = -4099853869;

                for (int i_13 = 0; i_13 < 13;i_13 += 1)
                {
                    var_31 -= (var_1 < var_5);

                    for (int i_14 = 0; i_14 < 13;i_14 += 1)
                    {
                        var_32 = (min(var_32, var_5));
                        var_33 = ((-(!var_10)));
                    }

                    for (int i_15 = 0; i_15 < 13;i_15 += 1)
                    {
                        var_34 = var_7;
                        var_35 = -var_13;
                        arr_49 [i_0] [i_7] [2] [i_13] [i_15] = (!var_11);
                    }
                }
            }
            /* LoopNest 3 */
            for (int i_16 = 0; i_16 < 13;i_16 += 1)
            {
                for (int i_17 = 4; i_17 < 10;i_17 += 1)
                {
                    for (int i_18 = 0; i_18 < 13;i_18 += 1)
                    {
                        {
                            arr_57 [10] [i_0] [i_7] [i_7] [10] [i_17] [i_18] = var_7;
                            var_36 = (var_8 - -var_2);
                            var_37 = (min(var_37, var_10));
                        }
                    }
                }
            }
        }
    }
    /* vectorizable */
    for (int i_19 = 2; i_19 < 17;i_19 += 1)
    {

        for (int i_20 = 0; i_20 < 18;i_20 += 1)
        {

            for (int i_21 = 1; i_21 < 16;i_21 += 1)
            {
                var_38 = var_3;
                var_39 = var_1;
                var_40 = (!var_3);
                var_41 = (max(var_41, (var_0 - var_0)));

                for (int i_22 = 0; i_22 < 18;i_22 += 1)
                {

                    for (int i_23 = 1; i_23 < 17;i_23 += 1)
                    {
                        arr_69 [i_19] [i_20] [i_23] [i_22] [i_23 + 1] = (~var_12);
                        arr_70 [6] [i_23] [i_21] [i_22] [16] = (var_7 && var_9);
                    }

                    for (int i_24 = 1; i_24 < 15;i_24 += 1)
                    {
                        arr_73 [i_19] [i_20] [i_21] [i_22] [i_24] = var_9;
                        arr_74 [i_24] = var_13;
                    }
                    var_42 = (min(var_42, var_10));
                }
                for (int i_25 = 0; i_25 < 18;i_25 += 1)
                {
                    arr_77 [i_19] [i_20] [i_21] [i_21] [i_25] = (var_4 != var_7);
                    arr_78 [i_19] [i_20] [16] [i_21 + 1] [9] = (!var_12);
                }
            }
            var_43 = (min(var_43, var_2));
        }

        for (int i_26 = 1; i_26 < 15;i_26 += 1)
        {

            for (int i_27 = 0; i_27 < 18;i_27 += 1)
            {

                for (int i_28 = 2; i_28 < 15;i_28 += 1) /* same iter space */
                {
                    arr_85 [1] [i_19] [i_26] [i_27] [i_28] [i_28 + 3] = var_13;

                    for (int i_29 = 0; i_29 < 18;i_29 += 1)
                    {
                        arr_89 [i_26] [i_26 + 3] [i_26] [i_26] [13] = (var_3 ^ var_3);
                        var_44 = (~var_9);
                        var_45 = -var_12;
                    }
                    for (int i_30 = 0; i_30 < 18;i_30 += 1) /* same iter space */
                    {
                        var_46 = var_5;
                        var_47 = (max(var_47, (~var_6)));
                        var_48 = var_3;
                    }
                    for (int i_31 = 0; i_31 < 18;i_31 += 1) /* same iter space */
                    {
                        var_49 = (var_10 && var_5);
                        arr_95 [i_19 - 1] [i_19] [i_19 - 2] [i_19] [i_19] [i_19] = var_4;
                        var_50 = (~(var_1 - var_8));
                    }
                }
                for (int i_32 = 2; i_32 < 15;i_32 += 1) /* same iter space */
                {

                    for (int i_33 = 0; i_33 < 18;i_33 += 1)
                    {
                        var_51 |= -var_6;
                        arr_101 [i_19] [i_19] [i_26 + 2] [i_27] [i_32] [i_32] = var_5;
                    }
                    for (int i_34 = 0; i_34 < 18;i_34 += 1)
                    {
                        var_52 = var_6;
                        var_53 = (max(var_53, var_6));
                    }
                    for (int i_35 = 2; i_35 < 17;i_35 += 1)
                    {
                        arr_108 [13] [i_32] [17] [i_32] [i_19] = var_3;
                        var_54 = (min(var_54, var_11));
                        var_55 = ((var_7 * var_4) >> (var_13 - 1568474568));
                        var_56 = (max(var_56, (var_6 - var_7)));
                    }

                    for (int i_36 = 4; i_36 < 15;i_36 += 1)
                    {
                        var_57 = (min(var_57, ((var_8 >> (((var_7 * var_10) - 4261771368))))));
                        var_58 |= var_8;
                    }
                }
                var_59 = (max(var_59, (var_8 | var_3)));
            }
            var_60 = (min(var_60, -var_7));
        }
    }
    /* LoopNest 2 */
    for (int i_37 = 0; i_37 < 22;i_37 += 1)
    {
        for (int i_38 = 0; i_38 < 22;i_38 += 1)
        {
            {
                arr_118 [i_38] [2] [i_37] = (-(min(var_11, var_8)));

                for (int i_39 = 0; i_39 < 22;i_39 += 1)
                {
                    arr_122 [i_39] [i_38] [i_39] = (-var_6 >= var_12);
                    /* LoopNest 2 */
                    for (int i_40 = 0; i_40 < 22;i_40 += 1)
                    {
                        for (int i_41 = 3; i_41 < 18;i_41 += 1)
                        {
                            {
                                var_61 *= min(-var_5, (var_2 == var_3));
                                arr_127 [i_37] [i_37] [i_39] [i_37] [5] [i_37] = min((min(var_0, var_10)), (min((~var_1), var_9)));
                                var_62 *= ((~var_5) - (min(-var_3, (~var_10))));
                            }
                        }
                    }
                    arr_128 [i_39] [i_39] = ((max(var_11, var_2)) | (min(var_12, var_0)));

                    /* vectorizable */
                    for (int i_42 = 0; i_42 < 22;i_42 += 1)
                    {
                        var_63 = (var_5 & (~var_13));
                        var_64 |= (~(~var_10));
                    }
                    /* vectorizable */
                    for (int i_43 = 0; i_43 < 22;i_43 += 1)
                    {
                        arr_134 [i_39] [i_43] [i_38] [i_38] [i_39] = (var_10 + var_13);
                        var_65 = (max(var_65, -var_12));

                        for (int i_44 = 1; i_44 < 19;i_44 += 1)
                        {
                            var_66 = (~var_10);
                            arr_138 [i_39] [i_39] [15] [i_43] [i_43] = ((~(var_7 < var_3)));
                            arr_139 [i_37] [i_38] [2] [i_43] [1] [i_39] [i_44] = (var_12 && var_0);
                        }
                    }
                }
                for (int i_45 = 1; i_45 < 20;i_45 += 1)
                {
                    arr_142 [i_37] [i_38] [i_45] = (~(max(var_6, var_12)));

                    for (int i_46 = 2; i_46 < 21;i_46 += 1)
                    {
                        arr_147 [i_37] [i_37] [i_37] [i_37] = max((((var_8 != (min(4099853870, 698053573))))), var_7);
                        var_67 = ((var_1 + (var_11 && var_3)));
                        var_68 = var_5;
                        arr_148 [i_37] [21] [i_38] [i_45] [i_46] [i_46 + 1] = min(((-(max(var_7, var_8)))), ((~(max(var_8, var_7)))));
                    }
                    for (int i_47 = 0; i_47 < 22;i_47 += 1)
                    {
                        var_69 = ((!((max((!195113420), var_10)))));

                        /* vectorizable */
                        for (int i_48 = 0; i_48 < 22;i_48 += 1) /* same iter space */
                        {
                            var_70 = (~var_2);
                            var_71 = var_10;
                            arr_154 [i_37] [i_38] [i_45 + 1] [i_47] [i_48] = (((var_1 && var_2) || (!1453907549)));
                        }
                        /* vectorizable */
                        for (int i_49 = 0; i_49 < 22;i_49 += 1) /* same iter space */
                        {
                            arr_157 [i_37] [2] [i_37] [i_47] [i_37] = (195113424 ^ 3338152313);
                            var_72 = (-(~var_10));
                            var_73 = var_1;
                            var_74 = (max(var_74, (~var_0)));
                            var_75 += (var_3 / var_6);
                        }
                    }
                }
            }
        }
    }
    var_76 &= ((!((min((var_4 && var_12), -var_2)))));
    var_77 ^= var_12;
    #pragma endscop
}
