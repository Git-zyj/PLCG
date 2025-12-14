/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 123221
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=123221 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/123221
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 11;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 11;i_1 += 1)
        {
            {
                var_13 = ((((arr_4 [i_0] [i_1]) || (arr_3 [i_0] [i_0] [i_0]))));
                var_14 += var_9;
                /* LoopNest 3 */
                for (int i_2 = 0; i_2 < 11;i_2 += 1)
                {
                    for (int i_3 = 0; i_3 < 11;i_3 += 1)
                    {
                        for (int i_4 = 0; i_4 < 11;i_4 += 1)
                        {
                            {
                                var_15 = (arr_7 [i_2] [i_3]);
                                var_16 = ((((max((arr_11 [i_0] [i_1] [i_2] [i_2] [i_4]), var_0))) + (arr_12 [i_0] [i_0] [i_3])));
                                var_17 = (max(var_17, var_12));
                                var_18 = (max(var_18, (((((arr_12 [i_4] [i_3] [i_0]) / var_4))))));
                            }
                        }
                    }
                }
            }
        }
    }
    /* LoopNest 3 */
    for (int i_5 = 0; i_5 < 13;i_5 += 1)
    {
        for (int i_6 = 0; i_6 < 13;i_6 += 1)
        {
            for (int i_7 = 4; i_7 < 12;i_7 += 1)
            {
                {
                    arr_23 [i_5] [i_6] [i_7] [i_6] = var_2;
                    var_19 = ((-(arr_13 [i_7 - 1])));
                    var_20 *= ((38891 ? var_1 : var_6));
                    arr_24 [i_5] = var_4;
                }
            }
        }
    }
    /* LoopNest 2 */
    for (int i_8 = 1; i_8 < 23;i_8 += 1)
    {
        for (int i_9 = 0; i_9 < 24;i_9 += 1)
        {
            {
                var_21 = var_9;

                for (int i_10 = 3; i_10 < 23;i_10 += 1)
                {
                    var_22 = (max(var_22, (((-(((((4294967295 ? var_1 : var_0))) ? -var_5 : (-127 - 1))))))));
                    var_23 &= var_3;
                }
            }
        }
    }
    #pragma endscop
}
