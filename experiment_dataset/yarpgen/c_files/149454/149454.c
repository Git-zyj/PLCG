/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 149454
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=149454 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/149454
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_16 = (((((((min(var_6, 32764))) ? (~var_9) : (max(-5527420533314593247, 9808))))) ? (!1382466850) : (((~-32748) & var_15))));
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 1;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 19;i_1 += 1)
        {
            {
                var_17 = (((min(247006400, 0)) << (((~var_13) - 2449658148))));
                var_18 = (min(var_18, ((((min((arr_5 [i_1] [i_1]), ((65535 ? (arr_0 [1]) : 9)))) < var_3)))));
            }
        }
    }
    #pragma endscop
}
