/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 167164
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=167164 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/167164
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 18;i_0 += 1)
    {
        for (int i_1 = 3; i_1 < 17;i_1 += 1)
        {
            {
                /* LoopNest 2 */
                for (int i_2 = 0; i_2 < 18;i_2 += 1)
                {
                    for (int i_3 = 0; i_3 < 18;i_3 += 1)
                    {
                        {
                            arr_8 [i_0] [i_1] [i_1] [i_3] = ((-(((arr_4 [i_0] [i_1 - 3]) ? (((15895169607207638701 ? 2 : 11388))) : var_15))));
                            var_20 = (min((((arr_0 [i_1 + 1]) ? (arr_0 [i_1 - 2]) : (arr_0 [i_1 - 2]))), (arr_0 [i_1 - 2])));
                        }
                    }
                }
                var_21 += ((~(((min(var_14, (arr_6 [i_0])))))));
                /* LoopNest 3 */
                for (int i_4 = 0; i_4 < 1;i_4 += 1)
                {
                    for (int i_5 = 0; i_5 < 18;i_5 += 1)
                    {
                        for (int i_6 = 0; i_6 < 18;i_6 += 1)
                        {
                            {
                                var_22 = 12681272342972864047;
                                var_23 = (~((-var_6 ? (((arr_6 [i_6]) ? (arr_0 [i_5]) : (arr_11 [i_1] [i_1] [i_4]))) : (arr_5 [i_0]))));
                                arr_16 [i_0] [i_0] [i_0] [i_4] [i_0] [i_6] &= (min(var_13, 2551574466501912914));
                            }
                        }
                    }
                }
                /* LoopNest 2 */
                for (int i_7 = 0; i_7 < 18;i_7 += 1)
                {
                    for (int i_8 = 1; i_8 < 16;i_8 += 1)
                    {
                        {
                            var_24 += ((-((((max(var_0, var_12))) ? (arr_13 [i_0] [i_0] [i_0] [i_8] [i_8 + 1]) : 37384))));
                            arr_23 [i_8] [i_1] [i_7] |= (arr_20 [12] [i_8 - 1] [i_7] [i_8] [i_8] [i_8]);
                        }
                    }
                }
            }
        }
    }
    /* LoopNest 2 */
    for (int i_9 = 0; i_9 < 14;i_9 += 1)
    {
        for (int i_10 = 0; i_10 < 14;i_10 += 1)
        {
            {
                var_25 &= var_12;
                var_26 = ((((~(arr_4 [i_9] [i_9]))) == 15895169607207638701));
            }
        }
    }
    /* LoopNest 2 */
    for (int i_11 = 1; i_11 < 19;i_11 += 1)
    {
        for (int i_12 = 1; i_12 < 20;i_12 += 1)
        {
            {
                /* LoopNest 3 */
                for (int i_13 = 2; i_13 < 21;i_13 += 1)
                {
                    for (int i_14 = 2; i_14 < 21;i_14 += 1)
                    {
                        for (int i_15 = 1; i_15 < 21;i_15 += 1)
                        {
                            {
                                arr_44 [i_11 + 3] [i_15] [i_15 - 1] [i_14] [i_15 - 1] [i_11 + 1] [1] &= 249;
                                arr_45 [i_11 + 2] [i_12] [i_14] [i_14] [10] [i_11 + 2] = (-(arr_31 [i_11 + 1] [i_12 + 1]));
                                var_27 = (~162);
                                var_28 &= (((max((arr_32 [i_14 - 2] [i_11 - 1]), (arr_41 [i_12 + 2] [i_13 - 1] [i_13 - 1] [i_13] [i_13 - 1])))) ? (arr_39 [i_11 - 1] [11] [i_15] [i_14 - 2] [i_15 - 1]) : ((-(arr_41 [i_12 - 1] [i_13] [i_13] [i_13] [i_13 - 2]))));
                            }
                        }
                    }
                }
                var_29 = (min(((-var_1 ? ((((-2147483647 - 1) / var_1))) : ((15310 ? (-127 - 1) : 2551574466501912914)))), (((+(((arr_35 [i_11 - 1] [i_11 - 1] [i_11 - 1]) ? var_7 : (arr_41 [i_11] [i_11] [i_11 + 2] [i_11] [i_12 + 2]))))))));
            }
        }
    }
    #pragma endscop
}
