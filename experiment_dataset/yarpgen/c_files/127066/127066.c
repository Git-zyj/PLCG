/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 127066
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=127066 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/127066
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_17 = (var_0 + 1);

    /* vectorizable */
    for (int i_0 = 1; i_0 < 23;i_0 += 1) /* same iter space */
    {
        arr_4 [i_0 - 1] = 25;

        for (int i_1 = 0; i_1 < 24;i_1 += 1)
        {
            var_18 = 1;
            /* LoopNest 2 */
            for (int i_2 = 0; i_2 < 24;i_2 += 1)
            {
                for (int i_3 = 0; i_3 < 24;i_3 += 1)
                {
                    {

                        for (int i_4 = 3; i_4 < 22;i_4 += 1)
                        {
                            var_19 = 221;
                            var_20 = (var_1 != var_0);
                            var_21 |= (--59568);
                            var_22 += (var_13 && 5967);
                        }
                        for (int i_5 = 0; i_5 < 24;i_5 += 1)
                        {
                            var_23 = var_14;
                            var_24 = var_8;
                        }
                        for (int i_6 = 2; i_6 < 23;i_6 += 1)
                        {
                            var_25 = 5967;
                            var_26 += 5965;
                        }
                        var_27 = 59571;
                        var_28 += (!-7816037997881702666);
                    }
                }
            }
        }
    }
    for (int i_7 = 1; i_7 < 23;i_7 += 1) /* same iter space */
    {
        var_29 = (max(var_29, (!var_15)));

        /* vectorizable */
        for (int i_8 = 1; i_8 < 20;i_8 += 1)
        {
            var_30 = var_1;

            for (int i_9 = 4; i_9 < 23;i_9 += 1)
            {
                var_31 += var_9;
                var_32 = (min(var_32, var_12));
                var_33 = 34;
            }
        }
        for (int i_10 = 0; i_10 < 24;i_10 += 1) /* same iter space */
        {
            var_34 |= 221;
            var_35 = 49311;
        }
        for (int i_11 = 0; i_11 < 24;i_11 += 1) /* same iter space */
        {
            var_36 -= 0;
            arr_34 [i_11] [i_7 + 1] [i_11] = var_6;
            var_37 = ((((min(var_11, 5965))) && 1304240997));
            var_38 = (((!156) && 165));
        }
        for (int i_12 = 0; i_12 < 24;i_12 += 1)
        {
            var_39 = (max(34, (min(var_5, ((max(201, var_12)))))));

            for (int i_13 = 0; i_13 < 1;i_13 += 1)
            {
                var_40 = (min((!250), (max(var_1, var_4))));
                arr_39 [i_12] [i_12] = (min(var_7, 9223372036854775807));
                arr_40 [16] [i_12] [i_12] [i_13] = (((var_14 + 45160) << (((((min(195, -19)) + 45)) - 18))));
                /* LoopNest 2 */
                for (int i_14 = 0; i_14 < 24;i_14 += 1)
                {
                    for (int i_15 = 0; i_15 < 24;i_15 += 1)
                    {
                        {
                            var_41 = min((var_13 >= 1366916187), 216);
                            var_42 = var_3;
                        }
                    }
                }
            }
            for (int i_16 = 2; i_16 < 22;i_16 += 1)
            {
                arr_50 [i_12] = var_10;
                var_43 = ((var_4 * (966349326991483200 + 188)));
                var_44 = (~(((max(288230376151711744, var_5)) & var_14)));

                /* vectorizable */
                for (int i_17 = 1; i_17 < 1;i_17 += 1) /* same iter space */
                {
                    var_45 += 20389;
                    var_46 = var_13;

                    for (int i_18 = 0; i_18 < 24;i_18 += 1) /* same iter space */
                    {
                        var_47 &= ((7609563060589781115 / (4095 * 248)));
                        var_48 = (-6166901675715527223 && 790806400);
                        var_49 = var_10;
                        var_50 = var_0;
                    }
                    for (int i_19 = 0; i_19 < 24;i_19 += 1) /* same iter space */
                    {
                        var_51 &= var_1;
                        var_52 = (var_10 / var_4);
                        var_53 = var_4;
                    }
                    for (int i_20 = 1; i_20 < 22;i_20 += 1) /* same iter space */
                    {
                        var_54 = var_15;
                        var_55 += -22;
                        var_56 = 43549;
                    }
                    for (int i_21 = 1; i_21 < 22;i_21 += 1) /* same iter space */
                    {
                        var_57 ^= (var_15 & var_0);
                        var_58 = -8479;
                        var_59 = 216;
                        var_60 = var_11;
                    }
                }
                for (int i_22 = 1; i_22 < 1;i_22 += 1) /* same iter space */
                {
                    var_61 = (max(var_61, var_14));
                    var_62 = (max(37820, (max(288230376151711733, var_13))));
                }

                for (int i_23 = 1; i_23 < 23;i_23 += 1)
                {
                    var_63 = 17566;
                    var_64 = (min((6 / 966349326991483200), 5965));
                }
            }
        }
        var_65 = var_6;
        var_66 = var_9;
        var_67 = (max(var_67, ((max(1023, -242)))));
    }
    for (int i_24 = 2; i_24 < 21;i_24 += 1)
    {
        var_68 = var_5;
        /* LoopNest 3 */
        for (int i_25 = 3; i_25 < 23;i_25 += 1)
        {
            for (int i_26 = 0; i_26 < 1;i_26 += 1)
            {
                for (int i_27 = 0; i_27 < 1;i_27 += 1)
                {
                    {
                        var_69 = ((var_4 || ((max(var_12, 52138)))));
                        var_70 = ((max((1023 & 9223372036854775807), 248)));
                        var_71 = 192;

                        /* vectorizable */
                        for (int i_28 = 0; i_28 < 25;i_28 += 1)
                        {
                            var_72 &= (~var_5);
                            var_73 = 65210;
                        }
                        for (int i_29 = 0; i_29 < 25;i_29 += 1)
                        {
                            var_74 = -288230376151711734;
                            var_75 = (max(var_8, ((min(65, 192)))));
                        }
                    }
                }
            }
        }
        var_76 = (((max(202, var_7)) << (var_5 - 10661)));
    }
    #pragma endscop
}
