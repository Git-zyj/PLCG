/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 15104
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=15104 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/15104
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_18 = var_2;
    var_19 = var_16;
    var_20 |= var_10;
    var_21 = (((-1 % 9223372036854775807) >= 0));
    /* LoopNest 3 */
    for (int i_0 = 0; i_0 < 14;i_0 += 1)
    {
        for (int i_1 = 1; i_1 < 11;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 14;i_2 += 1)
            {
                {
                    arr_9 [i_2] [i_2] [i_2] = -9223372036854775807;
                    arr_10 [i_2] [2] [i_2] = var_15;
                    var_22 = (((-2147483647 - 1) == -32753));
                    var_23 = 9223372036854775806;
                }
            }
        }
    }
    #pragma endscop
}
