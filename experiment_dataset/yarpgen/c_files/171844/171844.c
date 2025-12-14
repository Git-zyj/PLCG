/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 171844
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=171844 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/171844
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_15 = var_3;
    var_16 &= var_3;
    var_17 = var_11;
    /* LoopNest 3 */
    for (int i_0 = 1; i_0 < 22;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 23;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 23;i_2 += 1)
            {
                {
                    arr_7 [i_2] [i_0] [i_1] [i_2] &= var_11;
                    arr_8 [i_0 - 1] [16] [i_1] = (max(((min(var_8, var_14))), 70));
                    var_18 ^= var_8;
                }
            }
        }
    }
    var_19 = (min(var_13, var_10));
    #pragma endscop
}
