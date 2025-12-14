/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 183941
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=183941 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/183941
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    /* vectorizable */
    for (int i_0 = 0; i_0 < 1;i_0 += 1)
    {
        /* LoopNest 3 */
        for (int i_1 = 0; i_1 < 20;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 20;i_2 += 1)
            {
                for (int i_3 = 0; i_3 < 20;i_3 += 1)
                {
                    {
                        arr_11 [i_0] [i_0] = (!112);
                        var_12 = ((27 ? var_10 : 27));
                        var_13 = ((var_8 ? (arr_7 [i_0] [i_0] [i_0] [i_3]) : 0));
                        arr_12 [i_2] [i_1] [i_1] [i_0] [i_1] = ((var_1 ? (arr_3 [i_0]) : var_11));
                    }
                }
            }
        }
        arr_13 [i_0] = (!var_11);
        arr_14 [i_0] = 15;
        var_14 = var_2;
    }
    /* LoopNest 3 */
    for (int i_4 = 0; i_4 < 13;i_4 += 1)
    {
        for (int i_5 = 0; i_5 < 13;i_5 += 1)
        {
            for (int i_6 = 0; i_6 < 13;i_6 += 1)
            {
                {
                    arr_22 [i_4] [i_4] [i_4] = var_1;
                    var_15 = var_4;
                    arr_23 [i_4] [i_4] [i_6] [i_4] = ((~(((((((arr_10 [i_4] [i_4] [i_4] [i_4]) ? (arr_15 [i_4]) : 0))) < (~14601942790953161499))))));
                    var_16 = 6767060064600814852;
                    /* LoopNest 2 */
                    for (int i_7 = 0; i_7 < 1;i_7 += 1)
                    {
                        for (int i_8 = 1; i_8 < 11;i_8 += 1)
                        {
                            {
                                arr_30 [i_6] [i_4] = ((-((var_11 ? (arr_28 [i_8 + 1] [i_8 + 1] [i_4] [i_8 - 1]) : 6767060064600814825))));
                                arr_31 [i_4] [i_4] [i_6] [i_4] [i_8 + 1] = (arr_18 [i_4] [i_5]);
                                arr_32 [i_4] [i_5] [i_4] [i_4] [i_8 + 1] = (min((6767060064600814825 - var_9), (((((137 ? -24302 : (arr_29 [i_4] [i_5] [i_6] [i_7] [i_8 - 1]))) != 13)))));
                                var_17 = -27;
                                var_18 = (((max((-32767 - 1), (-32765 & 1909839470153476280))) << (var_2 - 13780419100459139441)));
                            }
                        }
                    }
                }
            }
        }
    }
    var_19 = 219;
    /* LoopNest 2 */
    for (int i_9 = 2; i_9 < 19;i_9 += 1)
    {
        for (int i_10 = 1; i_10 < 20;i_10 += 1)
        {
            {
                arr_37 [i_10] [i_9 + 1] [i_10] = (arr_35 [i_9 + 1] [i_9 + 2]);
                arr_38 [i_10] = var_6;
            }
        }
    }
    #pragma endscop
}
