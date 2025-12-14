/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 183745
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=183745 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/183745
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 18;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 18;i_1 += 1)
        {
            {
                var_20 = max(1, 220);
                /* LoopNest 3 */
                for (int i_2 = 1; i_2 < 16;i_2 += 1)
                {
                    for (int i_3 = 0; i_3 < 18;i_3 += 1)
                    {
                        for (int i_4 = 0; i_4 < 18;i_4 += 1)
                        {
                            {
                                var_21 = (((~(arr_1 [i_0]))));
                                arr_15 [i_1] [i_1] [6] [6] [i_1] = 21056;
                                arr_16 [i_1] [i_1] = ((((((arr_9 [i_0] [i_0] [i_2] [2]) ? var_13 : (arr_0 [11])))) - ((112 << (arr_12 [i_4] [i_3] [i_1] [i_0])))));
                                var_22 &= ((~((max((arr_10 [i_0] [i_2] [i_2 + 2] [i_2 - 1] [i_4] [i_4]), var_0)))));
                                arr_17 [i_4] [i_1] [i_2] [i_1] [i_0] = (-(arr_3 [2]));
                            }
                        }
                    }
                }
                arr_18 [i_1] = (max((max(-20732, var_12)), 0));
            }
        }
    }
    var_23 -= ((var_4 & ((~((5453 ? 5453 : 29005))))));
    var_24 = var_19;
    var_25 = var_15;
    #pragma endscop
}
