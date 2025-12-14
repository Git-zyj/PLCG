/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 166027
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=166027 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/166027
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_16 = (max(var_16, ((3246416853 ? var_5 : (var_6 ^ var_5)))));
    var_17 -= ((var_12 ? var_6 : (3706873178259037381 % 97)));
    /* LoopNest 3 */
    for (int i_0 = 0; i_0 < 1;i_0 += 1)
    {
        for (int i_1 = 1; i_1 < 18;i_1 += 1)
        {
            for (int i_2 = 1; i_2 < 20;i_2 += 1)
            {
                {
                    var_18 *= var_10;
                    var_19 = (arr_5 [i_0] [i_0]);
                }
            }
        }
    }
    #pragma endscop
}
