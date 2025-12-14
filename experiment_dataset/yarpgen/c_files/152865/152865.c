/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 152865
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=152865 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/152865
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 10;i_0 += 1)
    {
        for (int i_1 = 1; i_1 < 8;i_1 += 1)
        {
            {
                /* LoopNest 2 */
                for (int i_2 = 0; i_2 < 10;i_2 += 1)
                {
                    for (int i_3 = 2; i_3 < 9;i_3 += 1)
                    {
                        {
                            var_17 = 2370784939;
                            var_18 = (max(var_18, var_5));
                        }
                    }
                }
                /* LoopNest 3 */
                for (int i_4 = 0; i_4 < 10;i_4 += 1)
                {
                    for (int i_5 = 3; i_5 < 9;i_5 += 1)
                    {
                        for (int i_6 = 0; i_6 < 10;i_6 += 1)
                        {
                            {
                                arr_17 [i_0] [i_5] [i_0] [i_0] [i_6] = (min(((max((arr_0 [i_1] [i_4]), (!1924182344)))), var_12));
                                arr_18 [i_0] [i_5] [i_0] [i_5] [i_5] = ((-(arr_0 [i_0] [i_0])));
                            }
                        }
                    }
                }
                /* LoopNest 3 */
                for (int i_7 = 0; i_7 < 1;i_7 += 1)
                {
                    for (int i_8 = 0; i_8 < 10;i_8 += 1)
                    {
                        for (int i_9 = 0; i_9 < 10;i_9 += 1)
                        {
                            {
                                var_19 += (var_5 / var_16);
                                var_20 = (arr_8 [i_0] [i_0] [i_0] [i_0]);
                                var_21 = (((((arr_10 [i_0] [i_0] [i_0] [i_1 + 2]) / (min((arr_10 [i_0] [i_0] [i_8] [i_8]), var_8))))) ? 1924182344 : (arr_1 [i_0]));
                            }
                        }
                    }
                }
                arr_28 [i_0] [i_0] = ((((min((arr_15 [i_0] [i_1 + 2] [i_0] [i_0] [i_0]), (arr_22 [i_1 + 2] [i_1 + 2] [i_1])))) ? (((arr_4 [i_0] [i_0] [i_0] [i_0]) * -4425)) : ((((arr_2 [i_0] [i_0]) ? (max(4423, var_16)) : ((-(arr_26 [i_0] [i_0] [i_0]))))))));
            }
        }
    }
    /* LoopNest 2 */
    for (int i_10 = 0; i_10 < 19;i_10 += 1)
    {
        for (int i_11 = 2; i_11 < 17;i_11 += 1)
        {
            {
                arr_34 [i_10] [i_11] [i_10] = ((((((max(-4427, var_4)) - var_6))) ? 127 : (arr_33 [i_10] [i_10] [i_10])));
                /* LoopNest 2 */
                for (int i_12 = 1; i_12 < 17;i_12 += 1)
                {
                    for (int i_13 = 0; i_13 < 19;i_13 += 1)
                    {
                        {
                            var_22 = (max(var_22, (var_14 - 1)));
                            arr_40 [i_10] [i_10] [i_10] [i_10] = var_13;
                            var_23 = (arr_38 [i_11] [i_12] [i_10]);
                            arr_41 [i_10] [i_11] = ((((((((arr_37 [i_12 - 1] [i_11 + 1] [i_12] [i_11 + 1] [i_13] [i_12]) + -118))) ? ((-113 ? (arr_32 [i_10] [i_12] [i_13]) : (arr_39 [i_11] [i_11] [i_10] [i_13] [i_11 - 2]))) : (((arr_38 [i_10] [i_10] [i_10]) / var_12)))) - 141));
                        }
                    }
                }
            }
        }
    }
    #pragma endscop
}
