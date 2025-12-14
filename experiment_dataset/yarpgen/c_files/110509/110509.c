/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 110509
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=110509 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/110509
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 19;i_0 += 1)
    {
        for (int i_1 = 3; i_1 < 18;i_1 += 1)
        {
            {
                /* LoopNest 3 */
                for (int i_2 = 1; i_2 < 15;i_2 += 1)
                {
                    for (int i_3 = 1; i_3 < 16;i_3 += 1)
                    {
                        for (int i_4 = 4; i_4 < 17;i_4 += 1)
                        {
                            {
                                arr_13 [i_0] [i_2] [i_1] = (((12824 ? var_10 : (arr_8 [i_1]))));
                                var_11 += ((-((0 ? 26 : 929393630))));
                            }
                        }
                    }
                }
                var_12 ^= ((((255 + (arr_10 [i_1] [i_1 - 1] [i_0]))) < 3));

                for (int i_5 = 2; i_5 < 18;i_5 += 1)
                {
                    arr_16 [i_5] [i_5] &= (max(18446744073709551615, (arr_5 [i_5 + 1] [i_1])));
                    /* LoopNest 2 */
                    for (int i_6 = 0; i_6 < 19;i_6 += 1)
                    {
                        for (int i_7 = 0; i_7 < 19;i_7 += 1)
                        {
                            {
                                var_13 = (max(var_13, (((~(min(-var_0, (max(var_2, 11)))))))));
                                var_14 -= (((((0 ? (arr_8 [i_5]) : (arr_8 [i_5])))) ? (min((arr_8 [i_5]), (arr_8 [i_5]))) : (min((arr_8 [i_5]), 37))));
                            }
                        }
                    }
                    /* LoopNest 2 */
                    for (int i_8 = 0; i_8 < 1;i_8 += 1)
                    {
                        for (int i_9 = 0; i_9 < 19;i_9 += 1)
                        {
                            {
                                arr_30 [i_0] [i_0] [i_5 - 2] [i_1] [i_1] = ((-(max(-32755, (18446744073709551600 * 18446744073709551600)))));
                                arr_31 [i_0] [i_1] [i_5] [i_1] [i_1] [i_9] = (arr_15 [i_0] [i_1] [i_1]);
                                var_15 *= (max((min(3, -2147483636)), (((arr_3 [i_8] [i_8] [i_5 - 2]) ? -15 : (arr_19 [i_9])))));
                            }
                        }
                    }
                }

                /* vectorizable */
                for (int i_10 = 1; i_10 < 18;i_10 += 1)
                {
                    arr_35 [i_1] = (!29797);
                    var_16 *= ((-(arr_18 [i_1 + 1] [i_10] [i_10 + 1] [i_1 + 1])));
                    var_17 *= (((((18446744073709551615 ? (arr_28 [i_0] [i_0] [i_1] [i_10] [16]) : 7))) ? (255 >= var_0) : ((33447 ? (arr_4 [i_0]) : -1109118674))));
                    /* LoopNest 2 */
                    for (int i_11 = 0; i_11 < 19;i_11 += 1)
                    {
                        for (int i_12 = 3; i_12 < 18;i_12 += 1)
                        {
                            {
                                arr_40 [5] [i_1] [5] [i_1] [i_0] = (((0 ? (arr_38 [i_1] [i_1] [i_10] [i_1] [i_12]) : (arr_24 [15] [15] [i_10 + 1] [i_12]))));
                                var_18 += 18446744073709551607;
                            }
                        }
                    }
                }
                /* LoopNest 2 */
                for (int i_13 = 1; i_13 < 16;i_13 += 1)
                {
                    for (int i_14 = 1; i_14 < 18;i_14 += 1)
                    {
                        {
                            arr_47 [i_0] [i_1] = (((min((arr_8 [i_1]), 122))) ? ((min((arr_8 [i_1]), (arr_8 [i_1])))) : (max(29797, 18446744073709551598)));
                            arr_48 [i_0] [1] [i_13] [i_1] = (max(((1792383216573490047 ? 13 : 1161167442140635478)), (arr_23 [i_14] [i_14] [i_13] [i_1 - 2] [i_14 + 1] [i_13 + 3])));
                            arr_49 [i_1] [i_13 + 3] [i_0] [i_1] [i_1] = (max((arr_7 [i_1] [i_1] [i_1]), (((arr_15 [i_1] [i_1 - 3] [i_1]) ? (arr_19 [i_13 + 3]) : (min(9163166789139897224, 18446744073709551581))))));
                            var_19 += (((((arr_45 [i_0] [i_14 + 1] [12] [i_13 + 1]) ? 105 : (arr_45 [i_0] [i_14 + 1] [i_14 + 1] [i_13 + 1]))) >= (((arr_45 [i_0] [i_14 + 1] [i_13] [i_13 + 1]) & (arr_45 [i_13] [i_14 + 1] [i_13] [i_13 + 1])))));
                        }
                    }
                }
            }
        }
    }
    var_20 = (((((max(var_10, var_4))) ? (!var_10) : (!var_2))));
    #pragma endscop
}
