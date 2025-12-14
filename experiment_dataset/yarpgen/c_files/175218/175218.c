/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 175218
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=175218 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/175218
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_13 *= (min(-21146, 978789411));

    for (int i_0 = 0; i_0 < 15;i_0 += 1)
    {
        /* LoopNest 2 */
        for (int i_1 = 0; i_1 < 15;i_1 += 1)
        {
            for (int i_2 = 1; i_2 < 1;i_2 += 1)
            {
                {
                    arr_7 [i_0] = (max(((((38989 ? 968192987 : -11690)))), var_6));
                    /* LoopNest 2 */
                    for (int i_3 = 0; i_3 < 15;i_3 += 1)
                    {
                        for (int i_4 = 2; i_4 < 13;i_4 += 1)
                        {
                            {
                                var_14 -= (min((!var_3), ((!((min(var_0, 127)))))));
                                arr_15 [i_4] [i_0] = (!var_11);
                                var_15 = (((min(var_12, var_9)) | ((max(var_2, var_3)))));
                            }
                        }
                    }
                }
            }
        }

        for (int i_5 = 0; i_5 < 15;i_5 += 1) /* same iter space */
        {
            var_16 = (min((min(var_4, var_10)), (((var_11 ? var_7 : var_11)))));
            arr_20 [i_0] = var_6;
        }
        /* vectorizable */
        for (int i_6 = 0; i_6 < 15;i_6 += 1) /* same iter space */
        {
            var_17 = 2102037590;
            var_18 += (var_0 ? var_3 : var_9);

            for (int i_7 = 0; i_7 < 15;i_7 += 1)
            {
                var_19 = var_7;

                for (int i_8 = 0; i_8 < 15;i_8 += 1)
                {
                    var_20 = (var_8 > var_2);
                    arr_28 [i_0] [i_6] [i_6] [i_6] = (((((var_8 ? var_11 : var_5))) ? var_0 : -1));
                }
                arr_29 [i_7] [i_7] [i_7] [i_0] = var_8;
                arr_30 [i_0] [i_6] [i_0] = ((-(21139 != var_9)));
            }
            for (int i_9 = 0; i_9 < 15;i_9 += 1)
            {

                for (int i_10 = 3; i_10 < 12;i_10 += 1)
                {
                    var_21 ^= var_7;
                    arr_36 [5] [i_9] [i_9] [i_0] = (-5299577756182768675 != var_7);
                    var_22 = var_6;
                    arr_37 [i_10] [i_0] [i_10 - 1] [i_10 + 1] [i_10] = var_0;
                    arr_38 [i_0] [i_0] = (var_2 > var_2);
                }
                for (int i_11 = 0; i_11 < 15;i_11 += 1)
                {
                    var_23 = (max(var_23, (((((-7086425832696109171 ? var_5 : var_10)) + 4294967276)))));
                    var_24 -= (66 & var_2);
                }
                for (int i_12 = 0; i_12 < 15;i_12 += 1)
                {
                    arr_43 [i_0] [i_0] [i_0] [i_0] [6] [i_0] = var_1;
                    var_25 = var_9;

                    for (int i_13 = 0; i_13 < 15;i_13 += 1) /* same iter space */
                    {
                        var_26 = (min(var_26, var_8));
                        var_27 = var_2;
                        arr_47 [i_0] [i_12] [i_9] [i_6] [i_0] = var_0;
                        var_28 *= 255;
                    }
                    for (int i_14 = 0; i_14 < 15;i_14 += 1) /* same iter space */
                    {
                        var_29 = (min(var_29, (((var_7 ? var_4 : var_1)))));
                        var_30 -= var_3;
                    }
                    for (int i_15 = 0; i_15 < 15;i_15 += 1) /* same iter space */
                    {
                        var_31 *= ((var_3 ? var_3 : var_9));
                        arr_53 [i_0] [i_15] [i_12] [i_9] [i_6] [i_0] = var_12;
                        var_32 = (max(var_32, (((((var_12 ? var_4 : -4861232087779986788)) ^ var_0)))));
                        var_33 = -2084596898320604146;
                    }

                    for (int i_16 = 1; i_16 < 14;i_16 += 1)
                    {
                        var_34 = (max(var_34, 1));
                        var_35 = (max(var_35, (var_11 && var_0)));
                        arr_56 [i_0] [i_6] [i_0] [i_12] [1] = ((var_12 ? -1613044802 : var_11));
                        var_36 = ((-4134197706932807314 ? (!var_2) : 3815768991));
                    }
                    var_37 = -108;
                }
                arr_57 [i_0] [i_0] = (var_6 / 29254);
            }
            for (int i_17 = 1; i_17 < 14;i_17 += 1)
            {
                var_38 = (--2147483647);
                var_39 = (var_12 ? (((11220902317430619764 ? var_7 : var_10))) : ((var_5 ? 3815768991 : var_7)));
                var_40 ^= (((var_1 + var_12) <= var_3));
                var_41 = (18523 / var_10);
                var_42 = (min(var_42, var_6));
            }
        }
        for (int i_18 = 0; i_18 < 15;i_18 += 1)
        {
            var_43 = (((var_6 > 65527) % (((!var_8) ? ((min(var_6, var_11))) : 1))));

            for (int i_19 = 2; i_19 < 12;i_19 += 1)
            {
                var_44 = (min(var_44, (((!((min(-119, 24))))))));
                arr_66 [i_0] [1] [i_0] [i_0] = (min(((((var_0 == var_4) % -30))), (max(var_8, 6974741541438797903))));
                var_45 &= (max((max(((23670 ? 26 : var_5)), var_9)), -0));
            }
        }
        arr_67 [i_0] = (2925286606 + 7053851011163486435);
        var_46 ^= ((max(var_0, var_6)));
    }
    for (int i_20 = 0; i_20 < 12;i_20 += 1)
    {
        var_47 ^= ((((min(var_11, ((-200868953164692375 ? var_6 : var_9))))) - 2875650185));
        /* LoopNest 2 */
        for (int i_21 = 0; i_21 < 12;i_21 += 1)
        {
            for (int i_22 = 0; i_22 < 12;i_22 += 1)
            {
                {

                    for (int i_23 = 0; i_23 < 12;i_23 += 1)
                    {
                        var_48 = ((((!105) / (max(var_2, 479198304)))));
                        arr_78 [i_20] [i_21] = var_5;
                        arr_79 [i_21] [i_21] = (max(var_12, var_1));
                        arr_80 [0] [i_21] [i_22] [i_21] = ((-4134197706932807314 > ((((1 ? -989690836 : -926241929))))));
                    }
                    for (int i_24 = 0; i_24 < 12;i_24 += 1)
                    {
                        arr_83 [i_20] [i_21] [i_22] [i_21] = (((!((max(11873061601839959153, 8436388608076141940))))));
                        var_49 = (min(var_49, var_0));
                    }
                    var_50 = (min(var_50, ((((((var_10 & 248) ? (min(3049783788409498924, 58)) : var_1)) >> (((min(((min(var_6, var_6))), (max(var_1, 9223372036854775807)))) - 81)))))));
                }
            }
        }
    }
    for (int i_25 = 1; i_25 < 21;i_25 += 1)
    {
        var_51 = var_7;
        var_52 = (min(var_52, ((((((7218484201074159439 ? 13 : -395298222))) || (((-11873061601839959153 ? (max(3218160875, 3327)) : var_6))))))));
        /* LoopNest 2 */
        for (int i_26 = 0; i_26 < 22;i_26 += 1)
        {
            for (int i_27 = 1; i_27 < 20;i_27 += 1)
            {
                {
                    var_53 *= var_2;
                    var_54 = (min(var_3, var_12));
                }
            }
        }
    }

    /* vectorizable */
    for (int i_28 = 1; i_28 < 1;i_28 += 1)
    {
        var_55 *= var_5;
        var_56 ^= var_3;
    }
    /* vectorizable */
    for (int i_29 = 0; i_29 < 10;i_29 += 1)
    {
        var_57 ^= (var_11 ? var_9 : var_8);
        arr_94 [i_29] = ((var_9 ? var_4 : var_6));
    }
    var_58 = ((((min(((var_6 ? 1 : var_10)), ((max(15, 27)))))) <= (min(((min(var_2, var_1))), (min(var_5, -1737694539))))));
    #pragma endscop
}
