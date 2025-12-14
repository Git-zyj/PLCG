/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 121057
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=121057 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/121057
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_18 = var_10;
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 21;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 21;i_1 += 1)
        {
            {
                var_19 = (max(var_19, ((max(13253676485852311009, 1)))));

                for (int i_2 = 0; i_2 < 1;i_2 += 1)
                {
                    /* LoopNest 2 */
                    for (int i_3 = 0; i_3 < 1;i_3 += 1)
                    {
                        for (int i_4 = 0; i_4 < 21;i_4 += 1)
                        {
                            {
                                var_20 = ((((min(var_3, var_17))) ? ((var_11 ? var_8 : var_17)) : (((var_2 ? var_12 : var_3)))));
                                var_21 = var_2;
                            }
                        }
                    }
                    /* LoopNest 2 */
                    for (int i_5 = 2; i_5 < 20;i_5 += 1)
                    {
                        for (int i_6 = 3; i_6 < 20;i_6 += 1)
                        {
                            {
                                var_22 = var_6;
                                var_23 = (((min(((var_1 ? var_5 : var_5)), (min(var_10, var_17))))) ? (((var_16 ? var_16 : var_9))) : var_11);
                                var_24 = (max(var_24, (((240 ? -52 : -52)))));
                            }
                        }
                    }
                }
                var_25 *= ((((((((var_7 ? var_17 : var_17))) ? var_13 : var_1))) ? (min(1, 6350914011248001834)) : var_5));
            }
        }
    }
    var_26 = (max(var_26, (((var_3 ? var_17 : ((var_1 ? var_7 : ((var_3 ? var_15 : var_7)))))))));

    /* vectorizable */
    for (int i_7 = 0; i_7 < 15;i_7 += 1)
    {
        arr_21 [i_7] = ((var_12 ? var_3 : var_8));
        /* LoopNest 2 */
        for (int i_8 = 0; i_8 < 15;i_8 += 1)
        {
            for (int i_9 = 0; i_9 < 15;i_9 += 1)
            {
                {
                    var_27 -= ((var_6 ? var_14 : var_10));
                    arr_27 [i_7] [i_7] [i_9] [i_7] = (var_4 ? var_0 : var_17);
                    /* LoopNest 2 */
                    for (int i_10 = 3; i_10 < 13;i_10 += 1)
                    {
                        for (int i_11 = 1; i_11 < 13;i_11 += 1)
                        {
                            {
                                var_28 = (max(var_28, (((var_15 ? var_2 : var_16)))));
                                var_29 = (max(var_29, (((var_4 ? var_15 : var_8)))));
                            }
                        }
                    }
                    arr_36 [2] [i_9] [i_9] [i_7] = ((var_15 ? var_5 : var_14));
                }
            }
        }
    }
    for (int i_12 = 4; i_12 < 8;i_12 += 1)
    {
        arr_39 [9] = (max(((var_2 ? var_9 : var_6)), ((min(var_12, var_3)))));

        for (int i_13 = 0; i_13 < 11;i_13 += 1)
        {
            arr_42 [1] [i_13] = (min(((var_4 ? var_14 : var_15)), (((((var_16 ? var_10 : var_5))) ? (((min(var_13, 34)))) : ((var_0 ? var_9 : var_2))))));
            var_30 = (((((var_11 ? var_12 : var_6))) ? (max(var_16, var_6)) : var_4));
        }
        var_31 = (max(var_31, ((((((var_3 ? var_17 : var_6))) ? (((max(var_12, var_16)))) : (min(var_12, var_9)))))));
        var_32 = (max(var_32, var_1));
    }
    for (int i_14 = 1; i_14 < 15;i_14 += 1)
    {
        var_33 *= var_10;

        for (int i_15 = 0; i_15 < 18;i_15 += 1)
        {
            var_34 ^= ((var_6 ? 52 : -5736));
            var_35 += (max(((var_16 ? var_12 : var_8)), ((min(-65, -9)))));
            var_36 = var_7;
        }
    }
    /* vectorizable */
    for (int i_16 = 0; i_16 < 10;i_16 += 1)
    {

        for (int i_17 = 0; i_17 < 10;i_17 += 1)
        {
            /* LoopNest 2 */
            for (int i_18 = 0; i_18 < 10;i_18 += 1)
            {
                for (int i_19 = 0; i_19 < 10;i_19 += 1)
                {
                    {
                        var_37 = (max(var_37, (((3707 ? 43648 : -5717)))));
                        arr_60 [i_16] [0] [i_17] [0] [i_18] [i_19] |= (var_6 ? var_16 : var_5);
                    }
                }
            }
            arr_61 [i_16] [i_17] |= var_10;
        }
        for (int i_20 = 0; i_20 < 10;i_20 += 1)
        {
            var_38 += var_17;
            arr_65 [i_20] &= var_1;
            /* LoopNest 2 */
            for (int i_21 = 1; i_21 < 8;i_21 += 1)
            {
                for (int i_22 = 0; i_22 < 10;i_22 += 1)
                {
                    {
                        var_39 -= ((var_4 ? var_12 : var_16));
                        arr_72 [5] = ((var_3 ? var_6 : var_9));
                        arr_73 [i_16] = var_0;
                        arr_74 [7] [i_20] [i_21] [7] = ((var_15 ? var_10 : var_9));
                    }
                }
            }
            var_40 = var_4;
        }
        for (int i_23 = 0; i_23 < 10;i_23 += 1)
        {
            var_41 = var_12;
            arr_79 [i_16] [i_23] = var_11;
            var_42 ^= var_4;
            var_43 -= var_13;
            var_44 = ((var_6 ? var_8 : var_14));
        }
        for (int i_24 = 1; i_24 < 8;i_24 += 1)
        {
            /* LoopNest 2 */
            for (int i_25 = 4; i_25 < 9;i_25 += 1)
            {
                for (int i_26 = 0; i_26 < 10;i_26 += 1)
                {
                    {
                        var_45 ^= var_5;
                        var_46 -= var_4;
                    }
                }
            }
            var_47 = var_15;
            var_48 = (max(var_48, ((((((var_16 ? var_8 : var_8))) ? var_1 : var_12)))));
        }
        var_49 = var_4;
        arr_88 [i_16] = (var_3 ? var_9 : var_4);

        for (int i_27 = 3; i_27 < 8;i_27 += 1)
        {
            /* LoopNest 2 */
            for (int i_28 = 0; i_28 < 10;i_28 += 1)
            {
                for (int i_29 = 1; i_29 < 1;i_29 += 1)
                {
                    {
                        arr_95 [1] [i_27] [i_27] [i_28] [i_28] [i_28] = ((var_16 ? var_13 : var_10));

                        for (int i_30 = 0; i_30 < 10;i_30 += 1)
                        {
                            arr_98 [i_30] [i_30] [i_29] [i_28] [i_30] [i_16] = var_10;
                            arr_99 [i_16] [i_27] [i_30] [i_28] [i_28] [1] [i_30] = ((((var_7 ? var_8 : var_16))) ? (((var_8 ? -30327 : 20499))) : ((var_12 ? var_1 : var_6)));
                            arr_100 [i_16] [i_16] [i_28] [i_28] [1] [i_29] [i_30] = ((var_5 ? var_2 : var_15));
                        }
                    }
                }
            }
            var_50 = var_12;
        }
        for (int i_31 = 0; i_31 < 10;i_31 += 1)
        {
            var_51 -= var_7;
            /* LoopNest 2 */
            for (int i_32 = 1; i_32 < 9;i_32 += 1)
            {
                for (int i_33 = 0; i_33 < 10;i_33 += 1)
                {
                    {
                        var_52 ^= (((((var_16 ? 43 : 27034))) ? var_5 : var_16));
                        arr_110 [i_31] [i_31] [6] [4] |= var_16;
                    }
                }
            }

            for (int i_34 = 0; i_34 < 10;i_34 += 1)
            {
                /* LoopNest 2 */
                for (int i_35 = 0; i_35 < 10;i_35 += 1)
                {
                    for (int i_36 = 1; i_36 < 8;i_36 += 1)
                    {
                        {
                            var_53 += var_17;
                            var_54 = (min(var_54, var_9));
                            var_55 = ((var_5 ? var_12 : var_3));
                        }
                    }
                }
                var_56 = ((var_8 ? var_11 : var_17));
                var_57 = (max(var_57, var_10));
            }
        }
        var_58 = ((var_14 ? var_14 : var_11));
    }
    #pragma endscop
}
