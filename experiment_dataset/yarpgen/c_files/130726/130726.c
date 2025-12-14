/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 130726
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=130726 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/130726
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 1; i_0 < 12;i_0 += 1) /* same iter space */
    {
        arr_4 [i_0 + 1] [1] &= var_8;
        var_14 = (max(var_14, ((min(var_2, ((min((arr_2 [i_0 + 3] [12]), 37585))))))));
        var_15 ^= var_6;
        var_16 = (max(((((((var_7 ? var_13 : 1))) ? 58751 : 37560))), (max((((27953 ? var_4 : 65535))), (min(var_12, var_12))))));
    }
    for (int i_1 = 1; i_1 < 12;i_1 += 1) /* same iter space */
    {
        arr_7 [i_1] = (max(var_8, ((-(arr_5 [i_1])))));
        arr_8 [i_1] [i_1] = (arr_1 [i_1]);

        /* vectorizable */
        for (int i_2 = 0; i_2 < 1;i_2 += 1)
        {
            var_17 = ((((((arr_9 [i_1] [i_2] [i_2]) >> (37595 - 37578)))) ? ((1 ? var_11 : var_1)) : (((27 ? 1 : 27982)))));

            for (int i_3 = 0; i_3 < 15;i_3 += 1)
            {

                for (int i_4 = 0; i_4 < 15;i_4 += 1)
                {
                    var_18 ^= (((((7 ? 27976 : (arr_1 [i_1])))) ? 3550060906 : 2));
                    arr_18 [i_1] [i_4] [i_3] [i_4] = 27950;

                    for (int i_5 = 0; i_5 < 1;i_5 += 1)
                    {
                        var_19 *= -var_2;
                        var_20 *= (((arr_10 [i_1] [i_1 + 1] [i_1 + 2]) ? 268427264 : var_1));
                        var_21 = (min(var_21, ((((((var_6 ? 37583 : var_5))) ? 37573 : var_9)))));
                        arr_21 [i_1] [i_2] [i_3] [i_4] [i_4] [i_5] = ((-1 ? var_3 : (arr_2 [i_1 - 1] [i_4])));
                    }
                }
                for (int i_6 = 0; i_6 < 1;i_6 += 1)
                {
                    arr_24 [i_1] [i_2] [i_3] [i_6] |= (~var_5);
                    arr_25 [i_1] [i_1] [i_6] [i_6] |= (arr_3 [i_3] [i_3]);
                }
                var_22 = -9223372036854775807;
            }
            for (int i_7 = 0; i_7 < 15;i_7 += 1) /* same iter space */
            {

                for (int i_8 = 0; i_8 < 15;i_8 += 1)
                {
                    var_23 = (((var_8 % var_6) ? 34521 : (((arr_9 [i_8] [i_2] [i_1]) ? 27949 : var_2))));
                    var_24 = (max(var_24, (var_9 >= 37587)));
                }

                for (int i_9 = 0; i_9 < 15;i_9 += 1)
                {
                    arr_36 [i_9] [i_9] [i_7] [i_2] [i_9] [i_1] = 37544;
                    var_25 = 27966;
                    var_26 = (min(var_26, (arr_30 [i_7] [i_1 + 3] [i_1 + 1])));
                    arr_37 [i_1 + 3] [i_1] [i_2] [i_9] [i_7] [i_7] = var_10;
                    var_27 = ((~((~(arr_16 [i_9] [i_9] [i_9] [i_9] [i_1])))));
                }
                for (int i_10 = 0; i_10 < 15;i_10 += 1)
                {
                    var_28 = (max(var_28, (arr_15 [i_1] [i_1] [i_7])));
                    arr_40 [i_1] [i_2] [i_10] = 1;
                }
                arr_41 [i_1] |= 1029138611;
            }
            for (int i_11 = 0; i_11 < 15;i_11 += 1) /* same iter space */
            {
                arr_44 [i_1] [i_11] [i_1 - 1] [i_1 + 3] = (4611686001247518720 ? (arr_11 [i_1 - 1] [i_1 - 1]) : 2147483647);
                var_29 = -var_11;
            }
            arr_45 [i_1] [i_2] [i_2] &= ((var_5 ? var_11 : var_8));
        }
        for (int i_12 = 0; i_12 < 15;i_12 += 1)
        {
            arr_49 [i_1] = -var_2;

            for (int i_13 = 0; i_13 < 15;i_13 += 1) /* same iter space */
            {
                /* LoopNest 2 */
                for (int i_14 = 2; i_14 < 13;i_14 += 1)
                {
                    for (int i_15 = 0; i_15 < 15;i_15 += 1)
                    {
                        {
                            arr_61 [i_15] [i_14 - 2] [i_13] [i_12] [i_12] [i_1] = (min(240, ((var_10 ? 20518 : (arr_6 [i_1 + 3])))));
                            var_30 = var_0;
                        }
                    }
                }
                arr_62 [i_1] [i_12] = (min((((var_11 ? var_13 : (arr_27 [i_1] [i_12] [i_13])))), (arr_23 [i_1 - 1] [i_1 - 1] [i_12] [i_12] [i_12] [i_12])));

                for (int i_16 = 0; i_16 < 15;i_16 += 1)
                {
                    var_31 = ((var_3 ? (~27953) : ((~(min(var_6, -113))))));

                    /* vectorizable */
                    for (int i_17 = 0; i_17 < 15;i_17 += 1)
                    {
                        var_32 = (min(var_32, ((((~37585) ? var_6 : 0)))));
                        var_33 ^= 24743;
                    }
                    for (int i_18 = 0; i_18 < 15;i_18 += 1)
                    {
                        var_34 = (max(var_34, ((((((var_3 ? -1 : ((0 ? (arr_65 [i_1 + 2] [i_1 + 2] [i_1 + 2] [1]) : 1))))) ? (min((7 ^ var_8), var_13)) : ((~(max(37572, 8876489087098538324)))))))));
                        var_35 = (~var_2);
                        var_36 &= ((((max(46851, 1))) ? (!38888) : 12584));
                    }
                }
            }
            for (int i_19 = 0; i_19 < 15;i_19 += 1) /* same iter space */
            {
                var_37 = ((-((min((arr_23 [i_1 + 1] [i_1 - 1] [i_1 + 1] [i_1 + 1] [i_1 + 3] [i_1 + 2]), (arr_23 [i_1 + 1] [i_1 - 1] [i_1 + 1] [i_1 + 1] [i_1 + 3] [i_1 + 2]))))));
                var_38 = (((((~var_3) == 1)) ? var_2 : (((1 ? 65508 : (-2147483647 - 1))))));
            }
            var_39 += (((+(((arr_50 [i_1] [i_12] [i_1 + 1] [i_12]) ? 27942 : var_2)))) | (((1048448 * (arr_10 [i_12] [i_12] [i_1])))));
        }
        for (int i_20 = 4; i_20 < 14;i_20 += 1)
        {
            arr_78 [i_20 - 4] [i_1 - 1] = var_9;
            var_40 = (min(var_40, 2217543027697373603));
            /* LoopNest 3 */
            for (int i_21 = 0; i_21 < 15;i_21 += 1)
            {
                for (int i_22 = 0; i_22 < 15;i_22 += 1)
                {
                    for (int i_23 = 0; i_23 < 15;i_23 += 1)
                    {
                        {
                            arr_87 [i_1 + 3] [i_20] [i_21] [i_22] [i_22] [i_23] = min(var_5, var_13);
                            arr_88 [i_1] [i_1] [i_1] [i_1] [i_1] = ((max(var_11, (arr_84 [i_1 + 3] [i_1 + 1]))));
                            arr_89 [i_1 - 1] [i_20] [i_21] [i_21] [i_21] [i_22] [i_23] &= (+(min((-9223372036854775807 - 1), (-1385073400 + 2147483631))));
                            var_41 = var_5;
                        }
                    }
                }
            }
        }
        var_42 = ((((min(-12584, (min(0, 48))))) ? ((max((var_1 >= 38402), 16))) : (~60)));
        arr_90 [i_1 + 1] [i_1] = (min((~1048448), (arr_28 [i_1 + 2])));
    }
    var_43 = (-(min((min(var_10, var_7)), (((1 ? var_9 : var_5))))));
    var_44 = (min(((max(var_11, (4293918866 / -1441217552)))), ((-var_1 ? (((0 ? var_4 : 11))) : var_1))));
    #pragma endscop
}
