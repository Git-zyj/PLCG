/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 147676
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=147676 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/147676
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_14 = (var_1 ? var_0 : ((((max(var_12, var_12))) % ((min(var_8, var_9))))));
    var_15 = -var_1;

    for (int i_0 = 0; i_0 < 24;i_0 += 1)
    {
        /* LoopNest 3 */
        for (int i_1 = 1; i_1 < 21;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 24;i_2 += 1)
            {
                for (int i_3 = 2; i_3 < 23;i_3 += 1)
                {
                    {
                        var_16 = var_10;
                        var_17 = (max((-127 - 1), var_6));
                        var_18 = var_2;
                        var_19 = (arr_2 [5]);
                        var_20 = var_3;
                    }
                }
            }
        }

        for (int i_4 = 0; i_4 < 24;i_4 += 1)
        {
            var_21 = ((125 * (-127 - 1)));
            /* LoopNest 2 */
            for (int i_5 = 1; i_5 < 23;i_5 += 1)
            {
                for (int i_6 = 4; i_6 < 23;i_6 += 1)
                {
                    {

                        /* vectorizable */
                        for (int i_7 = 4; i_7 < 23;i_7 += 1)
                        {
                            var_22 = ((!((((arr_4 [21] [i_0]) ? (arr_2 [i_4]) : var_10)))));
                            var_23 = (var_6 ^ 102);
                            var_24 = (max(var_24, 128));
                            var_25 = (max(var_25, var_1));
                            var_26 = ((arr_14 [10] [i_0] [10]) ? (arr_14 [i_5] [i_6] [i_5]) : (arr_8 [i_5] [i_5 + 1] [i_5 - 1] [i_5]));
                        }
                        /* vectorizable */
                        for (int i_8 = 1; i_8 < 23;i_8 += 1)
                        {
                            var_27 = (min(var_27, (((~(arr_14 [i_8] [i_6] [i_6 - 2]))))));
                            var_28 = var_8;
                        }
                        for (int i_9 = 0; i_9 < 24;i_9 += 1)
                        {
                            var_29 = (max((((arr_16 [i_5] [i_5 + 1] [i_5 - 1]) ? (arr_16 [i_5] [i_5 + 1] [i_5 + 1]) : var_2)), ((45686 ? -285460300 : (arr_16 [i_5] [i_5 - 1] [i_5 - 1])))));
                            var_30 = (arr_16 [i_5] [i_4] [i_4]);
                            var_31 = ((-107 ? (arr_21 [i_4] [i_5] [i_5 + 1] [i_5] [i_0]) : -1));
                            var_32 = (max(((-(arr_14 [i_6 - 1] [i_5] [i_5 - 1]))), (((arr_14 [i_6 - 4] [i_5] [i_5 + 1]) ? var_13 : (arr_7 [5] [i_6] [i_6 - 3] [i_5])))));
                            var_33 -= ((~(arr_11 [i_5 - 1] [i_5 + 1])));
                        }
                        var_34 = ((1 ? 65534 : 62450));
                        var_35 = (arr_5 [i_5] [i_5]);
                        var_36 = (~-268434432);
                    }
                }
            }
            var_37 |= var_5;
            var_38 += ((-((max(var_1, var_6)))));

            for (int i_10 = 1; i_10 < 23;i_10 += 1)
            {
                /* LoopNest 2 */
                for (int i_11 = 0; i_11 < 24;i_11 += 1)
                {
                    for (int i_12 = 4; i_12 < 23;i_12 += 1)
                    {
                        {
                            var_39 = 82;
                            var_40 = (min(var_4, (-var_10 * var_4)));
                        }
                    }
                }
                var_41 = (var_5 ? var_12 : (((!(arr_30 [i_0] [i_10] [i_0] [20] [i_10 - 1])))));
                /* LoopNest 2 */
                for (int i_13 = 0; i_13 < 24;i_13 += 1)
                {
                    for (int i_14 = 0; i_14 < 24;i_14 += 1)
                    {
                        {
                            var_42 = (((((!var_4) ? -var_11 : ((var_4 ? var_1 : (arr_28 [i_0] [i_0] [i_0] [i_10 - 1] [i_0] [i_0]))))) | var_8));
                            var_43 = ((((max((((!(arr_9 [i_13] [i_4] [i_4])))), (((arr_14 [i_14] [i_13] [15]) ? var_1 : (arr_27 [i_10])))))) ? (((!((((arr_20 [i_13] [1] [i_10] [i_13] [13]) ? var_11 : var_2)))))) : (min(((var_9 ? var_3 : var_11)), ((max(var_9, var_7)))))));
                        }
                    }
                }
            }
            for (int i_15 = 4; i_15 < 22;i_15 += 1)
            {

                for (int i_16 = 0; i_16 < 24;i_16 += 1)
                {
                    var_44 = (((arr_22 [i_15] [i_15] [i_15] [i_15 - 1] [i_16]) ? (arr_37 [i_15] [i_15] [i_15] [i_15 - 3]) : (!var_8)));

                    /* vectorizable */
                    for (int i_17 = 0; i_17 < 24;i_17 += 1)
                    {
                        var_45 = -var_4;
                        var_46 = (((arr_32 [i_0] [i_0] [i_15 - 1] [0] [4]) ^ 112));
                        var_47 = (~(arr_46 [4] [i_4] [i_4] [i_4] [i_4]));
                    }
                    /* vectorizable */
                    for (int i_18 = 0; i_18 < 24;i_18 += 1)
                    {
                        var_48 = (((arr_15 [i_15]) ? -1 : ((var_5 ? 1065353216 : 3085))));
                        var_49 = (min(var_49, (((~(arr_46 [10] [i_16] [i_4] [i_4] [i_0]))))));
                    }
                    for (int i_19 = 2; i_19 < 20;i_19 += 1)
                    {
                        var_50 -= (max(((-(var_1 & var_1))), ((-(arr_49 [9] [i_15] [i_19 + 3] [i_15] [i_15 - 1] [i_15 - 1])))));
                        var_51 = (min(((((arr_49 [i_0] [13] [i_4] [1] [i_19] [1]) ? var_11 : ((min(49658, 31295)))))), (max(var_11, var_2))));
                        var_52 = var_13;
                    }
                    for (int i_20 = 0; i_20 < 24;i_20 += 1)
                    {
                        var_53 *= 9164417618809333001;
                        var_54 = var_11;
                        var_55 &= var_5;
                    }
                }
                var_56 = (min(var_56, (((!(arr_18 [i_15]))))));
                var_57 -= ((!(arr_16 [i_0] [20] [i_15])));
                var_58 = (max((arr_37 [i_0] [i_15] [i_15 - 3] [i_15]), 56));
            }
            for (int i_21 = 2; i_21 < 23;i_21 += 1)
            {
                /* LoopNest 2 */
                for (int i_22 = 2; i_22 < 23;i_22 += 1)
                {
                    for (int i_23 = 0; i_23 < 24;i_23 += 1)
                    {
                        {
                            var_59 = (max(30731, -57));
                            var_60 = (arr_30 [i_21 - 2] [i_4] [16] [i_4] [i_22 - 2]);
                            var_61 = (((((49675 ? -3067465585043655992 : var_2))) ? (max(var_5, (arr_39 [i_22 + 1]))) : (arr_39 [i_22 - 1])));
                            var_62 += (arr_56 [i_21] [i_21 + 1] [i_21]);
                        }
                    }
                }
                /* LoopNest 2 */
                for (int i_24 = 4; i_24 < 23;i_24 += 1)
                {
                    for (int i_25 = 0; i_25 < 24;i_25 += 1)
                    {
                        {
                            var_63 &= var_8;
                            var_64 = max((arr_15 [i_24]), ((var_4 ? (arr_57 [i_0] [i_24]) : (max((arr_41 [i_24] [i_4] [i_24]), var_13)))));
                        }
                    }
                }
            }
            for (int i_26 = 0; i_26 < 24;i_26 += 1)
            {
                var_65 *= ((!(arr_66 [i_0] [i_4] [i_0] [i_26] [i_0])));
                /* LoopNest 2 */
                for (int i_27 = 0; i_27 < 24;i_27 += 1)
                {
                    for (int i_28 = 0; i_28 < 24;i_28 += 1)
                    {
                        {
                            var_66 = (~165);
                            var_67 = (max(var_67, ((max(-var_0, (arr_42 [i_0]))))));
                            var_68 = var_8;
                            var_69 &= ((((3072 ? -1873865017 : 121))) ? var_11 : (arr_58 [i_0] [i_0] [i_0] [i_28]));
                        }
                    }
                }
                var_70 *= (arr_8 [i_0] [23] [i_4] [i_26]);

                /* vectorizable */
                for (int i_29 = 2; i_29 < 23;i_29 += 1)
                {
                    var_71 += (((arr_16 [i_0] [i_29 + 1] [i_0]) ? (arr_16 [i_29] [i_29 + 1] [i_29]) : var_1));
                    var_72 = var_13;
                    var_73 = (min(var_73, var_7));
                    var_74 ^= ((49658 ? 32767 : ((var_12 ? var_12 : var_1))));
                }
                /* vectorizable */
                for (int i_30 = 0; i_30 < 24;i_30 += 1) /* same iter space */
                {
                    var_75 = (arr_80 [18] [i_26] [i_30]);
                    var_76 = (arr_43 [i_4] [17] [17] [i_4]);
                }
                /* vectorizable */
                for (int i_31 = 0; i_31 < 24;i_31 += 1) /* same iter space */
                {
                    var_77 = (min(var_77, var_9));
                    var_78 = var_5;
                    var_79 = (max(var_79, var_5));
                }
                for (int i_32 = 2; i_32 < 23;i_32 += 1)
                {
                    var_80 = var_2;
                    var_81 = (arr_8 [i_0] [i_0] [i_0] [i_0]);
                    var_82 = (arr_11 [i_0] [i_0]);
                }
                var_83 = ((-(max(var_5, var_13))));
            }
        }
        for (int i_33 = 1; i_33 < 21;i_33 += 1)
        {

            for (int i_34 = 1; i_34 < 22;i_34 += 1)
            {

                for (int i_35 = 0; i_35 < 24;i_35 += 1)
                {
                    var_84 = ((((max((arr_68 [i_35]), var_3))) ? var_11 : 3961783935));
                    var_85 += (min(var_10, (max((!326954683), (((arr_11 [14] [17]) - (arr_53 [6] [i_0] [i_33] [i_34] [i_34] [4] [6])))))));
                }
                /* LoopNest 2 */
                for (int i_36 = 0; i_36 < 24;i_36 += 1)
                {
                    for (int i_37 = 0; i_37 < 24;i_37 += 1)
                    {
                        {
                            var_86 = ((((-((max(var_8, 1))))) <= ((var_3 * (arr_69 [i_34 + 2] [i_33 - 1] [i_33])))));
                            var_87 -= (arr_67 [i_33 - 1] [i_33 - 1] [i_33 - 1] [i_34 + 2]);
                        }
                    }
                }

                for (int i_38 = 1; i_38 < 22;i_38 += 1)
                {
                    var_88 |= ((((max(var_4, ((var_6 ? (arr_36 [14] [i_34 - 1] [9] [i_0]) : (arr_73 [i_0] [i_0] [i_0] [14] [i_0] [i_0])))))) ? (!var_5) : (max((var_10 & var_0), 6805674213840613104))));

                    for (int i_39 = 2; i_39 < 21;i_39 += 1)
                    {
                        var_89 = (max(var_89, var_4));
                        var_90 = (max(var_90, (((((!(arr_39 [i_38 - 1]))) ? (arr_47 [i_38] [i_39] [i_38 + 2] [i_38 + 1] [i_38 + 2]) : (!var_13))))));
                    }
                    var_91 -= (((var_13 ? (arr_58 [i_34] [i_34] [i_34 - 1] [i_34]) : (arr_38 [i_0] [i_34] [i_0] [i_0]))));
                    var_92 = ((!((((2032 ? var_1 : var_6))))));
                }
            }
            var_93 = ((-(max(((max(var_6, var_12))), (((arr_101 [i_0] [i_0] [i_0] [i_0] [i_0] [i_0] [i_0]) ? var_11 : var_2))))));
        }
    }
    #pragma endscop
}
