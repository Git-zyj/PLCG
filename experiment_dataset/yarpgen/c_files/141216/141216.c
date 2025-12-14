/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 141216
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=141216 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/141216
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_19 = (((((max(9884695, 56946)))) >= var_2));

    for (int i_0 = 0; i_0 < 25;i_0 += 1) /* same iter space */
    {
        var_20 = 4172265398;
        arr_2 [i_0] |= (((arr_1 [i_0]) - ((0 ? 275856315 : -275856316))));
    }
    /* vectorizable */
    for (int i_1 = 0; i_1 < 25;i_1 += 1) /* same iter space */
    {
        var_21 ^= var_13;

        for (int i_2 = 0; i_2 < 25;i_2 += 1) /* same iter space */
        {
            var_22 = (arr_3 [i_1]);

            for (int i_3 = 2; i_3 < 24;i_3 += 1) /* same iter space */
            {

                for (int i_4 = 0; i_4 < 25;i_4 += 1)
                {
                    var_23 = (arr_9 [i_2] [i_3 + 1] [i_3 + 1]);
                    arr_12 [i_1] [i_2] [i_4] [3] [i_3 - 1] [i_2] = (((arr_5 [i_1] [i_3]) <= var_13));
                }
                for (int i_5 = 0; i_5 < 25;i_5 += 1)
                {
                    arr_15 [9] [i_2] [i_2] [i_2] [i_3] [i_2] = (arr_13 [i_2] [i_2]);
                    var_24 = (((arr_7 [1] [i_2] [i_2]) <= (var_14 && var_6)));
                    var_25 = 102;
                    arr_16 [i_2] [i_3] [i_2] [i_2] = var_3;
                    var_26 = (min(var_26, (arr_11 [0] [i_2] [i_3] [i_3 + 1])));
                }
                for (int i_6 = 3; i_6 < 21;i_6 += 1)
                {
                    var_27 = (min(var_27, (((-(arr_11 [4] [i_2] [i_3] [i_6]))))));
                    arr_19 [i_2] [i_2] [i_3] [i_2] [i_3] = (arr_0 [i_6 + 3]);
                }
                for (int i_7 = 0; i_7 < 25;i_7 += 1)
                {

                    for (int i_8 = 0; i_8 < 25;i_8 += 1)
                    {
                        var_28 = (((arr_8 [i_2] [i_2] [i_2]) ? (((arr_23 [i_1] [i_1] [i_1]) ? 768 : var_17)) : (arr_8 [12] [i_2] [16])));
                        var_29 = (i_2 % 2 == 0) ? ((((arr_13 [i_2] [i_2]) << (((((arr_6 [i_1] [i_3 - 2]) ? 17000318491984835681 : 8061)) - 17000318491984835661))))) : ((((arr_13 [i_2] [i_2]) << (((((((arr_6 [i_1] [i_3 - 2]) ? 17000318491984835681 : 8061)) - 17000318491984835661)) - 4)))));
                    }
                    for (int i_9 = 0; i_9 < 25;i_9 += 1)
                    {
                        arr_26 [i_1] [i_2] [i_1] [i_1] [i_1] = var_16;
                        arr_27 [0] [18] [i_9] [i_7] [i_7] [i_9] &= (((((var_0 ? var_18 : var_8))) ? (arr_14 [i_7] [i_2] [i_2] [6] [2] [i_2]) : (arr_0 [i_1])));
                        arr_28 [i_1] [i_2] = (var_18 > var_15);
                        arr_29 [24] [i_2] [24] [1] [i_2] = (((((arr_7 [i_3] [i_2] [i_3 - 1]) ? var_11 : var_0)) / var_12));
                        var_30 = -var_4;
                    }
                    arr_30 [i_2] = (i_2 % 2 == zero) ? (((var_3 >> (((arr_7 [i_3 - 1] [i_2] [i_7]) - 25283))))) : (((var_3 >> (((((arr_7 [i_3 - 1] [i_2] [i_7]) - 25283)) + 5628)))));
                }
                arr_31 [i_2] = (arr_14 [i_2] [i_2] [i_2] [i_3 + 1] [i_2] [i_2]);
            }
            for (int i_10 = 2; i_10 < 24;i_10 += 1) /* same iter space */
            {
                arr_34 [i_1] [i_2] [i_1] = var_16;
                arr_35 [i_1] [i_2] [i_10] = var_4;
            }
            for (int i_11 = 2; i_11 < 24;i_11 += 1) /* same iter space */
            {
                arr_40 [10] [i_1] [i_1] |= var_9;

                for (int i_12 = 1; i_12 < 24;i_12 += 1)
                {
                    var_31 = (~var_4);
                    var_32 *= var_17;
                }
                for (int i_13 = 0; i_13 < 25;i_13 += 1)
                {
                    arr_46 [i_2] = var_2;
                    var_33 |= var_13;
                    var_34 = ((((var_7 - (arr_24 [i_1] [i_1] [i_2]))) & var_7));
                    var_35 = 1;
                }
            }
            for (int i_14 = 1; i_14 < 24;i_14 += 1)
            {
                var_36 = ((var_4 && (arr_5 [i_1] [i_1])));

                for (int i_15 = 0; i_15 < 25;i_15 += 1)
                {
                    var_37 |= var_5;
                    arr_53 [2] [i_2] [i_14] [i_15] = (((var_3 || var_13) | (arr_7 [15] [i_2] [i_15])));
                    var_38 += ((var_15 ? (arr_8 [i_2] [22] [i_15]) : var_12));
                }
                for (int i_16 = 4; i_16 < 23;i_16 += 1)
                {
                    var_39 ^= ((var_16 | (arr_57 [i_1] [i_1] [i_1] [i_1] [i_1])));
                    var_40 = (min(var_40, ((((arr_23 [i_14 - 1] [i_16 - 4] [i_16 + 2]) - -var_10)))));
                }
                /* LoopNest 2 */
                for (int i_17 = 0; i_17 < 25;i_17 += 1)
                {
                    for (int i_18 = 0; i_18 < 25;i_18 += 1)
                    {
                        {
                            var_41 = (((8 | 2138558830952146910) == (arr_9 [i_2] [i_14 + 1] [i_14 + 1])));
                            arr_65 [i_2] = var_2;
                            arr_66 [i_2] = (((arr_23 [i_14] [i_14 - 1] [i_14 + 1]) ? (arr_42 [i_14] [i_14 - 1] [i_14 + 1] [i_14 - 1] [i_14 + 1] [i_14 + 1]) : var_11));
                        }
                    }
                }

                for (int i_19 = 0; i_19 < 25;i_19 += 1)
                {
                    var_42 = (((var_11 ? var_8 : var_8)));
                    arr_69 [22] [22] [14] [5] [i_2] = ((-(arr_63 [i_14 - 1] [i_14 + 1])));
                    var_43 = (max(var_43, (var_11 || var_13)));
                }
                for (int i_20 = 0; i_20 < 25;i_20 += 1)
                {
                    var_44 = ((-(arr_14 [i_2] [i_14 - 1] [i_14] [i_14 - 1] [i_14] [1])));

                    for (int i_21 = 0; i_21 < 25;i_21 += 1)
                    {
                        var_45 = ((-(arr_62 [i_14] [i_14 + 1] [i_21] [i_21])));
                        arr_75 [i_2] [i_2] [i_14] [i_20] [i_20] = (248 || 44543);
                    }
                    for (int i_22 = 4; i_22 < 23;i_22 += 1) /* same iter space */
                    {
                        var_46 = var_7;
                        var_47 = ((((arr_38 [i_22] [i_2] [i_2] [i_1]) - var_3)));
                        var_48 = var_1;
                    }
                    for (int i_23 = 4; i_23 < 23;i_23 += 1) /* same iter space */
                    {
                        var_49 = (max(var_49, ((((1018652638 - var_11) <= (var_18 > var_12))))));
                        var_50 = -var_10;
                    }
                    for (int i_24 = 4; i_24 < 23;i_24 += 1) /* same iter space */
                    {
                        var_51 = ((var_6 < (arr_80 [i_14] [i_14] [1] [i_14] [i_2] [i_14 + 1])));
                        var_52 = (min(var_52, (((-(((var_10 == (arr_6 [i_1] [i_1])))))))));
                        var_53 |= (((arr_38 [i_14 - 1] [i_24] [i_20] [i_24 - 3]) == (((var_3 >> (var_18 - 7712480701271380332))))));
                    }
                }
            }
            arr_85 [i_1] [i_2] [i_2] = (((var_4 == var_1) ^ 22706));
            arr_86 [i_2] = var_2;
            var_54 = ((var_3 - (((var_16 && (arr_3 [i_1]))))));
        }
        for (int i_25 = 0; i_25 < 25;i_25 += 1) /* same iter space */
        {
            var_55 = (min(var_55, (((var_3 ? 12 : var_12)))));
            arr_90 [i_1] [18] [i_25] &= -1;
        }
        for (int i_26 = 0; i_26 < 25;i_26 += 1) /* same iter space */
        {
            var_56 = (max(var_56, ((((arr_70 [4] [0] [i_26] [16]) - (arr_83 [i_1] [i_26] [i_1] [i_26]))))));
            arr_93 [4] [4] [4] = ((var_12 ? var_17 : var_3));
            arr_94 [i_1] [i_1] [i_1] = ((!(arr_9 [20] [1] [20])));

            for (int i_27 = 0; i_27 < 25;i_27 += 1)
            {
                var_57 = ((-(arr_55 [i_1] [22] [i_26] [i_27])));
                arr_97 [i_1] [22] [22] = ((-((12 ? 9884695 : var_18))));
                /* LoopNest 2 */
                for (int i_28 = 0; i_28 < 25;i_28 += 1)
                {
                    for (int i_29 = 0; i_29 < 25;i_29 += 1)
                    {
                        {
                            var_58 *= ((6203 ? var_2 : (arr_51 [14] [i_26] [14] [i_29])));
                            arr_102 [i_29] [i_29] = arr_56 [i_1] [i_1] [i_1] [i_1];
                            var_59 ^= var_7;
                        }
                    }
                }
            }
        }
    }
    for (int i_30 = 0; i_30 < 25;i_30 += 1) /* same iter space */
    {
        arr_106 [i_30] [i_30] = (~56946);
        var_60 &= ((var_1 ? -var_7 : ((4294967275 ? -5791547712231453836 : 208))));
        var_61 = ((~(arr_88 [i_30] [i_30] [i_30])));
        var_62 = var_0;
        var_63 = ((-((6971 ? (1 && 785) : 3072))));
    }

    for (int i_31 = 0; i_31 < 13;i_31 += 1)
    {
        arr_109 [i_31] &= var_9;

        /* vectorizable */
        for (int i_32 = 0; i_32 < 13;i_32 += 1)
        {
            var_64 |= (((5791547712231453829 < 98) > ((-(arr_99 [i_31] [12] [i_32] [i_32] [i_32])))));
            arr_112 [i_31] = var_2;
        }
    }
    for (int i_33 = 0; i_33 < 21;i_33 += 1) /* same iter space */
    {
        var_65 = (9884695 < var_13);
        var_66 = (max(var_66, (((~(((arr_43 [8] [i_33]) ? 12 : (arr_43 [1] [1]))))))));
        /* LoopNest 3 */
        for (int i_34 = 0; i_34 < 21;i_34 += 1)
        {
            for (int i_35 = 0; i_35 < 1;i_35 += 1)
            {
                for (int i_36 = 0; i_36 < 21;i_36 += 1)
                {
                    {
                        var_67 = (max(var_67, 1777022462267462908));
                        var_68 = (min(((-(var_5 == var_7))), (arr_60 [i_33] [7] [i_34] [5] [i_33])));
                        var_69 = (max(var_9, var_8));
                    }
                }
            }
        }
        var_70 = (min((((((max(434412569, 12474606899567884406))) ? ((-8 ? (arr_48 [4] [i_33] [i_33] [i_33]) : 113)) : (((arr_91 [i_33]) >> (((arr_118 [i_33] [13] [16]) - 3097632906172670901))))))), (((((arr_104 [14]) ^ 4285082597)) >> (var_12 - 1578)))));
        arr_123 [i_33] [i_33] = var_17;
    }
    for (int i_37 = 0; i_37 < 21;i_37 += 1) /* same iter space */
    {
        arr_127 [i_37] [i_37] = (max(((-(arr_124 [i_37]))), 12));
        /* LoopNest 3 */
        for (int i_38 = 2; i_38 < 20;i_38 += 1)
        {
            for (int i_39 = 0; i_39 < 21;i_39 += 1)
            {
                for (int i_40 = 0; i_40 < 1;i_40 += 1)
                {
                    {
                        var_71 &= ((((-(arr_6 [i_37] [i_37]))) & var_0));
                        var_72 = (~65535);
                    }
                }
            }
        }
    }
    var_73 = var_6;
    var_74 = (max(var_74, var_15));
    #pragma endscop
}
