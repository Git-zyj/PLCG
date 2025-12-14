/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 14995
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=14995 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/14995
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    /* vectorizable */
    for (int i_0 = 0; i_0 < 23;i_0 += 1)
    {
        var_16 = (arr_2 [i_0]);
        var_17 = ((0 ? (arr_2 [i_0]) : (arr_2 [i_0])));
        var_18 = (3267798067 >> 1);
        var_19 = (arr_2 [i_0]);
        var_20 |= ((~(arr_0 [i_0])));
    }
    /* vectorizable */
    for (int i_1 = 1; i_1 < 17;i_1 += 1)
    {
        var_21 = -15383975796188526199;

        for (int i_2 = 0; i_2 < 19;i_2 += 1)
        {
            var_22 = 8754721783497049599;

            for (int i_3 = 0; i_3 < 1;i_3 += 1)
            {
                var_23 -= ((0 << (140737488355327 - 140737488355312)));
                var_24 *= ((~(((arr_0 [i_3]) ? var_4 : -22048))));
                var_25 &= 1794920999;
            }
            for (int i_4 = 0; i_4 < 19;i_4 += 1)
            {
                var_26 = (max(var_26, ((((arr_8 [i_4]) / 20968)))));

                for (int i_5 = 0; i_5 < 19;i_5 += 1)
                {
                    var_27 = (8754721783497049598 + 576460614864470016);

                    for (int i_6 = 4; i_6 < 18;i_6 += 1)
                    {
                        var_28 = (((arr_14 [i_1 + 1] [9] [i_1 + 1] [i_1 + 1]) <= (arr_0 [i_6])));
                        var_29 = ((~(arr_8 [i_1 + 2])));
                        var_30 -= var_11;
                    }
                }
                for (int i_7 = 0; i_7 < 19;i_7 += 1)
                {
                    var_31 = ((0 / (-127 - 1)));
                    var_32 -= (arr_11 [i_4] [i_7]);
                }
                var_33 = (arr_17 [i_4] [i_4] [i_2] [i_1] [i_1 + 2]);
            }

            for (int i_8 = 2; i_8 < 15;i_8 += 1)
            {

                for (int i_9 = 0; i_9 < 19;i_9 += 1)
                {
                    var_34 = ((-15770102450794339991 & (~459552201)));
                    var_35 = (((arr_8 [i_2]) ? -32767 : (arr_16 [i_1 + 1] [i_1 + 2])));
                    var_36 = (max(var_36, 18446744073709551615));
                }
                var_37 = (((arr_20 [i_1 - 1]) & (arr_4 [i_8 - 1])));
            }
        }
        var_38 = (((arr_17 [i_1] [i_1 + 2] [i_1 + 2] [i_1 + 2] [i_1 + 1]) == var_1));
    }
    /* vectorizable */
    for (int i_10 = 0; i_10 < 21;i_10 += 1)
    {
        var_39 = (((arr_2 [i_10]) & 79));
        var_40 = var_9;
        var_41 = (7570742269945301500 / var_3);

        for (int i_11 = 0; i_11 < 21;i_11 += 1)
        {
            var_42 -= (((arr_0 [i_10]) ? (65535 * var_8) : (arr_30 [12] [i_11] [i_11])));
            var_43 &= ((var_10 ? -3897 : (arr_27 [i_10] [i_11])));

            for (int i_12 = 0; i_12 < 21;i_12 += 1)
            {

                for (int i_13 = 0; i_13 < 21;i_13 += 1)
                {
                    var_44 = (arr_0 [i_13]);
                    var_45 = ((-(arr_1 [i_12])));
                    var_46 = -4135236236224844589;
                }
                for (int i_14 = 0; i_14 < 21;i_14 += 1)
                {
                    var_47 = var_15;
                    var_48 += 17634;
                }
                for (int i_15 = 0; i_15 < 21;i_15 += 1)
                {
                    var_49 = (min(var_49, (arr_40 [i_10] [i_11] [i_12] [i_15] [i_10])));
                    var_50 &= ((0 ? 20975 : 156));
                    var_51 &= ((1056919651 ? (arr_2 [i_11]) : (((arr_29 [16] [i_12] [i_15]) << (((arr_32 [i_10] [i_10] [i_12]) - 34))))));
                }
                for (int i_16 = 0; i_16 < 21;i_16 += 1)
                {
                    var_52 = (((arr_40 [i_16] [i_16] [i_12] [i_11] [i_10]) <= var_13));

                    for (int i_17 = 0; i_17 < 21;i_17 += 1)
                    {
                        var_53 = (arr_28 [i_11] [i_12]);
                        var_54 = (((((17634 ? -1 : 0))) ? (((arr_29 [i_10] [i_11] [i_11]) / (arr_29 [i_10] [i_11] [i_11]))) : (arr_0 [i_12])));
                    }
                }

                for (int i_18 = 0; i_18 < 21;i_18 += 1)
                {
                    var_55 = ((var_1 ? (3615508400 + var_3) : (arr_47 [i_10] [i_11] [i_10])));
                    var_56 = -17643;
                }
                /* LoopNest 2 */
                for (int i_19 = 1; i_19 < 19;i_19 += 1)
                {
                    for (int i_20 = 0; i_20 < 1;i_20 += 1)
                    {
                        {
                            var_57 = arr_42 [i_10] [i_11] [i_12] [i_10];
                            var_58 = (arr_50 [i_10] [i_11] [i_10] [i_19] [i_11]);
                            var_59 = (!var_10);
                        }
                    }
                }

                for (int i_21 = 0; i_21 < 1;i_21 += 1)
                {
                    var_60 = ((3615508394 / (arr_31 [i_10] [i_10])));
                    var_61 = (arr_27 [i_11] [i_10]);
                    var_62 ^= ((~(arr_38 [18])));
                    var_63 = 123;
                }
            }
            for (int i_22 = 1; i_22 < 19;i_22 += 1)
            {
                var_64 = (0 || var_0);
                var_65 = 1;
                var_66 = (160 ? (~var_4) : (~var_11));
                var_67 = (arr_41 [i_10] [i_11] [i_10]);
            }
        }
        for (int i_23 = 0; i_23 < 21;i_23 += 1)
        {
            /* LoopNest 2 */
            for (int i_24 = 4; i_24 < 18;i_24 += 1)
            {
                for (int i_25 = 0; i_25 < 21;i_25 += 1)
                {
                    {
                        var_68 = -var_12;
                        var_69 = 2500046296;
                        var_70 = ((1443569297 ? 17632 : 4914220023623216947));

                        for (int i_26 = 2; i_26 < 19;i_26 += 1)
                        {
                            var_71 = (((arr_63 [i_24 + 1] [i_24 - 1] [i_24 + 1]) ? 160 : 9));
                            var_72 = (+-116);
                        }
                    }
                }
            }
            var_73 = (arr_60 [i_23]);
        }
        var_74 = ((!(arr_37 [i_10] [i_10] [i_10] [i_10] [i_10] [i_10])));
    }
    var_75 = var_15;
    var_76 = (max((((!89) * (!var_6))), ((0 ? 1 : 123))));
    #pragma endscop
}
