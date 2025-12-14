/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 134520
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=134520 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/134520
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 3 */
    for (int i_0 = 0; i_0 < 24;i_0 += 1)
    {
        for (int i_1 = 1; i_1 < 21;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 24;i_2 += 1)
            {
                {
                    arr_9 [i_0] = -10086;
                    var_19 = var_10;
                }
            }
        }
    }
    var_20 ^= var_12;
    var_21 = 7272993929089130597;
    #pragma endscop
}
