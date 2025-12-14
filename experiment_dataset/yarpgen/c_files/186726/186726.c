/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 186726
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=186726 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/186726
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 0; i_0 < 23;i_0 += 1)
    {

        /* vectorizable */
        for (int i_1 = 2; i_1 < 19;i_1 += 1)
        {
            var_18 = ((-((var_6 ? var_14 : 5878))));
            var_19 = var_8;
        }
        var_20 += ((((var_17 + 2147483647) << (var_14 < 0))));
        var_21 = (min(var_21, (((min(var_4, (!-31669))) >= -14184))));
        var_22 ^= (min((min(var_4, var_13)), 39167));
    }
    for (int i_2 = 3; i_2 < 11;i_2 += 1)
    {
        /* LoopNest 3 */
        for (int i_3 = 1; i_3 < 11;i_3 += 1)
        {
            for (int i_4 = 3; i_4 < 12;i_4 += 1)
            {
                for (int i_5 = 0; i_5 < 13;i_5 += 1)
                {
                    {
                        var_23 = ((var_17 ? ((min(var_8, var_16))) : 1));
                        arr_15 [i_2] [i_3] = (var_8 < var_10);
                        var_24 = var_16;

                        for (int i_6 = 0; i_6 < 13;i_6 += 1)
                        {
                            var_25 = (max(var_25, (((~(((!var_5) ? ((var_4 ? var_13 : var_15)) : -var_15)))))));
                            var_26 = var_15;
                        }
                    }
                }
            }
        }
        var_27 = ((var_9 % (~var_11)));
        var_28 = (-8750104788615469370 & 68184797);
    }
    /* vectorizable */
    for (int i_7 = 0; i_7 < 17;i_7 += 1)
    {
        var_29 = ((var_15 ? var_8 : var_16));
        arr_20 [i_7] = var_7;
        var_30 = (-77 < var_10);
    }

    /* vectorizable */
    for (int i_8 = 0; i_8 < 11;i_8 += 1)
    {
        var_31 = var_6;
        arr_23 [i_8] = (((((var_17 ? -3359771736182297740 : 8750104788615469371))) ? ((var_6 ? -5963 : 6120780740273659903)) : var_10));

        for (int i_9 = 0; i_9 < 11;i_9 += 1)
        {
            var_32 = (12988889718107268392 >= var_3);
            var_33 = (min(var_33, (((-5938 ? (((var_6 ? var_10 : var_1))) : var_9)))));
            var_34 = ((var_5 ? var_4 : var_6));
            var_35 += (((((var_14 ? var_10 : var_15))) ? ((var_7 ? var_16 : var_1)) : ((var_1 ? var_8 : 37270))));
            var_36 = (var_3 < var_14);
        }
    }
    for (int i_10 = 2; i_10 < 20;i_10 += 1)
    {
        var_37 = (max(var_37, ((min((6354700207492385046 + var_5), (~var_16))))));
        var_38 = (min(var_38, (((~(~var_3))))));
    }
    for (int i_11 = 0; i_11 < 25;i_11 += 1)
    {
        var_39 = (min(var_39, var_13));

        /* vectorizable */
        for (int i_12 = 4; i_12 < 24;i_12 += 1)
        {
            /* LoopNest 2 */
            for (int i_13 = 0; i_13 < 25;i_13 += 1)
            {
                for (int i_14 = 0; i_14 < 25;i_14 += 1)
                {
                    {
                        var_40 += ((var_9 ? var_12 : -var_12));
                        var_41 = (min(var_41, (((!(239674631 | -5941))))));
                        var_42 = ((3987 ? var_2 : ((var_15 ? 1106243512769473991 : var_16))));
                    }
                }
            }
            var_43 = var_15;
            var_44 = (var_6 < var_17);

            for (int i_15 = 2; i_15 < 23;i_15 += 1)
            {

                for (int i_16 = 2; i_16 < 22;i_16 += 1)
                {
                    var_45 = (((~var_2) ? var_10 : var_2));
                    var_46 = var_8;
                }
                for (int i_17 = 0; i_17 < 1;i_17 += 1)
                {

                    for (int i_18 = 0; i_18 < 25;i_18 += 1)
                    {
                        var_47 = (~6154489804886871580);
                        var_48 ^= var_9;
                        var_49 += ((var_8 ? -5935 : -6154489804886871566));
                    }
                    var_50 = (max(var_50, 39176));
                    var_51 = ((~(~var_7)));
                    var_52 = (min(var_52, (((var_11 ? var_16 : var_4)))));
                }
                /* LoopNest 2 */
                for (int i_19 = 0; i_19 < 25;i_19 += 1)
                {
                    for (int i_20 = 1; i_20 < 24;i_20 += 1)
                    {
                        {
                            var_53 += ((var_5 ? var_8 : var_11));
                            arr_54 [i_11] [i_12 + 1] [i_15 - 2] [i_11] [19] = var_16;
                            var_54 = var_15;
                            arr_55 [i_20] [i_19] [i_15] [i_11] [18] [i_11] [i_11] = ((6812294825367652285 >> (var_6 + 1054402908)));
                        }
                    }
                }
            }
            for (int i_21 = 0; i_21 < 1;i_21 += 1)
            {
                var_55 = ((((var_11 ? -3137413507765085508 : var_13)) << var_15));
                var_56 = ((~var_11) || (1 * 5966));
            }
            for (int i_22 = 0; i_22 < 25;i_22 += 1)
            {
                var_57 = (max(var_57, (!var_2)));
                var_58 = var_15;
                var_59 = (var_9 < var_14);
                var_60 = var_11;
                var_61 ^= -1559952269;
            }
            for (int i_23 = 0; i_23 < 1;i_23 += 1)
            {
                var_62 = (var_14 || -9114250661738095536);
                var_63 = (39722 | 3863174849678236226);
            }
        }
        for (int i_24 = 3; i_24 < 22;i_24 += 1) /* same iter space */
        {
            arr_68 [i_11] [i_11] = ((~((-21322 ? 2261357303007127589 : var_0))));

            for (int i_25 = 0; i_25 < 25;i_25 += 1) /* same iter space */
            {
                var_64 += (max(((((min(4452, var_13))) ? var_3 : 1)), (((2989715055791829642 > (var_15 > var_5))))));

                /* vectorizable */
                for (int i_26 = 0; i_26 < 25;i_26 += 1)
                {
                    var_65 = var_7;
                    var_66 = 5975;
                    var_67 = (var_5 >= var_10);
                }
                for (int i_27 = 4; i_27 < 23;i_27 += 1)
                {
                    var_68 ^= (min((min(var_4, var_2)), ((min(5963, -25264)))));
                    var_69 = var_2;
                }
            }
            for (int i_28 = 0; i_28 < 25;i_28 += 1) /* same iter space */
            {

                for (int i_29 = 1; i_29 < 1;i_29 += 1)
                {
                    var_70 = (min(((((((var_9 ? -20483 : -11))) ? var_15 : ((var_5 ? var_2 : -667081941))))), 2301489758732398114));
                    var_71 = ((var_4 ? ((~((min(var_15, 56687))))) : var_0));
                    var_72 = 12184;
                    var_73 ^= (((((((max(-21334, 31359))) ? (((-8750104788615469396 + 9223372036854775807) << (((-2301489758732398091 + 2301489758732398114) - 22)))) : var_7))) && ((min((min(var_16, var_4)), var_15)))));
                    var_74 = (min((min(-14277, 392893059)), var_16));
                }
                var_75 = ((-4046698179124938488 ? 8750104788615469371 : 16252969041832755597));
            }
        }
        for (int i_30 = 3; i_30 < 22;i_30 += 1) /* same iter space */
        {
            var_76 = (min(var_76, var_7));
            /* LoopNest 2 */
            for (int i_31 = 0; i_31 < 25;i_31 += 1)
            {
                for (int i_32 = 1; i_32 < 24;i_32 += 1)
                {
                    {

                        for (int i_33 = 2; i_33 < 24;i_33 += 1)
                        {
                            arr_91 [i_11] [6] [i_11] [i_11] [i_11] = (min(var_3, var_0));
                            var_77 = (min((((((7618 ? var_16 : var_4))) ? -4046698179124938495 : -7607)), (((var_5 ? ((min(var_8, 5980))) : -var_2)))));
                            var_78 = (((var_0 - var_15) != (max((-82 & var_11), (806133674474683551 < -8501596791342657287)))));
                        }
                        for (int i_34 = 0; i_34 < 25;i_34 += 1)
                        {
                            var_79 += (((((var_17 ? (min(12988889718107268371, 11310)) : var_0))) ? (min((var_11 / var_4), var_13)) : ((min(((var_15 ? var_10 : var_1)), var_0)))));
                            var_80 = ((-(((var_1 == var_13) ? (((157 ? var_15 : 1))) : var_8))));
                            arr_96 [i_11] [i_32] [i_11] = ((-60 ? (((!(!19051)))) : ((max(var_7, var_5)))));
                        }
                        for (int i_35 = 0; i_35 < 25;i_35 += 1)
                        {
                            var_81 = (((min(-32, (min(-9250, 5980))))) ? -1994 : var_9);
                            arr_100 [i_11] [i_35] [i_32] [i_32 + 1] [i_31] [i_30] [i_11] = ((1 != (1727261589 < -103)));
                            var_82 = var_7;
                            var_83 = (((((var_3 == var_15) ? (var_5 ^ var_3) : var_10)) < (((min((max(1, 32)), 1))))));
                        }
                        for (int i_36 = 0; i_36 < 25;i_36 += 1)
                        {
                            var_84 = var_17;
                            var_85 = ((var_6 || var_1) > ((((min(var_10, var_10))) ? 1 : ((var_3 ? var_8 : var_9)))));
                        }
                        var_86 = (min((min((var_1 <= 7848870557739608408), (max(var_11, var_10)))), (((((min(var_14, var_10))) ? ((var_16 >> (var_4 - 1672999859))) : var_11)))));
                        var_87 = ((~((((min(var_8, 8501596791342657288))) ? ((min(var_15, var_2))) : (!var_13)))));
                    }
                }
            }
            arr_103 [i_11] = ((3522300159364531017 ? -31635 : -1766964922));
        }
        arr_104 [i_11] = (!8501596791342657287);
    }
    for (int i_37 = 0; i_37 < 24;i_37 += 1)
    {
        var_88 = (min((((var_4 ? -30316 : var_13))), 66));
        arr_107 [i_37] = 1;
        arr_108 [i_37] = ((1837303539 ? ((var_7 - (2350959999 | 1))) : (min((~1), ((var_9 ? 61106 : var_10))))));
        arr_109 [i_37] = var_13;
        /* LoopNest 3 */
        for (int i_38 = 0; i_38 < 24;i_38 += 1)
        {
            for (int i_39 = 3; i_39 < 20;i_39 += 1)
            {
                for (int i_40 = 2; i_40 < 21;i_40 += 1)
                {
                    {
                        var_89 = (max(var_89, ((((var_12 / 45) == (!2215614312))))));
                        var_90 = (((((var_12 ? var_12 : var_7))) ? (var_4 * var_3) : (((var_13 < var_5) ? (var_1 >= var_12) : (max(315271647, var_8))))));
                    }
                }
            }
        }
    }
    var_91 = (max(var_91, (((var_12 ? ((var_4 ? (var_0 + var_17) : ((var_8 ? var_13 : -13813)))) : (((~((max(var_15, var_2)))))))))));
    #pragma endscop
}
