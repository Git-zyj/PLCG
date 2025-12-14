/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 102334
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=102334 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/102334
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_12 = ((((((var_9 ? 15951 : var_8))) ? 1 : (19354 & var_4))));
    /* LoopNest 3 */
    for (int i_0 = 0; i_0 < 13;i_0 += 1)
    {
        for (int i_1 = 1; i_1 < 11;i_1 += 1)
        {
            for (int i_2 = 1; i_2 < 10;i_2 += 1)
            {
                {
                    var_13 &= (max((min(var_7, 64)), ((max((!109), (var_2 && 0))))));
                    var_14 = (min(var_14, (-127 - 1)));
                }
            }
        }
    }
    #pragma endscop
}
