/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 129486
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=129486 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/129486
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_18 = (min(var_18, var_11));
    var_19 = var_12;
    var_20 = var_13;
    var_21 = var_17;
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 15;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 15;i_1 += 1)
        {
            {
                var_22 = 599;
                var_23 = 58483478;
                var_24 &= -6645059954488739888;
                var_25 = 142;
            }
        }
    }
    #pragma endscop
}
