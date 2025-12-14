/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 113789
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=113789 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/113789
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 3; i_0 < 12;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 15;i_1 += 1)
        {
            {

                for (int i_2 = 0; i_2 < 15;i_2 += 1)
                {
                    var_20 = ((((max(-4, (!var_16)))) ? ((-1628599879 ? (-127 - 1) : 4188778187)) : var_3));
                    var_21 = ((min(1228576670, 13555421426799793251)));
                    var_22 = (~((0 ? 1 : var_12)));

                    for (int i_3 = 0; i_3 < 15;i_3 += 1)
                    {
                        arr_12 [i_2] [i_0] [i_2] [9] [i_2] [i_1] = ((!((max(var_5, var_18)))));
                        arr_13 [i_0] [i_1] [i_2] [i_3] [i_2] [i_0] = (min(((max(var_0, var_10))), (((-127 - 1) ? (((var_1 ? var_19 : 0))) : var_11))));
                        arr_14 [i_0] [i_0] = ((((min(-75, var_15))) ? ((1 ? -42 : var_1)) : -var_13));
                        var_23 = (min(var_23, (max(((31 ? var_19 : var_14)), ((var_12 ? 41 : var_8))))));
                    }
                    for (int i_4 = 0; i_4 < 15;i_4 += 1)
                    {
                        arr_17 [i_0] [i_2] [i_1] [i_0] = ((var_5 ? ((71 ? var_0 : var_9)) : var_5));
                        arr_18 [i_0] [i_0] [i_2] [i_0] = var_0;
                        arr_19 [i_0 - 2] [i_0] [i_1] [i_2] [10] [i_4] |= (min(-var_10, (((var_7 ? -1905723240 : var_16)))));
                        var_24 = ((((((((0 ? var_4 : var_11))) ? -76 : (max(var_12, var_10))))) ? (!5933057473059572452) : (+-4294967295)));
                    }
                    /* vectorizable */
                    for (int i_5 = 0; i_5 < 15;i_5 += 1)
                    {
                        var_25 = (max(var_25, (((var_12 ? 0 : 4095)))));
                        arr_22 [i_0] [2] [i_0] = var_15;
                    }
                    /* vectorizable */
                    for (int i_6 = 1; i_6 < 14;i_6 += 1)
                    {
                        var_26 = var_14;

                        for (int i_7 = 3; i_7 < 14;i_7 += 1) /* same iter space */
                        {
                            arr_29 [i_7] [i_0] [i_2] [i_0] [i_0] = 62;
                            arr_30 [i_0] [i_0 - 1] [i_0] [i_0] [i_0] [i_0] [i_0 - 2] = ((1 ? (!1) : 1));
                        }
                        for (int i_8 = 3; i_8 < 14;i_8 += 1) /* same iter space */
                        {
                            arr_35 [i_0] [i_0] [i_0] [i_0] = ((125 ? var_10 : var_7));
                            var_27 -= (((-18 ? var_13 : var_6)));
                        }
                    }
                }
                /* LoopNest 3 */
                for (int i_9 = 2; i_9 < 11;i_9 += 1)
                {
                    for (int i_10 = 3; i_10 < 12;i_10 += 1)
                    {
                        for (int i_11 = 0; i_11 < 1;i_11 += 1)
                        {
                            {
                                arr_47 [i_0] [i_1] [i_9] [i_10 - 2] [i_10] [i_1] [i_11] = (min(75, (~-95)));
                                var_28 = (min(var_28, (((((min(1, 6603087518507738278))) ? ((var_6 ? var_4 : (((max(-76, var_18)))))) : ((((((14 ? -4096 : -2))) ? (-2147483647 - 1) : ((max(var_8, var_16)))))))))));
                            }
                        }
                    }
                }
                var_29 = (min(var_29, ((((((75 ? 1 : var_17))) ? ((((!(((var_12 ? -1066997030 : 6370511143030206881))))))) : ((18329 ? 1747014103 : -var_3)))))));
                /* LoopNest 2 */
                for (int i_12 = 0; i_12 < 15;i_12 += 1)
                {
                    for (int i_13 = 0; i_13 < 15;i_13 += 1)
                    {
                        {
                            arr_52 [i_0] [i_1] [i_1] [i_0] [i_1] = (max((min(var_16, 268434432)), ((max(var_19, var_6)))));
                            arr_53 [i_0] [i_1] [i_12] [1] &= (min((~var_3), (~-76)));
                            var_30 = (min(var_30, ((max(var_13, ((max(var_1, var_16))))))));
                            var_31 = (min(var_31, 268434407));
                        }
                    }
                }
            }
        }
    }

    /* vectorizable */
    for (int i_14 = 0; i_14 < 24;i_14 += 1)
    {
        arr_58 [i_14] = ((var_12 ? var_7 : ((var_10 ? 4229624189 : 27))));

        for (int i_15 = 0; i_15 < 24;i_15 += 1)
        {

            for (int i_16 = 1; i_16 < 22;i_16 += 1)
            {
                var_32 = (max(var_32, (((var_13 ? 4026532863 : 1469845576)))));
                /* LoopNest 2 */
                for (int i_17 = 0; i_17 < 24;i_17 += 1)
                {
                    for (int i_18 = 0; i_18 < 24;i_18 += 1)
                    {
                        {
                            arr_69 [i_15] [i_15] [i_15] [i_15] [i_15] [i_15] = -0;
                            arr_70 [i_15] = var_11;
                            var_33 = 41;
                            var_34 = (--12782746553285936637);
                        }
                    }
                }

                for (int i_19 = 0; i_19 < 24;i_19 += 1) /* same iter space */
                {
                    arr_75 [i_14] [i_15] [i_15] [i_15] = var_7;
                    arr_76 [i_15] = (-32767 - 1);
                }
                for (int i_20 = 0; i_20 < 24;i_20 += 1) /* same iter space */
                {
                    var_35 = (max(var_35, (~0)));
                    var_36 = (~var_5);
                    arr_79 [i_14] [i_16] [i_15] = (((!var_18) ? var_3 : 0));
                    arr_80 [i_14] [i_15] [i_20] = ((4026532888 ? 1 : (-9223372036854775807 - 1)));
                    var_37 = (min(var_37, (!var_0)));
                }
                /* LoopNest 2 */
                for (int i_21 = 0; i_21 < 24;i_21 += 1)
                {
                    for (int i_22 = 3; i_22 < 22;i_22 += 1)
                    {
                        {
                            arr_88 [i_15] [i_15] [i_16] [i_21] [i_22 - 1] = (~32767);
                            var_38 = (min(var_38, ((var_11 ? var_13 : 28726))));
                            var_39 = (max(var_39, (((0 ? 65440 : var_19)))));
                        }
                    }
                }

                for (int i_23 = 0; i_23 < 24;i_23 += 1)
                {
                    arr_92 [i_14] [i_14] [i_15] [i_14] = var_1;
                    arr_93 [i_15] = -95;
                    var_40 = ((1 ? var_7 : var_13));
                }
            }
            arr_94 [i_15] [i_15] [i_15] = ((-2147483642 ? 16383 : (((1 ? var_2 : 2590)))));

            for (int i_24 = 0; i_24 < 24;i_24 += 1)
            {
                arr_99 [i_14] [i_14] [i_15] = var_0;

                for (int i_25 = 1; i_25 < 21;i_25 += 1)
                {
                    arr_103 [i_15] [i_15] [i_24] [i_25] [i_15] [i_24] = (~11);
                    arr_104 [i_25] [i_15] [i_15] [i_15] [5] = (~var_17);
                    var_41 = (min(var_41, var_6));
                    arr_105 [i_15] [i_25] = 123;

                    for (int i_26 = 0; i_26 < 1;i_26 += 1)
                    {
                        var_42 += 117;
                        var_43 = ((-94 ? 32767 : 1));
                        var_44 = 268434407;
                        var_45 = (~var_1);
                        var_46 = 9223372036854775807;
                    }
                    for (int i_27 = 0; i_27 < 24;i_27 += 1)
                    {
                        var_47 = ((!(~var_18)));
                        arr_110 [i_14] [i_15] [i_15] [i_25] [i_27] = (!var_8);
                    }
                    for (int i_28 = 2; i_28 < 22;i_28 += 1)
                    {
                        arr_113 [i_15] [i_28 - 1] = (-9223372036854775807 - 1);
                        arr_114 [i_15] [i_15] = -2147483642;
                    }
                }
                arr_115 [i_14] [i_15] [i_24] = 1;
                arr_116 [i_15] [i_15] = ((var_18 ? var_19 : 1));
            }
            for (int i_29 = 0; i_29 < 24;i_29 += 1)
            {
                var_48 = 102;
                var_49 = (max(var_49, (((var_15 ? var_16 : -2787)))));
                var_50 += ((-28 ? -118 : var_18));
            }
            var_51 = (!var_4);
        }
    }
    for (int i_30 = 3; i_30 < 12;i_30 += 1)
    {
        /* LoopNest 2 */
        for (int i_31 = 2; i_31 < 13;i_31 += 1)
        {
            for (int i_32 = 1; i_32 < 1;i_32 += 1)
            {
                {
                    arr_127 [i_30] [i_32] [i_30] = (min(-var_4, var_8));
                    /* LoopNest 2 */
                    for (int i_33 = 2; i_33 < 13;i_33 += 1)
                    {
                        for (int i_34 = 1; i_34 < 1;i_34 += 1)
                        {
                            {
                                var_52 = (min(((max(1, var_16))), (max(60948, ((max((-32767 - 1), var_16)))))));
                                var_53 = (((!124) ? -var_1 : (!var_2)));
                            }
                        }
                    }
                }
            }
        }
        var_54 = -1683510206;
        /* LoopNest 2 */
        for (int i_35 = 0; i_35 < 15;i_35 += 1)
        {
            for (int i_36 = 0; i_36 < 15;i_36 += 1)
            {
                {
                    arr_139 [i_30] = var_17;

                    for (int i_37 = 0; i_37 < 1;i_37 += 1) /* same iter space */
                    {
                        var_55 = (max((!-91), ((var_0 ? 31 : 1))));
                        var_56 ^= ((((((min(var_8, var_19))))) ? -var_11 : ((min((max(31, 2147483641)), -1933160541)))));
                    }
                    for (int i_38 = 0; i_38 < 1;i_38 += 1) /* same iter space */
                    {
                        arr_146 [12] &= (((!1) ? var_19 : (max(3588326508700177085, 1772293473))));
                        var_57 = 1;
                        var_58 = (~(min((~2147483638), var_6)));
                    }
                    for (int i_39 = 0; i_39 < 1;i_39 += 1) /* same iter space */
                    {
                        var_59 += (((var_18 ? var_16 : var_16)));
                        arr_149 [i_30] = ((((max(1, 2147483627))) ? -var_9 : 1));

                        for (int i_40 = 3; i_40 < 14;i_40 += 1)
                        {
                            var_60 = 1;
                            var_61 = (max(var_61, (((!(((var_10 ? var_14 : var_16))))))));
                        }
                        for (int i_41 = 0; i_41 < 15;i_41 += 1)
                        {
                            var_62 = ((-((~((var_14 ? var_15 : var_16))))));
                            var_63 = (min(var_63, var_3));
                        }
                    }
                    /* vectorizable */
                    for (int i_42 = 0; i_42 < 1;i_42 += 1) /* same iter space */
                    {
                        arr_158 [i_42] [1] [i_35] [i_30] [1] [i_30] &= -2147483642;
                        var_64 = ((46105 ? var_17 : var_6));
                        var_65 = -var_16;
                        arr_159 [i_30] = -var_7;
                    }
                    var_66 = ((((max(var_3, var_8))) ? 108 : ((var_7 ? var_18 : 4294967283))));
                    var_67 ^= min((((~(!-23773)))), (max(var_0, var_15)));
                }
            }
        }

        for (int i_43 = 0; i_43 < 15;i_43 += 1)
        {
            var_68 -= var_18;
            arr_162 [i_30] [i_30] [i_43] = ((~((var_9 ? 1 : 1))));
            arr_163 [i_30] [i_43] [i_43] = (min((~var_12), ((min(var_17, 129)))));
        }
    }
    var_69 = var_13;
    #pragma endscop
}
