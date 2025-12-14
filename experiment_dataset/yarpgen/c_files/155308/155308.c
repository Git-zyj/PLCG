/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 155308
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=155308 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/155308
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_18 = var_2;
    var_19 ^= var_17;
    var_20 = var_17;
    /* LoopNest 3 */
    for (int i_0 = 1; i_0 < 8;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 1;i_1 += 1)
        {
            for (int i_2 = 1; i_2 < 7;i_2 += 1)
            {
                {
                    var_21 = (((((arr_4 [i_0] [i_1] [i_2 + 2]) + 2147483647)) >> (var_13 - 28)));
                    arr_6 [i_0] [9] [i_1] [i_2] = var_9;
                }
            }
        }
    }
    #pragma endscop
}
