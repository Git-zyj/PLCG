/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 166656
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=166656 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/166656
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 1; i_0 < 15;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 17;i_1 += 1)
        {
            {
                /* LoopNest 2 */
                for (int i_2 = 0; i_2 < 17;i_2 += 1)
                {
                    for (int i_3 = 0; i_3 < 17;i_3 += 1)
                    {
                        {
                            var_16 = ((((((arr_9 [i_0 + 1] [i_1] [i_2] [6] [7]) ? ((var_5 ? var_8 : (arr_3 [i_1]))) : (-16384 || 16384)))) ? (arr_1 [8] [i_0]) : ((min(3344023730, 3344023743)))));
                            var_17 = ((((var_6 ? 7117704939484013561 : 57)) / (max(-16384, 13460322188317582622))));
                        }
                    }
                }
                var_18 = min(((min(((max((arr_8 [i_1] [i_1] [i_0] [i_0 + 2]), (arr_10 [i_0] [i_1])))), -16372))), (((arr_8 [5] [i_1] [i_0] [i_1]) ? (arr_8 [i_0] [i_0] [6] [i_1]) : (max((arr_7 [i_0 + 2] [i_0] [i_0]), 11329039134225538054)))));
                /* LoopNest 3 */
                for (int i_4 = 0; i_4 < 17;i_4 += 1)
                {
                    for (int i_5 = 0; i_5 < 17;i_5 += 1)
                    {
                        for (int i_6 = 0; i_6 < 17;i_6 += 1)
                        {
                            {
                                var_19 *= (((((((arr_5 [i_6]) ? (arr_7 [i_0] [i_1] [i_5]) : (arr_13 [i_0 + 2] [i_5]))) & (((var_2 * (arr_12 [i_5] [i_4] [i_5])))))) % (((var_1 ? (arr_15 [i_0] [2] [i_0 + 1] [i_0 + 2] [i_0 + 2]) : (arr_12 [i_5] [i_5] [16]))))));
                                arr_18 [i_0] [i_0] [i_0] [i_0] [i_1] [i_0] [i_0] = (arr_2 [i_4]);
                            }
                        }
                    }
                }
            }
        }
    }
    /* LoopNest 3 */
    for (int i_7 = 0; i_7 < 22;i_7 += 1)
    {
        for (int i_8 = 0; i_8 < 22;i_8 += 1)
        {
            for (int i_9 = 4; i_9 < 19;i_9 += 1)
            {
                {
                    arr_30 [i_7] [i_8] [i_9 - 3] |= var_2;
                    var_20 |= (arr_22 [i_7]);
                }
            }
        }
    }
    var_21 = var_10;
    var_22 = var_9;
    var_23 |= var_14;
    #pragma endscop
}
