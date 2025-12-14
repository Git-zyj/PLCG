/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 157490
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=157490 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/157490
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_12 = (((((39 ? ((var_4 ? var_8 : var_5)) : var_6))) ? var_8 : var_2));
    var_13 = ((-83 ? ((-(~var_3))) : var_3));
    var_14 = var_8;
    var_15 *= var_5;

    /* vectorizable */
    for (int i_0 = 0; i_0 < 18;i_0 += 1)
    {
        /* LoopNest 3 */
        for (int i_1 = 0; i_1 < 0;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 18;i_2 += 1)
            {
                for (int i_3 = 1; i_3 < 17;i_3 += 1)
                {
                    {
                        var_16 = var_8;
                        var_17 = 6;
                    }
                }
            }
        }
        var_18 |= ((var_10 ? var_5 : ((var_4 ? var_11 : 32))));
        var_19 = var_11;
        /* LoopNest 2 */
        for (int i_4 = 0; i_4 < 18;i_4 += 1)
        {
            for (int i_5 = 0; i_5 < 18;i_5 += 1)
            {
                {
                    var_20 = var_1;
                    var_21 = var_11;
                }
            }
        }
    }
    for (int i_6 = 0; i_6 < 20;i_6 += 1)
    {
        /* LoopNest 2 */
        for (int i_7 = 0; i_7 < 20;i_7 += 1)
        {
            for (int i_8 = 0; i_8 < 20;i_8 += 1)
            {
                {
                    var_22 = (max(var_22, var_0));
                    /* LoopNest 2 */
                    for (int i_9 = 1; i_9 < 17;i_9 += 1)
                    {
                        for (int i_10 = 1; i_10 < 18;i_10 += 1)
                        {
                            {
                                var_23 = var_0;
                                var_24 = (min(var_24, ((((((var_11 ? ((var_4 ? var_11 : var_4)) : var_10))) ? var_3 : 75)))));
                                var_25 &= ((var_3 ? -116 : (((((var_3 ? var_7 : -6955011250115761321))) ? ((var_1 ? var_9 : var_9)) : var_11))));
                            }
                        }
                    }

                    /* vectorizable */
                    for (int i_11 = 0; i_11 < 20;i_11 += 1) /* same iter space */
                    {
                        var_26 = (!var_7);
                        var_27 = ((81 ? 113 : 112));
                        var_28 = (max(var_28, ((((((var_3 ? var_8 : var_7))) ? ((var_7 ? var_2 : 7)) : var_7)))));
                        var_29 &= (((((var_8 ? var_4 : var_1))) ? var_5 : var_3));
                        var_30 ^= var_1;
                    }
                    for (int i_12 = 0; i_12 < 20;i_12 += 1) /* same iter space */
                    {

                        for (int i_13 = 0; i_13 < 20;i_13 += 1) /* same iter space */
                        {
                            var_31 = 74;
                            var_32 = (min(var_32, -13));
                        }
                        for (int i_14 = 0; i_14 < 20;i_14 += 1) /* same iter space */
                        {
                            var_33 = ((var_10 ? (!var_2) : (((((-1 ? var_9 : var_5))) ? ((var_9 ? var_0 : var_3)) : (((var_1 ? var_6 : var_10)))))));
                            var_34 ^= var_10;
                            var_35 = var_2;
                        }
                        for (int i_15 = 0; i_15 < 20;i_15 += 1)
                        {
                            var_36 = ((var_10 ? ((28651 ? var_6 : ((954260803 ? 753261337 : 64)))) : (!var_10)));
                            var_37 *= (~9223372036854775807);
                        }
                        var_38 ^= (((((-26 ? -26130 : -82))) ? (((((0 ? var_4 : var_8))) ? var_5 : ((19833 ? -32758 : 1)))) : ((127 ? (~var_5) : var_4))));
                    }
                }
            }
        }
        var_39 = (max(var_39, 1));
        /* LoopNest 2 */
        for (int i_16 = 0; i_16 < 20;i_16 += 1)
        {
            for (int i_17 = 0; i_17 < 20;i_17 += 1)
            {
                {
                    var_40 &= ((var_9 ? (((-124 ? 16 : ((var_10 ? var_9 : var_11))))) : var_2));
                    var_41 = var_3;
                    var_42 = ((var_10 ? ((-75 ? var_5 : ((var_1 ? var_2 : var_8)))) : (((var_7 ? -21263 : ((var_10 ? var_8 : var_10)))))));
                }
            }
        }
    }
    for (int i_18 = 0; i_18 < 21;i_18 += 1)
    {
        /* LoopNest 2 */
        for (int i_19 = 0; i_19 < 21;i_19 += 1)
        {
            for (int i_20 = 0; i_20 < 21;i_20 += 1)
            {
                {
                    var_43 = (max(var_43, (((1 ? -83 : var_11)))));

                    for (int i_21 = 1; i_21 < 19;i_21 += 1)
                    {
                        var_44 += (((((var_11 ? ((15492 ? 1 : -6383)) : ((21278 ? 32751 : -21279))))) ? 18446744073709551615 : (((-var_6 ? (((-91 ? var_10 : var_8))) : var_3)))));
                        var_45 = -40;

                        for (int i_22 = 0; i_22 < 1;i_22 += 1)
                        {
                            var_46 = var_0;
                            var_47 = var_0;
                        }
                        for (int i_23 = 4; i_23 < 19;i_23 += 1)
                        {
                            var_48 = ((var_6 ? 101 : ((~((var_3 ? var_11 : var_10))))));
                            var_49 |= var_2;
                            var_50 = (((((255 ? -81 : -16501))) ? var_1 : (((-var_2 ? ((var_2 ? var_7 : var_6)) : var_0)))));
                        }
                        for (int i_24 = 3; i_24 < 19;i_24 += 1)
                        {
                            var_51 = (max(var_51, (!var_8)));
                            var_52 += (var_7 ? var_6 : ((var_10 ? var_3 : (~var_9))));
                        }
                    }
                    for (int i_25 = 0; i_25 < 21;i_25 += 1)
                    {
                        var_53 = (!var_8);
                        var_54 = ((var_3 ? var_7 : var_9));
                        var_55 = (((((var_4 ? 139 : ((var_8 ? var_8 : 48))))) ? var_7 : var_5));
                    }
                }
            }
        }

        for (int i_26 = 0; i_26 < 21;i_26 += 1)
        {
            var_56 = (max(var_56, (((((-var_10 ? ((var_7 ? var_9 : var_10)) : var_9))) ? var_11 : var_3))));
            var_57 &= var_11;
        }
    }
    #pragma endscop
}
