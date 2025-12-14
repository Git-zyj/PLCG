/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 16792
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=16792 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/16792
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 3 */
    for (int i_0 = 0; i_0 < 20;i_0 += 1)
    {
        for (int i_1 = 4; i_1 < 19;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 20;i_2 += 1)
            {
                {
                    var_16 = (arr_0 [i_0]);
                    arr_7 [i_2] = (((-(arr_5 [i_1 - 4] [i_1 - 4] [i_1 - 1]))));
                    var_17 ^= ((-1 ? 35 : (33554431 < -111)));
                }
            }
        }
    }
    var_18 ^= (min(((var_15 ? var_7 : var_10)), ((var_12 ^ (((-6 + 2147483647) >> (96 - 73)))))));
    #pragma endscop
}
