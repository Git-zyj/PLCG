/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 118071
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=118071 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/118071
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 1; i_0 < 19;i_0 += 1)
    {
        var_14 = (min(var_8, ((~((var_13 ? var_5 : var_2))))));
        var_15 = ((((~7) < 243)));
        var_16 |= var_9;
        var_17 = var_1;

        for (int i_1 = 4; i_1 < 18;i_1 += 1) /* same iter space */
        {

            for (int i_2 = 0; i_2 < 20;i_2 += 1)
            {

                for (int i_3 = 0; i_3 < 20;i_3 += 1)
                {
                    var_18 = var_10;

                    for (int i_4 = 0; i_4 < 20;i_4 += 1)
                    {
                        var_19 = (max(var_19, ((max(var_13, ((((min(3503958643318817706, -1)) >= (((var_9 ? var_9 : var_0)))))))))));
                        var_20 = (min(var_6, (max(var_5, var_11))));
                    }
                    /* vectorizable */
                    for (int i_5 = 1; i_5 < 18;i_5 += 1)
                    {
                        arr_16 [i_0 - 1] [i_2] [i_0 - 1] [i_0] [7] = (~var_6);
                        var_21 &= ((var_4 ? var_13 : var_2));
                        var_22 = ((var_7 ? var_5 : var_4));
                        var_23 = var_5;
                        arr_17 [i_2] [i_1 + 1] [i_1 + 1] [i_1 + 1] [i_1 - 2] = ((var_4 % ((var_13 ? var_0 : var_6))));
                    }
                    for (int i_6 = 0; i_6 < 20;i_6 += 1)
                    {
                        var_24 = (min((((var_1 && (((1 ? 1 : var_8)))))), ((var_11 ? var_1 : var_0))));
                        arr_22 [i_0 + 1] [i_2] [i_2] = var_2;
                    }
                    var_25 = ((((min(var_3, var_3))) ^ ((-((min(var_7, var_12)))))));
                }
                var_26 |= ((max(-28, -6)));
            }
            /* vectorizable */
            for (int i_7 = 2; i_7 < 19;i_7 += 1)
            {

                for (int i_8 = 3; i_8 < 17;i_8 += 1)
                {
                    var_27 -= (var_10 + ((var_8 ? var_6 : var_8)));
                    arr_29 [i_8] = ((~(var_2 >= var_10)));
                    var_28 *= (var_11 ^ var_0);
                }

                for (int i_9 = 0; i_9 < 20;i_9 += 1)
                {

                    for (int i_10 = 1; i_10 < 1;i_10 += 1) /* same iter space */
                    {
                        var_29 = (max(var_29, var_2));
                        var_30 = ((var_8 ? var_4 : ((var_9 ? var_4 : var_10))));
                        var_31 |= (~var_6);
                        var_32 = (~var_9);
                    }
                    for (int i_11 = 1; i_11 < 1;i_11 += 1) /* same iter space */
                    {
                        var_33 = ((12 ? 5 : 1));
                        var_34 -= ((((3503958643318817711 ? 12 : 95))) ? ((var_5 ? var_7 : var_12)) : (var_8 >= var_5));
                        var_35 |= var_6;
                    }
                    for (int i_12 = 1; i_12 < 17;i_12 += 1)
                    {
                        arr_40 [i_9] [13] = ((var_12 ? var_9 : var_3));
                        var_36 |= (~((var_11 ? var_9 : var_10)));
                        var_37 &= var_2;
                        var_38 = var_3;
                    }
                    var_39 = ((var_6 ? ((var_3 ? var_4 : var_7)) : (~var_13)));
                    var_40 = var_5;
                    var_41 = (max(var_41, (((var_11 << (var_2 - 50))))));
                }
                for (int i_13 = 0; i_13 < 1;i_13 += 1)
                {
                    var_42 &= ((var_6 ? var_10 : var_7));
                    var_43 = (~var_2);
                    var_44 = (min(var_44, var_6));
                }
                arr_43 [i_0] [i_1] [i_7 - 2] [i_7 - 1] = var_3;
            }
            var_45 &= (max((min((min(var_6, var_0)), var_12)), var_13));
            /* LoopNest 2 */
            for (int i_14 = 0; i_14 < 20;i_14 += 1)
            {
                for (int i_15 = 0; i_15 < 20;i_15 += 1)
                {
                    {
                        var_46 = ((((var_7 >> (var_9 - 14972))) >= (((var_1 >> var_10) ? (var_11 && var_5) : ((var_12 ? var_3 : var_6))))));
                        var_47 = (min(((max(((var_7 ? var_8 : var_13)), ((var_2 << (var_1 - 1006374844)))))), (((var_5 & var_10) ? var_6 : ((var_7 ? var_4 : var_5))))));
                        var_48 *= var_5;
                        var_49 = ((+(((~var_11) ? var_10 : ((min(var_13, var_2)))))));

                        /* vectorizable */
                        for (int i_16 = 0; i_16 < 20;i_16 += 1)
                        {
                            var_50 = -4649089520559000680;
                            var_51 -= ((var_0 >> (var_11 <= var_2)));
                        }
                        for (int i_17 = 0; i_17 < 20;i_17 += 1)
                        {
                            arr_53 [i_0] [i_1] [i_14] [i_14] [i_17] [i_17] [i_14] &= (~((var_1 << ((((min(var_13, var_12))) + 137)))));
                            var_52 |= (min(((var_12 ? (~var_7) : ((var_10 ? var_9 : var_5)))), ((max(var_9, var_2)))));
                            var_53 |= (((var_2 ? var_8 : var_1)));
                        }
                        for (int i_18 = 0; i_18 < 20;i_18 += 1) /* same iter space */
                        {
                            arr_56 [i_0] [i_0] [i_0] [i_15] [i_0] [i_0] [i_0] = (((((var_1 ? var_1 : var_12))) ? (min(var_9, (var_13 / var_7))) : (((((4 ? 4917396393440415450 : var_2))) ? (var_11 % var_6) : 24))));
                            var_54 &= (((((((min(var_3, var_4)))) | var_0)) - var_7));
                        }
                        for (int i_19 = 0; i_19 < 20;i_19 += 1) /* same iter space */
                        {
                            var_55 = var_7;
                            var_56 = (max(((max((max(var_9, var_6)), var_8))), ((-(var_13 > var_11)))));
                        }
                    }
                }
            }
            var_57 += (min(((var_10 ? var_4 : var_2)), ((min(var_3, var_10)))));
        }
        for (int i_20 = 4; i_20 < 18;i_20 += 1) /* same iter space */
        {
            var_58 = ((((max(var_5, var_12))) - var_4));
            var_59 = ((min((min(var_0, var_11)), var_8)) / ((((max(var_6, var_4))))));
            /* LoopNest 2 */
            for (int i_21 = 0; i_21 < 20;i_21 += 1)
            {
                for (int i_22 = 2; i_22 < 19;i_22 += 1)
                {
                    {

                        for (int i_23 = 3; i_23 < 16;i_23 += 1) /* same iter space */
                        {
                            var_60 = (min(var_60, ((((~var_11) + ((var_10 ? var_8 : var_5)))))));
                            arr_72 [i_0 - 1] [i_0 - 1] [i_0 - 1] [i_0 - 1] [i_23] [i_20] [2] = (((((var_6 | var_3) ^ ((var_0 ? var_4 : var_12)))) ^ (((((var_9 >> (-1 + 7)))) ? (((-18184 + 2147483647) << (20206 - 20206))) : var_5))));
                        }
                        for (int i_24 = 3; i_24 < 16;i_24 += 1) /* same iter space */
                        {
                            var_61 = ((((max(var_0, var_13))) ? (min(var_11, ((var_9 ? var_8 : var_4)))) : ((((((var_5 ? var_3 : var_9))) || (((-145019729 ? 42201 : -32751))))))));
                            var_62 = ((max(var_6, (~var_11))));
                            arr_76 [i_24] [i_21] [i_21] [i_21] [i_21] [i_21] [i_21] = (min((max(((min(7, 11832))), ((var_1 ? var_11 : var_1)))), var_0));
                            var_63 = (max(((max(1, 224))), ((((max(var_1, var_1))) ? ((max(16, 1532761172))) : var_0))));
                        }

                        /* vectorizable */
                        for (int i_25 = 0; i_25 < 20;i_25 += 1)
                        {
                            var_64 &= var_6;
                            var_65 = ((var_5 ? var_2 : (var_13 >= var_7)));
                            arr_80 [i_0] [13] [i_22] [i_25] [1] = ((~(~8335634453816863019)));
                        }
                        for (int i_26 = 1; i_26 < 18;i_26 += 1)
                        {
                            var_66 &= ((((min(((var_5 ? var_9 : var_10)), ((var_2 ? var_2 : var_13))))) >= (min((var_0 * var_12), (var_3 + var_9)))));
                            var_67 ^= var_13;
                            var_68 = (max(((max(var_7, var_9))), var_7));
                        }
                        for (int i_27 = 0; i_27 < 20;i_27 += 1) /* same iter space */
                        {
                            var_69 = ((min(var_6, ((min(var_8, var_2))))));
                            var_70 = (max((max(var_2, ((var_2 ? var_10 : var_2)))), var_12));
                            var_71 = (((var_10 ? var_9 : var_7)) >= ((((var_9 % var_4) > var_9))));
                            var_72 = (max((-32762 * var_3), ((var_5 ? var_1 : var_5))));
                        }
                        for (int i_28 = 0; i_28 < 20;i_28 += 1) /* same iter space */
                        {
                            var_73 = var_8;
                            var_74 = ((((((var_6 ? var_3 : var_6))) ? var_2 : ((var_0 ? var_10 : var_11)))));
                        }
                    }
                }
            }
            /* LoopNest 2 */
            for (int i_29 = 0; i_29 < 20;i_29 += 1)
            {
                for (int i_30 = 0; i_30 < 20;i_30 += 1)
                {
                    {
                        arr_95 [i_0] [i_20] [i_29] = ((((((1939301153 ? (min((-2147483647 - 1), 3503958643318817738)) : 50806)) + 9223372036854775807)) << (189 - 189)));
                        var_75 = (max((max(((var_2 ? var_12 : var_13)), (~var_6))), var_8));
                        var_76 = min((~var_8), ((var_12 ? var_11 : var_6)));
                    }
                }
            }
        }
    }
    var_77 = (((((var_7 ^ var_3) ? ((var_6 ? var_3 : var_4)) : ((var_1 ? var_4 : var_12)))) & var_4));
    var_78 = (((min((var_5 * var_4), (var_12 * var_12)))) ? var_10 : ((var_1 ? var_2 : (((min(var_9, var_9)))))));
    #pragma endscop
}
