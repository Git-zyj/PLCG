/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 150246
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=150246 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/150246
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 24;i_0 += 1)
    {
        for (int i_1 = 4; i_1 < 23;i_1 += 1)
        {
            {

                for (int i_2 = 0; i_2 < 24;i_2 += 1) /* same iter space */
                {
                    arr_11 [i_0] [17] [1] [11] = (arr_7 [i_0] [i_0] [i_2]);
                    /* LoopNest 2 */
                    for (int i_3 = 1; i_3 < 23;i_3 += 1)
                    {
                        for (int i_4 = 0; i_4 < 1;i_4 += 1)
                        {
                            {
                                arr_16 [i_2] [i_3] [i_2] [i_2] [i_4] [i_2] [i_2] = ((((max(-27744, 273804165120))) ? (((min((arr_0 [i_0]), 65535)))) : (((16 && 3537138798) ? (arr_13 [i_3]) : (((arr_6 [11] [18]) ? 19528 : (arr_13 [i_3])))))));
                                var_12 = (min(var_12, (arr_1 [i_0])));
                            }
                        }
                    }
                    var_13 = (((((9797884287573225101 - (arr_6 [i_0] [20])))) && (arr_2 [i_0])));
                    var_14 = (max(var_14, ((((~(arr_10 [i_0] [i_1] [i_2])))))));
                }
                for (int i_5 = 0; i_5 < 24;i_5 += 1) /* same iter space */
                {
                    /* LoopNest 2 */
                    for (int i_6 = 0; i_6 < 24;i_6 += 1)
                    {
                        for (int i_7 = 0; i_7 < 24;i_7 += 1)
                        {
                            {
                                var_15 = (arr_22 [6] [i_1 - 1] [6] [i_1 - 1] [i_6]);
                                var_16 = (max(var_16, 273804165120));
                                arr_25 [i_0] [11] [i_5] [i_6] [i_5] |= arr_1 [1];
                            }
                        }
                    }
                    var_17 &= ((+((((5 / -19557) >= (!18289461206894332338))))));
                    /* LoopNest 2 */
                    for (int i_8 = 0; i_8 < 24;i_8 += 1)
                    {
                        for (int i_9 = 2; i_9 < 21;i_9 += 1)
                        {
                            {
                                arr_31 [i_0] [i_0] [i_1 - 4] [i_1 - 4] [i_1 - 4] [13] = ((((((arr_7 [17] [i_0] [i_0]) / (arr_14 [i_0] [19] [13] [i_5] [19] [i_8] [i_9 + 3]))) / (-3204 - -1216398421))));
                                var_18 = (arr_15 [i_0] [4] [i_5] [i_0] [i_8] [i_9]);
                                var_19 = ((((((((arr_13 [i_8]) + -27756))) ? ((~(arr_9 [i_0] [i_0] [i_0] [22]))) : (!212))) != ((((-1 | (arr_20 [i_0] [i_1] [i_1] [i_1] [i_9])))))));
                                var_20 = (min(var_20, ((min((max(3204, 273804165120)), (((max(-29, 4503599627354112)))))))));
                                arr_32 [i_0] [12] [12] [0] [i_9 + 2] |= -3189;
                            }
                        }
                    }
                }
                for (int i_10 = 0; i_10 < 24;i_10 += 1) /* same iter space */
                {

                    /* vectorizable */
                    for (int i_11 = 0; i_11 < 24;i_11 += 1) /* same iter space */
                    {
                        var_21 = ((12914 < (arr_30 [i_0] [i_0] [i_0] [i_11])));
                        var_22 ^= (((arr_28 [i_0] [i_11] [i_10] [i_11] [i_11]) % (arr_7 [i_0] [9] [i_11])));
                    }
                    for (int i_12 = 0; i_12 < 24;i_12 += 1) /* same iter space */
                    {
                        arr_41 [i_1] = (arr_4 [i_1]);
                        arr_42 [i_0] [i_0] [8] [i_10] [8] = ((-15 != ((((((arr_23 [i_12] [1] [i_10] [i_10] [i_1] [i_1 - 3] [4]) ? (-127 - 1) : (arr_29 [i_10] [i_10] [i_10] [i_10] [i_10] [i_10] [i_10])))) ^ 10295903233950406818))));
                    }
                    for (int i_13 = 0; i_13 < 24;i_13 += 1) /* same iter space */
                    {

                        /* vectorizable */
                        for (int i_14 = 0; i_14 < 24;i_14 += 1) /* same iter space */
                        {
                            var_23 = arr_8 [i_0];
                            var_24 ^= -1216398419;
                            arr_47 [i_10] [1] [i_14] = (((((((arr_45 [i_0] [i_0] [i_0] [22] [0]) <= 22)))) * (((arr_35 [20] [i_14] [i_14] [i_14] [i_14] [12]) & (arr_0 [16])))));
                            var_25 = (arr_34 [16] [i_1]);
                        }
                        /* vectorizable */
                        for (int i_15 = 0; i_15 < 24;i_15 += 1) /* same iter space */
                        {
                            var_26 = (max(var_26, 70));
                            arr_51 [i_0] [i_10] [i_10] [11] [i_0] |= ((arr_12 [i_13] [i_1 - 3] [2] [i_13]) - 1821955944);
                            arr_52 [i_0] |= ((((arr_10 [i_0] [i_0] [i_0]) && (arr_20 [i_0] [6] [i_10] [i_13] [i_15]))));
                        }
                        var_27 = max((arr_28 [i_0] [i_0] [i_0] [i_13] [i_0]), (((arr_9 [i_0] [i_0] [i_10] [i_13]) << (12329516501826784932 >= 1437133128))));
                    }
                    var_28 = (((-10 | (16758 / -96))));
                }
                /* LoopNest 2 */
                for (int i_16 = 0; i_16 < 24;i_16 += 1)
                {
                    for (int i_17 = 0; i_17 < 24;i_17 += 1)
                    {
                        {
                            var_29 = (arr_36 [7] [i_1]);
                            var_30 -= 3737842166;
                        }
                    }
                }
                var_31 ^= (((54670 & 1342316037) / (arr_27 [i_0])));
                /* LoopNest 2 */
                for (int i_18 = 1; i_18 < 23;i_18 += 1)
                {
                    for (int i_19 = 0; i_19 < 24;i_19 += 1)
                    {
                        {
                            var_32 |= ((-(arr_18 [i_0])));
                            var_33 = (((14673276281876686531 % 48421) ? (~16) : (arr_0 [i_0])));
                            var_34 = ((((arr_36 [i_0] [i_1 - 1]) ? (arr_39 [i_18] [i_19]) : (arr_66 [i_19] [i_18] [i_0] [i_0]))));
                        }
                    }
                }
            }
        }
    }
    var_35 = (min(var_35, var_9));
    var_36 = ((((10860422750017609758 * (-1231159062351823758 / 18446744073709551610))) | var_3));
    var_37 = -3610617175194505949;
    #pragma endscop
}
