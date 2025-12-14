/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 119265
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=119265 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/119265
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_11 = var_5;
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 1;i_0 += 1)
    {
        for (int i_1 = 2; i_1 < 19;i_1 += 1)
        {
            {
                var_12 = ((((((var_7 && (16383 && 110))))) * (!38)));
                var_13 = (((!1) ^ ((min(6849282436650783547, 45)))));
            }
        }
    }
    #pragma endscop
}
