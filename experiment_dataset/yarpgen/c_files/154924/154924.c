/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 154924
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=154924 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/154924
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 15;i_0 += 1)
    {
        for (int i_1 = 4; i_1 < 12;i_1 += 1)
        {
            {
                var_10 = var_3;

                /* vectorizable */
                for (int i_2 = 2; i_2 < 11;i_2 += 1)
                {
                    var_11 = (((arr_3 [i_1 + 1] [i_2 - 1]) >> (var_5 - 4028)));
                    var_12 = 2077828625;
                    var_13 = var_7;
                    /* LoopNest 2 */
                    for (int i_3 = 0; i_3 < 1;i_3 += 1)
                    {
                        for (int i_4 = 0; i_4 < 15;i_4 += 1)
                        {
                            {
                                var_14 = ((-28 * (!1)));
                                arr_10 [i_0] [i_1 + 3] [i_2] [i_3] [i_4] = (((arr_5 [i_1 - 4]) ? ((4 ? 0 : 65488)) : (86 >> 28)));
                                var_15 -= 2052203487;
                            }
                        }
                    }
                }
                arr_11 [i_0] [i_1 - 2] [i_1] = ((var_7 & ((var_4 << (((arr_5 [i_1 - 1]) - 16431))))));

                for (int i_5 = 0; i_5 < 15;i_5 += 1)
                {
                    var_16 = ((-(arr_8 [i_5] [i_1 - 3])));

                    for (int i_6 = 0; i_6 < 15;i_6 += 1)
                    {
                        arr_18 [8] [i_1] [i_1 + 3] [i_1 + 1] [i_1 + 3] = (max((((arr_8 [i_5] [i_0]) * var_9)), var_2));
                        var_17 = (min(var_17, var_6));
                    }
                    /* vectorizable */
                    for (int i_7 = 0; i_7 < 15;i_7 += 1)
                    {
                        arr_22 [9] [12] [i_7] [i_7] = ((!(arr_16 [i_1 - 4] [i_1 - 2] [i_1 - 3] [i_5] [i_7])));

                        for (int i_8 = 3; i_8 < 14;i_8 += 1)
                        {
                            var_18 &= (arr_20 [i_7] [i_8 - 3] [i_5] [i_7] [i_5] [i_1 - 2]);
                            var_19 = ((65507 ? (arr_7 [i_8 - 2] [i_8 + 1]) : ((((arr_5 [i_0]) ? (arr_20 [i_5] [i_1] [i_7] [i_0] [i_7] [i_0]) : (arr_19 [i_5] [i_1] [i_5] [i_7]))))));
                            arr_25 [i_0] [i_0] [i_0] [i_0] [i_7] = (((var_9 / var_8) ? ((33 ? var_0 : (arr_24 [i_0] [i_1 + 3] [i_5] [i_1 - 4] [i_1 + 1] [i_8] [i_1]))) : var_5));
                            var_20 = var_4;
                        }
                        for (int i_9 = 0; i_9 < 15;i_9 += 1)
                        {
                            var_21 = 0;
                            arr_30 [i_0] [i_7] = var_8;
                            arr_31 [i_0] [i_7] [i_5] [i_7] [i_9] = (((27702 - 62571) ? 2965 : (-2147483647 - 1)));
                        }
                    }
                    for (int i_10 = 0; i_10 < 15;i_10 += 1)
                    {

                        /* vectorizable */
                        for (int i_11 = 0; i_11 < 15;i_11 += 1)
                        {
                            var_22 = (min(var_22, ((+(((arr_24 [i_0] [i_1 + 1] [i_1 + 2] [i_5] [i_10] [3] [9]) ? (arr_36 [i_0] [i_1 + 1] [i_5] [i_5] [i_10]) : (arr_14 [i_0] [8])))))));
                            var_23 = arr_2 [3] [3] [i_0];
                        }
                        arr_37 [i_0] [i_1 + 1] [i_1] [i_1] [i_5] [i_10] = (((arr_21 [i_0] [i_0] [i_0] [1]) ? ((((max(var_3, 1))) * var_2)) : (-1470290167 ^ var_9)));
                    }
                }
            }
        }
    }
    var_24 += var_6;

    for (int i_12 = 1; i_12 < 18;i_12 += 1)
    {
        arr_40 [i_12] [i_12 + 1] = var_2;
        var_25 = ((((!(arr_39 [i_12 - 1] [i_12]))) ? ((~(arr_38 [i_12 + 1]))) : var_5));
        var_26 = (((((max(var_8, (arr_38 [i_12 + 1])))) ? 254 : 51972)));
    }
    #pragma endscop
}
