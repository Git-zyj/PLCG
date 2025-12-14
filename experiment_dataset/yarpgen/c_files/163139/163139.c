/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 163139
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=163139 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/163139
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_13 = (max(-26180, 1183313810));
    var_14 ^= var_4;

    /* vectorizable */
    for (int i_0 = 1; i_0 < 12;i_0 += 1)
    {

        for (int i_1 = 0; i_1 < 1;i_1 += 1)
        {
            var_15 = ((var_7 - (arr_0 [i_0])));
            arr_4 [i_0] [i_0] [i_1] = (!var_1);
        }
        for (int i_2 = 2; i_2 < 13;i_2 += 1)
        {
            arr_8 [i_0] [i_2] [i_0] = (arr_2 [i_0 - 1] [i_2 - 2]);

            for (int i_3 = 0; i_3 < 15;i_3 += 1)
            {
                arr_11 [i_3] [i_3] = 733573431;
                arr_12 [i_0] [i_0 + 3] [i_0] [i_0] = var_4;
            }
        }
        var_16 ^= (arr_1 [i_0 - 1]);
        /* LoopNest 2 */
        for (int i_4 = 2; i_4 < 14;i_4 += 1)
        {
            for (int i_5 = 1; i_5 < 13;i_5 += 1)
            {
                {
                    var_17 &= var_6;
                    arr_18 [i_0 + 1] [i_5] [12] = (!var_7);
                    arr_19 [i_5] [i_5] = (arr_9 [i_4] [i_4 - 1] [i_4 + 1]);
                    var_18 = var_7;

                    for (int i_6 = 0; i_6 < 15;i_6 += 1)
                    {
                        var_19 = (arr_3 [i_0] [i_4] [i_5]);

                        for (int i_7 = 2; i_7 < 14;i_7 += 1)
                        {
                            var_20 = (~16);
                            var_21 = (arr_10 [i_4 - 2] [i_7]);
                        }
                        for (int i_8 = 1; i_8 < 14;i_8 += 1)
                        {
                            arr_31 [i_8] [i_0] [i_5] [i_5] [i_4 - 2] [i_0] = (arr_0 [i_4 - 1]);
                            var_22 = (var_11 != 1);
                            var_23 = (~8192);
                        }
                    }
                }
            }
        }
        var_24 = (max(var_24, (arr_9 [i_0] [i_0] [i_0])));
    }
    for (int i_9 = 0; i_9 < 24;i_9 += 1)
    {

        for (int i_10 = 0; i_10 < 24;i_10 += 1)
        {
            var_25 = var_6;
            arr_37 [i_9] [23] = (!var_7);

            for (int i_11 = 0; i_11 < 24;i_11 += 1)
            {
                var_26 = ((var_3 ? ((-((max(var_9, var_4))))) : (arr_35 [i_11])));
                arr_40 [i_9] [i_9] [i_9] = (max(233, 63));
                var_27 = var_6;
                var_28 = (arr_34 [i_11]);
            }
            var_29 = (~26077);

            /* vectorizable */
            for (int i_12 = 0; i_12 < 24;i_12 += 1)
            {

                for (int i_13 = 0; i_13 < 24;i_13 += 1)
                {
                    var_30 = var_1;

                    for (int i_14 = 0; i_14 < 24;i_14 += 1)
                    {
                        var_31 &= var_1;
                        var_32 = ((var_2 ? var_3 : (arr_47 [i_9] [i_10] [i_13] [i_14])));
                    }
                }
                for (int i_15 = 2; i_15 < 23;i_15 += 1)
                {
                    var_33 = (arr_41 [i_9] [i_9] [i_9] [i_9]);
                    var_34 = (arr_45 [i_15 + 1] [i_15 + 1] [12] [i_15 - 2]);
                }

                for (int i_16 = 0; i_16 < 24;i_16 += 1)
                {
                    var_35 = (1 - 65535);
                    var_36 = (var_6 != var_0);
                    arr_55 [i_9] [i_10] [i_16] = var_2;
                }
            }
            for (int i_17 = 0; i_17 < 24;i_17 += 1)
            {
                var_37 = var_9;
                var_38 = 26058;

                for (int i_18 = 2; i_18 < 22;i_18 += 1)
                {
                    var_39 = (max(-26077, (max(var_10, 13))));

                    for (int i_19 = 0; i_19 < 24;i_19 += 1)
                    {
                        arr_64 [i_9] [i_10] [i_18 + 2] [i_18] = ((var_4 ? (-26347 != -26077) : var_0));
                        var_40 = ((-(~var_3)));
                        var_41 = var_2;
                    }
                    var_42 = (max(var_42, (~26077)));
                }
                for (int i_20 = 1; i_20 < 20;i_20 += 1)
                {
                    var_43 = (min(var_43, ((max(-18, 26347)))));
                    var_44 = ((var_1 ? var_2 : var_8));
                    var_45 = -26077;
                    var_46 = ((~(((19 - 26348) ? ((max(21370, (arr_44 [i_17] [i_20 + 3])))) : ((max(-8192, (arr_41 [i_9] [i_10] [6] [i_20]))))))));
                    arr_67 [i_9] [i_20] [i_17] [i_20 + 2] = ((var_9 ? ((max((!-26080), (max(26092, -8744))))) : var_3));
                }
                arr_68 [i_10] [i_10] = var_6;
            }
            /* vectorizable */
            for (int i_21 = 0; i_21 < 24;i_21 += 1)
            {

                for (int i_22 = 0; i_22 < 24;i_22 += 1)
                {
                    var_47 = var_10;
                    var_48 = ((var_10 ? var_3 : (arr_48 [i_9] [i_9] [i_9] [i_9] [i_9] [i_9])));
                    var_49 = (((arr_38 [i_9] [i_9] [i_9] [i_9]) ? var_3 : 5));
                }
                for (int i_23 = 3; i_23 < 23;i_23 += 1)
                {
                    arr_76 [i_21] [i_10] [i_9] &= (arr_49 [i_23 - 1] [i_23 + 1]);
                    var_50 = var_1;
                    arr_77 [i_9] = (((arr_46 [i_23] [i_23 - 2] [i_23] [i_23 - 1] [i_23 - 3] [i_10]) - (arr_46 [i_23] [i_23] [i_23 - 3] [i_23] [i_23 - 3] [i_10])));
                    var_51 ^= (var_4 - var_12);
                }
                arr_78 [i_9] [i_10] [i_21] = var_0;
            }
        }
        arr_79 [i_9] = -91310162;
        var_52 = ((+(max((((arr_49 [8] [i_9]) ? 7 : var_4)), var_6))));
        /* LoopNest 2 */
        for (int i_24 = 0; i_24 < 1;i_24 += 1)
        {
            for (int i_25 = 0; i_25 < 24;i_25 += 1)
            {
                {
                    var_53 = (arr_35 [i_9]);
                    var_54 = 19;
                }
            }
        }
    }
    for (int i_26 = 0; i_26 < 1;i_26 += 1)
    {
        var_55 = (var_3 - var_4);
        var_56 = arr_39 [i_26] [9] [i_26] [9];
    }
    for (int i_27 = 3; i_27 < 15;i_27 += 1)
    {
        var_57 = ((-26074 != (var_8 - 8744)));
        arr_90 [i_27] = ((((max((arr_49 [i_27 - 1] [i_27 - 3]), var_0))) - var_10));
        /* LoopNest 2 */
        for (int i_28 = 0; i_28 < 19;i_28 += 1)
        {
            for (int i_29 = 1; i_29 < 1;i_29 += 1)
            {
                {
                    var_58 = var_8;

                    for (int i_30 = 0; i_30 < 1;i_30 += 1)
                    {
                        var_59 = 2147483647;

                        for (int i_31 = 3; i_31 < 18;i_31 += 1)
                        {
                            var_60 = ((237 ? (arr_65 [i_28] [i_28] [i_28]) : (arr_97 [i_27 - 2] [i_29 - 1] [i_28] [i_27 + 1] [i_31 - 1])));
                            var_61 = (max(var_61, (((((var_10 != (arr_82 [i_30] [4] [i_28] [i_31]))) ? ((max((arr_59 [i_31 - 3] [i_31] [i_31] [i_31]), var_1))) : 8213)))));
                            var_62 = var_1;
                        }
                        /* vectorizable */
                        for (int i_32 = 2; i_32 < 17;i_32 += 1) /* same iter space */
                        {
                            arr_106 [i_27] [4] [i_27 - 1] [i_27 - 1] [i_28] = (8743 ? 1 : (arr_63 [i_29 - 1] [i_32] [i_32 - 1] [i_29 - 1] [20] [i_28] [i_28]));
                            var_63 = (!31040);
                        }
                        for (int i_33 = 2; i_33 < 17;i_33 += 1) /* same iter space */
                        {
                            var_64 = ((+(((arr_48 [i_33] [i_33] [i_33 + 1] [i_33 - 2] [i_33 - 2] [i_33 - 1]) - -30037))));
                            arr_109 [i_27] [i_28] [i_29] [i_30] [18] [i_28] = ((~(!var_8)));
                        }
                    }
                    /* vectorizable */
                    for (int i_34 = 1; i_34 < 17;i_34 += 1)
                    {
                        var_65 = var_0;
                        var_66 = ((26076 ? 63 : 1));
                    }
                    for (int i_35 = 0; i_35 < 19;i_35 += 1)
                    {

                        for (int i_36 = 3; i_36 < 18;i_36 += 1)
                        {
                            arr_116 [i_27] [i_28] [i_27] [i_27 + 3] [i_27 - 2] = ((-(((var_5 != (var_2 - var_8))))));
                            var_67 = 175;
                            var_68 = (((max((arr_96 [i_27 - 1] [i_29 - 1] [i_29]), var_10)) != (max(var_4, (arr_96 [i_27] [i_29 - 1] [i_29])))));
                        }
                        for (int i_37 = 2; i_37 < 16;i_37 += 1)
                        {
                            var_69 = var_2;
                            var_70 = ((-(max((arr_71 [i_27 - 2] [i_27] [i_27] [i_27 + 2]), var_6))));
                            var_71 = (max((1 - 86), (-18 != 3416451554)));
                        }
                        for (int i_38 = 0; i_38 < 19;i_38 += 1)
                        {
                            var_72 = (~var_12);
                            var_73 = (~var_9);
                        }
                        var_74 = 63;
                        arr_123 [i_28] = ((-(((arr_33 [i_27] [i_28]) - (arr_108 [i_27] [11] [i_29] [i_27 + 1] [1] [i_27 + 4])))));
                    }
                    arr_124 [i_27 + 3] [i_28] [9] = var_4;
                    var_75 = max(26927, var_8);
                }
            }
        }
    }
    #pragma endscop
}
