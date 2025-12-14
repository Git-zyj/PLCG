/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 136093
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=136093 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/136093
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 2; i_0 < 9;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 10;i_1 += 1)
        {
            {
                arr_7 [i_0] = -116;
                arr_8 [i_0 - 1] [i_0] [4] = 42;
                arr_9 [i_0] = ((((-(min(3252070346, 32767)))) < 30));
            }
        }
    }
    var_15 = var_9;
    #pragma endscop
}
