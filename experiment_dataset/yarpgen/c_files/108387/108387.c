/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 108387
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=108387 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/108387
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 2; i_0 < 11;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 12;i_1 += 1)
        {
            {
                var_17 = ((min(((0 ? 0 : 0), 0))));
                var_18 = (((max((arr_2 [i_0] [i_0 - 1]), var_13))) && 2);
                var_19 &= 125;
                arr_6 [i_0] [9] = (~var_7);

                for (int i_2 = 0; i_2 < 12;i_2 += 1)
                {
                    var_20 = (min(var_20, -var_2));
                    var_21 -= 119;

                    for (int i_3 = 0; i_3 < 12;i_3 += 1)
                    {
                        arr_13 [i_0 - 1] [i_2] [i_0] = ((((arr_0 [i_0 - 2]) || var_8)));
                        var_22 = -1;
                    }
                    /* vectorizable */
                    for (int i_4 = 0; i_4 < 12;i_4 += 1)
                    {
                        arr_18 [i_0] [i_1] [i_2] [i_1] = (((arr_4 [i_4] [i_4] [i_0]) ? ((var_8 ? -19 : 116074964)) : (arr_10 [i_0 + 1])));

                        for (int i_5 = 0; i_5 < 12;i_5 += 1)
                        {
                            arr_22 [i_0] [i_1] [2] [i_1] [7] = (var_14 || -24);
                            var_23 = (~var_12);
                            var_24 = ((-(arr_5 [i_5])));
                            arr_23 [i_0 - 1] [i_1] [i_2] [i_4] [i_5] &= (65535 || -1);
                        }
                        var_25 = (0 > 1);
                        arr_24 [i_0] [i_1] = (~var_9);
                    }
                    for (int i_6 = 0; i_6 < 1;i_6 += 1)
                    {
                        arr_27 [i_0] [i_1] = -3314946072437704581;
                        var_26 ^= var_10;
                        var_27 = 18;
                        var_28 = 8;
                    }
                    for (int i_7 = 0; i_7 < 12;i_7 += 1)
                    {
                        var_29 = var_4;
                        var_30 = (max(var_30, var_14));
                        arr_30 [i_0] [1] [i_0] = 457973451;
                        arr_31 [i_0] [i_1] [i_0] = ((((11 || (var_16 || var_3))) ? (((-123 ? -5876 : -12))) : (((~var_12) | 161))));
                        var_31 = -var_0;
                    }
                }
                /* vectorizable */
                for (int i_8 = 0; i_8 < 1;i_8 += 1)
                {
                    /* LoopNest 2 */
                    for (int i_9 = 2; i_9 < 11;i_9 += 1)
                    {
                        for (int i_10 = 1; i_10 < 11;i_10 += 1)
                        {
                            {
                                arr_41 [8] [i_1] [i_8] [i_9] [i_9] [i_10] &= var_6;
                                var_32 = (max(var_32, (arr_40 [i_10 + 1] [i_10 + 1] [i_1])));
                            }
                        }
                    }
                    var_33 *= (((var_5 ? var_14 : 1)));
                }
                for (int i_11 = 0; i_11 < 12;i_11 += 1)
                {
                    var_34 *= (min(0, (min(1, var_15))));
                    var_35 = ((((var_1 ? var_14 : (arr_12 [i_0 + 1] [7] [7] [i_0 - 2])))) ? ((var_15 ? ((((-127 - 1) | var_7))) : 3996483506)) : var_11);
                }
                for (int i_12 = 0; i_12 < 12;i_12 += 1)
                {
                    arr_46 [i_0] [i_0] = var_16;
                    /* LoopNest 2 */
                    for (int i_13 = 3; i_13 < 10;i_13 += 1)
                    {
                        for (int i_14 = 0; i_14 < 12;i_14 += 1)
                        {
                            {
                                arr_53 [i_0] = (max((arr_19 [i_1] [i_1] [i_13] [i_13 + 2] [i_14]), var_12));
                                arr_54 [i_0] [i_1] [i_12] [i_1] [i_1] [8] [i_0] = (~27);
                            }
                        }
                    }
                    var_36 = var_3;
                    var_37 = ((~((18446744073709551589 ? 99 : -var_8))));
                }
            }
        }
    }
    var_38 |= ((0 ? var_16 : var_10));

    for (int i_15 = 1; i_15 < 11;i_15 += 1)
    {
        arr_59 [i_15] = (2147483629 > 230);
        var_39 = (max(var_3, ((+(((arr_11 [i_15]) ? var_15 : 33))))));
    }
    var_40 ^= (((~var_14) || var_16));
    var_41 &= var_7;
    #pragma endscop
}
