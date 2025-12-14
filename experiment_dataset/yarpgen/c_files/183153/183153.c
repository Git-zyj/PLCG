/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 183153
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=183153 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/183153
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 16;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 16;i_1 += 1)
        {
            {
                var_12 = 2147483647;
                arr_5 [i_0] [i_1] [1] = var_8;
            }
        }
    }
    var_13 = var_10;
    #pragma endscop
}
