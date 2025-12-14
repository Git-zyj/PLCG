/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 12389
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=12389 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/12389
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 2; i_0 < 19;i_0 += 1)
    {
        /* LoopNest 2 */
        for (int i_1 = 1; i_1 < 17;i_1 += 1)
        {
            for (int i_2 = 1; i_2 < 19;i_2 += 1)
            {
                {
                    var_13 -= var_7;
                    var_14 *= (min(((min(var_8, var_6))), (((1 / var_0) - ((-(arr_5 [i_0] [i_0])))))));
                    /* LoopNest 2 */
                    for (int i_3 = 0; i_3 < 20;i_3 += 1)
                    {
                        for (int i_4 = 0; i_4 < 20;i_4 += 1)
                        {
                            {
                                var_15 ^= (((1 > (arr_3 [i_0 - 1]))));
                                var_16 = ((((arr_8 [i_0 + 1] [i_1] [i_0 + 1] [i_3]) ^ var_9)));
                                var_17 -= (((~37) ? ((-(arr_3 [i_3]))) : (var_8 <= -var_1)));
                            }
                        }
                    }
                }
            }
        }
        arr_16 [i_0] [i_0] &= (min((min((-9223372036854775807 - 1), (arr_12 [i_0 - 2] [i_0 - 2] [i_0] [i_0 + 1] [i_0] [i_0]))), var_10));
    }
    /* vectorizable */
    for (int i_5 = 0; i_5 < 22;i_5 += 1)
    {
        /* LoopNest 2 */
        for (int i_6 = 2; i_6 < 21;i_6 += 1)
        {
            for (int i_7 = 0; i_7 < 22;i_7 += 1)
            {
                {
                    var_18 ^= (--1);

                    for (int i_8 = 0; i_8 < 22;i_8 += 1) /* same iter space */
                    {
                        var_19 |= (((-2147483647 - 1) ? var_11 : (arr_19 [i_6 - 1] [i_6 - 1])));
                        arr_27 [i_5] [i_6] [i_7] |= var_1;
                    }
                    for (int i_9 = 0; i_9 < 22;i_9 += 1) /* same iter space */
                    {
                        var_20 -= (((!var_7) + 1));
                        var_21 += (arr_23 [i_5] [i_6 - 2] [i_7]);
                        var_22 = var_8;
                    }
                    for (int i_10 = 0; i_10 < 22;i_10 += 1) /* same iter space */
                    {
                        var_23 -= ((-(arr_19 [i_6 + 1] [i_6 + 1])));
                        var_24 += ((-19975 ? 1 : (((arr_24 [i_5] [i_6 + 1] [i_7] [i_5]) - var_4))));
                    }
                    for (int i_11 = 0; i_11 < 22;i_11 += 1)
                    {

                        for (int i_12 = 0; i_12 < 22;i_12 += 1)
                        {
                            var_25 = (-(arr_26 [i_6] [i_6] [i_6 + 1] [i_7]));
                            var_26 += var_8;
                        }
                        for (int i_13 = 2; i_13 < 19;i_13 += 1)
                        {
                            var_27 |= ((!(arr_35 [i_5] [i_5] [i_13 + 1] [i_6 - 2] [i_13])));
                            var_28 += (((((1 ? var_11 : 1))) / (arr_38 [i_6 - 1] [3] [i_7] [13] [i_13] [i_13] [i_13 - 1])));
                        }
                        for (int i_14 = 0; i_14 < 22;i_14 += 1)
                        {
                            arr_47 [i_5] [i_6] = var_12;
                            var_29 ^= (((arr_19 [i_5] [i_6 + 1]) * var_2));
                            var_30 *= (((var_6 ? 4294967277 : var_3)));
                            var_31 += (var_2 ? (arr_37 [i_5] [i_14] [i_5] [i_14] [i_14]) : 4);
                            var_32 &= (((((2786069535 ? var_3 : 4583513227388107502))) || (arr_38 [i_5] [i_5] [i_5] [i_6] [i_6 - 1] [i_6] [i_6 - 1])));
                        }
                        var_33 -= (~var_12);
                        var_34 *= (((242 - 13094746) ? (var_9 / 1956424551) : var_8));
                        var_35 |= var_4;
                    }
                }
            }
        }
        var_36 = ((((((-2147483647 - 1) ? (arr_39 [i_5] [i_5] [i_5] [i_5] [i_5] [i_5] [i_5]) : var_8))) ? (arr_42 [i_5] [i_5] [8] [i_5] [i_5] [i_5]) : (arr_36 [i_5] [1] [i_5] [i_5] [i_5])));

        for (int i_15 = 2; i_15 < 20;i_15 += 1)
        {
            var_37 |= var_12;
            var_38 += ((2147483640 ? (arr_45 [i_5] [i_5] [i_5] [3] [1] [i_15 + 1] [i_15]) : 62));
        }
        for (int i_16 = 0; i_16 < 1;i_16 += 1)
        {
            /* LoopNest 2 */
            for (int i_17 = 0; i_17 < 22;i_17 += 1)
            {
                for (int i_18 = 0; i_18 < 22;i_18 += 1)
                {
                    {
                        arr_57 [i_17] = (!var_12);
                        var_39 ^= 1508897760;
                    }
                }
            }
            /* LoopNest 3 */
            for (int i_19 = 0; i_19 < 22;i_19 += 1)
            {
                for (int i_20 = 0; i_20 < 22;i_20 += 1)
                {
                    for (int i_21 = 0; i_21 < 22;i_21 += 1)
                    {
                        {
                            arr_65 [15] [i_21] = ((var_0 ? 14 : 7527309651160043025));
                            var_40 = ((~((1508897743 << (65535 - 65524)))));
                            var_41 = ((-12809 ? var_8 : var_8));
                        }
                    }
                }
            }
            /* LoopNest 2 */
            for (int i_22 = 0; i_22 < 22;i_22 += 1)
            {
                for (int i_23 = 0; i_23 < 22;i_23 += 1)
                {
                    {
                        var_42 |= (((arr_49 [i_5]) << (((arr_49 [i_5]) - 39087))));
                        var_43 = (((arr_49 [i_5]) + (arr_49 [1])));
                    }
                }
            }
        }
        for (int i_24 = 1; i_24 < 20;i_24 += 1)
        {
            var_44 += var_0;
            var_45 -= 2481264137;
            var_46 = (-32758 + var_10);
            var_47 |= 1;
        }
    }
    var_48 = ((25543 - (((((var_9 ? var_3 : var_9))) ? var_5 : var_11))));
    var_49 &= var_8;
    #pragma endscop
}
