/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 149189
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=149189 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/149189
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_19 = (min(var_19, var_0));
    /* LoopNest 2 */
    for (int i_0 = 3; i_0 < 17;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 18;i_1 += 1)
        {
            {
                var_20 = (max(var_20, var_17));
                /* LoopNest 2 */
                for (int i_2 = 0; i_2 < 18;i_2 += 1)
                {
                    for (int i_3 = 1; i_3 < 17;i_3 += 1)
                    {
                        {
                            var_21 = (max(var_21, (((!((min((261581722 % 4294967295), ((((arr_7 [i_2] [i_3 + 1]) >= (arr_5 [i_1] [i_1] [i_1] [i_1]))))))))))));
                            var_22 = var_17;
                            arr_8 [i_0] [i_1] |= var_9;
                        }
                    }
                }
                var_23 |= (arr_5 [i_1] [i_0 - 3] [8] [i_1]);

                for (int i_4 = 0; i_4 < 18;i_4 += 1)
                {
                    var_24 = (max(var_24, ((+(((arr_1 [i_0 - 2] [i_0 + 1]) ? (arr_3 [13] [i_0 - 1] [i_0 - 2]) : (arr_3 [i_0] [i_0 - 2] [i_4])))))));
                    var_25 -= ((((min((4294967295 >= 3113386588), (min(3113386588, 1183217548))))) ? ((~(!1181580682))) : (arr_1 [i_1] [i_4])));
                }

                /* vectorizable */
                for (int i_5 = 0; i_5 < 18;i_5 += 1)
                {
                    var_26 = 1349629743;
                    var_27 |= (((var_15 + 2147483647) << (2338694441 - 2338694441)));
                    /* LoopNest 2 */
                    for (int i_6 = 0; i_6 < 18;i_6 += 1)
                    {
                        for (int i_7 = 2; i_7 < 17;i_7 += 1)
                        {
                            {
                                var_28 ^= 0;
                                var_29 = (min(var_29, (!16)));
                            }
                        }
                    }
                    var_30 = (max(var_30, var_10));
                }
                for (int i_8 = 0; i_8 < 18;i_8 += 1)
                {

                    for (int i_9 = 0; i_9 < 18;i_9 += 1) /* same iter space */
                    {
                        var_31 = (((var_18 ^ 1183217544) ? (((1050502598 | 2438974505) ? (arr_21 [i_0 - 3]) : (((1789630253 % (arr_1 [i_0] [i_0])))))) : ((((((~(arr_6 [7] [2])))) ? (arr_1 [i_8] [i_0]) : (arr_23 [i_0 - 1] [i_0 - 2] [i_0 - 3] [i_0 + 1]))))));
                        var_32 ^= var_10;
                        var_33 -= var_0;
                        var_34 = (max(var_34, (((((3905438024 - (arr_9 [i_0])))) ? (arr_16 [i_0 - 3]) : (max(1183217533, -2338694457))))));
                        var_35 = (max(var_35, var_4));
                    }
                    for (int i_10 = 0; i_10 < 18;i_10 += 1) /* same iter space */
                    {
                        var_36 += ((((-(arr_5 [i_1] [i_1] [i_0 - 3] [i_0 + 1]))) / ((-var_7 / (arr_20 [i_8])))));
                        var_37 = (min(var_37, (min((arr_16 [i_0 + 1]), (max((arr_2 [i_8] [8] [i_8]), 7))))));

                        for (int i_11 = 2; i_11 < 17;i_11 += 1)
                        {
                            var_38 = (max(var_38, (!5111)));
                            var_39 = (max(var_39, (~var_4)));
                            var_40 = var_8;
                            var_41 *= 1081111493;
                            var_42 = (max(var_42, -79));
                        }
                        /* vectorizable */
                        for (int i_12 = 0; i_12 < 18;i_12 += 1)
                        {
                            var_43 = (max(var_43, (((!(418938708 < 599729918))))));
                            var_44 *= (((var_6 ? (arr_15 [i_10]) : (arr_6 [i_0] [i_0]))) | (arr_28 [i_0 - 1] [14] [14] [i_0] [i_0 - 1]));
                        }
                    }
                    var_45 = (min(var_45, var_9));
                    var_46 *= 4294967276;
                    var_47 = (max(var_47, (((~(((!((!(arr_10 [i_8] [i_1] [i_8])))))))))));
                }
                /* vectorizable */
                for (int i_13 = 0; i_13 < 18;i_13 += 1)
                {
                    var_48 = (min(var_48, (((16564 | ((1081111493 ? 2338694460 : 2715083017)))))));

                    for (int i_14 = 1; i_14 < 17;i_14 += 1)
                    {
                        var_49 ^= arr_10 [i_1] [i_1] [i_13];
                        arr_36 [8] [8] [8] [i_1] |= ((8491 ? (arr_19 [i_0 - 2] [i_0 - 2] [i_0 - 1] [i_0 - 1]) : (arr_15 [i_13])));
                        var_50 = (min(var_50, (((arr_1 [i_0 + 1] [i_0 - 1]) >> (((arr_1 [i_0 - 1] [i_0 - 2]) - 6274))))));
                    }
                    var_51 = (min(var_51, (1 ^ 107)));
                }
                for (int i_15 = 0; i_15 < 18;i_15 += 1)
                {
                    var_52 = (max(var_52, (((2537645572 ? (max(-709209263, 17597)) : (arr_23 [i_0 - 2] [i_1] [i_15] [i_0 - 3]))))));
                    /* LoopNest 2 */
                    for (int i_16 = 0; i_16 < 18;i_16 += 1)
                    {
                        for (int i_17 = 1; i_17 < 17;i_17 += 1)
                        {
                            {
                                var_53 ^= (((var_2 + 2147483647) >> (var_0 - 3234345875)));
                                var_54 *= ((-(~var_2)));
                                var_55 = (min(var_55, ((min(var_10, 17597)))));
                            }
                        }
                    }
                    var_56 *= (-90 | var_18);
                    /* LoopNest 2 */
                    for (int i_18 = 4; i_18 < 17;i_18 += 1)
                    {
                        for (int i_19 = 1; i_19 < 17;i_19 += 1)
                        {
                            {
                                var_57 = (min(var_57, (arr_30 [i_0 + 1] [6] [i_0 + 1] [i_15] [i_19 - 1] [i_1])));
                                var_58 ^= -1007754300;
                                var_59 -= (((4294967294 ? (arr_1 [i_0 - 1] [i_0 - 1]) : var_15)));
                            }
                        }
                    }
                }
            }
        }
    }
    var_60 = (min(var_60, (((!((max(var_6, (min(65534, 4114279611))))))))));
    var_61 = (max(var_61, (~6)));
    #pragma endscop
}
