/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 178009
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=178009 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/178009
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_16 = (min(var_16, (41229 && var_9)));

    for (int i_0 = 0; i_0 < 17;i_0 += 1)
    {

        /* vectorizable */
        for (int i_1 = 0; i_1 < 17;i_1 += 1)
        {

            for (int i_2 = 1; i_2 < 15;i_2 += 1)
            {
                var_17 = (max(var_17, var_9));
                var_18 ^= (((var_4 ? 24307 : var_10)));

                for (int i_3 = 2; i_3 < 16;i_3 += 1) /* same iter space */
                {

                    for (int i_4 = 0; i_4 < 1;i_4 += 1)
                    {
                        arr_13 [i_0] [i_1] [i_2] [i_3] [i_2] = var_5;
                        arr_14 [i_0] [i_2] [i_2 + 1] [i_2] [i_4] = ((-var_15 * (!var_9)));
                        var_19 = -62957;
                    }

                    for (int i_5 = 3; i_5 < 15;i_5 += 1) /* same iter space */
                    {
                        var_20 = (((~7914) ? (!-1048715612) : ((61811 ? -1363854664 : var_2))));
                        var_21 += var_6;
                        var_22 += 50039;
                        var_23 = ((!(((1 ? var_0 : 41229)))));
                    }
                    for (int i_6 = 3; i_6 < 15;i_6 += 1) /* same iter space */
                    {
                        arr_22 [i_0] [i_0] [i_0] [i_2] = (!var_6);
                        var_24 = (min(var_24, (!var_0)));
                        arr_23 [i_2] [i_2] [i_2] [i_1] = (((((var_10 ? var_1 : var_13))) ? 1 : var_3));
                        var_25 = ((~(var_11 ^ 24307)));
                    }
                    arr_24 [i_3] [i_0] [i_0] [i_0] |= var_9;
                    var_26 = ((var_10 ? 64 : -var_7));
                    var_27 = var_14;
                }
                for (int i_7 = 2; i_7 < 16;i_7 += 1) /* same iter space */
                {
                    var_28 = (max(var_28, (~var_3)));
                    var_29 += (var_7 && 1);
                    var_30 = ((32 + ((61479 ? 62971 : var_15))));
                    arr_28 [i_0] [i_2] [i_2 + 2] [i_2] = ((var_2 ? var_0 : var_6));
                }
                for (int i_8 = 2; i_8 < 16;i_8 += 1) /* same iter space */
                {

                    for (int i_9 = 0; i_9 < 17;i_9 += 1)
                    {
                        arr_35 [i_2] [i_1] [i_2] [i_8] [i_9] = ((64 ? 17715 : 27350));
                        var_31 = var_4;
                    }
                    var_32 = (!248);
                }
            }
            for (int i_10 = 0; i_10 < 17;i_10 += 1)
            {
                var_33 = (var_1 && var_5);
                arr_40 [i_10] = 41409;
                var_34 = (min(var_34, 27862));
            }
            var_35 = (var_4 && 2720303328536220147);
            var_36 = var_1;
            var_37 &= (~var_5);
        }
        for (int i_11 = 0; i_11 < 17;i_11 += 1)
        {
            var_38 = ((!(((-((var_9 ? var_3 : var_2)))))));
            var_39 = ((var_15 && (var_0 / 134215680)));
            var_40 += -var_13;

            for (int i_12 = 0; i_12 < 17;i_12 += 1)
            {
                arr_47 [i_0] [14] [i_0] = 224;
                var_41 = ((((var_8 ? var_11 : var_5)) != ((var_6 ? var_3 : var_13))));
            }
        }
        for (int i_13 = 0; i_13 < 17;i_13 += 1)
        {
            /* LoopNest 2 */
            for (int i_14 = 0; i_14 < 17;i_14 += 1)
            {
                for (int i_15 = 0; i_15 < 17;i_15 += 1)
                {
                    {
                        var_42 = 1;
                        var_43 = (((~var_10) != ((var_0 ? 63 : 2720303328536220132))));
                        var_44 = (~var_8);
                        var_45 = var_8;
                    }
                }
            }
            var_46 = (max(var_46, -var_4));
            /* LoopNest 3 */
            for (int i_16 = 0; i_16 < 17;i_16 += 1)
            {
                for (int i_17 = 0; i_17 < 17;i_17 += 1)
                {
                    for (int i_18 = 2; i_18 < 16;i_18 += 1)
                    {
                        {
                            var_47 = (max(var_47, ((((((var_4 + ((116 ? var_10 : var_8))))) ? (0 == 1) : var_6)))));
                            var_48 = var_0;
                        }
                    }
                }
            }
        }
        /* vectorizable */
        for (int i_19 = 0; i_19 < 17;i_19 += 1)
        {
            var_49 = (max(var_49, (!var_13)));

            for (int i_20 = 0; i_20 < 17;i_20 += 1)
            {
                arr_70 [7] [i_0] [i_0] = ((-((2720303328536220147 ? 27862 : -15557))));

                for (int i_21 = 0; i_21 < 17;i_21 += 1)
                {
                    var_50 |= var_4;
                    arr_74 [i_0] [i_19] [i_0] [i_0] = (!var_3);

                    for (int i_22 = 2; i_22 < 14;i_22 += 1)
                    {
                        var_51 = (max(var_51, var_13));
                        var_52 = ((var_0 ? 8855739908834157228 : 15556));
                        var_53 |= (var_14 == var_8);
                    }
                    for (int i_23 = 0; i_23 < 17;i_23 += 1)
                    {
                        var_54 += -var_11;
                        var_55 = (min(var_55, (!var_1)));
                        var_56 *= (var_0 ^ var_15);
                    }
                    for (int i_24 = 0; i_24 < 17;i_24 += 1)
                    {
                        var_57 = (min(var_57, 66));
                        var_58 += (!-var_0);
                        var_59 = (max(var_59, var_10));
                        var_60 = var_15;
                    }
                }
                for (int i_25 = 4; i_25 < 14;i_25 += 1)
                {
                    var_61 = (max(var_61, var_3));

                    for (int i_26 = 0; i_26 < 17;i_26 += 1)
                    {
                        var_62 = ((var_1 ? var_1 : var_7));
                        var_63 = (min(var_63, 35736));
                        var_64 = -201;
                    }
                    var_65 = ((26159 ? var_1 : var_4));

                    for (int i_27 = 0; i_27 < 17;i_27 += 1) /* same iter space */
                    {
                        var_66 |= var_5;
                        arr_89 [i_20] [i_25] [i_27] = ((var_5 ? ((var_4 ? var_10 : var_7)) : (~var_4)));
                        var_67 = -757396667;
                        var_68 = (min(var_68, (10268 + var_13)));
                    }
                    for (int i_28 = 0; i_28 < 17;i_28 += 1) /* same iter space */
                    {
                        arr_92 [i_0] [i_19] [i_20] [16] [i_28] = ((var_0 && (((4727875311807634739 ? 212 : var_11)))));
                        var_69 += (41229 ? var_3 : var_0);
                        var_70 &= (!172);
                    }
                    var_71 = (~var_2);
                }
                var_72 = (min(var_72, (!65529)));
                arr_93 [i_0] [i_0] [i_19] [i_19] = (!var_7);
            }
            for (int i_29 = 0; i_29 < 17;i_29 += 1)
            {

                for (int i_30 = 0; i_30 < 17;i_30 += 1)
                {
                    var_73 += ((!(!21786)));
                    arr_99 [2] [16] [16] [i_30] = (((0 % 25886) || (((var_15 ? -2619 : var_10)))));

                    for (int i_31 = 1; i_31 < 14;i_31 += 1)
                    {
                        var_74 &= var_5;
                        var_75 = var_15;
                        arr_102 [i_0] [i_19] [12] [i_30] [i_31] = var_9;
                        var_76 = -7169;
                    }
                    for (int i_32 = 0; i_32 < 17;i_32 += 1)
                    {
                        var_77 = 5878;
                        var_78 = (max(var_78, (!var_0)));
                        var_79 = 29311;
                    }
                }
                arr_106 [i_19] = (((var_8 > 10292) % -1));
                arr_107 [i_29] = ((24067 ? 55909 : 44556));
                arr_108 [i_0] [i_19] [i_29] = (var_3 + 1);
                var_80 = 48778;
            }
            var_81 = var_9;
        }
        arr_109 [i_0] [15] = (!var_5);
    }
    for (int i_33 = 0; i_33 < 17;i_33 += 1)
    {
        var_82 &= var_15;
        arr_113 [i_33] [i_33] = ((!(!-var_7)));
    }
    /* vectorizable */
    for (int i_34 = 0; i_34 < 14;i_34 += 1)
    {

        for (int i_35 = 2; i_35 < 11;i_35 += 1) /* same iter space */
        {
            var_83 *= (~36224);
            arr_118 [i_34] [i_35 + 3] = var_1;

            for (int i_36 = 0; i_36 < 1;i_36 += 1)
            {
                var_84 -= ((var_3 ? var_11 : var_3));
                var_85 = (min(var_85, 54373));
            }
            for (int i_37 = 0; i_37 < 14;i_37 += 1)
            {
                var_86 -= ((var_6 ? var_15 : var_4));

                for (int i_38 = 3; i_38 < 13;i_38 += 1)
                {
                    var_87 = (max(var_87, (((var_4 ? 13868813466249601918 : 18176485255783103678)))));
                    arr_128 [i_35 + 2] &= (!var_3);
                }
                for (int i_39 = 0; i_39 < 14;i_39 += 1)
                {

                    for (int i_40 = 0; i_40 < 14;i_40 += 1)
                    {
                        arr_133 [i_34] [i_34] [i_34] [i_34] [i_34] = ((var_11 ? var_6 : var_7));
                        var_88 = (((!var_2) + (!var_7)));
                        var_89 = ((var_15 ? 5091596090285036074 : 0));
                        arr_134 [i_34] [i_35] [i_37] [i_39] [i_40] [i_40] [12] = ((1 ? 65535 : var_2));
                    }
                    var_90 = (var_1 * var_15);
                }
            }
        }
        for (int i_41 = 2; i_41 < 11;i_41 += 1) /* same iter space */
        {
            var_91 = (max(var_91, var_3));
            var_92 = (max(var_92, (((var_8 << (975399036 - 975399036))))));
        }
        var_93 = (min(var_93, -146));
        var_94 = (max(var_94, (var_11 < 0)));
    }
    #pragma endscop
}
