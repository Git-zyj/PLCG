/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 128191
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=128191 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/128191
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    /* vectorizable */
    for (int i_0 = 2; i_0 < 20;i_0 += 1)
    {
        /* LoopNest 2 */
        for (int i_1 = 0; i_1 < 22;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 22;i_2 += 1)
            {
                {
                    var_17 = (max(var_17, ((var_16 ? var_5 : var_3))));
                    /* LoopNest 2 */
                    for (int i_3 = 0; i_3 < 22;i_3 += 1)
                    {
                        for (int i_4 = 0; i_4 < 22;i_4 += 1)
                        {
                            {
                                var_18 = ((144115119356379136 ? 0 : 18446744073709551615));
                                arr_14 [i_0] [i_0] [i_3] [i_3] [i_3] [i_3] [i_0] |= (((((var_0 ? var_2 : var_15))) ? var_5 : ((var_10 ? var_6 : var_13))));
                                arr_15 [i_0] [i_0] [i_2] [i_0] [i_4] = ((var_12 ? var_11 : var_1));
                                arr_16 [i_3] &= ((var_7 ? var_0 : var_1));
                                var_19 = ((var_14 ? var_12 : 3));
                            }
                        }
                    }
                    var_20 = ((var_7 ? var_4 : var_3));
                    arr_17 [i_0] [i_1] [i_0] = ((var_8 ? (((var_8 ? var_15 : var_11))) : ((var_14 ? var_10 : var_12))));
                }
            }
        }
        /* LoopNest 3 */
        for (int i_5 = 0; i_5 < 22;i_5 += 1)
        {
            for (int i_6 = 0; i_6 < 22;i_6 += 1)
            {
                for (int i_7 = 3; i_7 < 20;i_7 += 1)
                {
                    {

                        for (int i_8 = 0; i_8 < 22;i_8 += 1)
                        {
                            var_21 = ((var_1 ? var_0 : var_16));
                            var_22 = ((var_13 ? var_1 : var_3));
                        }
                        for (int i_9 = 2; i_9 < 20;i_9 += 1)
                        {
                            var_23 *= var_6;
                            var_24 += ((var_6 ? ((var_10 ? var_15 : var_14)) : var_9));
                        }
                        for (int i_10 = 0; i_10 < 22;i_10 += 1) /* same iter space */
                        {
                            arr_35 [i_0] [i_0] [i_0] = ((var_13 ? ((var_13 ? var_15 : var_7)) : (((var_16 ? var_5 : var_4)))));
                            var_25 = ((var_13 ? var_1 : var_1));
                            var_26 = (max(var_26, (((var_8 ? var_13 : ((var_14 ? var_13 : var_6)))))));
                        }
                        for (int i_11 = 0; i_11 < 22;i_11 += 1) /* same iter space */
                        {
                            var_27 = (max(var_27, (((var_9 ? var_3 : var_3)))));
                            var_28 = (max(var_28, ((((var_16 ? var_4 : var_16))))));
                            var_29 = (max(var_29, (((var_12 ? var_6 : var_0)))));
                        }
                        var_30 = ((var_9 ? var_16 : var_16));
                        var_31 = var_0;
                    }
                }
            }
        }
    }
    for (int i_12 = 0; i_12 < 22;i_12 += 1)
    {
        var_32 = (min(var_32, (((var_4 ? ((4186181511 ? 18446744073709551615 : ((453045200 ? 18446744073709551615 : 0)))) : var_13)))));
        var_33 = (((((var_3 ? var_11 : var_15))) ? var_12 : (((var_1 ? var_13 : var_10)))));
        /* LoopNest 2 */
        for (int i_13 = 3; i_13 < 20;i_13 += 1)
        {
            for (int i_14 = 3; i_14 < 18;i_14 += 1)
            {
                {
                    /* LoopNest 2 */
                    for (int i_15 = 3; i_15 < 18;i_15 += 1)
                    {
                        for (int i_16 = 0; i_16 < 22;i_16 += 1)
                        {
                            {
                                var_34 = (((var_0 ? var_5 : var_13)));
                                var_35 = (min(var_35, (((((((((var_6 ? var_9 : var_7))) ? ((var_8 ? var_13 : var_12)) : var_15))) ? (((((var_6 ? var_15 : var_12))))) : (((var_4 ? var_15 : var_11))))))));
                            }
                        }
                    }
                    var_36 = ((((var_11 ? var_5 : var_3))) ? (((var_0 ? var_2 : var_2))) : var_0);
                    var_37 = ((((((0 ? 18446744073709551613 : 2047)))) ? (((var_16 ? var_0 : var_8))) : (((((var_1 ? var_2 : var_7))) ? ((var_13 ? var_7 : var_5)) : var_10))));
                    var_38 = ((18446744073709551614 ? 2982981948 : 3557033327));
                }
            }
        }
        var_39 = (((((((var_2 ? var_6 : var_16))) ? ((var_9 ? var_15 : var_9)) : (((var_3 ? var_0 : var_8)))))) ? (((var_10 ? var_15 : var_12))) : (((172 ? -9223372036854775790 : 18446744073709551615))));
    }
    for (int i_17 = 4; i_17 < 20;i_17 += 1)
    {
        var_40 = ((1 ? 38242 : 4695381981514916113));
        arr_54 [i_17] = var_8;
        arr_55 [i_17] [i_17] &= ((1772787224 ? ((((((737933991 ? 27302 : 1939915877))) ? -3547471177365732426 : ((18446744073709551615 ? -7909231527490400544 : -79))))) : ((-7909231527490400544 ? 617276062 : 18446744073709551615))));
        var_41 = ((var_0 ? var_14 : var_14));

        /* vectorizable */
        for (int i_18 = 0; i_18 < 22;i_18 += 1) /* same iter space */
        {
            var_42 = ((var_0 ? var_14 : var_5));

            for (int i_19 = 0; i_19 < 22;i_19 += 1)
            {
                var_43 = (var_1 ? var_2 : var_10);
                arr_62 [i_17] [i_17] [i_17] |= ((var_14 ? var_1 : var_3));
                arr_63 [i_19] [i_19] [i_19] = (((((var_9 ? var_12 : var_3))) ? ((var_14 ? var_14 : var_3)) : var_3));
                var_44 = (((((var_1 ? var_8 : var_1))) ? var_14 : var_7));
            }
        }
        for (int i_20 = 0; i_20 < 22;i_20 += 1) /* same iter space */
        {
            arr_66 [i_17] [i_20] &= ((((((var_15 ? var_3 : var_16)))) ? (((var_11 ? var_15 : var_1))) : var_5));
            var_45 = (((((var_16 ? var_5 : var_2))) ? (((((var_6 ? var_4 : var_9))) ? ((3471148447 ? 2361081350 : 9223372036854775790)) : var_1)) : ((((((var_13 ? var_0 : var_10))) ? ((var_3 ? var_4 : var_15)) : var_1)))));
        }
    }
    /* LoopNest 2 */
    for (int i_21 = 1; i_21 < 1;i_21 += 1)
    {
        for (int i_22 = 0; i_22 < 15;i_22 += 1)
        {
            {
                var_46 = (((((var_2 ? var_3 : var_7))) ? ((var_9 ? ((var_13 ? var_7 : var_4)) : (((var_15 ? var_8 : var_2))))) : (((var_16 ? var_6 : var_2)))));
                var_47 = (max(var_47, var_7));
            }
        }
    }

    for (int i_23 = 0; i_23 < 18;i_23 += 1)
    {
        arr_75 [i_23] = var_8;
        var_48 = ((var_12 ? ((5357368433943848989 ? 2812966872 : 1482000406)) : (((var_7 ? var_16 : var_16)))));
    }
    for (int i_24 = 0; i_24 < 15;i_24 += 1)
    {
        arr_79 [i_24] = (((var_4 ? var_0 : var_10)));
        arr_80 [14] &= var_5;
        arr_81 [i_24] = ((var_1 ? var_6 : var_11));
        var_49 = var_16;
    }
    for (int i_25 = 4; i_25 < 12;i_25 += 1)
    {
        var_50 = (((((var_2 ? ((32579 ? var_0 : var_14)) : var_14))) ? var_5 : ((-9223372036854775790 ? -9223372036854775793 : -9223372036854775780))));
        var_51 = ((var_7 ? var_6 : ((var_2 ? var_15 : var_2))));
    }
    /* vectorizable */
    for (int i_26 = 0; i_26 < 11;i_26 += 1)
    {
        arr_86 [i_26] [i_26] = var_4;
        var_52 = ((var_8 ? var_15 : var_3));
    }
    #pragma endscop
}
