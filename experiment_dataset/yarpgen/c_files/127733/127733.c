/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 127733
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=127733 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/127733
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 3 */
    for (int i_0 = 0; i_0 < 15;i_0 += 1)
    {
        for (int i_1 = 1; i_1 < 1;i_1 += 1)
        {
            for (int i_2 = 2; i_2 < 13;i_2 += 1)
            {
                {
                    var_14 = (((arr_7 [1] [i_1 - 1] [0]) ? 26 : ((((100 ? 17412 : 1044480))))));
                    var_15 *= 7;
                    /* LoopNest 2 */
                    for (int i_3 = 0; i_3 < 15;i_3 += 1)
                    {
                        for (int i_4 = 0; i_4 < 15;i_4 += 1)
                        {
                            {
                                arr_14 [i_0] [5] [i_4] [i_3] [i_4] [i_4] = ((-((-((var_10 ? var_11 : 7556713447104536404))))));
                                arr_15 [i_2] [i_2] [i_2] [i_3] [i_2] [i_2] &= ((((var_1 ? (arr_6 [i_4] [i_2] [i_2]) : var_4)) - (((min(0, (arr_7 [i_4] [0] [4])))))));
                                var_16 = (((-445016174 / var_10) ? (min(1304882015, 7)) : 1304882013));
                                arr_16 [5] [5] [5] = var_13;
                            }
                        }
                    }
                }
            }
        }
    }
    var_17 ^= ((!(var_6 | var_10)));
    #pragma endscop
}
