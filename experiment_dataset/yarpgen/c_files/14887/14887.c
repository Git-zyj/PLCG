/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 14887
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=14887 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/14887
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 13;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 13;i_1 += 1)
        {
            {

                /* vectorizable */
                for (int i_2 = 0; i_2 < 13;i_2 += 1) /* same iter space */
                {
                    arr_7 [i_2] [i_2] [i_1] [i_0] = -14874;
                    arr_8 [i_0] = 2096565119;
                }
                for (int i_3 = 0; i_3 < 13;i_3 += 1) /* same iter space */
                {
                    var_12 = (min(4108852820, (var_8 || var_8)));
                    /* LoopNest 2 */
                    for (int i_4 = 0; i_4 < 13;i_4 += 1)
                    {
                        for (int i_5 = 0; i_5 < 13;i_5 += 1)
                        {
                            {
                                var_13 = (max((-16120 / 4361124501978995015), (max(-7260, 32704))));
                                var_14 = (min(var_14, ((max((max(-14874, 16119)), 7259)))));
                                arr_17 [i_0] [i_0] [i_3] [i_4] [i_5] [i_5] = (~var_4);
                            }
                        }
                    }

                    for (int i_6 = 0; i_6 < 13;i_6 += 1)
                    {
                        var_15 ^= ((((min(var_4, var_7))) ? var_6 : (min(-16119, 1776047320))));
                        var_16 = (6881786403525905523 ? 2624544467 : 4294967295);
                    }
                    for (int i_7 = 0; i_7 < 13;i_7 += 1)
                    {
                        arr_24 [i_0] [i_0] [i_3] [i_7] = (3405800418 ? (~-16117) : (max((min(47010, var_6)), (~-14874))));
                        var_17 = (min(((max(var_5, var_8))), 9223372036854775801));
                    }
                    for (int i_8 = 0; i_8 < 13;i_8 += 1) /* same iter space */
                    {
                        var_18 = (max(var_18, ((max(var_7, var_11)))));
                        arr_28 [i_0] [i_3] = min(((max(-16115, -31470))), (min(1635336801, 889166877)));
                        var_19 = (min(var_19, ((max((((47005 ? 47010 : 31236))), (~1285692759175988488))))));
                        var_20 = (max((max(14167, 14874)), (414788513 <= var_8)));
                        arr_29 [i_8] [i_0] [i_1] [i_0] |= 16541;
                    }
                    /* vectorizable */
                    for (int i_9 = 0; i_9 < 13;i_9 += 1) /* same iter space */
                    {
                        var_21 = (10408 - 65518);
                        arr_33 [i_0] [i_0] [i_1] [i_0] [i_9] = ((var_8 ? var_4 : 1879636563));
                    }

                    for (int i_10 = 0; i_10 < 13;i_10 += 1)
                    {
                        arr_38 [i_0] [i_0] [i_1] [i_0] [i_0] [i_0] = var_11;
                        arr_39 [i_1] [i_3] [i_1] [i_0] = max(52748, (max(var_2, (min(var_4, 2965)))));
                        var_22 -= (max((max(6467058040060221348, var_2)), ((max(716658986, var_10)))));

                        for (int i_11 = 0; i_11 < 13;i_11 += 1)
                        {
                            var_23 = ((max(var_0, (-16108 | var_10))));
                            var_24 *= (min((!7049), 10303));
                            var_25 = -6545051113434554793;
                        }
                        for (int i_12 = 0; i_12 < 13;i_12 += 1)
                        {
                            var_26 ^= var_8;
                            var_27 = (min(var_27, (4294967293 ^ -6545051113434554797)));
                        }
                    }
                }
                /* LoopNest 2 */
                for (int i_13 = 0; i_13 < 13;i_13 += 1)
                {
                    for (int i_14 = 0; i_14 < 13;i_14 += 1)
                    {
                        {
                            var_28 += 8064;
                            var_29 = ((~(~32752)));
                            arr_51 [i_14] [i_1] [i_1] = (((max((min(-6467058040060221348, var_6)), var_6))) ? (((max(var_10, -32754)))) : ((((max(2415330733, 4128768))) ? ((23475 ? 0 : 662799380)) : (var_7 ^ 65514))));

                            for (int i_15 = 0; i_15 < 13;i_15 += 1) /* same iter space */
                            {
                                arr_54 [i_15] [i_15] &= var_10;
                                var_30 = ((max(30300, 2136373216)));
                                var_31 = (min(var_5, ((var_8 * (var_5 - 20747)))));
                                var_32 = (min(var_1, 4131536912));
                            }
                            for (int i_16 = 0; i_16 < 13;i_16 += 1) /* same iter space */
                            {
                                var_33 = (((min(((max(18520, 45421))), (max(6467058040060221345, var_7)))) - 4164442911));
                                var_34 = ((~(max((var_0 || var_9), 2731768969))));
                                var_35 = (max((max(54697, 4294967279)), 4));
                            }
                        }
                    }
                }
                /* LoopNest 2 */
                for (int i_17 = 0; i_17 < 13;i_17 += 1)
                {
                    for (int i_18 = 0; i_18 < 13;i_18 += 1)
                    {
                        {
                            var_36 = var_9;

                            for (int i_19 = 0; i_19 < 13;i_19 += 1)
                            {
                                var_37 = (min(var_37, ((max(((var_11 >> ((((var_11 ? 3463 : var_4)) - 3441)))), ((var_9 ? 4235762517 : ((max(var_10, var_8))))))))));
                                var_38 = (max((min(119082601, var_2)), 4));
                            }
                            for (int i_20 = 1; i_20 < 12;i_20 += 1)
                            {
                                var_39 = var_10;
                                arr_68 [i_0] [i_1] [i_17] [i_0] [i_17] [i_20] [i_18] = ((((max(var_8, 1892859293185287863)))) ? ((((max(var_8, 9223372036854775807))))) : var_1);
                                arr_69 [i_0] [i_0] [i_0] [i_0] [i_20] [i_0] |= (((var_1 / 453586379084495762) ? ((min(1563794539, var_4))) : 30319));
                            }
                            for (int i_21 = 1; i_21 < 12;i_21 += 1)
                            {
                                var_40 = 384;
                                var_41 |= (((max((min(43962, var_4)), var_6)) < (((min(47010, 21573))))));
                                var_42 = (min(var_42, -54779));
                                var_43 = (max((((min(-492714821694004194, 1022)))), ((min(var_6, var_5)))));
                            }
                            var_44 = (min(var_44, ((max(7812848970891807303, 35236)))));
                            var_45 = 9909;
                            arr_72 [i_0] [i_0] [i_1] [i_18] [i_18] [i_17] |= 43962;
                        }
                    }
                }
            }
        }
    }
    /* LoopNest 2 */
    for (int i_22 = 0; i_22 < 14;i_22 += 1)
    {
        for (int i_23 = 0; i_23 < 14;i_23 += 1)
        {
            {
                /* LoopNest 2 */
                for (int i_24 = 0; i_24 < 14;i_24 += 1)
                {
                    for (int i_25 = 0; i_25 < 14;i_25 += 1)
                    {
                        {
                            var_46 ^= 3216621560;
                            var_47 = (max(var_47, ((((max(7812848970891807303, 16523)) > (18530 && 20905))))));
                            arr_85 [i_22] [i_22] [i_23] [i_22] [i_24] [i_25] = ((min((var_9 == var_9), (var_5 & var_9))));
                            var_48 |= (max(var_4, var_2));
                        }
                    }
                }
                /* LoopNest 2 */
                for (int i_26 = 0; i_26 < 14;i_26 += 1)
                {
                    for (int i_27 = 0; i_27 < 14;i_27 += 1)
                    {
                        {
                            arr_92 [i_26] [i_27] = ((!((!(-32767 - 1)))));
                            var_49 = ((((var_1 ? (-9223372036854775807 - 1) : 65535))));
                        }
                    }
                }
                var_50 = (max(((8388607 ^ ((max(9916, -9916))))), -var_9));
            }
        }
    }
    #pragma endscop
}
