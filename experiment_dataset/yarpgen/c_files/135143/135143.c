/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 135143
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=135143 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/135143
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_15 = var_9;
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 10;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 10;i_1 += 1)
        {
            {
                var_16 *= (((max(var_3, -21055)) + ((((12800 + var_11) - 2080911375)))));
                var_17 *= ((((min(-31642, (237 <= var_11)))) && (((194 ? (~5710) : (3456764750878081477 >> 1))))));
            }
        }
    }
    #pragma endscop
}
