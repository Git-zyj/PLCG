/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 169940
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=169940 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/169940
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 3 */
    for (int i_0 = 0; i_0 < 15;i_0 += 1)
    {
        for (int i_1 = 1; i_1 < 13;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 15;i_2 += 1)
            {
                {
                    var_14 ^= ((0 ? (min(((var_9 ? (arr_2 [3]) : var_11)), (((arr_3 [i_0]) * (arr_4 [i_0] [i_2]))))) : ((min((arr_1 [i_1 + 1]), (arr_1 [i_1 + 1]))))));
                    arr_7 [2] [i_1] [i_1] = ((var_11 ? (((((var_11 ? (arr_2 [i_2]) : var_4)) - var_2))) : (((arr_0 [1] [i_1]) ? (1 - 1) : (15182179685711361650 + 108)))));
                }
            }
        }
    }
    /* LoopNest 2 */
    for (int i_3 = 1; i_3 < 13;i_3 += 1)
    {
        for (int i_4 = 4; i_4 < 13;i_4 += 1)
        {
            {
                /* LoopNest 2 */
                for (int i_5 = 0; i_5 < 15;i_5 += 1)
                {
                    for (int i_6 = 0; i_6 < 15;i_6 += 1)
                    {
                        {

                            /* vectorizable */
                            for (int i_7 = 0; i_7 < 15;i_7 += 1)
                            {
                                var_15 = (max(var_15, (((-22767 ? -2 : 1)))));
                                var_16 &= (((arr_15 [i_3 - 1] [i_4 - 4] [i_4]) < var_10));
                            }
                            /* vectorizable */
                            for (int i_8 = 0; i_8 < 15;i_8 += 1)
                            {
                                arr_24 [i_3] = (var_3 ? (arr_14 [i_3 - 1] [i_4 - 2] [i_5]) : (arr_14 [i_3 - 1] [i_4 - 2] [i_5]));
                                var_17 = ((1 ? 1 : (arr_1 [1])));
                            }
                            arr_25 [i_3] [i_3] [i_5] [i_6] [i_6] [i_6] = ((+(((arr_3 [i_3]) ? (arr_21 [i_3 - 1] [i_3 + 2] [i_4 - 1] [i_4 - 2] [i_6]) : var_9))));
                            var_18 = -21722;
                            var_19 -= var_3;
                        }
                    }
                }
                var_20 ^= (max((((((arr_8 [13] [i_4]) && 0)) ? (arr_14 [i_3 + 2] [i_3 - 1] [i_4]) : ((max(var_0, var_5))))), (((arr_20 [i_3 + 2] [i_4 - 2] [i_4] [i_4 + 1]) | 1))));
                var_21 += ((-((((arr_15 [i_3] [i_4] [i_4]) != 1)))));
                var_22 = (max(var_22, (((((((((var_11 ? (arr_5 [i_3] [9] [14] [13]) : (arr_0 [i_3] [i_3])))) ? (!1492193007) : 0))) ? 0 : (min((min(1, var_3)), 1492193024)))))));
                /* LoopNest 3 */
                for (int i_9 = 0; i_9 < 15;i_9 += 1)
                {
                    for (int i_10 = 0; i_10 < 15;i_10 += 1)
                    {
                        for (int i_11 = 0; i_11 < 1;i_11 += 1)
                        {
                            {
                                arr_36 [12] [i_4] [i_9] [i_3] = ((1492192998 ? (max((((arr_19 [i_3] [i_4 - 1] [i_3] [i_10] [i_4 - 4] [i_9]) / (arr_8 [i_4] [3]))), (arr_4 [i_3 + 2] [i_9]))) : ((((((((arr_19 [i_3 + 2] [i_4] [i_3] [i_9] [i_10] [i_11]) + 2147483647)) << (var_8 - 3610342784))) << (((arr_0 [i_3] [i_11]) - 206)))))));
                                arr_37 [i_3] [i_4] [i_3] [10] [i_10] [11] = (((~var_0) ? ((min(1492193039, (1492193014 * 0)))) : ((-(arr_22 [14] [i_4 - 1] [i_3 + 1] [4] [i_4 + 2])))));
                                arr_38 [i_3] [i_4] [i_9] [i_10] = (1 / -1492193039);
                            }
                        }
                    }
                }
            }
        }
    }

    for (int i_12 = 1; i_12 < 1;i_12 += 1)
    {
        var_23 = ((((((arr_40 [i_12]) ? ((min(var_13, (arr_39 [i_12])))) : (((!(arr_39 [i_12]))))))) ? var_4 : ((((1 || (arr_39 [i_12])))))));
        var_24 -= var_9;
        arr_42 [i_12] = (arr_39 [i_12]);
    }
    var_25 = (max(var_25, ((((min((max(var_2, var_3)), ((max(1, var_11)))))) ? ((((min(var_4, var_1))) ? (1 + var_9) : (min(var_7, var_5)))) : (((((~var_6) && (((var_13 ? var_7 : var_2)))))))))));
    var_26 = -1492193039;
    #pragma endscop
}
