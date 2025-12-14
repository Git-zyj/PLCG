/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 138931
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=138931 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/138931
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 0; i_0 < 20;i_0 += 1)
    {
        /* LoopNest 3 */
        for (int i_1 = 0; i_1 < 20;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 20;i_2 += 1)
            {
                for (int i_3 = 1; i_3 < 16;i_3 += 1)
                {
                    {
                        arr_9 [i_0] [i_1] [i_0] [i_1] [i_1] = -22822;
                        var_17 = ((-(max(39, var_2))));
                    }
                }
            }
        }
        /* LoopNest 2 */
        for (int i_4 = 0; i_4 < 20;i_4 += 1)
        {
            for (int i_5 = 2; i_5 < 17;i_5 += 1)
            {
                {
                    var_18 = max(0, var_5);
                    var_19 += var_10;

                    for (int i_6 = 3; i_6 < 18;i_6 += 1)
                    {
                        var_20 = (((max(68, 68))));

                        /* vectorizable */
                        for (int i_7 = 1; i_7 < 19;i_7 += 1)
                        {
                            arr_22 [i_0] [i_0] [i_5] [i_6] = 121;
                            var_21 = (var_13 > 0);
                        }
                        for (int i_8 = 0; i_8 < 20;i_8 += 1)
                        {
                            var_22 = ((((((((var_4 ? 44575 : var_4))) ? ((var_8 ? var_1 : -581961738)) : var_6))) ? -1742452839 : -22822));
                            var_23 ^= (!-1802878985);
                        }
                    }
                }
            }
        }
        /* LoopNest 2 */
        for (int i_9 = 1; i_9 < 19;i_9 += 1)
        {
            for (int i_10 = 0; i_10 < 20;i_10 += 1)
            {
                {
                    /* LoopNest 2 */
                    for (int i_11 = 3; i_11 < 18;i_11 += 1)
                    {
                        for (int i_12 = 0; i_12 < 20;i_12 += 1)
                        {
                            {
                                var_24 = ((55433 ? -1 : ((1742452850 ? var_0 : ((var_7 ? var_1 : 16288556827128418499))))));
                                var_25 ^= ((((((~var_13) ? -1801303116567165474 : ((max(167, var_14)))))) || ((((var_8 ? var_1 : 0))))));
                                arr_35 [i_12] [i_11] [i_0] [i_9 + 1] [i_0] = ((~(497499670557820058 | 4294967295)));
                            }
                        }
                    }
                    /* LoopNest 2 */
                    for (int i_13 = 0; i_13 < 20;i_13 += 1)
                    {
                        for (int i_14 = 0; i_14 < 20;i_14 += 1)
                        {
                            {
                                var_26 = ((var_8 ? (max((~1882398788), var_6)) : -39));
                                var_27 = (max(var_27, (max(0, 0))));
                            }
                        }
                    }
                }
            }
        }
        /* LoopNest 3 */
        for (int i_15 = 0; i_15 < 1;i_15 += 1)
        {
            for (int i_16 = 1; i_16 < 19;i_16 += 1)
            {
                for (int i_17 = 0; i_17 < 20;i_17 += 1)
                {
                    {
                        var_28 -= 0;
                        var_29 = (min(var_29, var_4));
                    }
                }
            }
        }
        /* LoopNest 2 */
        for (int i_18 = 0; i_18 < 20;i_18 += 1)
        {
            for (int i_19 = 0; i_19 < 20;i_19 += 1)
            {
                {
                    /* LoopNest 2 */
                    for (int i_20 = 0; i_20 < 20;i_20 += 1)
                    {
                        for (int i_21 = 0; i_21 < 20;i_21 += 1)
                        {
                            {
                                var_30 &= (((var_13 ? (!var_14) : 203)));
                                var_31 = 763886347;
                                arr_57 [i_0] [i_0] = (max((!var_8), (((max(12726, -1448498876035168013))))));
                                var_32 = var_4;
                            }
                        }
                    }
                    var_33 |= (var_9 / 273409124425324671);

                    /* vectorizable */
                    for (int i_22 = 0; i_22 < 20;i_22 += 1)
                    {

                        for (int i_23 = 0; i_23 < 20;i_23 += 1)
                        {
                            var_34 = ((var_2 << ((((var_10 ? 32 : var_0)) - 29))));
                            var_35 = 8;
                            var_36 += ((var_6 ? var_3 : var_4));
                        }
                        for (int i_24 = 0; i_24 < 20;i_24 += 1)
                        {
                            var_37 *= 7302698291745697991;
                            var_38 = (((7 ? var_16 : var_16)));
                        }
                        var_39 = ((8 ? ((var_7 ? 1003576926 : 31272)) : var_0));
                        arr_68 [i_0] [i_0] [i_0] [i_0] = ((var_3 ? 0 : -16384));
                    }
                }
            }
        }
    }
    /* LoopNest 2 */
    for (int i_25 = 1; i_25 < 12;i_25 += 1)
    {
        for (int i_26 = 0; i_26 < 13;i_26 += 1)
        {
            {

                for (int i_27 = 0; i_27 < 13;i_27 += 1)
                {
                    /* LoopNest 2 */
                    for (int i_28 = 0; i_28 < 1;i_28 += 1)
                    {
                        for (int i_29 = 3; i_29 < 9;i_29 += 1)
                        {
                            {
                                arr_83 [i_26] [i_26] &= ((8378686767640565074 ? var_14 : (((-581961738 || 1) ? (max(0, var_1)) : (-122 == var_2)))));
                                var_40 = (((((var_14 ? -24767 : var_3))) ? ((~(~var_12))) : 1));
                                var_41 = ((((!((min(var_11, 1))))) ? (max(var_4, ((max(0, 2147483627))))) : (min(4294950912, 84))));
                            }
                        }
                    }
                    /* LoopNest 2 */
                    for (int i_30 = 0; i_30 < 13;i_30 += 1)
                    {
                        for (int i_31 = 3; i_31 < 12;i_31 += 1)
                        {
                            {
                                var_42 = (min(-122, (var_14 % 21)));
                                arr_89 [i_26] [i_25] [i_26] = 2247058383475992330;
                            }
                        }
                    }

                    for (int i_32 = 0; i_32 < 13;i_32 += 1)
                    {

                        for (int i_33 = 0; i_33 < 13;i_33 += 1)
                        {
                            var_43 *= (((((~(~58185)))) ? ((~((4724625270078829043 ? var_6 : var_1)))) : (((((var_13 << (var_2 - 25311))))))));
                            var_44 = (max(var_10, ((((1160813935 ? 121 : var_12))))));
                            arr_96 [i_27] [i_27] [i_27] [i_27] [i_27] [i_27] [i_33] &= (16383 >> var_13);
                            var_45 &= (((max(6507215362455026865, (!var_16))) < -16384));
                            arr_97 [i_25 + 1] [i_25] [i_25 + 1] [i_25 + 1] [i_33] = 177;
                        }
                        for (int i_34 = 0; i_34 < 13;i_34 += 1)
                        {
                            var_46 *= 8406624024122566511;
                            arr_100 [i_34] [i_32] [i_25] [i_25 + 1] [i_25] [i_26] [i_25 + 1] = (((((var_3 ? var_9 : var_14))) || ((((((100 ? -21 : 10040120049586985105))) ? ((0 ? 13722118803630722559 : 1)) : (((max(var_3, 0)))))))));
                            arr_101 [i_25] [i_25] [i_25] [i_27] [i_32] [i_34] = (max(var_3, 24));
                        }
                        for (int i_35 = 2; i_35 < 12;i_35 += 1)
                        {
                            var_47 = (~-32758);
                            var_48 ^= ((-1 ^ (max((-2147483647 - 1), 1))));
                        }
                        var_49 = 1881985243;
                        var_50 = (max(var_2, (((var_7 == (max(var_1, 0)))))));
                    }
                }
                /* LoopNest 2 */
                for (int i_36 = 0; i_36 < 13;i_36 += 1)
                {
                    for (int i_37 = 0; i_37 < 13;i_37 += 1)
                    {
                        {

                            /* vectorizable */
                            for (int i_38 = 2; i_38 < 12;i_38 += 1) /* same iter space */
                            {
                                var_51 = (4278543154 ^ 10867);
                                arr_113 [i_38 + 1] [i_37] [i_37] [i_37] [i_25] [i_25] |= (((var_10 ^ 1) < ((53996 ? 18446744073709551609 : var_1))));
                                var_52 = (min(var_52, (var_16 - 0)));
                                arr_114 [i_25] [i_25] [i_36] [i_25] = var_6;
                                var_53 = (min(var_53, (((((-2538 ? var_9 : var_9)) + ((var_7 ? var_8 : var_9)))))));
                            }
                            for (int i_39 = 2; i_39 < 12;i_39 += 1) /* same iter space */
                            {
                                arr_118 [i_25] [i_37] [i_39 + 1] |= (min(var_16, (((((-6566878157269846208 ? var_8 : 60236))) ? (max(-106, var_4)) : var_12))));
                                var_54 ^= (var_14 != var_7);
                                var_55 = 0;
                                var_56 |= (((~26986) ? var_3 : ((min(-2181, var_8)))));
                                var_57 *= 18446744073709551609;
                            }
                            var_58 = ((((0 ? var_8 : 150))));
                        }
                    }
                }
                /* LoopNest 3 */
                for (int i_40 = 0; i_40 < 13;i_40 += 1)
                {
                    for (int i_41 = 0; i_41 < 13;i_41 += 1)
                    {
                        for (int i_42 = 0; i_42 < 13;i_42 += 1)
                        {
                            {
                                arr_127 [i_42] [i_25] [i_25] [i_25] = var_11;
                                var_59 = (min(var_59, var_2));
                            }
                        }
                    }
                }
            }
        }
    }
    #pragma endscop
}
