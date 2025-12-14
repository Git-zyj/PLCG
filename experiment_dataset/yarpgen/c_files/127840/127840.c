/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 127840
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=127840 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/127840
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_10 = (min(var_10, (((((var_4 ? var_6 : var_4)) / (max(((max(var_1, var_4))), (min(var_6, var_9)))))))));
    var_11 = (min(var_8, (max(0, (min(var_4, var_6))))));

    for (int i_0 = 3; i_0 < 14;i_0 += 1)
    {
        arr_3 [i_0] [i_0 - 1] = (!1);
        /* LoopNest 2 */
        for (int i_1 = 0; i_1 < 17;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 1;i_2 += 1)
            {
                {
                    var_12 *= ((~((-(min((arr_6 [i_2] [i_0] [i_1] [i_0]), var_6))))));
                    var_13 = ((584443014 > (((-(!3710524281))))));
                }
            }
        }

        for (int i_3 = 1; i_3 < 16;i_3 += 1)
        {
            var_14 = (min(var_14, (((((min(1008, 1))) ? (((!(arr_13 [i_0 - 2] [9] [i_0 - 2])))) : (((!(arr_13 [i_0] [i_0 - 1] [6])))))))));
            var_15 = (!((min(25762, -8183))));
            var_16 ^= ((-(arr_9 [2] [8] [i_0])));
        }
        for (int i_4 = 0; i_4 < 17;i_4 += 1)
        {
            var_17 = (max(((min(var_0, (max(-122, (arr_10 [i_0 + 1] [i_4])))))), (min(0, var_1))));
            arr_17 [i_0] [13] = 255;
            /* LoopNest 2 */
            for (int i_5 = 3; i_5 < 15;i_5 += 1)
            {
                for (int i_6 = 0; i_6 < 17;i_6 += 1)
                {
                    {
                        var_18 = 1;

                        for (int i_7 = 0; i_7 < 17;i_7 += 1)
                        {
                            var_19 ^= var_8;
                            var_20 = (arr_5 [i_4]);
                            arr_29 [i_0] [i_0] [i_0] [i_6] [i_5 - 3] = ((584443005 ? 1 : 25748));
                            var_21 = (min(var_21, ((((min((arr_15 [i_0] [i_4]), 1)))))));
                        }
                        for (int i_8 = 0; i_8 < 17;i_8 += 1)
                        {
                            arr_34 [i_0] [10] [i_0 - 3] [1] [i_0] [i_0] [i_0] = ((-(max((~52), (~1)))));
                            arr_35 [i_0] [15] = (max(1, 3519675791713238545));
                            var_22 *= (arr_23 [i_0 + 1] [i_6]);
                        }
                        for (int i_9 = 0; i_9 < 17;i_9 += 1)
                        {
                            var_23 = ((min((max(var_1, var_2)), 1146651945)));
                            var_24 = (min((min((var_8 - var_7), var_2)), (arr_31 [i_5 + 2] [i_6] [12] [i_0] [i_9])));
                        }
                    }
                }
            }
            var_25 &= 1;
        }
        var_26 = (min(var_26, 25740));
    }
    for (int i_10 = 0; i_10 < 13;i_10 += 1)
    {
        /* LoopNest 2 */
        for (int i_11 = 0; i_11 < 13;i_11 += 1)
        {
            for (int i_12 = 0; i_12 < 13;i_12 += 1)
            {
                {
                    var_27 = var_7;
                    arr_46 [i_10] [i_10] [i_10] [i_12] = var_9;
                }
            }
        }
        arr_47 [1] [1] &= (var_6 ? var_7 : ((12 ? -var_8 : 18446744073709551615)));

        /* vectorizable */
        for (int i_13 = 0; i_13 < 1;i_13 += 1) /* same iter space */
        {
            var_28 = (min(var_28, (!var_1)));
            var_29 = (((arr_48 [i_13] [i_10] [i_10]) ? 1 : (arr_42 [i_10] [i_10] [i_10])));
        }
        for (int i_14 = 0; i_14 < 1;i_14 += 1) /* same iter space */
        {
            var_30 = (max(var_30, ((min((max(var_6, var_7)), var_2)))));
            /* LoopNest 3 */
            for (int i_15 = 0; i_15 < 13;i_15 += 1)
            {
                for (int i_16 = 2; i_16 < 12;i_16 += 1)
                {
                    for (int i_17 = 2; i_17 < 11;i_17 += 1)
                    {
                        {
                            var_31 ^= var_3;
                            arr_66 [i_10] [5] = var_9;
                        }
                    }
                }
            }
            var_32 = (arr_30 [i_10] [i_10] [i_10] [3]);
            var_33 *= var_5;
            var_34 = var_9;
        }
        var_35 = ((39788 == ((var_3 ? (max(24, (arr_22 [1] [1] [i_10] [i_10]))) : (((255 ? 12 : 32767)))))));
    }
    #pragma endscop
}
