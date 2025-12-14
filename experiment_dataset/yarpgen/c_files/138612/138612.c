/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 138612
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=138612 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/138612
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_19 = var_10;
    var_20 = (max(var_16, (((7620533531757443321 < (~var_16))))));
    /* LoopNest 2 */
    for (int i_0 = 1; i_0 < 13;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 14;i_1 += 1)
        {
            {
                arr_5 [i_0] [i_0] = var_12;
                var_21 = 55313;
            }
        }
    }
    #pragma endscop
}
