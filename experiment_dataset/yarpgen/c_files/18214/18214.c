/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 18214
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=18214 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/18214
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_10 = var_3;
    var_11 *= ((var_9 ? (!var_3) : ((var_5 ? (139 || var_9) : ((var_9 ? var_7 : var_4))))));
    /* LoopNest 3 */
    for (int i_0 = 1; i_0 < 11;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 1;i_1 += 1)
        {
            for (int i_2 = 2; i_2 < 10;i_2 += 1)
            {
                {
                    var_12 = var_5;
                    var_13 = (arr_6 [i_1] [i_2]);
                    var_14 = (min(((((var_8 ? 114 : 103)) & var_6)), ((-((-(arr_1 [i_0] [i_0])))))));
                    var_15 = ((~((var_1 ? (!-192794538) : ((1 ? (arr_2 [i_0]) : var_5))))));
                }
            }
        }
    }
    /* LoopNest 2 */
    for (int i_3 = 1; i_3 < 14;i_3 += 1)
    {
        for (int i_4 = 2; i_4 < 14;i_4 += 1)
        {
            {
                var_16 = (arr_13 [i_3] [i_3 - 1] [i_4]);
                /* LoopNest 3 */
                for (int i_5 = 0; i_5 < 1;i_5 += 1)
                {
                    for (int i_6 = 0; i_6 < 15;i_6 += 1)
                    {
                        for (int i_7 = 0; i_7 < 15;i_7 += 1)
                        {
                            {
                                var_17 = var_8;
                                var_18 = (0 >= (arr_15 [i_4] [i_5] [i_6]));
                            }
                        }
                    }
                }
            }
        }
    }
    var_19 = var_9;
    #pragma endscop
}
