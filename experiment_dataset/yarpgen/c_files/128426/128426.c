/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 128426
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=128426 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/128426
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_17 = ((-(min(((min(var_5, 128))), -var_11))));
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 11;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 1;i_1 += 1)
        {
            {
                var_18 = -8821073967033051588;
                var_19 = (~326375518);
                var_20 = 8821073967033051613;
                var_21 = 8821073967033051575;
            }
        }
    }
    var_22 = (min(var_5, var_4));
    #pragma endscop
}
