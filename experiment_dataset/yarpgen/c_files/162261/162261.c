/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 162261
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=162261 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/162261
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 3 */
    for (int i_0 = 0; i_0 < 18;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 18;i_1 += 1)
        {
            for (int i_2 = 3; i_2 < 16;i_2 += 1)
            {
                {
                    var_15 ^= (max((min((min((arr_10 [i_0] [i_1] [i_0]), -9223372036854775788)), ((max(26014, (arr_3 [i_1] [i_1])))))), var_3));
                    var_16 ^= var_7;

                    for (int i_3 = 0; i_3 < 18;i_3 += 1)
                    {
                        var_17 = ((17632533675165540630 | (((max(-26038, -26038))))));
                        arr_15 [i_0] [i_0] [i_2] [i_0] = -10812;
                    }
                    /* vectorizable */
                    for (int i_4 = 0; i_4 < 18;i_4 += 1)
                    {
                        var_18 = ((!(arr_0 [i_0] [i_1])));
                        var_19 |= 17632533675165540652;
                        var_20 = ((-26014 ? -8110599078013202593 : (arr_14 [i_2] [0] [i_2] [i_4] [i_2 - 2] [8])));
                    }
                    for (int i_5 = 1; i_5 < 17;i_5 += 1)
                    {
                        var_21 = ((((max(var_7, (arr_18 [i_1] [i_1] [i_0] [i_5] [i_2] [i_5])))) * (72 / -9013894237750152609)));
                        arr_23 [i_0] [i_1] [i_1] [i_1] [i_1] [i_1] = 15589173297664403052;
                    }
                    /* vectorizable */
                    for (int i_6 = 4; i_6 < 16;i_6 += 1)
                    {
                        var_22 = var_13;
                        var_23 = ((3105683275475894159 ? ((var_9 ? (arr_9 [i_0] [i_1] [i_0] [i_6 + 2]) : 26043)) : (!var_12)));
                        var_24 = (arr_9 [i_6 + 2] [i_2 - 1] [14] [i_2 - 1]);
                        var_25 = (arr_7 [i_6 - 2] [i_1] [i_2 - 1]);
                        var_26 = -256;
                    }
                    var_27 = (!-524175752);
                }
            }
        }
    }
    var_28 |= (((((!((max(-7766554428845380160, -60)))))) < -22658));
    var_29 = (((((max(var_14, var_3)) + (var_12 - var_14))) & (((var_11 / (min(var_12, var_12)))))));
    var_30 = var_3;
    /* LoopNest 3 */
    for (int i_7 = 2; i_7 < 16;i_7 += 1)
    {
        for (int i_8 = 0; i_8 < 17;i_8 += 1)
        {
            for (int i_9 = 2; i_9 < 14;i_9 += 1)
            {
                {
                    var_31 = 17632533675165540628;
                    var_32 = ((((max(-1415560994, 120))) - 59));
                    /* LoopNest 2 */
                    for (int i_10 = 0; i_10 < 17;i_10 += 1)
                    {
                        for (int i_11 = 0; i_11 < 17;i_11 += 1)
                        {
                            {
                                var_33 ^= ((min(var_6, (arr_1 [i_8]))));
                                var_34 = var_5;
                                var_35 |= ((var_5 ? ((31 ? (arr_18 [i_7 - 1] [i_7] [i_8] [i_7 - 1] [i_7 - 1] [i_7]) : -29859)) : ((min((-127 - 1), 1572760830)))));
                            }
                        }
                    }
                    var_36 = ((((arr_22 [i_7] [16] [i_8] [i_9]) < 60)));
                }
            }
        }
    }
    #pragma endscop
}
