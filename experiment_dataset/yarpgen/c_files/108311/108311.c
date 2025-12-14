/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 108311
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=108311 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/108311
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
            for (int i_2 = 1; i_2 < 1;i_2 += 1)
            {
                {
                    arr_8 [i_1] [1] [i_0] = (arr_7 [i_0] [i_1] [i_2]);
                    var_17 = 31;
                    var_18 = -var_10;
                    arr_9 [i_1] [i_1] = -4;
                }
            }
        }
    }
    /* LoopNest 3 */
    for (int i_3 = 1; i_3 < 21;i_3 += 1)
    {
        for (int i_4 = 1; i_4 < 20;i_4 += 1)
        {
            for (int i_5 = 0; i_5 < 22;i_5 += 1)
            {
                {
                    /* LoopNest 2 */
                    for (int i_6 = 2; i_6 < 21;i_6 += 1)
                    {
                        for (int i_7 = 0; i_7 < 22;i_7 += 1)
                        {
                            {
                                arr_23 [i_3] [i_4] [i_5] [i_6] [i_3] [i_4] = (max(var_1, (~-9156819806959159324)));
                                var_19 *= 12689660922492235924;
                            }
                        }
                    }
                    var_20 = (max(var_20, ((max((!var_11), ((-((-(arr_18 [i_3] [16] [i_3] [i_3]))))))))));
                    /* LoopNest 2 */
                    for (int i_8 = 0; i_8 < 22;i_8 += 1)
                    {
                        for (int i_9 = 2; i_9 < 20;i_9 += 1)
                        {
                            {
                                var_21 &= (arr_13 [i_3] [4] [i_5]);
                                var_22 = (max(var_22, ((max(15950, 225)))));
                                arr_29 [i_3] [i_3] [i_3] [i_3] [i_3 + 1] [i_3] [i_3] = var_16;
                            }
                        }
                    }

                    for (int i_10 = 3; i_10 < 21;i_10 += 1)
                    {
                        arr_32 [i_3] [i_4] [i_3] [i_10] = (((arr_20 [i_10 - 3] [i_10] [i_10 - 2] [i_10 + 1] [i_10 - 3] [i_10 + 1]) != (arr_20 [i_3 - 1] [i_4 - 1] [i_5] [i_5] [1] [i_10])));
                        var_23 = ((1 ? 49599 : (max((var_3 | 225), 31))));
                        var_24 = (min(var_24, (((var_7 / (((arr_26 [i_3] [i_3 + 1]) / (arr_26 [i_3] [i_3 - 1]))))))));
                    }
                }
            }
        }
    }
    var_25 = var_4;
    /* LoopNest 2 */
    for (int i_11 = 3; i_11 < 12;i_11 += 1)
    {
        for (int i_12 = 0; i_12 < 14;i_12 += 1)
        {
            {
                arr_39 [i_11] [i_12] = ((((arr_6 [i_11 + 1] [i_11] [i_11 - 3]) ? (15956 - var_15) : (((~(arr_10 [i_11])))))));
                arr_40 [i_11] = (!var_16);
            }
        }
    }
    /* LoopNest 2 */
    for (int i_13 = 1; i_13 < 11;i_13 += 1)
    {
        for (int i_14 = 3; i_14 < 13;i_14 += 1)
        {
            {
                arr_45 [i_13] [i_13] [i_13] = (max((arr_17 [i_13] [i_13]), (((min(var_6, var_2))))));
                /* LoopNest 3 */
                for (int i_15 = 1; i_15 < 11;i_15 += 1)
                {
                    for (int i_16 = 3; i_16 < 11;i_16 += 1)
                    {
                        for (int i_17 = 1; i_17 < 13;i_17 += 1)
                        {
                            {
                                arr_53 [i_13] [i_13] [i_13] [i_13] [i_13] [i_13] = (arr_18 [i_14] [i_13] [i_16] [i_17]);
                                var_26 |= ((((((~31) || (arr_6 [i_14] [i_14] [i_14 + 1])))) <= ((-(arr_48 [i_13] [i_14] [i_16])))));
                            }
                        }
                    }
                }
                /* LoopNest 2 */
                for (int i_18 = 0; i_18 < 14;i_18 += 1)
                {
                    for (int i_19 = 0; i_19 < 14;i_19 += 1)
                    {
                        {
                            var_27 |= (arr_14 [i_18]);
                            arr_59 [i_13] [i_19] [i_18] = ((((max(var_1, 49560))) ? 7437096960435316271 : -45));
                            var_28 = (((7166207054849450344 ? ((var_4 | (arr_57 [i_18] [i_18] [1] [i_18])) : (arr_46 [i_13] [2])))));
                            arr_60 [i_13] [i_13 - 1] [i_13] [i_13] = 2228946431;
                        }
                    }
                }
                arr_61 [0] &= ((~(arr_14 [18])));
                /* LoopNest 2 */
                for (int i_20 = 1; i_20 < 11;i_20 += 1)
                {
                    for (int i_21 = 0; i_21 < 14;i_21 += 1)
                    {
                        {
                            arr_67 [i_13] [i_14] [i_20 + 1] [i_13] [i_21] = ((1490175573849568124 ? 45 : 5757083151217315692));
                            var_29 *= arr_18 [i_13 + 2] [18] [i_20] [i_14];
                            arr_68 [i_13] [i_14] [i_14] [i_14 - 1] [11] [i_13] = var_13;
                        }
                    }
                }
            }
        }
    }
    #pragma endscop
}
