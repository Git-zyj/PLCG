/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 189303
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=189303 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/189303
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 3 */
    for (int i_0 = 0; i_0 < 1;i_0 += 1)
    {
        for (int i_1 = 1; i_1 < 9;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 10;i_2 += 1)
            {
                {
                    /* LoopNest 2 */
                    for (int i_3 = 2; i_3 < 8;i_3 += 1)
                    {
                        for (int i_4 = 0; i_4 < 10;i_4 += 1)
                        {
                            {
                                var_17 = ((((var_12 & (arr_12 [i_0] [i_0]))) / -1916385077));
                                var_18 = (((((-(arr_8 [i_1] [i_1 - 1] [i_1 + 1] [i_1])))) ? (max(var_13, (arr_9 [i_3] [i_3] [i_3 + 2] [i_3 - 1] [i_3]))) : ((((arr_1 [i_1 - 1] [i_1 - 1]) >> (127 - 101))))));
                            }
                        }
                    }

                    for (int i_5 = 0; i_5 < 10;i_5 += 1)
                    {
                        var_19 = (((~var_8) ? (2138127463365537777 / 46913) : (((var_0 >> (var_3 - 12807597839670123733))))));
                        var_20 = 253;
                        var_21 += ((((((arr_0 [i_1 + 1]) ? (arr_0 [i_1 - 1]) : var_8))) ? (max(((((arr_11 [i_0] [i_0] [i_0] [i_0] [i_0]) ? (arr_9 [i_0] [i_1] [i_2] [i_5] [i_5]) : (arr_2 [i_0])))), (max(3891573144, var_13)))) : (arr_4 [i_5] [i_5])));
                    }
                    /* vectorizable */
                    for (int i_6 = 2; i_6 < 9;i_6 += 1)
                    {
                        var_22 = (var_16 - 127);
                        var_23 += ((~var_14) - (arr_10 [i_6] [i_6 - 2] [i_1] [i_6]));
                        var_24 = var_11;
                    }
                    for (int i_7 = 0; i_7 < 10;i_7 += 1)
                    {
                        var_25 = (min((((((22584 / (arr_18 [i_0] [7] [i_1] [i_1] [i_7] [8])))) ? var_12 : var_2)), (((arr_11 [i_1 + 1] [i_1 + 1] [i_1] [i_1] [i_1]) ? (arr_18 [4] [i_1 + 1] [i_1] [i_2] [i_2] [i_7]) : -590880231))));
                        var_26 = ((~(((arr_17 [i_2] [i_1] [i_1] [i_0]) & (arr_17 [i_1] [i_1] [i_1] [i_1])))));
                    }
                    var_27 &= 403394152;
                    var_28 &= ((~(((var_6 > (arr_12 [i_0] [i_1 - 1]))))));
                }
            }
        }
    }
    var_29 = 1;
    var_30 = var_10;
    /* LoopNest 2 */
    for (int i_8 = 3; i_8 < 8;i_8 += 1)
    {
        for (int i_9 = 0; i_9 < 12;i_9 += 1)
        {
            {
                var_31 = (((((var_12 ? ((var_16 ? var_12 : 22584)) : var_5))) ? (((arr_24 [i_8 + 2] [i_8 + 1] [i_9]) ? (((var_11 && (arr_25 [i_8])))) : (arr_25 [i_9]))) : (((-2138127463365537777 || (arr_25 [8]))))));
                var_32 = ((-(((((-(arr_21 [i_9])))) ? ((((42951 != (arr_22 [i_8]))))) : var_8))));
            }
        }
    }
    #pragma endscop
}
