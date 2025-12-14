/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 108533
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=108533 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/108533
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_19 *= (-9259 || 1);
    var_20 = ((var_15 >> ((var_7 ? ((max(var_14, var_8))) : ((var_16 ? var_16 : var_14))))));
    var_21 &= (max(var_5, (9259 + var_8)));
    var_22 = var_17;
    /* LoopNest 2 */
    for (int i_0 = 3; i_0 < 18;i_0 += 1)
    {
        for (int i_1 = 2; i_1 < 18;i_1 += 1)
        {
            {

                for (int i_2 = 0; i_2 < 1;i_2 += 1)
                {
                    var_23 = (min(var_23, (arr_2 [i_0 - 2] [i_1])));
                    var_24 = var_12;
                    var_25 &= (arr_4 [i_0 - 2] [i_1 + 1] [1]);

                    /* vectorizable */
                    for (int i_3 = 0; i_3 < 19;i_3 += 1)
                    {
                        var_26 = ((9276 ? -9259 : var_1));
                        arr_12 [i_0] [i_2] = var_13;
                        var_27 = (((arr_11 [i_0 + 1] [i_1 + 1] [i_2] [i_2]) | (arr_6 [i_0 - 1] [5] [5] [i_0])));
                    }
                    for (int i_4 = 0; i_4 < 1;i_4 += 1)
                    {
                        arr_17 [i_0] = (((arr_0 [i_0]) + (((arr_2 [i_1] [i_4]) - (arr_16 [i_1 - 2] [i_1 + 1] [i_0 - 3] [i_0 - 1] [i_0 - 1] [i_0 - 3])))));
                        var_28 = (min(var_28, var_14));
                    }
                }
                arr_18 [i_0] = (arr_1 [i_0]);
                /* LoopNest 3 */
                for (int i_5 = 0; i_5 < 1;i_5 += 1)
                {
                    for (int i_6 = 1; i_6 < 18;i_6 += 1)
                    {
                        for (int i_7 = 0; i_7 < 1;i_7 += 1)
                        {
                            {
                                arr_26 [i_7] [i_6] = var_18;
                                var_29 = (max(((((((arr_3 [i_5] [i_1 - 2]) ? (arr_15 [i_0] [16] [16] [i_0]) : 712747801239043430))) ? var_5 : (arr_19 [i_1] [i_1 - 1] [i_1 - 2]))), 23));
                            }
                        }
                    }
                }
            }
        }
    }
    #pragma endscop
}
