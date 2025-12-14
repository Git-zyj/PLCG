/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 171000
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=171000 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/171000
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    /* vectorizable */
    for (int i_0 = 0; i_0 < 14;i_0 += 1) /* same iter space */
    {
        var_20 = (var_19 * 18446744073709551604);

        for (int i_1 = 0; i_1 < 1;i_1 += 1) /* same iter space */
        {
            arr_6 [i_0] [i_0] = -75;
            arr_7 [i_0] = 6617652925762711611;
            arr_8 [11] [i_1] [i_0] = (arr_1 [i_0] [i_0]);
        }
        for (int i_2 = 0; i_2 < 1;i_2 += 1) /* same iter space */
        {

            for (int i_3 = 2; i_3 < 13;i_3 += 1)
            {

                for (int i_4 = 1; i_4 < 12;i_4 += 1)
                {
                    arr_16 [i_0] [i_2] [i_3] [i_4] = 411402717;
                    var_21 = (var_17 - var_8);
                    var_22 = var_6;

                    for (int i_5 = 0; i_5 < 14;i_5 += 1)
                    {
                        arr_19 [i_0] = (arr_4 [12] [4] [i_5]);
                        var_23 = (min(var_23, -11));
                        var_24 = var_5;
                    }
                    for (int i_6 = 4; i_6 < 12;i_6 += 1)
                    {
                        arr_23 [i_0] [i_0] [i_3] = (((arr_13 [i_0] [i_2] [i_3] [i_2]) << (13019853952640632704 - 13019853952640632681)));
                        arr_24 [i_0] [12] [i_2] [i_0] [i_2] [2] = var_1;
                    }
                }
                for (int i_7 = 3; i_7 < 11;i_7 += 1)
                {
                    var_25 *= (!0);
                    arr_29 [4] [i_0] [i_2] [i_0] [i_0] = 1495609255;
                }
                for (int i_8 = 0; i_8 < 14;i_8 += 1)
                {
                    var_26 = 89;
                    var_27 = -3;
                }
                arr_32 [i_0] [i_0] = 40447;
            }
            for (int i_9 = 1; i_9 < 13;i_9 += 1)
            {
                arr_37 [12] [i_0] [i_9] = (var_1 < var_13);
                arr_38 [i_0] [i_2] [i_0] [i_0] = ((!(!var_7)));
                var_28 = (((arr_9 [i_2] [i_9 + 1]) / 22569));
                var_29 = arr_20 [i_0] [i_0] [i_0] [i_2] [i_2] [i_0] [i_2];
                var_30 = (arr_25 [2] [2] [i_9] [0] [i_9] [i_9]);
            }

            for (int i_10 = 0; i_10 < 14;i_10 += 1)
            {
                var_31 = (max(var_31, (~var_12)));

                for (int i_11 = 0; i_11 < 14;i_11 += 1)
                {
                    var_32 = 7257871747812384693;
                    var_33 = (max(var_33, (!0)));

                    for (int i_12 = 1; i_12 < 13;i_12 += 1)
                    {
                        var_34 = 0;
                        var_35 = (max(var_35, ((7 - (arr_27 [i_12 + 1] [i_12] [i_12 + 1] [i_11] [i_10])))));
                        var_36 *= var_15;
                        arr_48 [i_0] [i_11] [i_0] [i_0] [i_12] [i_0] [i_11] = (((arr_21 [i_0] [i_0] [i_10] [i_0] [i_12] [i_12 + 1]) | var_4));
                    }
                    for (int i_13 = 0; i_13 < 14;i_13 += 1)
                    {
                        var_37 = (min(var_37, var_15));
                        arr_52 [i_11] [i_13] [2] [i_0] [0] [0] [i_0] = -77;
                    }
                }
            }
        }
        arr_53 [i_0] = (~var_5);
        var_38 = (min(var_38, (((-((var_10 | (arr_3 [12] [i_0]))))))));

        for (int i_14 = 4; i_14 < 13;i_14 += 1)
        {
            arr_56 [i_0] = var_7;
            var_39 = var_15;
            /* LoopNest 2 */
            for (int i_15 = 0; i_15 < 14;i_15 += 1)
            {
                for (int i_16 = 1; i_16 < 10;i_16 += 1)
                {
                    {
                        var_40 = 6010166358688847896;
                        var_41 = (max(var_41, var_0));
                    }
                }
            }
            var_42 *= var_8;
        }
    }
    for (int i_17 = 0; i_17 < 14;i_17 += 1) /* same iter space */
    {

        for (int i_18 = 1; i_18 < 1;i_18 += 1)
        {
            var_43 = (max(((max(var_13, (arr_54 [i_17] [2])))), 2));
            arr_68 [i_17] = 2219618890;
            var_44 = (max((((min(var_10, var_6)) & ((min(489257472, (arr_60 [i_18] [i_18] [9] [i_18])))))), var_9));
        }
        for (int i_19 = 0; i_19 < 14;i_19 += 1)
        {
            var_45 = (min(var_13, (((-5344366248725775719 != (arr_22 [i_17] [i_17] [i_17] [i_19] [i_19]))))));
            var_46 = min(((((var_0 - (arr_11 [i_17]))))), 0);
        }
        for (int i_20 = 2; i_20 < 13;i_20 += 1)
        {
            arr_74 [i_17] = (max(var_15, var_19));
            var_47 = var_8;

            for (int i_21 = 0; i_21 < 14;i_21 += 1)
            {
                var_48 = ((max((max(4255708624726099401, 1)), (arr_21 [i_21] [i_17] [i_17] [i_20 - 2] [i_20] [i_17]))));
                var_49 = (min((arr_42 [12] [6] [i_21] [9]), (max((!13665556141251467859), (max(var_13, var_3))))));

                /* vectorizable */
                for (int i_22 = 1; i_22 < 13;i_22 += 1)
                {

                    for (int i_23 = 1; i_23 < 12;i_23 += 1) /* same iter space */
                    {
                        var_50 = (max(var_50, (arr_35 [i_22 - 1] [i_22 - 1] [i_23] [8])));
                        var_51 = 1;
                    }
                    for (int i_24 = 1; i_24 < 12;i_24 += 1) /* same iter space */
                    {
                        var_52 *= (~54365);
                        var_53 = (min(var_53, -var_17));
                        arr_84 [i_17] [i_17] [i_22] [i_24] = (((arr_79 [i_22 - 1] [i_22 + 1] [i_22 - 1] [i_22 + 1] [i_22 + 1]) + (arr_79 [i_22 + 1] [i_22 + 1] [i_22 + 1] [i_22 + 1] [i_22 - 1])));
                    }
                    for (int i_25 = 1; i_25 < 12;i_25 += 1) /* same iter space */
                    {
                        var_54 = var_12;
                        var_55 = (max(var_55, var_10));
                        arr_88 [i_17] [i_20] [i_21] [i_22] = (7858756185596631429 & -754476937250627872);
                        var_56 = 190;
                        var_57 = (max(var_57, var_18));
                    }
                    var_58 = -1;
                    var_59 = 17958628830735167595;
                }
                /* vectorizable */
                for (int i_26 = 0; i_26 < 14;i_26 += 1)
                {
                    var_60 = 41692098;
                    var_61 = (min(var_61, 2445258766));
                }
                for (int i_27 = 0; i_27 < 14;i_27 += 1)
                {
                    var_62 = ((max(var_6, var_17)));
                    var_63 = -2352821284498248059;

                    for (int i_28 = 0; i_28 < 14;i_28 += 1)
                    {
                        var_64 |= -30642;
                        var_65 = (min(15, 9));
                        var_66 = (max(var_66, var_9));
                        var_67 = (max(var_67, (!var_8)));
                    }
                    for (int i_29 = 4; i_29 < 13;i_29 += 1)
                    {
                        var_68 = (max((arr_46 [i_21]), var_13));
                        arr_98 [i_29] [i_27] [i_21] [i_20] [i_17] = var_10;
                    }
                    for (int i_30 = 0; i_30 < 14;i_30 += 1)
                    {
                        arr_103 [i_21] [i_21] [i_21] [1] [i_21] [i_21] = min(((min((~-30806), (min(var_12, (arr_57 [i_30] [i_27] [i_21] [i_17])))))), (arr_95 [i_17] [i_21] [i_30]));
                        arr_104 [i_17] [i_20] [1] [i_27] [i_30] = -44;
                        arr_105 [i_17] [6] [i_21] [i_27] [8] = (arr_45 [i_20] [i_20 - 1] [i_20 - 2] [i_20] [i_20 - 2] [i_20 - 2]);
                        arr_106 [i_20] [i_20] = (arr_44 [i_30] [i_30] [i_21] [i_27]);
                        var_69 = 96;
                    }
                    var_70 ^= (((~(arr_100 [i_27] [i_27] [i_27] [i_27] [i_27] [i_27]))));
                }
            }
            for (int i_31 = 0; i_31 < 14;i_31 += 1)
            {
                /* LoopNest 2 */
                for (int i_32 = 1; i_32 < 13;i_32 += 1)
                {
                    for (int i_33 = 1; i_33 < 12;i_33 += 1)
                    {
                        {
                            var_71 += ((max(var_15, var_17)));
                            var_72 = (arr_112 [2] [2] [i_31] [9] [i_31] [i_31] [i_31]);
                            var_73 = ((8 - (!0)));
                        }
                    }
                }
                arr_115 [i_17] = ((max((-1 / 54032), var_15)));
                var_74 = 1307215139;
                arr_116 [6] [i_17] = (~1456033158594144191);
            }
        }
        var_75 = (var_4 ^ (min((max(14579081021272129505, var_5)), (0 * 0))));
        arr_117 [i_17] = var_15;
    }
    for (int i_34 = 0; i_34 < 1;i_34 += 1)
    {
        var_76 = (min(var_76, ((((max((arr_13 [i_34] [i_34] [i_34] [i_34]), 151618202)) == (((max(var_17, var_8)))))))));
        var_77 = (min(var_77, (arr_62 [0] [12] [i_34] [0])));
    }
    var_78 *= ((min(-80, var_15)));
    var_79 = var_1;
    #pragma endscop
}
