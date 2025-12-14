/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 1316
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=1316 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/1316
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 18;i_0 += 1)
    {
        for (int i_1 = 3; i_1 < 16;i_1 += 1)
        {
            {
                /* LoopNest 2 */
                for (int i_2 = 0; i_2 < 18;i_2 += 1)
                {
                    for (int i_3 = 0; i_3 < 18;i_3 += 1)
                    {
                        {
                            var_19 *= 1;
                            var_20 = 48;
                            arr_10 [i_0] [11] [i_1] [i_2] [i_2] [11] = ((-((-2420130540391092435 ? ((var_11 ? var_11 : 13)) : (arr_7 [i_0] [i_1 - 3] [i_0])))));
                            var_21 = (((((-(arr_6 [7] [i_1 + 2] [i_1])))) ? (max(var_15, (arr_3 [i_1 - 1]))) : (((arr_3 [i_1 - 3]) + 536870911))));
                        }
                    }
                }
                var_22 = ((-((-((max(31839, (arr_5 [i_0]))))))));
            }
        }
    }
    /* LoopNest 3 */
    for (int i_4 = 1; i_4 < 19;i_4 += 1)
    {
        for (int i_5 = 0; i_5 < 21;i_5 += 1)
        {
            for (int i_6 = 0; i_6 < 21;i_6 += 1)
            {
                {
                    /* LoopNest 2 */
                    for (int i_7 = 0; i_7 < 21;i_7 += 1)
                    {
                        for (int i_8 = 1; i_8 < 18;i_8 += 1)
                        {
                            {
                                var_23 *= ((min(((4524967097043465176 ? var_14 : var_11)), (arr_16 [i_4] [i_4] [i_6]))));
                                var_24 = (arr_24 [i_4 + 2] [i_5] [i_5] [i_4] [i_5]);
                                arr_28 [i_4] [i_4] [i_4] [i_7] [1] = (((((~(arr_14 [i_7] [17])))) ? (arr_14 [i_8 + 3] [i_4 + 2]) : ((-(arr_14 [i_4 - 1] [i_5])))));
                            }
                        }
                    }
                    arr_29 [i_4] [i_4] = (((((((max(var_7, (arr_27 [i_5] [2] [i_5] [2] [i_5] [2] [i_4])))) ? -213 : ((-(arr_21 [i_4] [i_4] [i_4] [i_4] [i_4] [i_4])))))) ? ((((arr_25 [i_4 - 1] [i_5]) ? (arr_25 [i_4 - 1] [i_5]) : var_4))) : (max((arr_13 [i_4] [i_4 + 1]), ((var_1 ? var_9 : var_18))))));
                }
            }
        }
    }
    var_25 = (min(var_25, ((((((var_8 ? (((20 >> (var_2 - 84)))) : (281474976710655 ^ 33703)))) ? (~var_11) : (max(((var_11 ? 3964904662 : var_14)), ((var_15 ? var_7 : 32767)))))))));
    /* LoopNest 2 */
    for (int i_9 = 4; i_9 < 11;i_9 += 1)
    {
        for (int i_10 = 0; i_10 < 12;i_10 += 1)
        {
            {
                var_26 ^= (((!((min((arr_13 [i_9] [i_9]), 197))))) ? (min(((max(774314389, (arr_8 [i_9] [i_9] [i_9] [i_10] [3])))), 1865364588)) : ((((min(var_2, (arr_27 [1] [i_9 - 4] [i_10] [12] [6] [6] [20])))) ? (max(var_5, var_11)) : var_3)));
                /* LoopNest 2 */
                for (int i_11 = 0; i_11 < 12;i_11 += 1)
                {
                    for (int i_12 = 0; i_12 < 12;i_12 += 1)
                    {
                        {
                            arr_43 [i_10] = (arr_39 [i_9] [i_10] [i_9] [i_9]);
                            arr_44 [i_10] [i_10] = ((-(((arr_18 [i_9 - 1]) & (arr_18 [i_9 - 3])))));
                        }
                    }
                }
                arr_45 [i_10] = (max(((var_9 ? (~7822737642227206461) : (arr_40 [i_10] [i_9]))), 3353340315));
            }
        }
    }
    #pragma endscop
}
