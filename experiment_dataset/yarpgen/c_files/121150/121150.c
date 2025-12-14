/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 121150
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=121150 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/121150
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 1; i_0 < 13;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 16;i_1 += 1)
        {
            {
                arr_4 [i_1] = ((65525 ? ((max(43104, 22416))) : 127));
                arr_5 [8] [i_1] [8] = -1970327505899108686;
            }
        }
    }
    var_11 = var_9;
    #pragma endscop
}
