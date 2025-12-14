/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 154249
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=154249 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/154249
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_14 = var_9;
    /* LoopNest 2 */
    for (int i_0 = 2; i_0 < 19;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 21;i_1 += 1)
        {
            {
                /* LoopNest 3 */
                for (int i_2 = 0; i_2 < 21;i_2 += 1)
                {
                    for (int i_3 = 0; i_3 < 21;i_3 += 1)
                    {
                        for (int i_4 = 0; i_4 < 21;i_4 += 1)
                        {
                            {
                                var_15 = ((((min((arr_6 [i_2] [i_3] [i_4]), (var_11 <= var_4)))) ^ (arr_11 [i_0 + 2] [i_0] [i_0 + 2] [i_0 + 2] [i_3] [i_4] [5])));
                                arr_14 [i_0] [i_1] [i_2] [i_3] [0] = 12168;
                                var_16 = (min(var_4, (((~((((arr_11 [i_0] [i_0] [i_2] [i_2] [i_4] [i_4] [i_4]) > 31744))))))));
                                arr_15 [i_0] [10] [i_0] [i_1] [i_0] [i_0] [i_0] = arr_9 [i_0 - 1] [i_0];
                            }
                        }
                    }
                }
                var_17 = arr_13 [i_0] [1] [i_0] [i_0] [i_0];

                for (int i_5 = 0; i_5 < 21;i_5 += 1)
                {
                    /* LoopNest 2 */
                    for (int i_6 = 0; i_6 < 21;i_6 += 1)
                    {
                        for (int i_7 = 0; i_7 < 21;i_7 += 1)
                        {
                            {
                                arr_24 [i_0] [i_1] [7] [16] [i_7] = (arr_4 [i_0] [i_0]);
                                var_18 = (min((arr_10 [i_0] [i_1] [5] [i_6] [i_0]), (min((arr_9 [i_0] [i_0]), var_7))));
                                arr_25 [i_0] [i_0] [i_0] [i_0] [i_0] [i_0] [i_0] = ((!(arr_10 [i_0] [i_1] [i_0] [i_7] [i_7])));
                            }
                        }
                    }
                    var_19 = (((arr_21 [i_1] [i_1] [i_1]) ? (min(((var_6 ? var_7 : -31741)), var_5)) : ((((((min((arr_8 [i_0] [i_1]), (arr_18 [i_0] [i_1] [i_5] [i_0])))) + 2147483647)) >> (((arr_9 [i_0] [i_0]) - 14195))))));
                    var_20 = (max(var_20, (arr_16 [i_0] [i_5] [i_5])));
                }
                for (int i_8 = 0; i_8 < 21;i_8 += 1)
                {

                    for (int i_9 = 0; i_9 < 21;i_9 += 1)
                    {
                        arr_32 [i_0] [i_0] = ((((((arr_8 [i_0 - 1] [i_0 + 2]) | var_9))) & (~11322210780503742951)));
                        var_21 = (((~(-31744 ^ 31739))));
                    }
                    for (int i_10 = 0; i_10 < 21;i_10 += 1)
                    {
                        var_22 = ((((((~var_5) | ((min(var_8, 31751)))))) | ((var_6 ? ((~(arr_21 [i_0] [17] [i_10]))) : 19869))));
                        arr_37 [i_0] [i_0] [i_0] [i_1] [i_1] [i_0] = (min((((arr_23 [i_10] [i_1] [12] [i_0] [i_0 + 2] [1]) ? (arr_33 [i_0] [7] [i_0 - 1] [i_0]) : 486626477)), ((((var_3 ? -31771 : var_6))))));
                        var_23 = ((((min(-66, -20886))) ? (min(var_7, (((arr_29 [7] [i_1] [i_1] [i_0] [i_10]) - var_8)))) : var_5));
                    }
                    var_24 &= (((min(((var_5 ? (arr_7 [18] [18] [18] [8]) : var_1)), ((var_9 * (arr_11 [i_0] [6] [i_8] [6] [i_0] [20] [i_0]))))) * ((31742 / (arr_19 [i_0 - 2] [i_0 - 2] [i_0 + 1] [i_0 + 1])))));
                    var_25 = (max(var_25, (arr_30 [i_0] [i_1] [i_1] [i_8])));
                }
            }
        }
    }
    #pragma endscop
}
