/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 100481
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=100481 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/100481
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 15;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 15;i_1 += 1)
        {
            {
                arr_4 [i_1] [i_1] = var_12;
                var_13 = (((~var_2) ? (((((var_8 | (arr_0 [i_0])))) ? (!var_5) : (arr_2 [i_0] [i_1]))) : (~5616)));
                arr_5 [i_1] [i_1] [i_1] = ((-(arr_0 [12])));
                arr_6 [i_1] [i_1] [i_1] = (arr_2 [i_0] [i_1]);
            }
        }
    }
    /* LoopNest 2 */
    for (int i_2 = 0; i_2 < 14;i_2 += 1)
    {
        for (int i_3 = 0; i_3 < 1;i_3 += 1)
        {
            {
                /* LoopNest 2 */
                for (int i_4 = 0; i_4 < 14;i_4 += 1)
                {
                    for (int i_5 = 1; i_5 < 12;i_5 += 1)
                    {
                        {
                            arr_18 [i_2] [i_2] [i_2] [i_2] [11] [i_4] = arr_10 [i_5] [i_5];
                            arr_19 [i_2] [i_3] = (!var_1);
                            arr_20 [i_2] [i_3] [i_2] [10] = 1;
                        }
                    }
                }

                for (int i_6 = 2; i_6 < 13;i_6 += 1)
                {
                    var_14 = ((-((38322 ? 91 : 1))));
                    var_15 = (max((~1), var_2));
                    arr_23 [i_6] [i_2] = (!var_9);
                }
                var_16 = (min(var_16, ((max((arr_1 [8]), -var_9)))));

                /* vectorizable */
                for (int i_7 = 0; i_7 < 14;i_7 += 1)
                {
                    var_17 = ((-((~(arr_24 [i_2] [i_3] [i_3] [i_2])))));
                    arr_27 [i_2] [13] [i_2] = (((arr_26 [i_2] [i_2] [i_2]) && 24132));
                }
                /* vectorizable */
                for (int i_8 = 2; i_8 < 10;i_8 += 1)
                {

                    for (int i_9 = 1; i_9 < 13;i_9 += 1) /* same iter space */
                    {
                        arr_32 [1] [i_2] [10] [i_2] [0] = (((arr_15 [i_3] [i_8 - 2] [i_9] [i_2]) && (arr_15 [i_8] [i_8 + 1] [i_8] [i_2])));
                        var_18 = ((1 | (((arr_22 [i_2]) ? 660515454 : var_9))));
                    }
                    for (int i_10 = 1; i_10 < 13;i_10 += 1) /* same iter space */
                    {
                        arr_35 [i_2] [i_2] [i_2] [i_2] [i_2] [i_2] = (arr_17 [i_10] [i_2] [9] [i_2] [i_2]);
                        var_19 ^= (((arr_0 [i_8 + 3]) / var_7));
                    }
                    for (int i_11 = 1; i_11 < 13;i_11 += 1) /* same iter space */
                    {
                        var_20 = (max(var_20, (arr_29 [i_3])));
                        arr_38 [12] [i_8 + 4] [i_8] [0] |= (arr_28 [4] [i_3] [i_3] [12]);
                        arr_39 [i_11 - 1] [i_2] = (((arr_3 [i_8 + 2] [i_8 - 2]) | ((~(arr_11 [i_11] [i_3] [i_2])))));
                    }
                    /* LoopNest 2 */
                    for (int i_12 = 0; i_12 < 14;i_12 += 1)
                    {
                        for (int i_13 = 0; i_13 < 14;i_13 += 1)
                        {
                            {
                                arr_47 [i_2] [i_8] [i_8] [i_8] = var_4;
                                var_21 = 253;
                                var_22 = (((!var_11) && (arr_30 [i_8 + 2] [i_8 + 4] [i_8 - 1] [i_8])));
                            }
                        }
                    }
                }
            }
        }
    }
    #pragma endscop
}
