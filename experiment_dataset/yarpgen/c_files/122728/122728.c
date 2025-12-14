/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 122728
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=122728 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/122728
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 21;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 21;i_1 += 1)
        {
            {
                var_17 = (max((8468861786426484878 || var_2), ((max(var_8, var_1)))));
                /* LoopNest 3 */
                for (int i_2 = 2; i_2 < 19;i_2 += 1)
                {
                    for (int i_3 = 0; i_3 < 21;i_3 += 1)
                    {
                        for (int i_4 = 0; i_4 < 21;i_4 += 1)
                        {
                            {
                                var_18 = (var_8 ? 8468861786426484883 : var_8);
                                arr_13 [i_0] [18] [i_2 + 1] [i_3] [i_4] = var_16;
                                arr_14 [i_0] [i_1] [i_2 + 2] = var_5;
                                var_19 ^= var_0;
                            }
                        }
                    }
                }
            }
        }
    }
    var_20 = (var_10 / var_6);
    #pragma endscop
}
