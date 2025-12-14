/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 119432
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=119432 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/119432
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 1; i_0 < 20;i_0 += 1)
    {

        /* vectorizable */
        for (int i_1 = 1; i_1 < 23;i_1 += 1) /* same iter space */
        {
            var_16 = (min(var_16, var_8));
            var_17 = ((var_7 ? (arr_2 [i_0] [i_1]) : 399237161));
            var_18 = (min(var_18, ((((arr_1 [i_0] [22]) ? var_1 : ((var_12 ? var_11 : var_2)))))));
        }
        for (int i_2 = 1; i_2 < 23;i_2 += 1) /* same iter space */
        {

            /* vectorizable */
            for (int i_3 = 0; i_3 < 24;i_3 += 1)
            {
                var_19 = ((399237157 ? (arr_1 [i_0] [i_0]) : 10657));

                for (int i_4 = 4; i_4 < 21;i_4 += 1)
                {
                    var_20 |= (~9223372036854775799);
                    var_21 -= (399237175 ? 24539 : 210900307);
                    var_22 = var_15;
                    var_23 = -var_6;

                    for (int i_5 = 0; i_5 < 24;i_5 += 1)
                    {
                        var_24 = ((var_6 ? var_2 : (arr_2 [i_2 + 1] [i_4 - 4])));
                        var_25 &= (~-10672);
                    }
                }
                for (int i_6 = 1; i_6 < 21;i_6 += 1)
                {

                    for (int i_7 = 0; i_7 < 24;i_7 += 1) /* same iter space */
                    {
                        var_26 = ((65 >= (arr_9 [i_0 + 1] [i_2 - 1] [i_6 + 3])));
                        var_27 = ((-65 ? (arr_2 [i_2 - 1] [i_2 + 1]) : ((224 >> (var_2 + 455491798579005190)))));
                    }
                    for (int i_8 = 0; i_8 < 24;i_8 += 1) /* same iter space */
                    {
                        var_28 = (((arr_24 [i_8] [i_6 + 1] [i_6] [i_6 - 1] [i_2 + 1] [i_0 + 3]) / var_11));
                        var_29 = -30;
                        var_30 = var_0;
                    }
                    for (int i_9 = 0; i_9 < 24;i_9 += 1) /* same iter space */
                    {
                        var_31 &= var_10;
                        var_32 = -7942242744406430290;
                    }
                    var_33 &= -var_7;
                    var_34 = ((((((-127 - 1) ? 3453 : 31386))) || var_7));
                }
                var_35 *= var_14;
            }
            var_36 = (max(var_36, (((min(2340115611, ((min(var_0, (arr_19 [i_0] [i_0 + 4] [9] [i_0]))))))))));
        }
        for (int i_10 = 1; i_10 < 21;i_10 += 1) /* same iter space */
        {
            var_37 = -10672;

            for (int i_11 = 2; i_11 < 20;i_11 += 1) /* same iter space */
            {
                var_38 = (max(var_11, 126));
                var_39 = 7942242744406430275;
                var_40 = (!2147483647);
            }
            /* vectorizable */
            for (int i_12 = 2; i_12 < 20;i_12 += 1) /* same iter space */
            {
                /* LoopNest 2 */
                for (int i_13 = 2; i_13 < 23;i_13 += 1)
                {
                    for (int i_14 = 2; i_14 < 22;i_14 += 1)
                    {
                        {
                            var_41 *= var_0;
                            var_42 = ((-(var_1 || var_2)));
                        }
                    }
                }
                var_43 = var_3;
            }
            for (int i_15 = 2; i_15 < 20;i_15 += 1) /* same iter space */
            {
                var_44 = ((~(((((var_14 ? (arr_41 [i_10] [i_0] [i_15] [i_10] [i_0 + 1]) : -18362))) ? (arr_20 [i_15] [i_0] [i_10] [i_0]) : ((399237169 ? (arr_6 [i_0] [i_10] [i_0]) : var_0))))));
                var_45 = (max(((~(~var_8))), var_12));
                var_46 = -105;
                var_47 = (((((arr_21 [i_0] [i_10] [i_10] [i_15]) ? var_11 : var_14)) - (min(-2, 174))));
                var_48 = (arr_24 [i_0] [i_0] [i_0] [17] [i_0] [i_0]);
            }
        }
        for (int i_16 = 1; i_16 < 21;i_16 += 1) /* same iter space */
        {
            var_49 = (min(var_49, ((max(3895730126, 629573270447182364)))));
            /* LoopNest 2 */
            for (int i_17 = 0; i_17 < 24;i_17 += 1)
            {
                for (int i_18 = 1; i_18 < 22;i_18 += 1)
                {
                    {
                        var_50 = 3895730143;
                        var_51 = (arr_3 [i_0 + 2] [i_16 + 1]);
                        var_52 &= var_0;
                    }
                }
            }
        }
        var_53 |= (((min((255 / var_6), (912135885 * var_10))) / 399237177));
    }
    /* vectorizable */
    for (int i_19 = 0; i_19 < 21;i_19 += 1)
    {
        var_54 = 0;

        for (int i_20 = 0; i_20 < 21;i_20 += 1)
        {
            var_55 = -184;

            for (int i_21 = 3; i_21 < 20;i_21 += 1)
            {
                var_56 |= ((1 ? 612648374 : 237));

                for (int i_22 = 0; i_22 < 1;i_22 += 1) /* same iter space */
                {
                    var_57 = ((~(arr_63 [i_21 - 3] [i_21 - 3])));
                    var_58 = (-30 / 612648379);
                    var_59 = (arr_53 [i_22] [i_19] [i_19] [i_19]);
                }
                for (int i_23 = 0; i_23 < 1;i_23 += 1) /* same iter space */
                {
                    var_60 *= ((~(arr_52 [i_21 - 2] [i_21 + 1])));

                    for (int i_24 = 0; i_24 < 21;i_24 += 1)
                    {
                        var_61 = var_9;
                        var_62 &= ((-(arr_58 [i_21 - 3] [i_21 - 3])));
                    }
                    var_63 = (max(var_63, var_14));
                    var_64 = ((82 * (82 / var_15)));
                    var_65 = var_10;
                }
                var_66 = (var_1 == var_7);
            }
        }
        for (int i_25 = 0; i_25 < 21;i_25 += 1)
        {
            var_67 &= (arr_74 [i_19] [i_25] [12] [i_25] [i_25] [i_19]);

            for (int i_26 = 3; i_26 < 19;i_26 += 1)
            {
                var_68 = (arr_62 [i_19] [i_25] [i_26 + 2]);
                var_69 = (arr_50 [i_19] [i_25] [i_19]);
                var_70 = -51;
            }
        }

        for (int i_27 = 1; i_27 < 19;i_27 += 1)
        {
            /* LoopNest 3 */
            for (int i_28 = 1; i_28 < 20;i_28 += 1)
            {
                for (int i_29 = 1; i_29 < 20;i_29 += 1)
                {
                    for (int i_30 = 1; i_30 < 19;i_30 += 1)
                    {
                        {
                            var_71 |= ((1 << (-13 + 21)));
                            var_72 = var_15;
                        }
                    }
                }
            }
            var_73 = (min(var_73, var_4));

            for (int i_31 = 0; i_31 < 21;i_31 += 1)
            {
                var_74 |= ((var_4 ? (~var_15) : (var_3 != 0)));
                var_75 = (min(var_75, 22));
            }
            for (int i_32 = 0; i_32 < 21;i_32 += 1)
            {
                var_76 *= ((9660628191865424636 & (((var_12 ? var_14 : var_0)))));
                var_77 = ((~(arr_48 [i_27] [i_27])));

                for (int i_33 = 1; i_33 < 20;i_33 += 1)
                {

                    for (int i_34 = 2; i_34 < 19;i_34 += 1)
                    {
                        var_78 = (i_27 % 2 == 0) ? ((((224 ^ var_1) << ((((-(arr_35 [i_27]))) - 14651))))) : ((((224 ^ var_1) << ((((((-(arr_35 [i_27]))) - 14651)) + 8034)))));
                        var_79 = -46;
                        var_80 = (!7637710511570176396);
                    }
                    for (int i_35 = 0; i_35 < 21;i_35 += 1)
                    {
                        var_81 |= ((((-3245 ^ (arr_18 [i_19] [i_27] [12] [i_19]))) ^ var_1));
                        var_82 = ((~((~(arr_33 [i_35] [i_35])))));
                        var_83 = 41;
                        var_84 = (((((1 ? var_13 : -1))) ? (~var_1) : 32751));
                    }
                    var_85 = (((arr_67 [i_27] [i_27] [18] [i_27]) * 570125067));
                    var_86 |= ((var_9 ? var_10 : 16908));
                    var_87 |= 220;
                }
            }
            var_88 = (255 ? 18 : -var_10);
        }
        var_89 = 449616499;
        var_90 = var_3;
    }
    for (int i_36 = 1; i_36 < 17;i_36 += 1)
    {
        var_91 = ((((max(var_0, var_15)))));
        var_92 *= (((7 - 38) + (var_9 ^ -449616500)));

        /* vectorizable */
        for (int i_37 = 0; i_37 < 19;i_37 += 1)
        {
            var_93 -= ((!((((arr_19 [i_36 + 2] [i_36 + 1] [i_36] [i_36 + 2]) + var_7)))));
            var_94 = ((~(arr_58 [17] [i_36 + 1])));
        }
    }

    /* vectorizable */
    for (int i_38 = 0; i_38 < 22;i_38 += 1)
    {
        var_95 = (max(var_95, (((20 < (arr_110 [18]))))));
        var_96 = (min(var_96, (((~(arr_29 [i_38]))))));
        var_97 = (min(var_97, var_7));
        var_98 = (((var_0 ? var_7 : (arr_35 [i_38]))));
    }
    var_99 = ((-((((max(var_1, var_15))) & ((var_5 >> (var_1 - 49)))))));
    #pragma endscop
}
