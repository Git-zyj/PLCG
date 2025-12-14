/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 130892
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=130892 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/130892
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_15 -= var_2;
    var_16 = (min(var_16, var_8));
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 12;i_0 += 1)
    {
        for (int i_1 = 3; i_1 < 11;i_1 += 1)
        {
            {

                /* vectorizable */
                for (int i_2 = 1; i_2 < 11;i_2 += 1)
                {
                    arr_7 [i_0] [i_0] [i_0] = arr_4 [i_0] [i_1] [i_1];
                    var_17 += var_7;
                    /* LoopNest 2 */
                    for (int i_3 = 0; i_3 < 12;i_3 += 1)
                    {
                        for (int i_4 = 0; i_4 < 12;i_4 += 1)
                        {
                            {
                                arr_16 [i_4] [i_4] = (((((-9201757746551593602 ? var_3 : var_7))) ? var_0 : (arr_5 [i_1] [i_3] [i_1] [i_0])));
                                arr_17 [0] [i_3] [i_3] [10] [0] [0] = (~18014123631575040);
                                var_18 = ((((var_1 ? (arr_9 [2] [i_0] [i_2 - 1] [i_3] [4] [i_2 - 1]) : var_8)) / -var_11));
                                arr_18 [i_0] [i_0] [i_0] [i_0] [i_0] = (((((-9223372036854775807 - 1) ? var_14 : var_11)) << (var_5 - 2057480733)));
                            }
                        }
                    }
                    /* LoopNest 2 */
                    for (int i_5 = 0; i_5 < 12;i_5 += 1)
                    {
                        for (int i_6 = 0; i_6 < 12;i_6 += 1)
                        {
                            {
                                arr_24 [i_0] [i_0] [5] = var_8;
                                var_19 ^= ((((var_14 ? var_9 : (arr_3 [i_0] [i_6]))) - (arr_8 [i_0] [i_1] [i_2] [i_5] [i_1])));
                            }
                        }
                    }

                    for (int i_7 = 0; i_7 < 12;i_7 += 1)
                    {
                        arr_28 [i_0] [i_0] [i_0] [i_0] [i_0] = var_5;

                        for (int i_8 = 1; i_8 < 10;i_8 += 1)
                        {
                            arr_31 [i_0] [i_8] [i_0] [2] = var_10;
                            var_20 -= var_13;
                        }
                        arr_32 [i_0] [i_1 + 1] [i_0] [i_1] [i_2] [i_7] = ((-(arr_2 [i_1] [i_1 + 1] [i_2 - 1])));
                    }
                    for (int i_9 = 1; i_9 < 10;i_9 += 1) /* same iter space */
                    {
                        var_21 = (~-1656942764);
                        var_22 += (((arr_21 [i_0] [i_1 - 1] [i_2] [i_2 - 1] [i_9 + 1]) / (arr_21 [i_0] [i_1 - 1] [i_2 - 1] [i_2 - 1] [i_9 + 2])));
                        arr_35 [i_1] [i_1] [i_2] [3] = (((((~(arr_13 [i_0] [i_0] [i_2] [i_2] [i_9] [i_9 + 2])))) && (arr_30 [i_0] [i_0] [2] [i_1 - 1] [i_9 - 1] [i_0])));
                    }
                    for (int i_10 = 1; i_10 < 10;i_10 += 1) /* same iter space */
                    {
                        arr_38 [i_0] [i_0] [8] [i_0] [i_0] [i_10] = var_2;
                        arr_39 [i_0] [i_10] = var_11;
                    }
                }
                var_23 = (138 ? ((var_0 ? 5 : (arr_10 [i_0] [i_1 - 3] [i_0] [i_1] [i_0] [i_1 - 1]))) : ((((arr_27 [i_1 + 1] [i_1 + 1]) && var_2))));
                /* LoopNest 2 */
                for (int i_11 = 0; i_11 < 12;i_11 += 1)
                {
                    for (int i_12 = 2; i_12 < 11;i_12 += 1)
                    {
                        {
                            var_24 += ((((max((max(var_10, var_7)), var_0))) ? (max(((-18014123631575040 ? 18014123631575039 : 6137139023328785586)), (arr_34 [1] [i_1] [i_1] [i_11] [i_12]))) : (arr_9 [2] [i_1] [i_12 - 1] [2] [i_11] [i_11])));
                            var_25 = var_5;
                            arr_44 [i_0] [i_1] [i_11] [i_12 - 2] [i_1] = (((((-(arr_19 [i_0] [i_0] [i_0])))) ? (((((arr_36 [i_12 - 2] [i_1]) > (arr_19 [i_1] [i_11] [i_12 - 1]))))) : (max(var_12, (arr_19 [i_0] [i_1 - 1] [i_11])))));
                        }
                    }
                }
                arr_45 [3] [i_0] = (-((~(((arr_5 [i_0] [i_0] [8] [8]) - var_8)))));
            }
        }
    }
    var_26 -= (((((-((var_4 ? var_9 : var_5))))) ? (max((~var_3), (!var_14))) : (((((max(-1, 12))) ? var_7 : ((min(var_4, var_14))))))));
    #pragma endscop
}
