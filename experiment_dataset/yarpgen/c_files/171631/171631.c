/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 171631
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=171631 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/171631
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 2; i_0 < 14;i_0 += 1)
    {
        for (int i_1 = 1; i_1 < 14;i_1 += 1)
        {
            {
                arr_4 [5] = (((arr_3 [i_0 - 2]) ? -1761560176 : ((~(arr_3 [i_0 - 1])))));
                arr_5 [i_0] = (((arr_3 [i_0]) <= ((((58 && 32) == (((arr_3 [i_0]) ? (arr_0 [1] [i_0]) : (arr_1 [i_0] [i_1 + 3]))))))));
                var_10 = ((+(max((arr_1 [i_0 + 2] [i_0 + 1]), (min(var_2, (arr_1 [i_1] [i_0 - 1])))))));
                var_11 = (((min(((var_9 ? 83 : var_6)), 0)) ^ 10084));
                /* LoopNest 2 */
                for (int i_2 = 1; i_2 < 15;i_2 += 1)
                {
                    for (int i_3 = 0; i_3 < 17;i_3 += 1)
                    {
                        {
                            var_12 = min(2383402928, ((((arr_3 [i_0 + 1]) ^ ((var_8 ? (arr_6 [i_0] [i_0] [i_0] [i_0]) : var_8))))));
                            arr_10 [i_0] [i_1] [i_1] [i_3] = (arr_7 [i_3] [i_1] [i_2 + 2] [i_1]);
                            arr_11 [i_0] [i_0] [i_0] [i_0] [2] [i_0] = (max(5579895884765163749, var_5));
                            arr_12 [i_0] [i_1] [i_2] [i_2] [i_1] [i_0 - 2] |= ((!(((1 ? (arr_6 [i_0] [i_3] [i_1 + 3] [i_2 + 1]) : (arr_6 [0] [i_1] [i_1 + 3] [i_2 + 1]))))));
                            arr_13 [i_0] [i_1] [i_2] [i_3] [16] [16] = ((max((arr_7 [i_2 + 2] [i_1 - 1] [i_0] [i_0 + 1]), (arr_7 [i_2 + 1] [i_1 + 3] [i_0 - 1] [i_0 - 1]))));
                        }
                    }
                }
            }
        }
    }

    /* vectorizable */
    for (int i_4 = 0; i_4 < 24;i_4 += 1)
    {
        arr_16 [i_4] = ((arr_14 [i_4]) > (arr_15 [i_4]));
        /* LoopNest 3 */
        for (int i_5 = 2; i_5 < 22;i_5 += 1)
        {
            for (int i_6 = 0; i_6 < 24;i_6 += 1)
            {
                for (int i_7 = 0; i_7 < 24;i_7 += 1)
                {
                    {
                        arr_23 [i_4] [i_4] [19] [i_6] [i_7] = arr_17 [i_4] [i_5 + 2] [i_4];
                        arr_24 [i_4] [i_4] [i_6] [i_7] [i_6] [i_7] = var_4;
                    }
                }
            }
        }
    }

    for (int i_8 = 0; i_8 < 1;i_8 += 1)
    {

        /* vectorizable */
        for (int i_9 = 0; i_9 < 1;i_9 += 1)
        {
            var_13 = (((arr_26 [i_8]) < (((((arr_7 [i_8] [i_8] [i_8] [i_8]) != var_5))))));
            /* LoopNest 3 */
            for (int i_10 = 0; i_10 < 12;i_10 += 1)
            {
                for (int i_11 = 0; i_11 < 12;i_11 += 1)
                {
                    for (int i_12 = 0; i_12 < 12;i_12 += 1)
                    {
                        {
                            var_14 = (((!var_7) != (arr_29 [i_8] [i_8] [i_8] [i_8])));
                            arr_35 [i_8] [i_9] [i_8] [i_8] [i_11] |= (arr_1 [i_8] [i_11]);
                        }
                    }
                }
            }
            var_15 &= (((arr_14 [20]) >> (((arr_31 [i_9]) - 34))));
            /* LoopNest 2 */
            for (int i_13 = 0; i_13 < 1;i_13 += 1)
            {
                for (int i_14 = 0; i_14 < 12;i_14 += 1)
                {
                    {
                        var_16 += ((((var_4 ? var_8 : (arr_2 [i_9] [i_9]))) < (((59302 ? var_8 : 32736)))));
                        arr_40 [i_9] [1] [i_9] = var_7;
                        arr_41 [i_8] [i_9] [i_13] [i_13] = (((((arr_20 [i_14]) / (arr_31 [i_8]))) <= (23 <= 1)));
                        var_17 += ((!(arr_38 [i_8] [i_13] [i_14] [i_14] [i_8] [i_8])));
                    }
                }
            }
        }
        var_18 &= ((var_2 ? (max((arr_19 [i_8] [8] [i_8] [22]), (arr_6 [i_8] [i_8] [i_8] [i_8]))) : ((max((arr_31 [i_8]), (arr_31 [i_8]))))));
    }
    /* LoopNest 3 */
    for (int i_15 = 0; i_15 < 15;i_15 += 1)
    {
        for (int i_16 = 2; i_16 < 13;i_16 += 1)
        {
            for (int i_17 = 1; i_17 < 14;i_17 += 1)
            {
                {
                    arr_50 [i_17] [i_16] [i_16] [1] = ((((((((-2868325011665357892 | (arr_15 [i_15])))) ? var_0 : var_3))) ? 6611349705272716583 : 1));
                    arr_51 [i_15] [12] [1] |= ((((((var_5 || var_9) ? (max((arr_1 [i_15] [i_16]), 4075464668)) : ((18 ? 9 : var_0))))) | (min(((3 ? 10392691841474157834 : var_5)), ((-7257478637717915876 ? 188 : var_9))))));
                    /* LoopNest 2 */
                    for (int i_18 = 0; i_18 < 15;i_18 += 1)
                    {
                        for (int i_19 = 1; i_19 < 1;i_19 += 1)
                        {
                            {
                                arr_59 [i_15] [i_17] = (((arr_2 [i_17] [i_18]) ? ((31 & (-9223372036854775807 - 1))) : (arr_44 [i_15] [i_17 + 1])));
                                var_19 = ((+(max((arr_21 [i_15] [i_17] [i_15] [i_18] [i_19]), 1))));
                                var_20 *= ((max((((var_9 ? var_8 : (arr_45 [1] [i_16])))), (((arr_46 [i_18]) / 7110659152412225296)))) * (1994438077 / -1296074025));
                            }
                        }
                    }
                }
            }
        }
    }
    #pragma endscop
}
