/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 179242
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=179242 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/179242
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 13;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 13;i_1 += 1)
        {
            {
                var_18 += (max((arr_1 [i_0] [i_1]), -var_5));
                arr_5 [i_0] [i_0] [i_1] = 255;
            }
        }
    }

    /* vectorizable */
    for (int i_2 = 1; i_2 < 17;i_2 += 1)
    {
        var_19 = (max(var_19, (!var_3)));
        arr_10 [i_2 + 1] = (((var_7 * var_3) ? (arr_9 [i_2 + 1]) : 255));
        arr_11 [i_2] [i_2] = var_1;
        arr_12 [i_2] |= ((255 ? ((1 ? (arr_9 [i_2]) : var_7)) : var_1));
        arr_13 [i_2] = (-127 - 1);
    }
    for (int i_3 = 1; i_3 < 1;i_3 += 1)
    {
        var_20 |= ((arr_15 [i_3 - 1]) / ((-536870911 ? (arr_14 [i_3 - 1]) : ((var_15 ? var_5 : (arr_14 [i_3]))))));
        /* LoopNest 2 */
        for (int i_4 = 0; i_4 < 20;i_4 += 1)
        {
            for (int i_5 = 0; i_5 < 1;i_5 += 1)
            {
                {
                    /* LoopNest 2 */
                    for (int i_6 = 1; i_6 < 17;i_6 += 1)
                    {
                        for (int i_7 = 0; i_7 < 20;i_7 += 1)
                        {
                            {
                                arr_30 [i_3] [i_4] [i_5] [i_4] [i_7] |= ((min((arr_24 [i_3] [16] [i_3] [i_7]), (arr_19 [i_7] [i_4] [i_3]))) >= (~511));
                                arr_31 [i_5] = 127;
                                arr_32 [i_3] [2] [8] [i_4] [8] |= 0;
                                arr_33 [i_7] [i_6] [i_6] [i_5] [i_4] [2] [i_3] = var_16;
                            }
                        }
                    }
                    /* LoopNest 2 */
                    for (int i_8 = 0; i_8 < 20;i_8 += 1)
                    {
                        for (int i_9 = 0; i_9 < 20;i_9 += 1)
                        {
                            {
                                var_21 -= (max(511, -18446744073709551615));
                                arr_41 [i_8] |= ((~(max((arr_20 [i_8] [i_4] [i_4]), (~-127)))));
                                var_22 = (max((min((arr_35 [i_3 - 1]), 536870911)), (((arr_35 [i_3 - 1]) >> (((arr_35 [i_3 - 1]) - 8812736849639958414))))));
                            }
                        }
                    }
                }
            }
        }
        arr_42 [i_3 - 1] = (max(-16, ((-(arr_25 [i_3] [i_3] [i_3 - 1] [i_3 - 1])))));
        /* LoopNest 2 */
        for (int i_10 = 0; i_10 < 20;i_10 += 1)
        {
            for (int i_11 = 0; i_11 < 1;i_11 += 1)
            {
                {
                    var_23 = (max(var_23, (arr_45 [i_3] [i_10] [i_11])));
                    arr_49 [i_11] [i_10] [1] [i_10] = -16;

                    for (int i_12 = 2; i_12 < 19;i_12 += 1)
                    {
                        arr_54 [i_11] [i_11] [i_11] [i_11] = (arr_28 [i_11] [i_11]);
                        arr_55 [i_12] [i_11] [i_10] = (arr_51 [i_3] [i_3] [i_3] [i_11] [i_12]);
                        arr_56 [i_12] [i_11] [i_3 - 1] = (arr_39 [i_12] [i_10] [i_3]);
                    }
                    var_24 = (max(var_24, ((((min((max((-2147483647 - 1), 28672)), 2147483647)) | (-127 - 1))))));
                }
            }
        }
    }
    var_25 = (((((max(4611123068473966592, 127)) ? var_5 : (var_9 | var_15)))));
    var_26 = var_2;
    #pragma endscop
}
