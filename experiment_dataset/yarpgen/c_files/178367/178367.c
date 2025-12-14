/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 178367
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=178367 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/178367
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_16 |= (min(var_6, (max(var_4, ((var_12 ? var_2 : var_9))))));
    /* LoopNest 2 */
    for (int i_0 = 1; i_0 < 12;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 14;i_1 += 1)
        {
            {
                /* LoopNest 2 */
                for (int i_2 = 3; i_2 < 13;i_2 += 1)
                {
                    for (int i_3 = 0; i_3 < 14;i_3 += 1)
                    {
                        {

                            /* vectorizable */
                            for (int i_4 = 0; i_4 < 14;i_4 += 1)
                            {
                                var_17 = ((var_15 ? (((arr_0 [i_0] [i_0]) ? var_8 : (arr_12 [i_0] [i_1] [i_1]))) : var_5));
                                arr_17 [i_0] [i_1] [i_0] [i_3] [5] = var_2;
                                var_18 *= 10645;
                                arr_18 [i_0] [i_0] = var_10;
                                var_19 = (arr_12 [i_3] [i_1] [i_1]);
                            }
                            var_20 = 154;
                            var_21 = var_3;
                            var_22 = (max((arr_11 [i_0 + 1] [i_0 - 1] [i_2 + 1] [i_2] [i_3]), (max((arr_8 [i_0 + 1] [i_0 + 2] [i_0 - 1]), -1150160571))));
                        }
                    }
                }
                var_23 = 524288;
            }
        }
    }
    #pragma endscop
}
