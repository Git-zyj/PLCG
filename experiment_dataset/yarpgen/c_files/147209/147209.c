/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 147209
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=147209 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/147209
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_13 = (min(var_13, 6));

    for (int i_0 = 0; i_0 < 1;i_0 += 1)
    {
        /* LoopNest 2 */
        for (int i_1 = 0; i_1 < 23;i_1 += 1)
        {
            for (int i_2 = 3; i_2 < 21;i_2 += 1)
            {
                {
                    var_14 = (max(var_14, (((min(-2220066699919037538, -2220066699919037538)) / (((-2220066699919037541 ? -16 : 16)))))));
                    /* LoopNest 2 */
                    for (int i_3 = 0; i_3 < 1;i_3 += 1)
                    {
                        for (int i_4 = 0; i_4 < 23;i_4 += 1)
                        {
                            {
                                arr_15 [i_0] [i_3] [i_2 - 1] [i_1] [i_0] = (min((arr_9 [i_2 + 2] [i_2 - 2] [i_2 - 2]), (arr_3 [i_0])));
                                arr_16 [i_0] [i_1] [14] [i_0] [i_3] [i_4] = (((max((((arr_14 [i_0] [i_1] [i_1] [i_2 - 1] [i_0] [i_4]) ? (arr_4 [i_0]) : var_5)), (!var_12)))) ? (max((var_7 % var_2), (min((arr_12 [0] [i_0] [i_0] [i_0] [i_0] [i_0]), var_6)))) : (((arr_6 [i_2 - 1] [i_0] [i_2 - 3]) ? (arr_5 [i_2 + 2] [i_2 - 3]) : (arr_1 [i_2 - 3] [i_1]))));
                            }
                        }
                    }
                    var_15 = (((((((((arr_1 [i_2] [i_1]) ? (arr_14 [i_2] [i_2] [i_1] [1] [i_0] [i_0]) : (arr_3 [i_0])))) ? (arr_6 [i_2 + 2] [i_0] [i_0]) : (arr_11 [i_0] [i_0])))) ? (((16 & 1) | ((~(arr_14 [i_0] [i_0] [i_1] [i_2 + 1] [2] [17]))))) : (max((arr_12 [i_2] [i_2] [i_2] [i_2] [i_2 + 2] [11]), (-91 | 1)))));
                    var_16 = (max(var_16, (((((-((min(60, 16))))) != (~var_9))))));
                }
            }
        }
        arr_17 [i_0] = 26936;
        /* LoopNest 3 */
        for (int i_5 = 0; i_5 < 23;i_5 += 1)
        {
            for (int i_6 = 0; i_6 < 1;i_6 += 1)
            {
                for (int i_7 = 0; i_7 < 23;i_7 += 1)
                {
                    {
                        var_17 -= (((((((arr_19 [8] [8] [13]) ? var_11 : var_8)) - (((!(arr_18 [i_6])))))) == ((((((arr_8 [i_0] [i_0] [i_0]) ? 3670 : (arr_3 [i_5]))) > (1 & var_10))))));
                        var_18 = (max(var_18, -6251));
                    }
                }
            }
        }
    }
    for (int i_8 = 0; i_8 < 18;i_8 += 1)
    {
        var_19 -= max((((arr_23 [i_8] [10] [10] [i_8]) ? var_8 : var_11)), (((var_0 && (arr_23 [i_8] [i_8] [0] [i_8])))));
        /* LoopNest 2 */
        for (int i_9 = 0; i_9 < 18;i_9 += 1)
        {
            for (int i_10 = 3; i_10 < 17;i_10 += 1)
            {
                {
                    arr_33 [i_8] [14] [14] [i_8] = (max((arr_25 [i_8] [i_9] [i_9] [i_8]), ((-(arr_25 [i_8] [i_8] [i_8] [i_8])))));
                    arr_34 [i_8] = (arr_30 [i_10] [3] [i_9] [i_8]);
                    arr_35 [i_8] [i_10 + 1] = (arr_8 [i_8] [i_9] [10]);
                }
            }
        }
        /* LoopNest 2 */
        for (int i_11 = 3; i_11 < 16;i_11 += 1)
        {
            for (int i_12 = 2; i_12 < 16;i_12 += 1)
            {
                {
                    arr_41 [6] [6] &= (min((max((((var_10 ? 32480 : var_10))), (arr_22 [i_8] [i_11] [13]))), ((max((~-2), (((arr_4 [14]) ? var_0 : var_10)))))));
                    var_20 = ((((max(var_10, (arr_28 [i_8] [i_11] [i_12])))) || ((max((arr_38 [i_12 + 1] [i_8] [i_8]), (arr_39 [i_8] [i_11 - 1]))))));
                }
            }
        }
        /* LoopNest 2 */
        for (int i_13 = 2; i_13 < 14;i_13 += 1)
        {
            for (int i_14 = 0; i_14 < 18;i_14 += 1)
            {
                {
                    var_21 = ((((((arr_37 [i_13 + 3] [i_13 + 2]) ? var_7 : (arr_37 [i_13 + 1] [i_13 + 3])))) | (~18362281758773194176)));

                    for (int i_15 = 0; i_15 < 18;i_15 += 1)
                    {
                        arr_52 [i_8] [i_13 + 2] [i_8] = ((((max(-0, (!var_6)))) > ((var_12 ? (arr_48 [i_8] [i_13] [i_8] [i_8]) : (((min((arr_12 [i_8] [i_8] [i_14] [i_14] [i_15] [i_15]), (arr_50 [i_8] [i_8])))))))));
                        arr_53 [i_15] [i_8] [i_8] [3] = ((1 ? (arr_37 [i_13 + 2] [i_8]) : ((~(arr_9 [i_8] [i_13 + 1] [i_13 + 4])))));
                        var_22 = ((((var_7 || (arr_3 [i_8]))) ? (((((max(0, -1233481605986163184))) || (!var_2)))) : ((((((52 ? 3 : 1))) || -938143750)))));
                        arr_54 [i_8] [i_13 + 3] [i_8] [i_15] [i_13] [i_8] = ((((908526722 ? 0 : -16)) <= ((~(arr_5 [12] [i_13 - 1])))));
                    }
                }
            }
        }
    }
    var_23 *= var_12;
    #pragma endscop
}
