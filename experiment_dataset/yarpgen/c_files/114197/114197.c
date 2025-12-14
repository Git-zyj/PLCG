/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 114197
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=114197 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/114197
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 0; i_0 < 22;i_0 += 1)
    {
        /* LoopNest 2 */
        for (int i_1 = 0; i_1 < 22;i_1 += 1)
        {
            for (int i_2 = 2; i_2 < 20;i_2 += 1)
            {
                {
                    var_17 = (min(34, 32752));

                    for (int i_3 = 0; i_3 < 22;i_3 += 1)
                    {
                        var_18 = (max(var_7, (min((((var_7 ? var_9 : var_6))), (max(var_4, var_13))))));
                        var_19 = (min(var_19, var_2));

                        for (int i_4 = 0; i_4 < 22;i_4 += 1)
                        {
                            arr_16 [i_0] [i_1] [4] [i_4] [i_4] = var_14;
                            var_20 = var_9;
                        }
                        arr_17 [i_0] [i_0] [i_0] [i_0] [i_0] = var_12;
                    }
                    for (int i_5 = 1; i_5 < 21;i_5 += 1)
                    {

                        for (int i_6 = 4; i_6 < 21;i_6 += 1)
                        {
                            var_21 = min(var_9, var_11);
                            var_22 += var_5;
                        }
                        for (int i_7 = 4; i_7 < 21;i_7 += 1)
                        {
                            var_23 = (min((min(var_9, var_12)), (max((min(var_13, var_12)), (((var_12 ? var_9 : var_2)))))));
                            var_24 = ((((min(((min(var_5, var_9))), (max(var_9, var_13))))) ? (((max(var_10, var_4)))) : (min(var_15, ((13781083321536390373 ? var_12 : var_2))))));
                            arr_27 [i_0] [i_1] [i_2] [5] [i_7] = var_12;
                            var_25 = (min(var_25, (((((min((min(var_13, var_2)), var_1))) ? (min(((var_3 ? var_12 : var_16)), (((var_3 ? var_15 : var_5))))) : (((var_11 ? (((var_14 ? var_16 : var_16))) : ((var_5 ? var_0 : var_14))))))))));
                        }
                        for (int i_8 = 0; i_8 < 22;i_8 += 1)
                        {
                            var_26 = var_13;
                            var_27 = (max((((var_3 ? var_1 : var_1))), ((((min(7528, -899995949))) ? ((max(1051852056, 26))) : (min(var_13, var_10))))));
                        }
                        var_28 += (min(var_12, var_5));
                    }
                }
            }
        }
        arr_31 [i_0] [i_0] = (min((min((((var_16 ? var_3 : var_15))), (min(var_12, var_12)))), (max(var_7, var_16))));
        /* LoopNest 2 */
        for (int i_9 = 0; i_9 < 22;i_9 += 1)
        {
            for (int i_10 = 0; i_10 < 22;i_10 += 1)
            {
                {
                    arr_38 [i_10] = var_11;
                    arr_39 [i_10] [i_0] [i_0] [i_10] = ((var_0 ? ((var_12 ? ((min(var_14, var_0))) : ((var_5 ? var_12 : var_15)))) : ((var_11 ? var_11 : ((var_4 ? var_7 : var_12))))));
                }
            }
        }
        var_29 += var_7;
        arr_40 [i_0] = var_9;
    }
    for (int i_11 = 0; i_11 < 17;i_11 += 1)
    {
        /* LoopNest 2 */
        for (int i_12 = 0; i_12 < 17;i_12 += 1)
        {
            for (int i_13 = 0; i_13 < 1;i_13 += 1)
            {
                {
                    /* LoopNest 2 */
                    for (int i_14 = 0; i_14 < 17;i_14 += 1)
                    {
                        for (int i_15 = 0; i_15 < 17;i_15 += 1)
                        {
                            {
                                var_30 -= ((((max((min(var_11, var_15)), (((var_0 ? var_5 : var_3)))))) ? ((1 ? 65535 : 622752947028468919)) : (max(var_11, ((min(var_9, var_15)))))));
                                var_31 = (((((var_9 ? (((max(-113, 127)))) : ((var_13 ? var_6 : var_13))))) ? var_12 : ((((min(var_11, var_0))) ? (max(var_14, var_13)) : ((var_2 ? var_11 : var_6))))));
                            }
                        }
                    }
                    var_32 = (min(((var_16 ? var_11 : (((var_9 ? var_14 : var_5))))), ((var_14 ? (max(14336, 7824814631350057951)) : (((var_15 ? var_1 : var_9)))))));
                    arr_51 [i_11] [i_11] [i_11] [i_11] = min(var_4, var_12);
                    /* LoopNest 2 */
                    for (int i_16 = 0; i_16 < 17;i_16 += 1)
                    {
                        for (int i_17 = 1; i_17 < 15;i_17 += 1)
                        {
                            {
                                arr_57 [i_11] [i_12] [i_11] [i_12] = var_11;
                                arr_58 [i_11] [i_12] [i_16] [i_11] [i_12] [i_16] &= var_16;
                            }
                        }
                    }
                }
            }
        }
        var_33 = ((((((((var_4 ? var_8 : var_13))) ? (min(var_7, var_0)) : var_10))) ? (((((var_0 ? var_10 : var_10))) ? ((var_6 ? var_9 : var_8)) : ((var_7 ? var_11 : var_13)))) : var_13));
        var_34 = var_1;
    }
    for (int i_18 = 1; i_18 < 18;i_18 += 1)
    {
        var_35 = var_3;
        var_36 = var_14;
    }
    for (int i_19 = 0; i_19 < 12;i_19 += 1)
    {
        arr_66 [i_19] = var_14;

        for (int i_20 = 0; i_20 < 0;i_20 += 1)
        {
            /* LoopNest 2 */
            for (int i_21 = 2; i_21 < 10;i_21 += 1)
            {
                for (int i_22 = 0; i_22 < 12;i_22 += 1)
                {
                    {
                        var_37 = ((((min(-23776, 8404714675831189971))) ? var_9 : (max(-122, ((125 ? 62 : var_0))))));
                        var_38 = (min(var_9, var_10));
                        arr_75 [9] [9] [i_21] [i_22] [i_21] [i_20 + 1] = max(17280443549563093400, -4433);
                        var_39 = var_5;
                        var_40 = (max(var_7, (((((min(var_0, var_5))) ? ((var_11 ? var_1 : var_2)) : ((var_3 ? var_10 : var_2)))))));
                    }
                }
            }
            var_41 = var_2;
            var_42 = ((((min(((max(var_15, var_4))), ((var_6 ? var_15 : var_7))))) ? var_10 : (((((var_13 ? var_8 : var_0))) ? (((var_5 ? var_15 : var_2))) : ((var_11 ? var_15 : 6084367814894694270))))));
            var_43 += var_6;
        }
        /* LoopNest 3 */
        for (int i_23 = 0; i_23 < 12;i_23 += 1)
        {
            for (int i_24 = 0; i_24 < 12;i_24 += 1)
            {
                for (int i_25 = 3; i_25 < 10;i_25 += 1)
                {
                    {
                        var_44 ^= min((max(((var_4 ? var_13 : var_1)), (((var_10 ? var_2 : var_16))))), var_10);
                        arr_84 [i_24] = var_7;
                    }
                }
            }
        }
        var_45 = var_11;
    }
    /* LoopNest 2 */
    for (int i_26 = 2; i_26 < 11;i_26 += 1)
    {
        for (int i_27 = 0; i_27 < 12;i_27 += 1)
        {
            {
                var_46 = ((((max(var_13, (max(var_8, var_10))))) ? ((min((min(var_1, var_14)), var_4))) : var_15));
                arr_89 [i_26] = (((((((max(var_14, var_5))) ? (((var_8 ? var_14 : var_1))) : var_7))) ? ((max(((var_5 ? var_14 : var_16)), ((var_7 ? var_6 : var_14))))) : ((((max(var_15, var_13))) ? ((var_7 ? var_5 : var_12)) : var_15))));
                var_47 = (max(var_47, (((var_12 ? (max((min(var_4, var_7)), (((var_16 ? var_1 : var_3))))) : var_9)))));
            }
        }
    }
    /* LoopNest 2 */
    for (int i_28 = 0; i_28 < 13;i_28 += 1)
    {
        for (int i_29 = 0; i_29 < 13;i_29 += 1)
        {
            {
                arr_96 [i_28] [i_28] &= ((126 ? 44499 : 1));
                arr_97 [i_29] = var_0;
            }
        }
    }
    /* LoopNest 2 */
    for (int i_30 = 0; i_30 < 1;i_30 += 1)
    {
        for (int i_31 = 0; i_31 < 1;i_31 += 1)
        {
            {
                arr_102 [i_31] [i_31] = (((((((max(var_6, var_7))) ? var_0 : (((var_13 ? var_2 : var_15)))))) ? (((((var_16 ? var_6 : var_12))) ? (min(var_14, var_13)) : (min(var_8, var_0)))) : (((((max(var_10, var_16))) ? ((var_6 ? var_0 : var_15)) : var_14)))));
                var_48 = (min(var_48, var_6));
                var_49 = (min(var_49, var_4));
            }
        }
    }
    var_50 = var_7;
    #pragma endscop
}
