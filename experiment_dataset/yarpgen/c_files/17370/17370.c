/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 17370
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=17370 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/17370
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 14;i_0 += 1)
    {
        for (int i_1 = 1; i_1 < 13;i_1 += 1)
        {
            {
                arr_5 [i_0] [i_1] [i_1] = 30558;
                /* LoopNest 3 */
                for (int i_2 = 0; i_2 < 14;i_2 += 1)
                {
                    for (int i_3 = 0; i_3 < 14;i_3 += 1)
                    {
                        for (int i_4 = 1; i_4 < 13;i_4 += 1)
                        {
                            {
                                var_14 = (arr_13 [i_0] [i_1 - 1] [i_2] [i_3] [i_4]);
                                var_15 ^= ((+(((arr_2 [i_0]) * (arr_2 [i_0])))));
                                var_16 = (min(var_16, (arr_3 [i_1] [i_1 + 1] [i_1])));
                                var_17 = (((min((-30557 + var_1), (min((arr_9 [i_0] [i_1] [i_1] [i_3] [i_4]), (arr_9 [9] [i_1] [i_2] [6] [i_4]))))) - ((30558 ? (max(16960675607271317433, (arr_6 [i_0] [i_3] [i_3]))) : 378860193))));
                            }
                        }
                    }
                }
            }
        }
    }
    var_18 = var_12;
    var_19 = 15143;
    #pragma endscop
}
