/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 123062
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=123062 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/123062
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 1; i_0 < 1;i_0 += 1)
    {
        for (int i_1 = 3; i_1 < 20;i_1 += 1)
        {
            {
                /* LoopNest 2 */
                for (int i_2 = 0; i_2 < 23;i_2 += 1)
                {
                    for (int i_3 = 1; i_3 < 19;i_3 += 1)
                    {
                        {
                            arr_12 [i_0] [i_3] [i_3] [i_3] = (((~((max(24, 53))))));
                            arr_13 [18] [i_0] [i_1 + 3] [i_2] &= ((-(max((arr_1 [i_0 - 1] [i_0 - 1]), 511))));
                            arr_14 [i_0] = var_5;
                            arr_15 [11] [i_0] [i_0] [i_3] = (min((max((arr_1 [i_1 - 2] [i_1]), 254)), var_8));

                            /* vectorizable */
                            for (int i_4 = 0; i_4 < 23;i_4 += 1)
                            {
                                arr_19 [17] [i_0] = (arr_16 [i_3] [i_3] [i_3] [i_0 - 1] [i_3] [i_3] [i_2]);
                                arr_20 [i_0 - 1] [i_0] [i_0] [i_0] = ((!((((arr_2 [i_0 - 1]) ? 3033 : (arr_4 [i_0] [11]))))));
                            }
                            for (int i_5 = 0; i_5 < 23;i_5 += 1)
                            {
                                var_12 *= (!298407099);
                                arr_24 [i_0] [i_1 + 3] [i_2] [i_3] [i_0] = -3504;
                            }
                        }
                    }
                }
                var_13 = ((-(((!(((-(arr_5 [i_0 - 1] [i_0 - 1])))))))));
                /* LoopNest 2 */
                for (int i_6 = 0; i_6 < 1;i_6 += 1)
                {
                    for (int i_7 = 0; i_7 < 23;i_7 += 1)
                    {
                        {
                            arr_29 [i_0] [16] [i_0] = var_4;
                            arr_30 [i_1] [i_6] [i_0] = (max(((~(max(-1177578362, 190)))), (max((~53), 42237))));
                            arr_31 [i_0] [i_6] [i_0] = ((~(max(127, (65 & var_9)))));
                        }
                    }
                }
            }
        }
    }
    var_14 += ((!(((max(var_9, var_4))))));
    #pragma endscop
}
