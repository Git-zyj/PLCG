/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 101993
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=101993 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/101993
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_10 ^= (~127);
    /* LoopNest 2 */
    for (int i_0 = 2; i_0 < 21;i_0 += 1)
    {
        for (int i_1 = 2; i_1 < 21;i_1 += 1)
        {
            {
                /* LoopNest 2 */
                for (int i_2 = 0; i_2 < 23;i_2 += 1)
                {
                    for (int i_3 = 0; i_3 < 23;i_3 += 1)
                    {
                        {
                            var_11 += (max(((min((~var_4), (arr_7 [16] [i_2] [i_3])))), (((!137) ? (arr_2 [i_0]) : 157))));
                            var_12 = (max(var_12, var_6));
                        }
                    }
                }
                arr_12 [i_0] [i_0] &= (arr_1 [i_0] [i_0]);
                var_13 |= (((-((var_0 ? var_8 : (arr_9 [i_0] [17] [i_0] [i_0]))))));
            }
        }
    }

    for (int i_4 = 0; i_4 < 25;i_4 += 1)
    {
        arr_15 [i_4] = (((arr_14 [15]) ? var_9 : (arr_13 [i_4])));
        var_14 = (((max(var_2, (((135 != (arr_13 [i_4])))))) & ((max(((131 ? (arr_14 [i_4]) : var_9)), (((var_2 && (arr_14 [i_4])))))))));
        var_15 = ((-(min(((136 * (arr_13 [i_4]))), (((arr_14 [i_4]) ? var_9 : (arr_14 [i_4])))))));
    }
    /* vectorizable */
    for (int i_5 = 3; i_5 < 11;i_5 += 1)
    {
        var_16 = (min(var_16, ((((arr_2 [i_5 - 1]) ? var_3 : (arr_2 [i_5 + 2]))))));
        arr_19 [8] = ((~(arr_14 [i_5 - 2])));
    }

    /* vectorizable */
    for (int i_6 = 0; i_6 < 21;i_6 += 1)
    {
        /* LoopNest 3 */
        for (int i_7 = 0; i_7 < 21;i_7 += 1)
        {
            for (int i_8 = 3; i_8 < 19;i_8 += 1)
            {
                for (int i_9 = 0; i_9 < 21;i_9 += 1)
                {
                    {
                        var_17 &= (arr_28 [4] [18] [i_8 - 2] [i_7] [i_8 + 1] [i_8 - 2]);

                        for (int i_10 = 1; i_10 < 18;i_10 += 1)
                        {
                            var_18 -= (((arr_1 [i_8 - 1] [i_10 + 3]) - (arr_1 [i_8 + 2] [i_10 + 2])));
                            var_19 = (max(var_19, ((((((arr_21 [1]) - var_5)) - (arr_5 [i_7]))))));
                        }
                        for (int i_11 = 1; i_11 < 19;i_11 += 1)
                        {
                            var_20 = (arr_29 [i_9] [i_7] [i_8] [i_9] [0]);
                            var_21 = (min(var_21, ((((arr_29 [i_7] [i_11 - 1] [i_8] [i_9] [18]) ? var_7 : (arr_4 [i_7]))))));
                        }
                        var_22 = (max(var_22, ((((arr_11 [12] [i_7] [i_9] [10] [i_8]) ? var_9 : (arr_0 [i_8 - 1] [1]))))));
                        var_23 = (min(var_23, ((((arr_3 [i_8 - 2] [i_8 + 2]) ? (arr_3 [i_8 - 2] [i_8 + 2]) : (arr_28 [i_8] [i_8 + 2] [i_7] [i_7] [i_8 + 1] [i_7]))))));
                        var_24 = (i_9 % 2 == 0) ? (((var_7 >= var_8) ? ((135 >> (((arr_11 [i_9] [i_9] [i_7] [i_9] [i_6]) - 1634470447)))) : (arr_28 [i_8 + 1] [i_8 - 1] [i_8 - 1] [i_9] [i_8] [0]))) : (((var_7 >= var_8) ? ((135 >> (((((arr_11 [i_9] [i_9] [i_7] [i_9] [i_6]) - 1634470447)) + 1166644204)))) : (arr_28 [i_8 + 1] [i_8 - 1] [i_8 - 1] [i_9] [i_8] [0])));
                    }
                }
            }
        }
        var_25 = ((!(arr_26 [i_6] [15] [i_6])));
    }
    for (int i_12 = 0; i_12 < 16;i_12 += 1)
    {
        arr_38 [3] |= ((~((((max((arr_21 [i_12]), var_7))) ? var_1 : ((-(arr_34 [20] [i_12] [i_12] [i_12] [i_12] [14])))))));
        /* LoopNest 3 */
        for (int i_13 = 0; i_13 < 0;i_13 += 1)
        {
            for (int i_14 = 0; i_14 < 16;i_14 += 1)
            {
                for (int i_15 = 0; i_15 < 16;i_15 += 1)
                {
                    {
                        var_26 = (min(var_26, ((((((((var_8 % var_4) < (((arr_28 [2] [i_14] [i_14] [i_15] [4] [i_15]) ? (arr_5 [i_15]) : var_5)))))) != ((((110 ? var_4 : var_1)) - ((((arr_8 [8] [10] [i_14] [i_15]) ? var_3 : (arr_8 [i_12] [i_13] [i_14] [i_15])))))))))));
                        var_27 = var_2;
                    }
                }
            }
        }
    }
    #pragma endscop
}
