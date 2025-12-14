/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 110904
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=110904 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/110904
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 2; i_0 < 7;i_0 += 1)
    {
        /* LoopNest 2 */
        for (int i_1 = 0; i_1 < 11;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 11;i_2 += 1)
            {
                {
                    arr_6 [i_0] [i_0] [i_1] [i_2] = ((max(((-(arr_3 [i_0])), ((max((arr_5 [i_0] [i_2]), var_10)))))));
                    arr_7 [i_0] [i_1] [i_1] = (min(((max(-915306555, 62848))), (max(((min((arr_2 [i_0] [i_0]), var_2))), ((~(arr_4 [i_0] [i_1] [i_2] [i_2])))))));
                }
            }
        }
        /* LoopNest 2 */
        for (int i_3 = 2; i_3 < 8;i_3 += 1)
        {
            for (int i_4 = 1; i_4 < 9;i_4 += 1)
            {
                {
                    var_16 = (max((min((arr_4 [i_3] [i_3] [i_3] [i_3]), (arr_12 [i_0] [i_3] [i_0]))), ((max(7442, 3584)))));

                    for (int i_5 = 1; i_5 < 10;i_5 += 1)
                    {
                        var_17 *= (max(5714402236403673183, 65523));
                        var_18 &= (max(((min(47795, -74))), 10099444589957256729));

                        for (int i_6 = 0; i_6 < 11;i_6 += 1)
                        {
                            arr_17 [i_6] [i_0] [i_4] [i_0] [i_0] = (~18446744073709551611);
                            var_19 = (min(((-(!5))), (max(var_14, -var_7))));
                        }
                        var_20 = ((-((min(var_12, var_12)))));
                    }
                    var_21 = ((-(max(5, (arr_15 [i_0] [i_0])))));
                }
            }
        }
    }
    for (int i_7 = 3; i_7 < 12;i_7 += 1)
    {
        arr_20 [i_7] = (max(18446744073709551611, 170));
        arr_21 [i_7] = (max((min(480, 18446744073709551604)), (min(18446744073709551611, (arr_18 [i_7] [i_7 - 3])))));
        arr_22 [10] |= (min((max(1974129375, 5)), (max((~13), 12903584671442587424))));
    }
    /* vectorizable */
    for (int i_8 = 1; i_8 < 14;i_8 += 1)
    {
        arr_26 [i_8] [i_8] = 576443160117379072;
        arr_27 [i_8] &= (!49659);
        var_22 = (~(arr_23 [i_8 - 1]));
        arr_28 [i_8] [i_8] = (!65523);
    }
    var_23 = var_11;
    /* LoopNest 3 */
    for (int i_9 = 4; i_9 < 8;i_9 += 1)
    {
        for (int i_10 = 0; i_10 < 1;i_10 += 1)
        {
            for (int i_11 = 0; i_11 < 10;i_11 += 1)
            {
                {
                    /* LoopNest 2 */
                    for (int i_12 = 2; i_12 < 9;i_12 += 1)
                    {
                        for (int i_13 = 0; i_13 < 10;i_13 += 1)
                        {
                            {
                                var_24 = (max(((max((~var_11), (min(var_2, (arr_37 [i_9])))))), (max((min(13, 4)), 0))));
                                arr_43 [i_9] [i_9] [i_12] [i_12] [i_9] [i_9] [i_9] |= (max((min((max(var_1, (arr_15 [i_13] [i_13]))), ((min((arr_29 [i_10]), (arr_0 [i_11])))))), 12));
                                var_25 = (max((min(10653211825988681811, 0)), (min(228, 12270121375183477199))));
                                arr_44 [i_9] [i_10] [i_10] [i_9] [i_11] [i_9] [i_13] = (max(((~(min(var_9, -13)))), (max((arr_1 [i_9 + 2] [i_13]), (arr_2 [i_9] [i_12 - 1])))));
                            }
                        }
                    }
                    /* LoopNest 2 */
                    for (int i_14 = 0; i_14 < 10;i_14 += 1)
                    {
                        for (int i_15 = 1; i_15 < 8;i_15 += 1)
                        {
                            {
                                arr_51 [i_14] [i_14] [i_15] = ((min((max(0, 13867286829929130445), ((max(243, 1)))))));
                                var_26 = (max(2618992307, (max(1, 0))));
                                arr_52 [i_14] [i_10] [i_11] [i_14] [i_14] [i_15] = (max(((max(21, 4294967287))), ((~(max((arr_10 [i_11] [i_10]), var_4))))));
                                var_27 -= (max((max((arr_14 [i_9] [i_10] [i_9] [i_14] [i_15 + 2]), (arr_14 [i_15] [i_15] [i_15] [i_15] [i_15 - 1]))), ((min(45096, -1)))));
                            }
                        }
                    }
                    /* LoopNest 2 */
                    for (int i_16 = 0; i_16 < 10;i_16 += 1)
                    {
                        for (int i_17 = 1; i_17 < 1;i_17 += 1)
                        {
                            {
                                var_28 ^= ((!(((-(!2116552307))))));
                                arr_58 [i_16] [i_16] = (min((!12903584671442587433), (max(30, 18446744073709551615))));
                                var_29 = (~-2320837930);
                            }
                        }
                    }
                }
            }
        }
    }
    #pragma endscop
}
