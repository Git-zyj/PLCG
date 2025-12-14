/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 149567
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=149567 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/149567
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    /* vectorizable */
    for (int i_0 = 0; i_0 < 1;i_0 += 1)
    {
        var_13 = var_0;

        for (int i_1 = 0; i_1 < 1;i_1 += 1)
        {
            var_14 = -var_12;
            var_15 = -var_7;
            var_16 = -var_0;
            var_17 &= var_10;
            /* LoopNest 3 */
            for (int i_2 = 3; i_2 < 9;i_2 += 1)
            {
                for (int i_3 = 0; i_3 < 1;i_3 += 1)
                {
                    for (int i_4 = 1; i_4 < 10;i_4 += 1)
                    {
                        {
                            var_18 = (var_3 < var_8);
                            var_19 = -var_8;
                            var_20 = -var_12;
                        }
                    }
                }
            }
        }
        for (int i_5 = 3; i_5 < 8;i_5 += 1) /* same iter space */
        {
            var_21 += (~var_11);
            var_22 = -var_11;
        }
        for (int i_6 = 3; i_6 < 8;i_6 += 1) /* same iter space */
        {
            var_23 = var_0;
            var_24 ^= -var_10;

            for (int i_7 = 0; i_7 < 1;i_7 += 1)
            {

                for (int i_8 = 0; i_8 < 11;i_8 += 1)
                {

                    for (int i_9 = 0; i_9 < 11;i_9 += 1)
                    {
                        var_25 = ((~((var_6 ? var_7 : var_11))));
                        var_26 = (min(var_26, var_3));
                        var_27 = var_6;
                    }
                    for (int i_10 = 3; i_10 < 10;i_10 += 1)
                    {
                        var_28 = (~var_3);
                        var_29 = (min(var_29, -var_9));
                        var_30 = (min(var_30, ((((~var_1) ? var_10 : var_5)))));
                        var_31 *= ((var_10 ? ((var_4 ? var_0 : var_6)) : (~var_8)));
                    }
                    var_32 -= ((-var_12 ? var_6 : var_7));
                }
                var_33 = ((var_9 ? (~var_7) : var_10));
                var_34 = (max(var_34, (var_1 & var_3)));
                var_35 = ((~(var_10 | var_9)));
                var_36 = (((var_8 + 2147483647) << (var_1 - 23)));
            }
            for (int i_11 = 2; i_11 < 10;i_11 += 1)
            {
                var_37 = (min(var_37, (((var_7 ? var_2 : ((var_5 ? var_1 : var_4)))))));
                var_38 = (min(var_38, var_8));
                var_39 = -var_8;
                var_40 = var_0;
            }
        }
        var_41 = var_11;
        var_42 = ((var_10 ? var_4 : var_5));
    }
    for (int i_12 = 3; i_12 < 15;i_12 += 1)
    {

        /* vectorizable */
        for (int i_13 = 0; i_13 < 19;i_13 += 1)
        {
            var_43 = ((!(~var_0)));
            var_44 = ((var_2 ? (~var_10) : (~var_2)));
            var_45 = ((~((var_3 ? var_7 : var_10))));
        }
        /* vectorizable */
        for (int i_14 = 4; i_14 < 18;i_14 += 1)
        {
            var_46 = (!var_11);
            var_47 = (~var_3);
        }
        for (int i_15 = 0; i_15 < 1;i_15 += 1) /* same iter space */
        {
            var_48 = (min(var_48, var_4));
            var_49 = ((-((var_4 ? var_9 : var_8))));
        }
        for (int i_16 = 0; i_16 < 1;i_16 += 1) /* same iter space */
        {

            for (int i_17 = 0; i_17 < 19;i_17 += 1)
            {
                var_50 = (max(var_50, (((!(~var_12))))));
                var_51 = (min(((~((var_7 ? var_2 : var_10)))), ((var_6 ? ((var_1 ? var_2 : var_1)) : var_10))));

                for (int i_18 = 0; i_18 < 19;i_18 += 1)
                {

                    for (int i_19 = 0; i_19 < 19;i_19 += 1)
                    {
                        var_52 = ((!(((var_0 ? var_11 : var_6)))));
                        var_53 = -var_9;
                    }
                    var_54 -= (((((var_6 ? (max(var_12, var_9)) : var_3))) ? (((var_12 ? var_11 : var_5))) : -var_12));

                    for (int i_20 = 0; i_20 < 19;i_20 += 1)
                    {
                        var_55 += (min(var_0, var_7));
                        var_56 = ((-(((var_2 ? var_5 : var_1)))));
                    }

                    for (int i_21 = 0; i_21 < 19;i_21 += 1)
                    {
                        var_57 |= -var_9;
                        var_58 = (!var_0);
                    }
                }
            }
            for (int i_22 = 1; i_22 < 15;i_22 += 1)
            {
                var_59 &= (-((var_7 ? var_12 : var_1)));

                for (int i_23 = 1; i_23 < 15;i_23 += 1)
                {
                    var_60 = ((-var_12 ? (((var_5 ? var_1 : var_12))) : (((((var_8 ? var_12 : var_9))) ? var_8 : (((var_1 ? var_5 : var_3)))))));
                    var_61 -= (~((((var_10 ? var_5 : var_12)))));
                }
                for (int i_24 = 0; i_24 < 1;i_24 += 1) /* same iter space */
                {
                    var_62 = ((!(((~((var_2 ? var_5 : var_11)))))));
                    var_63 = (((((var_3 ? var_1 : var_3))) ? var_8 : -var_3));

                    for (int i_25 = 0; i_25 < 19;i_25 += 1)
                    {
                        var_64 = (!var_12);
                        var_65 = ((-var_6 ? -var_8 : (~-var_11)));
                        var_66 = ((var_5 ? var_7 : (var_7 && var_2)));
                    }
                    for (int i_26 = 0; i_26 < 19;i_26 += 1)
                    {
                        var_67 = ((!(((var_11 ? var_8 : var_7)))));
                        var_68 = var_0;
                        var_69 = ((!((((((var_10 ? var_0 : var_11))) ? var_11 : ((var_12 ? var_8 : var_6)))))));
                    }
                    for (int i_27 = 0; i_27 < 19;i_27 += 1)
                    {
                        var_70 &= (((var_2 ? var_0 : var_4)));
                        var_71 = (max(((-var_8 ? var_6 : var_10)), (min(((var_11 ? var_5 : var_1)), (~var_1)))));
                        var_72 = (min(var_72, (~var_2)));
                        var_73 = (min(var_73, ((((var_2 ? var_8 : var_1))))));
                        var_74 = ((var_2 && (((var_6 ? (~var_6) : var_2)))));
                    }
                    for (int i_28 = 3; i_28 < 16;i_28 += 1)
                    {
                        var_75 |= min((!var_1), ((((~var_2) != (var_6 <= var_7)))));
                        var_76 -= ((((max(var_11, var_1)))));
                    }

                    for (int i_29 = 0; i_29 < 19;i_29 += 1)
                    {
                        var_77 = ((-((var_6 - ((var_5 ? var_10 : var_10))))));
                        var_78 = (max(((var_1 ? (!var_10) : var_6)), (min(-var_12, -var_9))));
                    }
                }
                /* vectorizable */
                for (int i_30 = 0; i_30 < 1;i_30 += 1) /* same iter space */
                {

                    for (int i_31 = 0; i_31 < 19;i_31 += 1)
                    {
                        var_79 = (~var_0);
                        var_80 = (((~var_4) ? (var_11 * var_1) : var_11));
                    }
                    for (int i_32 = 0; i_32 < 19;i_32 += 1)
                    {
                        var_81 = ((-var_6 ? (var_10 || var_6) : var_6));
                        var_82 = (max(var_82, (((-(var_5 + var_2))))));
                    }
                    for (int i_33 = 0; i_33 < 19;i_33 += 1)
                    {
                        var_83 = (~var_9);
                        var_84 = -var_4;
                    }
                    for (int i_34 = 0; i_34 < 19;i_34 += 1)
                    {
                        var_85 += -var_10;
                        var_86 |= ((var_6 ? var_8 : var_9));
                        var_87 = var_12;
                    }

                    for (int i_35 = 1; i_35 < 1;i_35 += 1)
                    {
                        var_88 = ((var_12 ? var_11 : var_4));
                        var_89 = ((var_3 ? var_11 : var_9));
                        var_90 = ((var_10 ? var_10 : ((var_11 ? var_4 : var_5))));
                        var_91 += ((var_2 ? var_12 : var_1));
                    }
                    var_92 |= (((var_7 ? var_2 : var_10)));
                    var_93 = (var_12 / var_6);
                }

                for (int i_36 = 0; i_36 < 19;i_36 += 1)
                {
                    var_94 ^= (var_6 + var_10);
                    var_95 = ((((((!var_2) ? var_12 : var_10))) ? ((-var_1 ? ((var_4 ? var_11 : var_5)) : (max(var_2, var_9)))) : ((var_9 ? var_6 : ((min(var_0, var_7)))))));
                    var_96 |= (!var_4);
                    var_97 -= (((((var_7 ? var_6 : var_8))) ? (((!(~var_11)))) : (min(var_12, -var_6))));
                }
                for (int i_37 = 0; i_37 < 19;i_37 += 1)
                {
                    var_98 = (((~var_5) * (((!(!var_8))))));
                    var_99 += ((var_4 ? (((var_1 ? var_9 : var_10))) : (~var_9)));
                }
            }
            var_100 = var_2;
        }
        var_101 = (max(((var_8 ? var_6 : var_10)), ((max(var_10, var_7)))));
    }
    for (int i_38 = 0; i_38 < 18;i_38 += 1)
    {
        var_102 = ((~((var_6 ? (~var_2) : var_10))));
        var_103 = (min(-var_8, -var_8));
    }
    /* vectorizable */
    for (int i_39 = 0; i_39 < 21;i_39 += 1)
    {
        var_104 ^= ((~(~var_3)));
        var_105 = (~var_5);
    }
    var_106 = var_9;

    /* vectorizable */
    for (int i_40 = 0; i_40 < 11;i_40 += 1)
    {
        var_107 = var_12;
        var_108 *= (~var_1);
        var_109 -= ((var_2 ? var_8 : var_2));
    }
    for (int i_41 = 0; i_41 < 13;i_41 += 1)
    {
        var_110 = (max(var_110, (((~(((~var_10) ? (~var_5) : var_4)))))));
        var_111 |= ((!var_5) ? ((var_1 ? var_10 : var_0)) : var_6);
        var_112 = (((var_0 ? var_6 : var_11)));
    }
    /* vectorizable */
    for (int i_42 = 0; i_42 < 13;i_42 += 1)
    {
        var_113 = var_1;
        var_114 ^= -var_8;
        var_115 = -var_9;
        var_116 = (((!var_1) ? var_7 : (!var_6)));
    }
    var_117 = var_11;
    #pragma endscop
}
