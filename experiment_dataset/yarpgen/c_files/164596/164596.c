/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 164596
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=164596 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/164596
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 3 */
    for (int i_0 = 0; i_0 < 19;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 1;i_1 += 1)
        {
            for (int i_2 = 3; i_2 < 18;i_2 += 1)
            {
                {
                    var_17 &= (((((((arr_0 [i_2 - 2]) + 2147483647)) >> (((arr_4 [i_2 - 3] [i_2 - 1] [i_2 - 1]) - 3990964810)))) >= (min(var_5, (arr_0 [i_2 + 1])))));
                    var_18 -= -32;
                    arr_10 [i_0] [i_0] [i_0] [i_0] = (arr_8 [i_2 + 1] [i_1] [i_2 - 3] [i_2]);
                    arr_11 [i_0] [i_0] [i_0] = (min(((var_2 <= (arr_5 [i_0] [i_0] [i_0]))), (((~3710487115) == (arr_5 [i_0] [i_1] [i_1])))));
                    var_19 = (min(var_19, ((min(((((((max(1, (arr_6 [i_0] [i_0] [i_1] [i_2]))))) - (min(-51, (arr_4 [i_0] [i_0] [i_0])))))), (max(var_16, ((min((arr_7 [i_0] [i_1] [i_1]), var_2))))))))));
                }
            }
        }
    }
    /* LoopNest 2 */
    for (int i_3 = 0; i_3 < 12;i_3 += 1)
    {
        for (int i_4 = 3; i_4 < 11;i_4 += 1)
        {
            {
                /* LoopNest 2 */
                for (int i_5 = 3; i_5 < 10;i_5 += 1)
                {
                    for (int i_6 = 0; i_6 < 12;i_6 += 1)
                    {
                        {
                            var_20 = var_0;
                            arr_24 [i_3] [i_4] [i_4] [i_5] [i_3] [i_6] |= -88;
                        }
                    }
                }
                var_21 = (max(var_21, (arr_20 [i_4 - 2])));
                var_22 = var_7;
            }
        }
    }
    /* LoopNest 3 */
    for (int i_7 = 0; i_7 < 13;i_7 += 1)
    {
        for (int i_8 = 2; i_8 < 11;i_8 += 1)
        {
            for (int i_9 = 0; i_9 < 1;i_9 += 1)
            {
                {
                    arr_33 [i_7] [i_8] [i_9] [i_9] &= (max((arr_26 [i_8] [i_8 + 2]), ((~(arr_26 [i_8 + 2] [i_8 - 1])))));
                    var_23 = (max(var_23, ((min(((var_16 * (arr_26 [i_8 + 1] [i_8 - 2]))), ((max((arr_26 [i_8 + 2] [i_8 + 1]), 7586428504993503929))))))));
                    /* LoopNest 2 */
                    for (int i_10 = 0; i_10 < 13;i_10 += 1)
                    {
                        for (int i_11 = 4; i_11 < 12;i_11 += 1)
                        {
                            {
                                arr_41 [i_7] [i_7] [i_8 - 1] [i_9] [i_10] [i_9] = (arr_36 [i_8 - 2] [i_9] [i_8 - 2] [i_8]);
                                arr_42 [i_9] [i_8 + 2] [i_8 - 2] [i_8] [i_8 + 1] [i_8 - 1] = var_15;
                                var_24 -= ((((var_7 << (((min((arr_7 [i_7] [i_7] [i_7]), var_8)) - 16041)))) & ((0 ? 16191 : 902527150))));
                            }
                        }
                    }
                    /* LoopNest 2 */
                    for (int i_12 = 0; i_12 < 13;i_12 += 1)
                    {
                        for (int i_13 = 0; i_13 < 13;i_13 += 1)
                        {
                            {
                                var_25 = (min(1, (arr_3 [i_12])));
                                arr_49 [i_7] [i_7] [i_7] [i_7] [i_9] = 4161901037;
                                var_26 -= (((max((max(4013403151, -1627161169527159768)), (~var_11))) >= (((max(233, var_10))))));
                            }
                        }
                    }
                }
            }
        }
    }
    #pragma endscop
}
