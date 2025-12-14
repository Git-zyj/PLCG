/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 169702
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=169702 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/169702
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 1;i_0 += 1)
    {
        for (int i_1 = 2; i_1 < 14;i_1 += 1)
        {
            {
                arr_5 [7] [7] = (min(((var_15 ? (arr_4 [i_0] [i_1 + 1]) : var_19)), 1073741696));
                var_20 += (((max(var_1, (~var_7))) < ((max(-1073741697, var_4)))));
            }
        }
    }
    /* LoopNest 3 */
    for (int i_2 = 4; i_2 < 18;i_2 += 1)
    {
        for (int i_3 = 0; i_3 < 19;i_3 += 1)
        {
            for (int i_4 = 0; i_4 < 19;i_4 += 1)
            {
                {
                    /* LoopNest 2 */
                    for (int i_5 = 0; i_5 < 19;i_5 += 1)
                    {
                        for (int i_6 = 0; i_6 < 1;i_6 += 1)
                        {
                            {
                                var_21 = (((arr_11 [i_6] [i_4] [i_2 - 4] [i_2]) ? ((((!8) ? var_13 : ((var_4 ? (arr_8 [i_2] [i_2 - 4]) : (arr_6 [i_2])))))) : (((arr_9 [i_2 + 1] [i_2 - 4]) ? (min(var_7, -1073741683)) : 18446744073709551615))));
                                var_22 = (((((arr_16 [i_2 - 2] [i_2 - 2] [i_2 - 3] [i_5] [i_5] [i_5]) ? (arr_16 [i_2 - 4] [i_2 + 1] [i_2 - 4] [i_2 + 1] [i_5] [i_2 - 4]) : (arr_6 [i_2 + 1]))) >= (1 | var_1)));
                                var_23 = ((((min((arr_10 [i_2] [i_2]), (var_12 != var_6)))) ? (((max(var_12, -2048)))) : (min((arr_13 [i_2] [i_2 - 3] [i_4] [i_5]), (arr_10 [i_2 - 2] [i_2 - 4])))));
                                arr_17 [i_2] [i_3] [i_3] [i_4] [i_4] [i_5] [i_6] = 145;
                                var_24 = -1;
                            }
                        }
                    }

                    for (int i_7 = 0; i_7 < 19;i_7 += 1)
                    {
                        var_25 ^= (((((!(arr_7 [i_7]))) ? (61557 > var_17) : (((!(arr_7 [i_7])))))) + var_9);
                        var_26 = ((((var_9 ? ((var_9 ? 217 : var_17)) : (arr_14 [i_2 - 2] [i_2] [i_2] [i_2 - 4]))) << (arr_6 [i_2 - 3])));
                    }
                }
            }
        }
    }
    var_27 = (((((((var_3 ? var_5 : 867593308039631860)) >= var_11))) << ((var_0 << (var_11 >= var_5)))));
    /* LoopNest 2 */
    for (int i_8 = 2; i_8 < 21;i_8 += 1)
    {
        for (int i_9 = 0; i_9 < 22;i_9 += 1)
        {
            {
                var_28 = (arr_22 [i_9]);
                var_29 -= (max(805306368, (max((arr_23 [4]), (arr_23 [16])))));
                var_30 = ((((!(arr_25 [i_8 - 1] [i_8 - 2])))) != (((arr_25 [i_8 - 2] [i_8 - 1]) ? (arr_25 [i_8 - 1] [i_8 - 2]) : var_11)));
            }
        }
    }
    /* LoopNest 2 */
    for (int i_10 = 0; i_10 < 15;i_10 += 1)
    {
        for (int i_11 = 0; i_11 < 15;i_11 += 1)
        {
            {
                arr_32 [i_11] [i_10] [i_10] = ((var_16 ? ((((((arr_16 [i_11] [9] [i_11] [1] [i_10] [2]) / -31823)) >> (arr_13 [i_10] [i_10] [i_10] [i_10])))) : (max((((arr_3 [i_10] [i_11] [i_11]) ? 1 : 117)), 1073741682))));
                /* LoopNest 2 */
                for (int i_12 = 0; i_12 < 1;i_12 += 1)
                {
                    for (int i_13 = 0; i_13 < 15;i_13 += 1)
                    {
                        {
                            arr_39 [i_11] [i_11] [i_11] [i_11] [i_11] [i_11] = (arr_18 [i_10] [i_11] [i_12]);
                            var_31 = (((((max((arr_0 [i_10]), 112)))) | (((((min(var_9, var_13))) || ((min((arr_25 [i_12] [i_11]), var_18))))))));
                            arr_40 [i_10] [i_10] [i_12] = 1915;
                            arr_41 [i_12] [i_12] = (max((arr_19 [i_10] [i_10] [i_11] [i_12] [i_11] [i_13]), (arr_19 [i_10] [i_11] [i_12] [i_12] [i_10] [i_13])));
                        }
                    }
                }
            }
        }
    }
    #pragma endscop
}
