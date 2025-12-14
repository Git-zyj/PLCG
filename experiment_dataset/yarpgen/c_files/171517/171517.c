/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 171517
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=171517 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/171517
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 13;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 0;i_1 += 1)
        {
            {
                arr_5 [i_0] [i_0] = (arr_0 [i_0]);
                /* LoopNest 2 */
                for (int i_2 = 0; i_2 < 13;i_2 += 1)
                {
                    for (int i_3 = 0; i_3 < 13;i_3 += 1)
                    {
                        {
                            var_16 ^= (((((-(arr_10 [i_1] [i_1] [i_1 + 1] [i_1] [i_1 + 1] [i_1 + 1])))) ? (arr_0 [i_0]) : var_9));
                            var_17 &= ((max((arr_8 [i_1 + 1] [i_1 + 1] [i_1 + 1] [i_1 + 1]), (max((arr_4 [i_0]), (arr_4 [i_0]))))));
                        }
                    }
                }
                /* LoopNest 2 */
                for (int i_4 = 0; i_4 < 13;i_4 += 1)
                {
                    for (int i_5 = 0; i_5 < 13;i_5 += 1)
                    {
                        {
                            var_18 = var_0;
                            var_19 = (((~(arr_4 [i_4]))));
                            var_20 = arr_6 [i_0] [0] [i_4];
                            var_21 |= (arr_4 [i_0]);
                        }
                    }
                }
                /* LoopNest 3 */
                for (int i_6 = 0; i_6 < 13;i_6 += 1)
                {
                    for (int i_7 = 0; i_7 < 13;i_7 += 1)
                    {
                        for (int i_8 = 0; i_8 < 13;i_8 += 1)
                        {
                            {
                                var_22 = (arr_12 [i_0]);
                                var_23 = (arr_14 [i_0] [i_1 + 1] [i_7] [i_7]);
                                arr_25 [i_7] [i_7] [i_6] [i_1] [i_0] = ((((max((arr_1 [i_1 + 1]), (arr_13 [i_0] [1] [i_0] [i_1 + 1])))) ? (arr_10 [i_1 + 1] [i_1 + 1] [i_1] [i_1 + 1] [i_1 + 1] [i_1 + 1]) : var_9));
                                var_24 = (max(var_24, ((max((arr_6 [i_1] [i_6] [i_1]), ((var_15 ? (min((arr_20 [i_8] [i_0] [i_6] [i_0] [i_0]), (arr_2 [i_7] [3]))) : -var_8)))))));
                                arr_26 [i_0] [i_1 + 1] [i_6] [1] [i_8] = ((((((arr_13 [i_0] [i_1 + 1] [i_6] [i_7]) ? (arr_20 [i_0] [i_0] [i_6] [i_0] [i_8]) : (min((arr_10 [i_0] [4] [i_6] [i_7] [0] [0]), var_13))))) ? (arr_0 [i_7]) : (arr_22 [i_0] [i_1] [i_6] [i_7] [i_8])));
                            }
                        }
                    }
                }
            }
        }
    }
    /* LoopNest 3 */
    for (int i_9 = 0; i_9 < 23;i_9 += 1)
    {
        for (int i_10 = 3; i_10 < 21;i_10 += 1)
        {
            for (int i_11 = 0; i_11 < 23;i_11 += 1)
            {
                {
                    /* LoopNest 2 */
                    for (int i_12 = 1; i_12 < 21;i_12 += 1)
                    {
                        for (int i_13 = 0; i_13 < 23;i_13 += 1)
                        {
                            {
                                var_25 = (min(var_25, (arr_33 [14] [0] [i_11] [i_13])));
                                arr_39 [i_9] [i_10 - 1] [i_10 - 1] [i_10] [2] = -32760;
                            }
                        }
                    }
                    var_26 = -32760;
                    arr_40 [i_9] [i_9] [i_10] [i_9] = (max(47061, 4778073445318101669));
                    var_27 = (((((((((arr_27 [4]) ? var_11 : (arr_28 [i_10])))) ? ((~(arr_34 [i_9] [i_9] [i_9] [i_10 + 2]))) : (arr_37 [14] [14] [14] [14] [9] [14])))) ? ((~(arr_29 [i_11]))) : ((-((var_7 ? (arr_30 [i_9] [i_9]) : 825352538))))));
                    var_28 += ((((min((arr_29 [i_9]), (arr_33 [i_9] [i_9] [i_9] [i_9])))) ? (~32759) : (~825352531)));
                }
            }
        }
    }
    var_29 = (((var_11 ? var_3 : var_3)));
    #pragma endscop
}
