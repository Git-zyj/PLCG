/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 113956
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=113956 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/113956
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 0; i_0 < 19;i_0 += 1)
    {
        arr_2 [i_0] = ((-(((((var_6 ? var_8 : var_4))) ? var_8 : (var_3 ^ var_7)))));
        /* LoopNest 2 */
        for (int i_1 = 0; i_1 < 19;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 1;i_2 += 1)
            {
                {
                    var_10 = 1787;
                    var_11 = ((var_8 ? (~var_4) : var_7));
                }
            }
        }
    }
    for (int i_3 = 0; i_3 < 25;i_3 += 1)
    {

        for (int i_4 = 0; i_4 < 25;i_4 += 1)
        {
            var_12 = var_8;
            var_13 ^= ((~((var_2 ? var_1 : var_8))));
            arr_14 [i_3] = var_8;
        }
        var_14 = (max(var_14, (var_5 % var_5)));
    }

    for (int i_5 = 0; i_5 < 14;i_5 += 1)
    {
        var_15 = var_8;
        arr_17 [i_5] = (var_5 % var_2);

        for (int i_6 = 0; i_6 < 14;i_6 += 1)
        {
            var_16 = (!var_0);
            var_17 = (((var_1 ^ var_7) | var_3));
        }
        var_18 = (max(var_18, (var_7 % var_5)));
    }
    for (int i_7 = 0; i_7 < 24;i_7 += 1)
    {
        /* LoopNest 2 */
        for (int i_8 = 0; i_8 < 24;i_8 += 1)
        {
            for (int i_9 = 0; i_9 < 24;i_9 += 1)
            {
                {
                    var_19 = ((var_1 ? var_0 : var_9));
                    var_20 = ((-32754 ? 63749 : 9223372036854775807));

                    for (int i_10 = 2; i_10 < 23;i_10 += 1) /* same iter space */
                    {
                        arr_32 [i_7] [i_8] [i_9] = ((var_6 ? ((var_8 ? var_9 : var_9)) : 63749));
                        arr_33 [i_7] [i_8] [i_9] [i_9] [i_10] = var_9;
                        var_21 *= var_9;
                    }
                    /* vectorizable */
                    for (int i_11 = 2; i_11 < 23;i_11 += 1) /* same iter space */
                    {
                        arr_37 [i_7] [i_8] [i_9] [i_11] = var_6;
                        var_22 ^= var_5;
                    }
                    arr_38 [i_7] [i_8] &= ((-904454428121007651 % 63739) ? (63749 / 904454428121007651) : (((var_9 % var_0) ? var_0 : (~var_8))));
                }
            }
        }
        arr_39 [i_7] = ((var_3 % ((var_0 ? var_2 : var_9))));
        var_23 = (27 ^ 1787);
    }
    for (int i_12 = 2; i_12 < 15;i_12 += 1)
    {

        /* vectorizable */
        for (int i_13 = 0; i_13 < 16;i_13 += 1)
        {
            var_24 = ((var_9 % var_6) ? var_6 : (var_9 + var_7));
            var_25 = var_4;
        }
        arr_45 [i_12] [i_12] = (!63749);
        var_26 = var_2;
    }
    for (int i_14 = 0; i_14 < 18;i_14 += 1)
    {
        var_27 &= (var_1 ? ((var_4 ? var_8 : var_1)) : var_2);
        arr_49 [i_14] = ((!(((var_1 ? var_5 : var_3)))));
        arr_50 [i_14] [i_14] = var_5;
    }
    /* LoopNest 2 */
    for (int i_15 = 4; i_15 < 16;i_15 += 1)
    {
        for (int i_16 = 0; i_16 < 1;i_16 += 1)
        {
            {
                /* LoopNest 2 */
                for (int i_17 = 0; i_17 < 18;i_17 += 1)
                {
                    for (int i_18 = 0; i_18 < 18;i_18 += 1)
                    {
                        {
                            var_28 = var_0;
                            var_29 = (min(var_29, var_0));
                        }
                    }
                }
                arr_62 [i_15] [i_15] [i_16] = 1769;
                var_30 = (~var_7);

                for (int i_19 = 0; i_19 < 18;i_19 += 1)
                {
                    /* LoopNest 2 */
                    for (int i_20 = 0; i_20 < 18;i_20 += 1)
                    {
                        for (int i_21 = 3; i_21 < 17;i_21 += 1)
                        {
                            {
                                arr_73 [i_15] [i_16] [i_19] [i_16] [i_16] [i_16] = ((var_2 ? 17989740498941912902 : var_6));
                                var_31 ^= (!var_2);
                                var_32 = (((((var_9 ? var_7 : var_1))) >> (((~1787) ? (~-1) : var_1))));
                            }
                        }
                    }
                    var_33 *= (((~var_9) ? (~1887391856) : 63749));
                }
                for (int i_22 = 0; i_22 < 18;i_22 += 1)
                {
                    var_34 = var_4;

                    for (int i_23 = 2; i_23 < 17;i_23 += 1)
                    {
                        var_35 = ((((!(~var_6))) ? 65521 : var_4));
                        var_36 |= var_9;
                    }
                    for (int i_24 = 1; i_24 < 17;i_24 += 1)
                    {
                        arr_82 [i_15] [i_15] = var_4;
                        var_37 = var_0;
                    }
                    /* vectorizable */
                    for (int i_25 = 0; i_25 < 18;i_25 += 1)
                    {
                        var_38 &= ((var_6 ? var_1 : var_3));
                        arr_85 [i_22] [i_25] = (-var_0 / var_0);
                    }
                    /* LoopNest 2 */
                    for (int i_26 = 0; i_26 < 18;i_26 += 1)
                    {
                        for (int i_27 = 0; i_27 < 18;i_27 += 1)
                        {
                            {
                                var_39 = (((var_3 | var_8) ? var_6 : var_1));
                                var_40 = var_2;
                                arr_90 [i_15] [i_15] [i_16] [i_22] [i_26] [i_27] [i_27] = var_3;
                            }
                        }
                    }
                }
                var_41 = var_1;
            }
        }
    }
    var_42 = var_2;
    #pragma endscop
}
