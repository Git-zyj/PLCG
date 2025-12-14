/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 157911
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=157911 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/157911
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 0; i_0 < 25;i_0 += 1)
    {
        arr_3 [i_0] = ((7001 ? -126 : 112));
        arr_4 [i_0] = (((((((!(arr_2 [i_0])))) << (((((arr_0 [i_0]) ? 185 : var_9)) - 176)))) < (((max((arr_2 [i_0]), -115))))));
        var_17 = (max(var_17, ((((arr_1 [i_0] [i_0]) / (arr_1 [i_0] [i_0]))))));
        var_18 = (arr_0 [i_0]);
    }
    /* vectorizable */
    for (int i_1 = 2; i_1 < 16;i_1 += 1)
    {
        /* LoopNest 3 */
        for (int i_2 = 0; i_2 < 17;i_2 += 1)
        {
            for (int i_3 = 0; i_3 < 17;i_3 += 1)
            {
                for (int i_4 = 2; i_4 < 13;i_4 += 1)
                {
                    {
                        var_19 = 17;
                        var_20 = (!121);
                        var_21 = 9804;
                    }
                }
            }
        }

        for (int i_5 = 0; i_5 < 17;i_5 += 1)
        {
            var_22 = 27;
            var_23 &= ((!(arr_12 [i_1 - 2] [i_1] [i_1 + 1] [i_1] [i_1] [i_1 - 2])));

            for (int i_6 = 2; i_6 < 14;i_6 += 1)
            {
                arr_21 [i_6] [i_5] = var_8;
                var_24 = (+-2949451424839998080);
                var_25 = (min(var_25, (arr_9 [i_6 - 2] [i_6] [i_6 + 3])));
            }
            for (int i_7 = 0; i_7 < 17;i_7 += 1)
            {
                var_26 &= (arr_0 [i_1]);
                var_27 -= (-8323988224160054153 & 143);
                arr_25 [i_7] [i_5] [i_1] [i_1] = 174;
            }
            for (int i_8 = 0; i_8 < 17;i_8 += 1)
            {
                var_28 = (min(var_28, (((!(arr_8 [i_5]))))));

                for (int i_9 = 1; i_9 < 14;i_9 += 1)
                {
                    arr_31 [i_5] [i_9] = (var_5 ? (arr_29 [i_9 + 1] [i_9 - 1] [i_9 - 1]) : var_16);
                    arr_32 [i_1] [i_5] [i_8] [i_9] = arr_5 [i_1 - 2];
                }
                for (int i_10 = 3; i_10 < 14;i_10 += 1)
                {
                    var_29 -= (arr_14 [i_1 - 2]);
                    arr_36 [i_1] [i_5] [i_8] [i_10] = (((((((arr_27 [i_1] [i_5] [i_8] [i_10]) ? -2122104683 : 192)) + 2147483647)) << (((((arr_28 [i_5] [i_1 - 1] [i_8]) + 1515477329)) - 11))));
                    var_30 |= (!var_9);
                }
                for (int i_11 = 0; i_11 < 17;i_11 += 1)
                {
                    var_31 = (arr_20 [i_1] [i_1 - 1] [i_1] [i_1 - 1]);
                    var_32 &= ((-119 ? 8323988224160054157 : 120));
                    arr_40 [i_8] [i_5] [i_8] [i_11] [i_1] = ((35019340827913065 ? -114 : 253));
                    arr_41 [i_1 - 1] [i_5] [i_8] [i_8] [i_11] [i_11] = (((~128) ? (arr_1 [i_1] [i_1 - 2]) : (arr_17 [i_11])));
                    arr_42 [i_1] [i_1] [i_1 - 2] [i_1 - 2] [i_1] = (arr_22 [i_1] [i_1]);
                }
                for (int i_12 = 2; i_12 < 15;i_12 += 1)
                {
                    var_33 = (((-448354323891488833 + 9223372036854775807) << (16752420777789902975 - 16752420777789902975)));
                    var_34 += (arr_19 [i_8] [i_5] [i_8]);
                }
                arr_46 [i_1 + 1] [i_1] [i_1] = ((var_2 ? (arr_19 [i_1 - 2] [i_1 - 1] [i_1]) : var_11));
                /* LoopNest 2 */
                for (int i_13 = 0; i_13 < 17;i_13 += 1)
                {
                    for (int i_14 = 1; i_14 < 16;i_14 += 1)
                    {
                        {
                            var_35 = 239;
                            var_36 = (arr_48 [i_1 - 1] [i_1 + 1]);
                            arr_53 [i_1 - 2] [i_14] [i_13] [i_13] [i_14] = ((~(arr_8 [i_14 + 1])));
                            arr_54 [i_5] [i_1] &= var_10;
                        }
                    }
                }
            }
            for (int i_15 = 0; i_15 < 17;i_15 += 1)
            {
                arr_57 [i_5] [i_15] = ((-(arr_45 [i_1] [i_1] [i_1 + 1] [i_1])));
                arr_58 [i_1] [i_5] [i_15] = ((!(arr_1 [i_1 - 2] [i_1 - 2])));
                var_37 = (min(var_37, 183));
                var_38 = (((arr_13 [i_1 - 2] [i_5] [i_15]) ? ((1476530946 & (arr_55 [i_1] [i_15] [i_15] [i_5]))) : var_0));
                var_39 = var_3;
            }

            for (int i_16 = 0; i_16 < 17;i_16 += 1)
            {
                arr_62 [i_1] [i_5] [i_5] [i_16] = 14;
                var_40 = (~112);
            }
        }
    }
    for (int i_17 = 0; i_17 < 13;i_17 += 1)
    {
        var_41 = 250;
        /* LoopNest 2 */
        for (int i_18 = 0; i_18 < 13;i_18 += 1)
        {
            for (int i_19 = 3; i_19 < 12;i_19 += 1)
            {
                {
                    arr_71 [i_17] [i_17] |= (arr_28 [i_17] [i_18] [i_19 - 1]);
                    var_42 = 14774;
                }
            }
        }
    }
    var_43 = ((244 + (((1 + -11033) + -var_4))));
    #pragma endscop
}
