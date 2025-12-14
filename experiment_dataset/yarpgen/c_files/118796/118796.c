/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 118796
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=118796 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/118796
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_14 *= (((var_8 | (((var_11 ? var_4 : var_13))))));
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 19;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 19;i_1 += 1)
        {
            {
                /* LoopNest 2 */
                for (int i_2 = 0; i_2 < 19;i_2 += 1)
                {
                    for (int i_3 = 2; i_3 < 16;i_3 += 1)
                    {
                        {
                            arr_8 [18] [i_2] [i_2] [i_2] [18] [i_1] = var_4;
                            var_15 = ((((((var_8 ? var_9 : var_11)) - var_4)) - (((var_3 + var_6) + (var_9 + var_3)))));
                            arr_9 [i_0] [i_0] [i_2] = (((((var_1 & var_7) >> (var_7 > var_6))) + (((var_12 ? var_2 : var_11)))));
                        }
                    }
                }
                var_16 = var_13;
            }
        }
    }
    #pragma endscop
}
