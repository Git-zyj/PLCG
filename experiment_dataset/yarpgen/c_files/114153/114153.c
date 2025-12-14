/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 114153
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=114153 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/114153
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_19 = var_6;
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 24;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 24;i_1 += 1)
        {
            {

                /* vectorizable */
                for (int i_2 = 1; i_2 < 22;i_2 += 1)
                {
                    var_20 = (min(var_20, var_4));
                    var_21 = 4294967295;
                    arr_9 [i_0] [i_0] [1] [i_1] = ((2622303986 ? (arr_0 [i_2 + 1]) : var_14));
                }
                /* vectorizable */
                for (int i_3 = 1; i_3 < 22;i_3 += 1)
                {
                    var_22 &= var_7;
                    arr_12 [i_1] [i_3 + 2] = ((((32746 ? var_11 : var_3))) - ((-34 ? var_13 : 1672663309)));
                }
                for (int i_4 = 1; i_4 < 22;i_4 += 1)
                {
                    var_23 = var_9;
                    var_24 = ((((min(109, var_12))) ? ((((!(arr_15 [i_0] [i_1] [i_4]))))) : (max(-1, (arr_16 [18] [i_4 - 1] [i_4 + 2] [18])))));
                    /* LoopNest 2 */
                    for (int i_5 = 0; i_5 < 24;i_5 += 1)
                    {
                        for (int i_6 = 0; i_6 < 24;i_6 += 1)
                        {
                            {
                                var_25 = (arr_10 [i_0] [i_1] [i_4 + 2]);
                                var_26 = (min(var_26, (((var_16 ? var_3 : (((arr_16 [i_0] [i_1] [i_6] [i_5]) ? (2622304001 % var_18) : ((((arr_3 [i_4]) ? var_3 : 254))))))))));
                            }
                        }
                    }
                    arr_21 [7] [i_1] [i_4] [4] = ((((-(arr_20 [i_0] [i_1] [i_1] [i_1] [i_4 + 1] [i_1])))) ? -1672663309 : 209);
                }

                /* vectorizable */
                for (int i_7 = 0; i_7 < 24;i_7 += 1)
                {
                    /* LoopNest 2 */
                    for (int i_8 = 0; i_8 < 24;i_8 += 1)
                    {
                        for (int i_9 = 0; i_9 < 24;i_9 += 1)
                        {
                            {
                                var_27 += ((-var_1 ? 2133043228 : -255));
                                var_28 = (max(var_28, 2622303975));
                            }
                        }
                    }
                    /* LoopNest 2 */
                    for (int i_10 = 0; i_10 < 24;i_10 += 1)
                    {
                        for (int i_11 = 3; i_11 < 22;i_11 += 1)
                        {
                            {
                                var_29 &= (arr_29 [i_10] [i_11 - 3] [i_11 + 1] [i_11 + 2]);
                                var_30 *= var_5;
                                var_31 = (max(var_31, ((((arr_15 [i_11] [i_0] [i_11 - 2]) ? (arr_4 [i_0]) : var_7)))));
                                var_32 = (arr_24 [i_7] [i_11] [i_11] [i_11 - 2] [i_11 + 2]);
                            }
                        }
                    }
                }
                var_33 = ((+(min((arr_35 [i_0] [i_1] [i_0] [i_0] [i_1] [i_0] [i_1]), ((max(1, var_1)))))));
            }
        }
    }
    #pragma endscop
}
