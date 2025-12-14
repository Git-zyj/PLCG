/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 100351
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=100351 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/100351
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 2; i_0 < 12;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 14;i_1 += 1)
        {
            {
                arr_4 [i_0] [12] [i_0] = (((min(var_7, 150))) ? 150 : 150);
                arr_5 [i_0] [i_1] = var_9;
            }
        }
    }
    var_15 ^= var_6;
    var_16 = (max(0, 1));
    #pragma endscop
}
