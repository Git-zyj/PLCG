/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 166185
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=166185 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/166185
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_12 = var_2;
    var_13 = (min(var_13, 22448));
    var_14 = (!var_11);
    /* LoopNest 2 */
    for (int i_0 = 1; i_0 < 8;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 10;i_1 += 1)
        {
            {

                for (int i_2 = 0; i_2 < 10;i_2 += 1) /* same iter space */
                {
                    var_15 = (min(var_15, ((((var_11 ? var_6 : var_1))))));
                    var_16 = (min(var_4, (~var_11)));
                    arr_6 [i_2] [i_0] [i_0] = (min(var_4, (((var_10 ? var_9 : var_6)))));
                }
                /* vectorizable */
                for (int i_3 = 0; i_3 < 10;i_3 += 1) /* same iter space */
                {

                    for (int i_4 = 0; i_4 < 10;i_4 += 1)
                    {

                        for (int i_5 = 0; i_5 < 10;i_5 += 1)
                        {
                            var_17 ^= ((var_7 ? var_5 : var_8));
                            var_18 += (~var_10);
                        }
                        arr_13 [i_0] [2] [i_3] [i_0] = ((var_8 ? var_6 : var_7));
                    }
                    for (int i_6 = 0; i_6 < 1;i_6 += 1)
                    {
                        var_19 = (min(var_19, (((var_11 ? (((1 ? 1 : 1))) : ((var_11 ? var_7 : var_10)))))));
                        arr_16 [i_0 + 2] [i_1] [i_3] [i_0] = var_7;
                        var_20 = var_10;
                        var_21 = 119;
                        var_22 = (((var_3 ? var_4 : var_2)));
                    }

                    for (int i_7 = 0; i_7 < 10;i_7 += 1)
                    {
                        arr_21 [i_3] [i_1] [0] [1] &= ((var_4 ? var_5 : var_9));

                        for (int i_8 = 0; i_8 < 10;i_8 += 1)
                        {
                            var_23 = (((var_8 ? var_8 : var_5)));
                            arr_25 [i_8] [i_0] [i_3] [i_0] [i_0 + 2] = ((var_11 ? var_9 : var_3));
                        }
                        var_24 = ((var_11 ? var_2 : var_7));
                        var_25 = ((1 ? var_3 : var_7));
                    }
                    for (int i_9 = 1; i_9 < 7;i_9 += 1)
                    {

                        for (int i_10 = 4; i_10 < 9;i_10 += 1)
                        {
                            var_26 = var_2;
                            var_27 = ((var_6 ? var_2 : var_8));
                            var_28 = (min(var_28, var_0));
                        }
                        arr_30 [i_3] [i_3] [2] &= (var_9 ? var_7 : var_4);
                    }
                }
                var_29 = (min(var_29, ((((((var_3 ? var_9 : var_6))) ? var_4 : ((var_2 ? var_5 : var_5)))))));
                var_30 = (max(var_30, ((min((min(1338314796, 1)), ((max(var_5, var_9))))))));
            }
        }
    }

    for (int i_11 = 3; i_11 < 22;i_11 += 1) /* same iter space */
    {
        var_31 ^= ((!(((var_6 ? var_11 : var_10)))));
        var_32 = 12302590904317871552;

        for (int i_12 = 0; i_12 < 23;i_12 += 1)
        {
            var_33 = ((((!(((var_5 ? var_8 : var_8)))))));
            var_34 = (((((var_3 ? var_7 : var_8))) ? ((var_4 ? var_10 : var_7)) : var_5));
            arr_37 [i_11] [i_11] = var_1;
        }
        /* vectorizable */
        for (int i_13 = 0; i_13 < 23;i_13 += 1)
        {
            arr_40 [i_11 - 2] [i_13] [i_11] = var_11;
            arr_41 [i_11] = (~var_8);
            var_35 &= var_3;
            var_36 = ((var_6 ? var_2 : var_2));
        }
        for (int i_14 = 1; i_14 < 22;i_14 += 1)
        {

            for (int i_15 = 0; i_15 < 1;i_15 += 1)
            {

                for (int i_16 = 4; i_16 < 21;i_16 += 1)
                {
                    var_37 &= ((((((var_11 ? var_7 : var_0))) ? var_2 : var_2)));
                    var_38 = var_4;
                    arr_52 [i_11] = ((3 ? 6144153169391680064 : 121));
                }
                arr_53 [i_11] [i_11] = (((((var_8 ? var_9 : var_8))) ? -var_7 : var_10));
            }
            arr_54 [i_11] = 64;
        }
        /* vectorizable */
        for (int i_17 = 0; i_17 < 23;i_17 += 1)
        {
            var_39 -= ((var_5 ? var_3 : var_5));

            for (int i_18 = 0; i_18 < 1;i_18 += 1) /* same iter space */
            {
                arr_60 [i_11 - 1] [i_11] [i_18] = ((var_3 ? var_8 : var_5));

                for (int i_19 = 0; i_19 < 23;i_19 += 1)
                {
                    var_40 = (((var_11 ? var_1 : var_6)));
                    var_41 = ((var_2 ? var_10 : var_9));
                    arr_63 [i_11 - 3] [i_11] [i_11] [i_11 - 3] = -var_2;
                }
            }
            for (int i_20 = 0; i_20 < 1;i_20 += 1) /* same iter space */
            {
                arr_67 [i_11] [i_17] [i_20] = var_2;
                arr_68 [i_20] [i_11] [i_11 - 2] = var_2;
                arr_69 [i_11] [1] [i_20] [i_20] = 7211333650729034209;
            }
            for (int i_21 = 2; i_21 < 22;i_21 += 1)
            {
                arr_72 [i_11] = ((var_10 ? var_5 : var_9));
                var_42 = var_8;
                var_43 = ((-var_6 ? var_6 : var_6));
                var_44 = ((var_6 ? var_11 : var_11));
            }

            for (int i_22 = 0; i_22 < 23;i_22 += 1)
            {
                arr_75 [i_11 + 1] [i_17] [i_11] [i_22] = var_11;
                var_45 += ((1 ? 6192420637723685830 : 121));
            }
            for (int i_23 = 0; i_23 < 23;i_23 += 1)
            {
                var_46 = ((var_9 ? var_10 : var_6));
                var_47 += var_5;
            }
            for (int i_24 = 0; i_24 < 23;i_24 += 1)
            {
                arr_81 [i_11 - 3] [i_11] [i_24] = var_0;
                var_48 = ((1 ? -7721387999363877149 : 16733118284141562069));
                /* LoopNest 2 */
                for (int i_25 = 0; i_25 < 23;i_25 += 1)
                {
                    for (int i_26 = 0; i_26 < 23;i_26 += 1)
                    {
                        {
                            arr_87 [i_11] = var_5;
                            var_49 = (max(var_49, (((var_0 ? var_5 : var_5)))));
                            arr_88 [i_11] [i_11] [i_24] [i_25] [i_11] = -1701363979067237715;
                            var_50 = var_1;
                            var_51 = (~var_9);
                        }
                    }
                }
            }
            var_52 = var_4;
            arr_89 [i_11] [i_17] [i_17] = ((var_5 ? var_8 : var_7));
        }
    }
    for (int i_27 = 3; i_27 < 22;i_27 += 1) /* same iter space */
    {

        for (int i_28 = 0; i_28 < 23;i_28 += 1)
        {
            /* LoopNest 3 */
            for (int i_29 = 0; i_29 < 23;i_29 += 1)
            {
                for (int i_30 = 1; i_30 < 19;i_30 += 1)
                {
                    for (int i_31 = 0; i_31 < 23;i_31 += 1)
                    {
                        {
                            var_53 = -var_6;
                            var_54 = ((var_6 ? var_8 : var_0));
                            var_55 = var_3;
                            var_56 = (((min(((var_1 ? var_7 : var_8)), (((var_5 ? var_0 : var_1)))))) ? 65535 : -var_7);
                        }
                    }
                }
            }
            var_57 = ((var_9 ? (~-80) : var_10));
            var_58 = ((var_7 ? -var_4 : ((((((var_3 ? var_3 : var_2))) ? var_6 : var_6)))));
            var_59 = var_9;
        }
        for (int i_32 = 0; i_32 < 23;i_32 += 1)
        {

            for (int i_33 = 0; i_33 < 23;i_33 += 1)
            {
                arr_111 [i_27 + 1] [i_32] [i_27] = var_0;
                var_60 = ((var_8 ? var_8 : ((var_3 ? var_2 : var_9))));
            }
            for (int i_34 = 0; i_34 < 23;i_34 += 1)
            {

                /* vectorizable */
                for (int i_35 = 0; i_35 < 1;i_35 += 1)
                {
                    arr_117 [i_35] [i_27] [i_34] [i_27] [i_27] = (~var_9);
                    var_61 = (~var_4);
                    var_62 = (min(var_62, var_11));

                    for (int i_36 = 0; i_36 < 1;i_36 += 1)
                    {
                        var_63 = var_7;
                        var_64 = ((var_0 ? var_11 : var_9));
                        var_65 = (min(var_65, (((var_4 ? -var_0 : var_7)))));
                        var_66 = var_5;
                        var_67 += (var_0 ? var_11 : var_2);
                    }
                    for (int i_37 = 0; i_37 < 23;i_37 += 1)
                    {
                        var_68 ^= var_1;
                        var_69 = var_11;
                        arr_124 [i_27 - 2] [i_27 - 2] [i_34] [i_35] [i_27] [i_34] [i_35] = (((var_4 ? var_10 : var_2)));
                        var_70 = ((var_3 ? (((var_9 ? var_10 : var_9))) : ((13796456978079387193 ? 12302590904317871558 : 0))));
                    }
                }
                for (int i_38 = 0; i_38 < 1;i_38 += 1) /* same iter space */
                {
                    arr_127 [i_27] [i_34] = (!-22448);
                    arr_128 [i_27 - 1] [0] [i_27] = (((~var_0) ? var_1 : ((var_6 ? ((var_11 ? var_8 : var_11)) : var_0))));
                    arr_129 [i_27] = (((var_4 ? var_4 : var_11)));
                }
                for (int i_39 = 0; i_39 < 1;i_39 += 1) /* same iter space */
                {
                    arr_132 [i_27] = (min(((max(1, 120))), ((var_5 ? var_7 : var_0))));
                    var_71 += var_11;
                    var_72 = (min(var_5, (~var_4)));
                    arr_133 [i_27 - 1] [i_27] [i_34] [i_39] = (~var_10);
                }
                arr_134 [i_34] [i_27] [i_27] = ((var_5 ? var_4 : var_9));
            }
            for (int i_40 = 2; i_40 < 22;i_40 += 1)
            {
                var_73 = (~13796456978079387215);
                var_74 = var_7;
                arr_137 [i_27] [i_32] [i_27] = (((var_3 ? (min(3689426747, 7433466139028243960)) : var_1)));
            }
            for (int i_41 = 3; i_41 < 22;i_41 += 1)
            {
                var_75 -= ((((max(var_3, var_9))) ? ((var_7 ? var_8 : var_0)) : var_6));
                var_76 = var_4;
            }
            var_77 = ((!(((var_6 ? var_6 : var_0)))));
            arr_140 [i_27 + 1] [i_27] = var_9;
            var_78 = var_3;
            arr_141 [i_27] = 124;
        }
        for (int i_42 = 0; i_42 < 23;i_42 += 1)
        {
            var_79 = (((!var_7) ? ((var_8 ? var_6 : var_8)) : ((var_8 ? var_8 : var_7))));
            var_80 = ((var_2 ? ((var_9 ? var_2 : var_8)) : var_10));
        }
        var_81 = (((~var_2) ? var_9 : -2021324411));
        var_82 = ((((max(var_2, var_11))) ? 141 : ((max(var_9, var_1)))));
    }
    for (int i_43 = 3; i_43 < 22;i_43 += 1) /* same iter space */
    {
        var_83 = ((((-112 ? -5398 : 4650287095630164423))) ? (!var_9) : ((-((63 ? -1423190420 : 1627)))));
        var_84 = ((max(var_2, var_8)));
        arr_146 [i_43 - 3] [i_43] = (((var_1 ? var_4 : var_8)));
        var_85 = (min(var_85, (((-((17691845251007548661 ? var_8 : var_6)))))));
        arr_147 [1] &= (min(var_9, (~-1254906354)));
    }
    #pragma endscop
}
