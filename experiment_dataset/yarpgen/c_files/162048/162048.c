/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 162048
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=162048 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/162048
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 4; i_0 < 22;i_0 += 1)
    {
        for (int i_1 = 4; i_1 < 22;i_1 += 1)
        {
            {
                var_18 = (max(var_18, (((~(!var_9))))));
                /* LoopNest 2 */
                for (int i_2 = 0; i_2 < 25;i_2 += 1)
                {
                    for (int i_3 = 4; i_3 < 23;i_3 += 1)
                    {
                        {
                            var_19 += var_17;
                            var_20 = var_17;
                        }
                    }
                }
            }
        }
    }

    /* vectorizable */
    for (int i_4 = 0; i_4 < 12;i_4 += 1)
    {
        arr_15 [i_4] = (~188);
        var_21 = (var_9 + var_3);
        arr_16 [i_4] = (!var_2);
    }
    for (int i_5 = 4; i_5 < 13;i_5 += 1)
    {
        var_22 = (max(var_22, (~var_0)));
        var_23 = (var_3 * var_7);
    }
    for (int i_6 = 3; i_6 < 18;i_6 += 1)
    {
        /* LoopNest 3 */
        for (int i_7 = 0; i_7 < 20;i_7 += 1)
        {
            for (int i_8 = 0; i_8 < 20;i_8 += 1)
            {
                for (int i_9 = 1; i_9 < 18;i_9 += 1)
                {
                    {
                        var_24 += -var_3;
                        var_25 = (((var_11 <= var_4) + -var_4));
                    }
                }
            }
        }
        /* LoopNest 2 */
        for (int i_10 = 0; i_10 < 20;i_10 += 1)
        {
            for (int i_11 = 0; i_11 < 20;i_11 += 1)
            {
                {

                    /* vectorizable */
                    for (int i_12 = 1; i_12 < 18;i_12 += 1)
                    {

                        for (int i_13 = 1; i_13 < 19;i_13 += 1)
                        {
                            var_26 = (min(var_26, var_10));
                            var_27 = var_4;
                        }
                        var_28 = var_6;
                        var_29 = (var_4 + var_15);
                        var_30 ^= (~var_16);
                    }
                    var_31 = (var_11 % var_16);
                }
            }
        }
        var_32 = var_5;
    }
    /* LoopNest 3 */
    for (int i_14 = 0; i_14 < 14;i_14 += 1)
    {
        for (int i_15 = 0; i_15 < 14;i_15 += 1)
        {
            for (int i_16 = 0; i_16 < 14;i_16 += 1)
            {
                {
                    var_33 = ((~(!var_0)));
                    /* LoopNest 2 */
                    for (int i_17 = 0; i_17 < 14;i_17 += 1)
                    {
                        for (int i_18 = 0; i_18 < 14;i_18 += 1)
                        {
                            {
                                var_34 &= var_14;
                                var_35 = var_16;
                                var_36 = (max(var_36, (~var_3)));
                                var_37 = (max(var_37, (((-(var_3 / var_8))))));
                            }
                        }
                    }
                }
            }
        }
    }
    var_38 = var_5;

    for (int i_19 = 2; i_19 < 22;i_19 += 1)
    {
        var_39 = (min(var_39, ((((((var_4 < (!var_2)))) >> (var_15 < var_8))))));
        arr_59 [i_19 - 2] = var_2;
        var_40 = (min(var_40, (((+((((var_0 && var_17) > var_16))))))));
        var_41 = var_16;
        var_42 = (~var_2);
    }
    for (int i_20 = 0; i_20 < 24;i_20 += 1)
    {

        for (int i_21 = 0; i_21 < 24;i_21 += 1)
        {
            var_43 = var_12;
            var_44 = (min(var_44, (~var_14)));

            for (int i_22 = 1; i_22 < 22;i_22 += 1)
            {
                var_45 = (~var_15);
                /* LoopNest 2 */
                for (int i_23 = 1; i_23 < 23;i_23 += 1)
                {
                    for (int i_24 = 2; i_24 < 22;i_24 += 1)
                    {
                        {
                            var_46 = var_4;
                            var_47 *= ((((((var_12 && var_15) <= (var_17 && var_11)))) != (!var_0)));
                        }
                    }
                }
                arr_75 [i_21] = (((var_4 + var_10) && (var_1 <= var_0)));
            }
            for (int i_25 = 0; i_25 < 24;i_25 += 1)
            {

                /* vectorizable */
                for (int i_26 = 0; i_26 < 24;i_26 += 1)
                {

                    for (int i_27 = 1; i_27 < 22;i_27 += 1)
                    {
                        arr_84 [i_21] [i_21] = (!var_15);
                        var_48 = (min(var_48, 16244));
                    }
                    var_49 = -var_1;

                    for (int i_28 = 0; i_28 < 24;i_28 += 1)
                    {
                        var_50 = var_14;
                        var_51 = -var_3;
                    }
                    for (int i_29 = 0; i_29 < 24;i_29 += 1)
                    {
                        var_52 = (var_13 * var_12);
                        var_53 = var_17;
                    }
                }
                for (int i_30 = 0; i_30 < 24;i_30 += 1)
                {
                    var_54 -= ((!(var_4 <= var_10)));
                    var_55 += var_13;

                    for (int i_31 = 0; i_31 < 24;i_31 += 1)
                    {
                        var_56 = (min(var_56, (-var_11 <= var_4)));
                        var_57 = var_16;
                    }
                    for (int i_32 = 0; i_32 < 24;i_32 += 1)
                    {
                        var_58 = ((~(!var_1)));
                        var_59 -= (!var_14);
                    }
                }
                for (int i_33 = 1; i_33 < 22;i_33 += 1)
                {

                    for (int i_34 = 2; i_34 < 21;i_34 += 1)
                    {
                        var_60 = var_5;
                        var_61 ^= var_17;
                        var_62 = var_17;
                    }
                    var_63 = (min(var_63, (((var_12 ^ ((var_9 ^ (~var_12))))))));

                    /* vectorizable */
                    for (int i_35 = 0; i_35 < 24;i_35 += 1)
                    {
                        var_64 = (var_17 && var_7);
                        var_65 = (~var_12);
                    }
                }
                for (int i_36 = 0; i_36 < 24;i_36 += 1)
                {
                    var_66 = var_11;
                    var_67 = var_16;
                }

                for (int i_37 = 1; i_37 < 22;i_37 += 1)
                {
                    var_68 -= var_16;
                    var_69 = (min(var_69, var_8));
                }
                for (int i_38 = 0; i_38 < 24;i_38 += 1) /* same iter space */
                {

                    for (int i_39 = 0; i_39 < 24;i_39 += 1) /* same iter space */
                    {
                        var_70 = var_11;
                        var_71 = var_13;
                        var_72 ^= ((var_15 + ((((!(~var_0)))))));
                        var_73 = (min(var_73, ((((var_0 < var_17) && (var_17 * var_15))))));
                        var_74 = (max(var_74, (((((!(~var_0))))))));
                    }
                    for (int i_40 = 0; i_40 < 24;i_40 += 1) /* same iter space */
                    {
                        var_75 = var_4;
                        var_76 = var_5;
                        var_77 = (!var_14);
                        var_78 = ((~(var_5 / var_7)));
                    }
                    /* vectorizable */
                    for (int i_41 = 0; i_41 < 24;i_41 += 1) /* same iter space */
                    {
                        var_79 = (min(var_79, (((17493231531709217501 <= (!13927))))));
                        var_80 = (max(var_80, (var_16 < var_0)));
                        var_81 = (13927 < 14);
                    }
                    var_82 = (min(var_82, var_2));
                }
                for (int i_42 = 0; i_42 < 24;i_42 += 1) /* same iter space */
                {

                    /* vectorizable */
                    for (int i_43 = 0; i_43 < 24;i_43 += 1)
                    {
                        var_83 = var_13;
                        var_84 = var_4;
                        var_85 = (~var_6);
                    }
                    var_86 = (max(var_86, (var_17 * var_1)));
                    var_87 -= (((~var_3) && (var_4 / var_6)));
                    var_88 = (((~var_8) * (!95)));
                }
            }
            var_89 = ((!(~var_10)));
            var_90 = ((!(var_9 & var_10)));
        }
        var_91 = (((162 * 162) % (8107 + 41)));
    }
    #pragma endscop
}
