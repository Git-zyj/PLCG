/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 152349
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=152349 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/152349
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_15 = var_6;
    var_16 &= -28708;
    var_17 = var_9;

    for (int i_0 = 1; i_0 < 22;i_0 += 1) /* same iter space */
    {
        arr_4 [i_0] [i_0] = (~var_9);

        /* vectorizable */
        for (int i_1 = 1; i_1 < 1;i_1 += 1) /* same iter space */
        {

            for (int i_2 = 1; i_2 < 24;i_2 += 1)
            {

                for (int i_3 = 2; i_3 < 24;i_3 += 1)
                {
                    arr_13 [i_0] [i_2] = ((~(arr_3 [i_0 - 1])));
                    arr_14 [i_0] [4] [i_2 + 1] [i_3 - 2] = (~1211192900);
                    var_18 = var_0;
                    var_19 ^= ((~(var_9 || 5138487601787900544)));
                }
                for (int i_4 = 1; i_4 < 24;i_4 += 1)
                {

                    for (int i_5 = 3; i_5 < 24;i_5 += 1) /* same iter space */
                    {
                        arr_21 [i_5] [i_0] [i_1] [i_1] [i_0] [i_0] [i_0] = -var_9;
                        var_20 = 1805351452;
                        arr_22 [16] &= var_11;
                    }
                    for (int i_6 = 3; i_6 < 24;i_6 += 1) /* same iter space */
                    {
                        var_21 = var_5;
                        var_22 = ((arr_8 [i_0 - 1] [12] [i_2 - 1]) ? 2002075187 : (var_0 >= var_11));
                        var_23 = var_0;
                    }
                    for (int i_7 = 3; i_7 < 24;i_7 += 1) /* same iter space */
                    {
                        var_24 = var_13;
                        var_25 -= (arr_15 [i_0] [i_0] [8] [i_0 + 2] [i_0 + 2]);
                        var_26 = (arr_10 [i_0] [i_2] [i_4 + 1] [5]);
                    }
                    var_27 = var_4;

                    for (int i_8 = 1; i_8 < 1;i_8 += 1)
                    {
                        arr_32 [i_0] [6] [i_0] = 0;
                        var_28 = (min(var_28, (((-((var_7 & (-2147483647 - 1))))))));
                    }
                    for (int i_9 = 1; i_9 < 24;i_9 += 1)
                    {
                        arr_37 [i_0] [i_0] = (((arr_31 [i_9] [7] [i_2] [i_2] [i_1] [i_0]) ? var_1 : (arr_29 [i_0] [i_0] [i_2] [i_4 + 1] [i_2])));
                        var_29 += -6641724273352183327;
                    }
                    for (int i_10 = 0; i_10 < 25;i_10 += 1)
                    {
                        var_30 = 3219114785;
                        var_31 = (min(var_31, (((var_4 ? var_14 : var_6)))));
                        var_32 = 0;
                        var_33 = (max(var_33, (((~(~var_8))))));
                    }

                    for (int i_11 = 0; i_11 < 25;i_11 += 1) /* same iter space */
                    {
                        var_34 = (-2147483647 - 1);
                        arr_42 [i_0] [23] = (~var_3);
                        var_35 = 9074;
                    }
                    for (int i_12 = 0; i_12 < 25;i_12 += 1) /* same iter space */
                    {
                        var_36 *= -var_0;
                        arr_45 [i_0 + 2] [i_1] [i_0] [i_0] [i_12] [i_12] = -81242098;
                    }
                }
                for (int i_13 = 0; i_13 < 25;i_13 += 1)
                {
                    arr_48 [i_0] = (((arr_12 [i_0] [i_1 - 1] [i_1] [i_0]) ? var_4 : var_9));
                    var_37 = (!var_5);

                    for (int i_14 = 4; i_14 < 21;i_14 += 1)
                    {
                        var_38 += -1318253790;
                        var_39 *= (arr_8 [i_0] [i_1] [i_2]);
                        arr_52 [10] [i_1 - 1] [i_0] [i_13] [i_13] [i_14 - 4] [i_14] = var_5;
                        arr_53 [i_0] [i_0] [i_13] [i_13] = var_10;
                    }
                }
                var_40 -= var_5;
            }
            for (int i_15 = 0; i_15 < 25;i_15 += 1)
            {
                var_41 = var_5;
                arr_57 [i_0] [i_0] [i_0] [i_0] = (~1211192900);
            }
            for (int i_16 = 0; i_16 < 25;i_16 += 1)
            {
                var_42 *= var_7;
                arr_61 [i_0] [i_0] [i_16] = 1;
            }
            for (int i_17 = 1; i_17 < 24;i_17 += 1)
            {
                var_43 -= ((!(((var_6 ? 571957152676052992 : var_3)))));
                var_44 = var_7;
            }
            arr_64 [0] &= var_3;
            arr_65 [i_0] = (~(arr_63 [i_0 + 1] [i_0] [i_0]));
        }
        /* vectorizable */
        for (int i_18 = 1; i_18 < 1;i_18 += 1) /* same iter space */
        {
            var_45 = (var_11 >= 101);

            for (int i_19 = 2; i_19 < 23;i_19 += 1)
            {

                for (int i_20 = 0; i_20 < 25;i_20 += 1)
                {
                    arr_72 [i_0] = (!var_0);
                    var_46 = 2306330921466294041;
                }
                for (int i_21 = 1; i_21 < 23;i_21 += 1)
                {
                    var_47 = (!268427264);
                    var_48 = (max(var_48, ((((arr_54 [i_21] [i_21 + 1] [i_21] [i_21]) != var_10)))));
                    arr_76 [i_0] [i_19] = (arr_39 [i_0 + 2] [i_0 - 1] [i_18 - 1] [i_19 - 2] [i_19 + 1]);
                    var_49 = (min(var_49, var_0));
                    var_50 -= (~1588192717);
                }
                for (int i_22 = 2; i_22 < 24;i_22 += 1)
                {

                    for (int i_23 = 0; i_23 < 25;i_23 += 1)
                    {
                        var_51 = (!-5077685372362138418);
                        var_52 = (max(var_52, -var_13));
                    }
                    var_53 &= -9074;
                    var_54 = -0;
                    var_55 = 117440512;
                    var_56 = (min(var_56, -15872));
                }
                arr_84 [i_0] [i_0] [i_19] = (-9223372036854775807 - 1);
                var_57 = (~var_9);
                var_58 -= ((var_2 ? var_9 : (arr_24 [i_18 - 1])));
            }
            for (int i_24 = 0; i_24 < 0;i_24 += 1)
            {
                var_59 &= (var_11 && -6641724273352183331);
                arr_89 [i_0 + 2] [1] [i_18] [i_0] = var_5;
            }
        }
        for (int i_25 = 1; i_25 < 1;i_25 += 1) /* same iter space */
        {
            arr_93 [i_0] = arr_27 [i_0] [i_0] [1] [i_25 - 1] [i_25] [i_0] [i_25];
            var_60 ^= var_4;
            var_61 = min((arr_66 [i_25 - 1] [i_25]), ((var_5 + (arr_77 [i_0] [i_0 + 2] [4] [i_25 - 1]))));
        }
        var_62 = var_7;

        for (int i_26 = 0; i_26 < 1;i_26 += 1) /* same iter space */
        {
            arr_96 [i_0] [1] &= max((~var_6), ((((max(var_6, var_11))) ? -8945313298082047429 : var_8)));
            arr_97 [i_0] = (max(0, ((-(((arr_38 [i_26] [i_26] [i_26] [i_0 + 3] [i_0 + 3]) ? var_8 : var_8))))));
            var_63 = (~1);
        }
        for (int i_27 = 0; i_27 < 1;i_27 += 1) /* same iter space */
        {

            for (int i_28 = 0; i_28 < 25;i_28 += 1) /* same iter space */
            {

                for (int i_29 = 1; i_29 < 1;i_29 += 1)
                {
                    var_64 = ((((((min((arr_66 [i_0] [11]), -1)) * var_9))) ? -var_12 : (min(((min(30, var_14))), 8601168428967581819))));
                    var_65 = 0;
                    arr_104 [i_0] [i_28] [i_27] [i_0] = (min((~8601168428967581819), ((min((!-282399197), ((-32750 ? 65535 : -1318253790)))))));
                }
                for (int i_30 = 0; i_30 < 25;i_30 += 1)
                {
                    var_66 += var_0;

                    for (int i_31 = 0; i_31 < 25;i_31 += 1)
                    {
                        var_67 = (max(var_67, (((~var_3) ^ (var_1 | var_14)))));
                        var_68 = (min((~var_0), ((-282399211 ? var_14 : 9223372036854775807))));
                        arr_109 [i_0] = (((min((arr_77 [19] [19] [i_28] [i_28]), -9223372036854775807)) & ((-26752 ? (((min(var_14, var_4)))) : var_0))));
                        var_69 = ((-((~(~var_7)))));
                    }
                }
                var_70 += (((((~(min(13984, var_13))))) ? ((min(var_4, 1721276849))) : (min(746703666, (arr_31 [i_0] [i_0] [i_0 + 1] [i_0] [i_0] [i_0])))));
                var_71 = (max(var_71, (min(var_2, (max(var_1, (min(1228332792669672315, -1228332792669672322))))))));
            }
            /* vectorizable */
            for (int i_32 = 0; i_32 < 25;i_32 += 1) /* same iter space */
            {
                var_72 &= (~var_10);
                arr_112 [i_0] [i_0] [i_32] = (arr_79 [i_0 + 1] [i_27] [19] [i_0 + 3] [1]);
            }
            for (int i_33 = 0; i_33 < 25;i_33 += 1) /* same iter space */
            {

                for (int i_34 = 0; i_34 < 25;i_34 += 1)
                {

                    /* vectorizable */
                    for (int i_35 = 1; i_35 < 23;i_35 += 1)
                    {
                        var_73 = 2706774577;
                        arr_122 [i_0] [i_27] [i_34] [i_35] = 0;
                        var_74 = 1;
                    }
                    var_75 ^= (2706774579 ? -1 : var_11);
                }
                for (int i_36 = 3; i_36 < 23;i_36 += 1)
                {
                    var_76 = var_10;
                    var_77 += (min((((var_4 < var_9) ? (var_13 / var_14) : (((var_5 ? var_3 : var_11))))), (((~(min(1065387564, 6144)))))));
                }
                for (int i_37 = 3; i_37 < 22;i_37 += 1)
                {
                    var_78 = (((((var_2 ? var_14 : var_9))) && (((((min(var_8, var_13))) ? (!var_13) : -1907394880)))));
                    arr_128 [i_0] [4] [i_0] [i_0] [i_0] [i_0 + 2] = (-251675797 ? 6508 : -6);
                    var_79 = ((var_6 ? (~var_10) : var_8));
                    var_80 = (max(var_7, ((((((var_9 ? 3459871982 : (arr_73 [i_33] [i_33])))) && (arr_81 [i_0 + 1] [i_27] [i_33] [i_0] [i_33] [i_37] [i_37]))))));
                }
                arr_129 [i_0 - 1] [i_27] [6] [i_27] &= (max(var_11, ((((max(var_6, 64280))) ? var_1 : var_13))));
            }
            /* LoopNest 3 */
            for (int i_38 = 3; i_38 < 23;i_38 += 1)
            {
                for (int i_39 = 1; i_39 < 22;i_39 += 1)
                {
                    for (int i_40 = 1; i_40 < 1;i_40 += 1)
                    {
                        {
                            arr_137 [11] [7] [i_0] [i_0] [i_0] = (arr_108 [i_40 - 1] [i_0] [i_27] [6] [i_27] [i_0] [i_0]);
                            arr_138 [i_0] [17] [i_38] [17] [i_0] = (min(((max(32767, 3220487477))), ((-7469781480028504705 ? -1 : var_13))));
                            var_81 = max((min(var_5, (arr_120 [i_0] [i_0]))), (max(var_10, (arr_120 [i_0] [i_0]))));
                            var_82 = var_5;
                        }
                    }
                }
            }
        }
        var_83 = ((~(~var_8)));
    }
    for (int i_41 = 1; i_41 < 22;i_41 += 1) /* same iter space */
    {
        var_84 = (!var_3);
        var_85 = (((((~((9 ? 628459708 : 3229579731))))) ? -4247009598547125960 : (((min(1, var_9))))));
        var_86 = (~var_2);
    }
    var_87 = 0;
    #pragma endscop
}
