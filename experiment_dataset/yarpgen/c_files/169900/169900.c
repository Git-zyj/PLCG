/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 169900
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=169900 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/169900
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 3; i_0 < 21;i_0 += 1)
    {

        for (int i_1 = 0; i_1 < 23;i_1 += 1)
        {
            var_12 = -var_7;
            var_13 = (max(var_13, var_4));
            arr_5 [i_0 - 1] [i_1] = (((((var_10 ? var_7 : var_4))) ? ((var_3 ? var_7 : var_11)) : ((max(var_11, var_0)))));

            for (int i_2 = 0; i_2 < 23;i_2 += 1)
            {
                var_14 ^= (min(4611686018427387904, (((47 ? 935055909 : 129)))));
                var_15 = ((~((max(var_6, var_4)))));
            }
        }

        /* vectorizable */
        for (int i_3 = 0; i_3 < 1;i_3 += 1)
        {
            arr_10 [i_0] [i_3] = ((-89 ? 0 : 18883));

            for (int i_4 = 0; i_4 < 23;i_4 += 1)
            {
                arr_13 [i_0 - 3] [i_3] [i_4] = -24;
                var_16 = (max(var_16, var_8));
            }
            for (int i_5 = 0; i_5 < 23;i_5 += 1)
            {
                var_17 = (((var_3 ? var_1 : var_3)));

                for (int i_6 = 2; i_6 < 21;i_6 += 1)
                {
                    arr_22 [i_0] [i_6] [i_0] [i_6] [i_3] [11] = var_5;
                    var_18 = ((var_3 ? var_4 : var_11));
                    arr_23 [i_0] [i_0] [i_6] [i_6] = var_8;
                    var_19 -= 24842;
                }
                for (int i_7 = 0; i_7 < 0;i_7 += 1)
                {
                    var_20 = ((var_2 ? var_9 : var_9));

                    for (int i_8 = 0; i_8 < 23;i_8 += 1)
                    {
                        arr_29 [i_0] [i_3] [i_7] [i_7] [15] = var_7;
                        var_21 = (max(var_21, (~24865)));
                    }
                    for (int i_9 = 0; i_9 < 23;i_9 += 1)
                    {
                        var_22 += var_6;
                        var_23 = ((var_4 ? var_3 : var_3));
                        arr_32 [i_5] [15] [i_7] [i_5] = ((var_9 ? var_11 : var_1));
                        arr_33 [i_0] [i_3] [i_7] [i_7] [i_9] = ((var_7 ? var_1 : var_4));
                        var_24 = (min(var_24, (!var_8)));
                    }
                    for (int i_10 = 0; i_10 < 23;i_10 += 1)
                    {
                        arr_36 [i_7] = var_4;
                        var_25 = ((935055882 ? 258048 : 66));
                        var_26 = (max(var_26, -var_5));
                        var_27 = (max(var_27, (((var_6 ? var_7 : var_7)))));
                    }
                    var_28 ^= ((-((var_4 ? var_5 : var_5))));
                }
            }
            for (int i_11 = 0; i_11 < 23;i_11 += 1)
            {
                arr_39 [i_0] [i_0] [i_0] = var_2;
                var_29 = -var_1;
                var_30 |= -var_5;
                arr_40 [i_3] = ((var_2 ? var_8 : (!var_2)));
            }
            for (int i_12 = 0; i_12 < 23;i_12 += 1)
            {
                arr_44 [i_0 - 3] [i_3] [i_12] [i_12] = ((var_11 ? var_1 : (~var_4)));
                arr_45 [i_0] [2] = ((var_4 ? var_10 : var_8));
                var_31 += ((var_5 ? var_4 : var_5));
                var_32 = (max(var_32, (((26 ? 9237940696483671726 : 0)))));
            }
            var_33 = var_3;
            arr_46 [i_0 - 1] = ((var_7 ? var_1 : var_0));

            for (int i_13 = 1; i_13 < 22;i_13 += 1)
            {

                for (int i_14 = 0; i_14 < 23;i_14 += 1) /* same iter space */
                {
                    arr_54 [i_0] [i_13] = ((var_0 ? var_6 : var_1));

                    for (int i_15 = 0; i_15 < 23;i_15 += 1)
                    {
                        var_34 = ((var_0 ? var_5 : var_8));
                        var_35 = ((var_5 ? var_4 : var_7));
                        var_36 = (0 ? 3508072775 : -9267);
                    }
                    for (int i_16 = 3; i_16 < 22;i_16 += 1)
                    {
                        arr_60 [i_0 - 1] [i_3] [i_13 - 1] [9] [i_13] = var_9;
                        var_37 = (min(var_37, (~var_7)));
                    }
                    for (int i_17 = 0; i_17 < 23;i_17 += 1)
                    {
                        var_38 = var_4;
                        arr_63 [i_13] = -342870459;
                        arr_64 [i_13] [i_3] = var_11;
                    }
                    arr_65 [i_0] [i_3] [i_13] [20] [i_13 - 1] [i_14] = var_7;
                }
                for (int i_18 = 0; i_18 < 23;i_18 += 1) /* same iter space */
                {

                    for (int i_19 = 0; i_19 < 23;i_19 += 1)
                    {
                        var_39 = var_4;
                        var_40 = (~607196234);
                    }
                    for (int i_20 = 0; i_20 < 23;i_20 += 1)
                    {
                        arr_73 [i_0] [i_13] [i_0] [21] [i_13 + 1] [i_3] [i_3] = var_2;
                        var_41 = ((var_3 ? var_8 : var_6));
                    }

                    for (int i_21 = 0; i_21 < 23;i_21 += 1)
                    {
                        var_42 = var_8;
                        var_43 ^= var_7;
                    }
                    for (int i_22 = 1; i_22 < 22;i_22 += 1)
                    {
                        arr_79 [i_18] [i_18] [i_13] = ((var_0 ? var_2 : var_3));
                        var_44 = var_0;
                        var_45 *= ((var_8 ? var_8 : var_10));
                    }
                    var_46 = var_7;

                    for (int i_23 = 0; i_23 < 23;i_23 += 1)
                    {
                        var_47 = var_1;
                        var_48 = var_1;
                        var_49 = ((var_0 ? var_4 : var_7));
                        arr_82 [i_18] [i_13] [i_13] [i_13] [i_0] = 18446744073709551613;
                    }
                    for (int i_24 = 0; i_24 < 23;i_24 += 1)
                    {
                        arr_86 [i_13] [i_13 + 1] [i_18] = (!var_2);
                        var_50 *= ((var_0 ? ((var_2 ? var_4 : var_9)) : var_7));
                    }
                    for (int i_25 = 1; i_25 < 1;i_25 += 1)
                    {
                        var_51 += var_9;
                        var_52 ^= var_7;
                        arr_90 [i_13] = ((var_6 ? var_10 : var_0));
                        arr_91 [i_18] [i_3] [i_13 - 1] [i_18] [i_25] &= ((var_4 ? var_2 : var_3));
                    }
                }
                var_53 = ((22544 ? -1 : 66));
            }
            for (int i_26 = 2; i_26 < 21;i_26 += 1)
            {
                arr_95 [11] [12] [i_3] [i_26] = (!var_7);
                var_54 = (-477544880 ? 16256 : 25707);

                for (int i_27 = 0; i_27 < 23;i_27 += 1)
                {

                    for (int i_28 = 0; i_28 < 23;i_28 += 1)
                    {
                        arr_102 [i_0] |= 1;
                        arr_103 [i_28] [i_26] [i_26] [i_3] [i_0] = ((var_6 ? var_0 : var_0));
                        var_55 = ((var_3 ? var_10 : var_10));
                        var_56 *= ((23272 ? 18446744073709551613 : 1));
                    }
                    for (int i_29 = 0; i_29 < 23;i_29 += 1)
                    {
                        arr_106 [i_29] [i_3] [i_26] [2] = ((var_9 ? var_11 : var_8));
                        var_57 -= (!3844063140);
                        arr_107 [i_29] [i_3] [i_26] [i_27] = var_0;
                        arr_108 [i_0 + 2] [i_0 - 2] [14] [i_29] [i_0 - 3] [1] [i_0] = (~var_7);
                    }
                    for (int i_30 = 0; i_30 < 23;i_30 += 1)
                    {
                        var_58 = (~var_5);
                        arr_113 [7] [i_3] [i_26] [i_27] [i_30] = ((var_2 ? var_11 : var_3));
                        var_59 = (~-1);
                        arr_114 [i_0] [i_3] [3] [i_27] [i_30] = ((-900656737 ? 140 : 1));
                        arr_115 [i_30] [1] [i_0 - 3] = var_8;
                    }
                    var_60 |= (var_7 ? var_0 : var_11);
                }
                for (int i_31 = 0; i_31 < 1;i_31 += 1)
                {
                    arr_118 [i_31] = var_3;
                    var_61 += var_3;
                }
                var_62 = (min(var_62, var_3));
                arr_119 [i_0 - 1] [i_0 - 1] [i_26] = ((-((var_1 ? var_11 : var_5))));
            }
        }
        /* vectorizable */
        for (int i_32 = 1; i_32 < 1;i_32 += 1)
        {

            for (int i_33 = 0; i_33 < 23;i_33 += 1)
            {

                for (int i_34 = 0; i_34 < 1;i_34 += 1) /* same iter space */
                {
                    var_63 = (max(var_63, (!var_7)));
                    arr_130 [i_0 + 1] [i_32 - 1] [i_33] [i_32 - 1] [i_33] [6] = -48;

                    for (int i_35 = 0; i_35 < 23;i_35 += 1)
                    {
                        var_64 = (max(var_64, (~-2147483636)));
                        arr_133 [i_0] [i_32 - 1] [18] [i_35] = ((var_5 ? var_2 : var_7));
                    }
                    for (int i_36 = 0; i_36 < 23;i_36 += 1)
                    {
                        var_65 = (min(var_65, (((var_3 ? var_10 : var_3)))));
                        var_66 = (min(var_66, (~var_2)));
                    }
                    for (int i_37 = 0; i_37 < 23;i_37 += 1)
                    {
                        var_67 = ((var_9 ? var_8 : var_11));
                        var_68 += (~var_3);
                        var_69 = var_9;
                        var_70 = (min(var_70, (((var_8 ? var_8 : (~71))))));
                    }
                    arr_141 [i_0] [i_32 - 1] [i_34] = ((var_4 ? var_8 : var_6));
                }
                for (int i_38 = 0; i_38 < 1;i_38 += 1) /* same iter space */
                {
                    var_71 = ((var_8 ? var_2 : var_10));
                    var_72 ^= (var_9 ? ((var_0 ? var_5 : var_5)) : var_5);

                    for (int i_39 = 2; i_39 < 22;i_39 += 1)
                    {
                        var_73 = var_9;
                        var_74 = ((var_1 ? var_7 : var_10));
                        arr_147 [i_0 + 2] [i_32] [i_33] [i_38] [i_39] = var_1;
                    }
                    for (int i_40 = 0; i_40 < 23;i_40 += 1)
                    {
                        arr_150 [i_40] [i_40] [1] [i_38] [2] = var_8;
                        arr_151 [11] [i_33] [19] [i_38] [i_33] = var_8;
                    }
                    for (int i_41 = 0; i_41 < 23;i_41 += 1)
                    {
                        arr_154 [i_0] [i_33] [i_38] [i_38] = var_5;
                        arr_155 [i_0] [i_32] [i_33] [i_38] [i_41] = ((465450766 ? -935055903 : 13819));
                        arr_156 [i_38] [i_32 - 1] [i_32] [10] [i_32] = ((var_2 ? (((var_3 ? var_0 : var_7))) : ((var_2 ? var_6 : var_9))));
                    }
                    var_75 = (max(var_75, (((var_11 ? var_9 : var_5)))));
                    var_76 = ((-var_10 ? var_5 : var_4));
                }
                var_77 = (var_2 ? var_8 : var_2);
            }
            for (int i_42 = 0; i_42 < 23;i_42 += 1)
            {
                var_78 = 7;
                var_79 = (!var_3);
                var_80 = (max(var_80, var_11));

                for (int i_43 = 0; i_43 < 23;i_43 += 1)
                {
                    var_81 ^= ((var_7 ? var_2 : var_9));
                    var_82 = ((var_5 ? var_8 : var_2));
                }
            }
            var_83 += ((var_9 ? var_10 : var_3));
            arr_162 [i_32 - 1] = var_7;
            var_84 = ((var_5 ? var_9 : var_0));
        }
        var_85 ^= (((((var_11 ? var_1 : var_7))) ? var_6 : (max((((4294967291 ? var_2 : 935055871))), -127436357161748817))));
    }
    var_86 = ((!((max(var_8, var_6)))));

    /* vectorizable */
    for (int i_44 = 1; i_44 < 24;i_44 += 1)
    {

        for (int i_45 = 2; i_45 < 23;i_45 += 1)
        {
            var_87 = ((var_1 ? (((var_2 ? var_8 : var_3))) : var_9));

            for (int i_46 = 1; i_46 < 1;i_46 += 1)
            {
                var_88 = (max(var_88, var_0));

                for (int i_47 = 0; i_47 < 25;i_47 += 1)
                {
                    var_89 += (((((var_1 ? var_2 : var_2))) ? var_6 : var_8));
                    arr_171 [i_44] = var_7;
                    var_90 = ((var_7 ? var_7 : var_7));
                    var_91 = ((var_0 ? (((-9223372036854775807 - 1) ? -765192989 : -1437205825)) : var_8));

                    for (int i_48 = 0; i_48 < 25;i_48 += 1)
                    {
                        arr_174 [i_44] [i_44] [i_44] [i_47] [i_44] = ((var_6 ? var_10 : var_2));
                        arr_175 [i_44] [i_44] = ((var_1 ? var_2 : var_8));
                        arr_176 [i_44 - 1] [16] [i_46] [6] [i_44] = ((64 ? 198 : 2890));
                        arr_177 [1] [i_47] [i_46] [i_44] [i_46] [i_45] [i_44] = (var_3 ? var_10 : var_3);
                        var_92 = ((var_8 ? var_1 : var_10));
                    }
                }
            }
        }
        var_93 = (max(var_93, (((var_9 ? var_3 : ((935055871 ? -26237 : 0)))))));
    }
    #pragma endscop
}
