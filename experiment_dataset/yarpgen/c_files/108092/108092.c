/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 108092
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=108092 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/108092
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_14 = (11 * -76);
    var_15 = (((((var_11 ^ (~var_12)))) ? var_12 : var_12));
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 1;i_0 += 1)
    {
        for (int i_1 = 2; i_1 < 22;i_1 += 1)
        {
            {
                arr_5 [i_0] [i_0] [i_0] = (arr_3 [i_1 - 1] [i_0]);
                /* LoopNest 2 */
                for (int i_2 = 0; i_2 < 24;i_2 += 1)
                {
                    for (int i_3 = 3; i_3 < 21;i_3 += 1)
                    {
                        {
                            arr_10 [i_0] [i_0] [i_0] [i_0] = ((~(arr_1 [i_0])));
                            arr_11 [i_0] [i_0] [i_0] [i_0] [i_0] = var_3;
                        }
                    }
                }

                for (int i_4 = 0; i_4 < 24;i_4 += 1)
                {
                    var_16 = var_0;
                    var_17 ^= ((var_3 == (((!(((var_11 ? var_1 : var_13))))))));
                    var_18 ^= ((var_12 ? (arr_13 [i_1]) : ((~(((arr_3 [i_0] [i_0]) - var_13))))));
                    /* LoopNest 2 */
                    for (int i_5 = 0; i_5 < 24;i_5 += 1)
                    {
                        for (int i_6 = 4; i_6 < 23;i_6 += 1)
                        {
                            {
                                var_19 |= (((((-677020053 ? 11 : 32))) < (((((((arr_6 [i_6]) || var_0)))) % var_0))));
                                arr_19 [i_0] [i_1 - 2] [i_4] [i_5] [i_0] [i_6 - 4] [i_0] &= ((var_8 >> (var_1 - 70)));
                                arr_20 [20] [19] [i_0] [i_5] [i_0] [i_1] [i_0] = var_2;
                                arr_21 [i_0] [i_0] [i_5] = ((var_0 ? (((!20) - (var_13 & var_11))) : (((-(((arr_7 [i_0]) ? (arr_7 [i_0]) : var_5)))))));
                            }
                        }
                    }
                    arr_22 [i_0] [i_0] = (!-var_13);
                }
                for (int i_7 = 2; i_7 < 23;i_7 += 1)
                {
                    arr_25 [i_0] [i_1] [i_1] [i_0] = ((((((((var_8 > (arr_4 [i_0])))) * (!var_4)))) ? (~var_7) : ((-(arr_9 [i_1 - 1] [i_7 - 1])))));
                    /* LoopNest 2 */
                    for (int i_8 = 0; i_8 < 24;i_8 += 1)
                    {
                        for (int i_9 = 0; i_9 < 24;i_9 += 1)
                        {
                            {
                                arr_33 [i_0] [i_0] [i_7 - 1] [i_9] = var_12;
                                var_20 = var_13;
                            }
                        }
                    }
                }
                for (int i_10 = 1; i_10 < 1;i_10 += 1)
                {
                    var_21 = var_5;
                    var_22 = ((((!(((var_12 + (arr_27 [i_10] [17] [i_0] [i_1 - 2] [i_0] [i_0]))))))));
                }
            }
        }
    }
    #pragma endscop
}
