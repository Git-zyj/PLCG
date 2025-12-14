/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 173221
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=173221 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/173221
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 3 */
    for (int i_0 = 0; i_0 < 25;i_0 += 1)
    {
        for (int i_1 = 1; i_1 < 23;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 25;i_2 += 1)
            {
                {
                    /* LoopNest 2 */
                    for (int i_3 = 0; i_3 < 25;i_3 += 1)
                    {
                        for (int i_4 = 0; i_4 < 25;i_4 += 1)
                        {
                            {
                                var_19 = (((arr_4 [i_1 + 1] [6] [i_1]) ? ((~(min(var_14, (arr_5 [i_3]))))) : ((((((-9055271899540427837 ? (arr_6 [19]) : (arr_15 [i_1] [i_3]))) != ((((arr_3 [6] [18]) ? (arr_12 [i_0] [i_4] [i_4]) : (arr_9 [i_1]))))))))));
                                arr_17 [i_1] [i_3] [i_2] [i_1] [8] [i_1] = ((((min(((min((arr_3 [i_0] [i_2]), (arr_1 [i_4])))), ((var_14 ? (arr_2 [i_1 - 1]) : var_9))))) ? var_16 : var_13));
                                arr_18 [i_0] [i_0] [7] [i_3] [i_1] = ((((((var_0 ? var_5 : var_7)) < (var_14 % 5787074162280224394)))));
                            }
                        }
                    }
                    var_20 += (max((!5787074162280224391), var_4));
                }
            }
        }
    }
    /* LoopNest 3 */
    for (int i_5 = 0; i_5 < 22;i_5 += 1)
    {
        for (int i_6 = 0; i_6 < 22;i_6 += 1)
        {
            for (int i_7 = 2; i_7 < 20;i_7 += 1)
            {
                {
                    var_21 += ((max((~var_13), (((arr_14 [i_7] [i_5] [i_5] [i_5]) % var_7)))));
                    /* LoopNest 2 */
                    for (int i_8 = 2; i_8 < 20;i_8 += 1)
                    {
                        for (int i_9 = 0; i_9 < 22;i_9 += 1)
                        {
                            {
                                var_22 = (((((0 & ((var_9 ? (arr_14 [i_5] [i_9] [8] [i_8 + 1]) : (arr_9 [i_5])))))) ? (-var_8 / -12659669911429327222) : (((+((var_14 ? (arr_0 [7]) : 9223372036854775807)))))));
                                var_23 ^= (((arr_21 [10]) ? (((arr_6 [9]) ? (arr_6 [i_7 - 2]) : (arr_6 [i_5]))) : (((var_16 / (arr_14 [i_8 - 2] [i_9] [0] [0]))))));
                                var_24 = (max(var_24, ((min((((var_11 ? 11022 : (63 % var_13)))), ((((max(12659669911429327224, (arr_29 [3] [i_9])))) ? 10624 : (((var_18 ? (arr_24 [i_5] [i_6] [i_7]) : 54913))))))))));
                                var_25 = var_18;
                                var_26 = ((~((~(arr_26 [1] [20] [i_9])))));
                            }
                        }
                    }
                    /* LoopNest 2 */
                    for (int i_10 = 0; i_10 < 22;i_10 += 1)
                    {
                        for (int i_11 = 0; i_11 < 22;i_11 += 1)
                        {
                            {
                                arr_35 [6] = ((((((arr_20 [4] [i_6]) - (arr_27 [i_5] [i_5] [15] [15] [i_11])))) | (var_3 || 42623)));
                                var_27 ^= ((var_5 ? ((((arr_19 [i_10] [i_6]) - var_16))) : 36));
                            }
                        }
                    }
                }
            }
        }
    }
    /* LoopNest 2 */
    for (int i_12 = 0; i_12 < 15;i_12 += 1)
    {
        for (int i_13 = 0; i_13 < 15;i_13 += 1)
        {
            {
                var_28 = var_4;
                /* LoopNest 2 */
                for (int i_14 = 0; i_14 < 15;i_14 += 1)
                {
                    for (int i_15 = 0; i_15 < 15;i_15 += 1)
                    {
                        {
                            arr_47 [i_12] [i_12] [i_14] [i_14] [i_13] [i_15] = (arr_22 [i_12] [i_12]);
                            var_29 |= (arr_45 [i_12] [i_12] [i_12] [i_14] [i_14] [1]);
                            var_30 = var_16;
                            arr_48 [i_13] = (arr_12 [i_12] [i_14] [i_15]);
                            var_31 = (min(var_31, (((~(arr_5 [i_13]))))));
                        }
                    }
                }
            }
        }
    }
    #pragma endscop
}
