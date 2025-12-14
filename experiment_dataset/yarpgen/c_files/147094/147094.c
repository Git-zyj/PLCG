/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 147094
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=147094 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/147094
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_13 -= ((((var_1 ? var_3 : var_1))) ? ((min(var_1, var_6))) : ((var_2 ^ (min(var_4, 7)))));
    var_14 = (min(var_14, var_8));
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 20;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 20;i_1 += 1)
        {
            {
                arr_8 [i_1] = var_9;
                var_15 = (((-(arr_0 [i_0]))));
            }
        }
    }
    /* LoopNest 2 */
    for (int i_2 = 3; i_2 < 16;i_2 += 1)
    {
        for (int i_3 = 1; i_3 < 1;i_3 += 1)
        {
            {
                arr_14 [i_3] [i_3 - 1] [i_3] = var_3;
                /* LoopNest 2 */
                for (int i_4 = 0; i_4 < 19;i_4 += 1)
                {
                    for (int i_5 = 0; i_5 < 19;i_5 += 1)
                    {
                        {
                            var_16 = var_11;
                            var_17 = (min(var_17, var_12));
                            arr_21 [i_4] [i_3] [i_4] [i_5] = (~((~(((arr_13 [i_5] [i_5]) * 12)))));
                        }
                    }
                }
                var_18 = 249;
            }
        }
    }
    var_19 ^= ((~((~(~var_3)))));
    #pragma endscop
}
