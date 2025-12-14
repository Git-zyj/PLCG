/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 168725
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=168725 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/168725
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 20;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 20;i_1 += 1)
        {
            {
                /* LoopNest 3 */
                for (int i_2 = 0; i_2 < 20;i_2 += 1)
                {
                    for (int i_3 = 0; i_3 < 20;i_3 += 1)
                    {
                        for (int i_4 = 0; i_4 < 20;i_4 += 1)
                        {
                            {
                                var_12 = (min(var_12, (((arr_3 [i_4]) + 4205332283))));
                                var_13 |= ((4294967295 ? (((((4294967284 << (((arr_4 [i_2] [i_2] [i_2]) - 4174570108))))))) : (((arr_3 [i_2]) * (arr_3 [i_4])))));
                                var_14 = 4;
                                var_15 += -4214181824167353895;
                                arr_14 [i_0] [i_0] [i_2] [11] [i_0] = arr_7 [i_0];
                            }
                        }
                    }
                }
                var_16 = (max(var_16, (arr_9 [i_1] [10] [i_0])));
                arr_15 [i_0] [i_1] = ((1851789057 + (arr_8 [i_0] [i_0] [i_0] [i_1])));
                var_17 = (min(var_17, (((arr_9 [i_1] [8] [i_0]) ? ((max((arr_1 [10] [i_1]), (arr_3 [16])))) : (arr_9 [18] [16] [i_1])))));
            }
        }
    }
    var_18 = var_6;
    #pragma endscop
}
