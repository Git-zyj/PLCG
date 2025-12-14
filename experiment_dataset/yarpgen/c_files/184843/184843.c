/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 184843
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=184843 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/184843
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_14 = ((((var_3 ? (var_10 && var_3) : (max(18446744073709551615, 6233493144338409123)))) << (var_12 + 168)));
    var_15 = 14242;

    for (int i_0 = 0; i_0 < 24;i_0 += 1)
    {
        var_16 = (min(var_4, var_5));
        var_17 = (max(var_17, (~var_6)));
        var_18 += (min((var_4 != var_3), (!var_11)));
    }
    for (int i_1 = 1; i_1 < 11;i_1 += 1)
    {
        var_19 = (max(((min(var_6, ((!(arr_3 [i_1 + 2] [i_1 - 1])))))), ((18446744073709551615 ? (15362080868542449710 <= -14229) : 4))));

        for (int i_2 = 0; i_2 < 15;i_2 += 1) /* same iter space */
        {
            var_20 -= (((~-var_5) ^ (((arr_0 [i_1 + 4]) ? var_5 : var_7))));
            var_21 = (min(262143, -14243));
            var_22 = (var_6 ^ (min(var_11, var_6)));
            var_23 = (min(var_23, (!14242)));
            var_24 |= ((~(min(((var_6 ? var_5 : var_7)), var_3))));
        }
        for (int i_3 = 0; i_3 < 15;i_3 += 1) /* same iter space */
        {
            var_25 = ((max(((max(var_1, var_1))), ((var_11 ? var_0 : var_2)))));
            /* LoopNest 3 */
            for (int i_4 = 0; i_4 < 15;i_4 += 1)
            {
                for (int i_5 = 4; i_5 < 13;i_5 += 1)
                {
                    for (int i_6 = 0; i_6 < 15;i_6 += 1)
                    {
                        {
                            var_26 = (((((var_6 ? var_8 : var_13))) ? ((14273 ? 14242 : 14228)) : var_8));
                            var_27 |= (min(((((max(12, 14202))) < (arr_13 [i_1 + 4] [i_3] [i_4] [i_5 + 1]))), (14198 <= -14213)));
                            var_28 = (arr_17 [i_6]);
                        }
                    }
                }
            }
            var_29 = (var_5 | var_6);
        }
        /* vectorizable */
        for (int i_7 = 0; i_7 < 15;i_7 += 1)
        {
            /* LoopNest 3 */
            for (int i_8 = 1; i_8 < 14;i_8 += 1)
            {
                for (int i_9 = 0; i_9 < 15;i_9 += 1)
                {
                    for (int i_10 = 0; i_10 < 15;i_10 += 1)
                    {
                        {
                            var_30 = (min(var_30, ((var_1 ? (arr_10 [i_1 + 2] [i_7]) : var_7))));
                            var_31 = (-14203 - 3576);
                            var_32 &= (arr_24 [i_1 + 3] [i_8 + 1] [i_9] [i_10]);
                        }
                    }
                }
            }

            for (int i_11 = 0; i_11 < 15;i_11 += 1)
            {
                var_33 = (((var_8 / var_5) != (var_9 % var_1)));
                var_34 = var_7;

                for (int i_12 = 0; i_12 < 15;i_12 += 1)
                {
                    var_35 = var_5;
                    var_36 &= (arr_20 [i_1 - 1] [i_7] [i_11] [i_1 + 4]);
                    var_37 = var_5;
                }
                for (int i_13 = 3; i_13 < 14;i_13 += 1)
                {
                    var_38 *= var_2;

                    for (int i_14 = 3; i_14 < 12;i_14 += 1)
                    {
                        var_39 = -var_1;
                        var_40 &= (~3524351992);
                        var_41 &= (((arr_14 [i_7] [i_7] [i_11] [i_13 + 1] [i_14 - 1]) + 14236));
                    }
                    for (int i_15 = 0; i_15 < 15;i_15 += 1)
                    {
                        var_42 = ((14217 ? 0 : 14202));
                        var_43 = ((var_8 ? var_2 : var_1));
                    }
                    for (int i_16 = 0; i_16 < 15;i_16 += 1)
                    {
                        var_44 ^= (((arr_19 [i_1 + 4] [i_7] [i_13 - 3]) / (var_11 < -51)));
                        var_45 = ((14228 ? -14198 : 1));
                        var_46 = (var_0 % var_0);
                        var_47 = 14231;
                    }
                    var_48 &= (((var_1 ? var_3 : 0)));
                    var_49 = (((((var_5 ? var_6 : var_12))) ? var_12 : var_4));
                }
                for (int i_17 = 0; i_17 < 15;i_17 += 1)
                {

                    for (int i_18 = 0; i_18 < 15;i_18 += 1)
                    {
                        var_50 |= -80;
                        var_51 &= ((18446744073709551604 ? (arr_15 [i_11] [i_17] [i_11] [i_17] [i_18]) : 497090662));
                        var_52 = var_13;
                    }
                    var_53 ^= (((var_2 != var_2) ? 7891794495522752978 : (var_12 && var_5)));
                    var_54 ^= var_6;
                    var_55 = (268435455 / 5);
                }
            }
        }
        var_56 &= ((((((var_7 && var_5) + -var_11))) ? (var_9 + var_1) : (((((arr_29 [i_1 + 2] [i_1 - 1]) - var_7)) + -2))));

        for (int i_19 = 0; i_19 < 15;i_19 += 1)
        {
            var_57 ^= (((var_12 <= -1) ? ((var_9 ? var_13 : var_5)) : (((var_3 ? var_10 : var_8)))));
            var_58 = var_8;
            var_59 = (max(((~(min(0, 3865860282)))), var_9));
            var_60 &= var_4;
        }
        /* vectorizable */
        for (int i_20 = 0; i_20 < 15;i_20 += 1)
        {

            for (int i_21 = 0; i_21 < 1;i_21 += 1)
            {
                var_61 = ((((14236 + (arr_38 [i_1 + 3] [i_1 - 1] [i_1 + 3] [i_20] [i_21]))) - var_10));
                var_62 = var_3;
            }
            var_63 = var_10;
            var_64 -= (!var_8);
            var_65 &= var_5;
        }
    }
    var_66 ^= ((~((var_3 ? (15685856844198259889 || var_12) : var_5))));
    #pragma endscop
}
