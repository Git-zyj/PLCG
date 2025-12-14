/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 10570
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=10570 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/10570
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_18 = (max(var_18, ((var_10 >= ((var_14 ^ (4294967294 | 0)))))));
    /* LoopNest 3 */
    for (int i_0 = 4; i_0 < 10;i_0 += 1)
    {
        for (int i_1 = 1; i_1 < 10;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 12;i_2 += 1)
            {
                {
                    arr_10 [4] [i_1] = var_17;
                    var_19 = (max(var_19, (((((var_9 >> (((min(var_12, var_13)) + 99868416)))) | (min((var_15 - var_9), ((2047 ? 4217318645 : 32229)))))))));
                }
            }
        }
    }
    #pragma endscop
}
