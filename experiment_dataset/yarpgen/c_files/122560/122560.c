/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 122560
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=122560 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/122560
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    /* vectorizable */
    for (int i_0 = 0; i_0 < 17;i_0 += 1)
    {
        var_13 = (((var_4 ? var_7 : var_7)));
        var_14 = ((var_3 ? var_9 : var_5));
        var_15 = (min(var_15, (((var_8 ? ((var_0 ? var_6 : var_6)) : var_9)))));
    }
    /* vectorizable */
    for (int i_1 = 2; i_1 < 14;i_1 += 1)
    {
        var_16 = (max(var_16, (((var_1 ? var_12 : var_7)))));
        arr_4 [i_1] = var_12;
    }
    for (int i_2 = 0; i_2 < 13;i_2 += 1)
    {

        for (int i_3 = 1; i_3 < 10;i_3 += 1)
        {
            var_17 = var_0;
            arr_11 [i_3] = var_2;
            var_18 = (max(var_18, var_1));
            var_19 = var_9;

            for (int i_4 = 2; i_4 < 12;i_4 += 1) /* same iter space */
            {
                arr_16 [i_3] [i_3] [i_4] = var_8;
                var_20 ^= var_9;

                /* vectorizable */
                for (int i_5 = 1; i_5 < 1;i_5 += 1)
                {
                    var_21 = (((var_3 ? var_1 : var_2)));
                    arr_20 [i_3] [i_3] [i_5 - 1] = (((var_5 ? var_6 : var_12)));
                }
                for (int i_6 = 0; i_6 < 13;i_6 += 1)
                {
                    var_22 = var_3;
                    var_23 &= (var_7 ? ((((var_2 ? var_0 : var_9)))) : ((var_7 ? ((var_12 ? var_7 : var_9)) : var_0)));
                }
                for (int i_7 = 0; i_7 < 13;i_7 += 1)
                {
                    arr_28 [i_3] [1] [1] [5] = ((2973662003 ? var_4 : 2973662003));
                    var_24 = (((var_2 ? var_8 : var_6)));
                    var_25 = var_11;
                }
            }
            for (int i_8 = 2; i_8 < 12;i_8 += 1) /* same iter space */
            {
                arr_32 [i_2] [i_3] = ((125 ? var_4 : -1));
                var_26 = var_5;
            }
        }
        /* vectorizable */
        for (int i_9 = 0; i_9 < 0;i_9 += 1)
        {
            var_27 = var_4;
            /* LoopNest 3 */
            for (int i_10 = 2; i_10 < 10;i_10 += 1)
            {
                for (int i_11 = 0; i_11 < 13;i_11 += 1)
                {
                    for (int i_12 = 2; i_12 < 11;i_12 += 1)
                    {
                        {
                            var_28 *= var_6;
                            var_29 = var_6;
                            var_30 = var_7;
                        }
                    }
                }
            }
            arr_43 [i_9] = (var_9 ? var_7 : var_12);
            var_31 *= var_0;
        }
        /* vectorizable */
        for (int i_13 = 1; i_13 < 11;i_13 += 1)
        {
            /* LoopNest 2 */
            for (int i_14 = 2; i_14 < 12;i_14 += 1)
            {
                for (int i_15 = 0; i_15 < 13;i_15 += 1)
                {
                    {
                        var_32 ^= (((((var_9 ? var_2 : var_1))) ? ((var_10 ? var_5 : var_9)) : var_2));
                        var_33 = 111;
                    }
                }
            }
            var_34 |= var_3;

            for (int i_16 = 1; i_16 < 10;i_16 += 1)
            {
                var_35 = (max(var_35, var_4));
                arr_57 [7] [i_13] [i_2] [i_2] = var_12;
                arr_58 [i_2] [1] [i_16 + 3] [i_16] &= (((((var_8 ? var_0 : var_10))) ? var_7 : var_4));

                for (int i_17 = 0; i_17 < 13;i_17 += 1)
                {
                    var_36 ^= var_4;
                    arr_62 [i_17] [i_16 + 3] [i_16 + 3] [i_13] [i_17] = var_7;
                    arr_63 [i_2] [i_17] [i_17] [i_17] = 111;
                    var_37 = (min(var_37, var_8));
                }
                for (int i_18 = 1; i_18 < 10;i_18 += 1)
                {
                    var_38 = var_11;
                    var_39 *= (var_4 ? var_8 : ((var_4 ? var_12 : var_10)));
                    var_40 = var_12;
                }
                var_41 = var_9;
            }
            arr_66 [i_2] = ((var_8 ? var_12 : var_5));
        }
        arr_67 [i_2] = var_8;
        var_42 *= var_1;
    }
    /* LoopNest 2 */
    for (int i_19 = 1; i_19 < 22;i_19 += 1)
    {
        for (int i_20 = 1; i_20 < 20;i_20 += 1)
        {
            {
                arr_74 [6] [i_20 + 3] [i_19] = var_10;
                arr_75 [i_19] [i_20 + 4] = var_2;
                var_43 -= var_4;
                /* LoopNest 2 */
                for (int i_21 = 1; i_21 < 22;i_21 += 1)
                {
                    for (int i_22 = 4; i_22 < 23;i_22 += 1)
                    {
                        {
                            var_44 = ((var_12 ? var_1 : var_3));
                            var_45 = ((var_1 ? var_3 : ((var_6 ? var_4 : ((var_1 ? var_9 : var_7))))));
                            var_46 = ((((((((var_5 ? var_1 : var_10))) ? var_3 : var_4))) ? ((var_7 ? 2973662014 : var_1)) : var_3));
                        }
                    }
                }
            }
        }
    }
    var_47 = ((((var_11 ? var_12 : var_0))));
    #pragma endscop
}
