/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 122222
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=122222 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/122222
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_10 = var_6;
    var_11 = (max(var_11, ((min(var_4, (min(5408760044884161139, 1240308597)))))));
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 17;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 17;i_1 += 1)
        {
            {
                /* LoopNest 2 */
                for (int i_2 = 0; i_2 < 17;i_2 += 1)
                {
                    for (int i_3 = 1; i_3 < 1;i_3 += 1)
                    {
                        {
                            var_12 = 25;
                            arr_11 [i_0] [i_0] [i_0] [i_0] [11] = (((min(1, var_8))));
                        }
                    }
                }

                /* vectorizable */
                for (int i_4 = 4; i_4 < 13;i_4 += 1)
                {

                    for (int i_5 = 0; i_5 < 17;i_5 += 1)
                    {
                        arr_17 [i_0] = ((29 ? 2121918994244208360 : (arr_2 [1] [1])));
                        var_13 = 1865391967;
                    }
                    var_14 = (((((-(arr_0 [15])))) ? 31 : ((var_1 ? var_4 : (arr_6 [i_0])))));
                }
                for (int i_6 = 3; i_6 < 15;i_6 += 1)
                {
                    var_15 = -var_3;
                    var_16 = -1542410525;
                }
                /* vectorizable */
                for (int i_7 = 2; i_7 < 16;i_7 += 1)
                {
                    /* LoopNest 2 */
                    for (int i_8 = 0; i_8 < 17;i_8 += 1)
                    {
                        for (int i_9 = 0; i_9 < 17;i_9 += 1)
                        {
                            {
                                var_17 *= (((arr_9 [i_0] [i_1] [i_7] [i_7 + 1] [i_8] [i_9]) / ((var_8 ? -1000595573601246194 : -1240308597))));
                                var_18 = (((arr_15 [0] [0] [13] [i_9] [i_9]) - (~137243033939503395)));
                            }
                        }
                    }
                    arr_26 [1] = (((arr_15 [i_7] [i_0] [i_0] [7] [i_0]) / (((arr_25 [i_0] [i_0] [i_0] [i_0] [i_7]) ? (arr_4 [i_7]) : var_5))));
                }
                /* LoopNest 2 */
                for (int i_10 = 0; i_10 < 17;i_10 += 1)
                {
                    for (int i_11 = 0; i_11 < 17;i_11 += 1)
                    {
                        {
                            var_19 = ((-(max(var_0, (arr_19 [i_11])))));
                            var_20 = (((((((~(arr_10 [i_0] [i_0] [i_0] [5]))) | (arr_2 [i_0] [i_10])))) ? var_5 : (!81)));
                            arr_33 [i_0] [i_0] [i_10] [i_11] |= ((!((!(arr_23 [i_1] [12] [i_1])))));
                            var_21 -= (arr_0 [1]);
                            arr_34 [i_10] [i_10] [i_10] [i_10] = (((-127 - 1) ? -47 : 29));
                        }
                    }
                }
                arr_35 [i_0] = (((max(12540209293413604746, (arr_16 [i_0] [2] [2] [i_1])))) ? (arr_24 [i_0] [i_1]) : ((~(arr_9 [i_0] [i_0] [i_1] [i_0] [i_0] [i_1]))));
            }
        }
    }
    var_22 *= var_7;
    #pragma endscop
}
