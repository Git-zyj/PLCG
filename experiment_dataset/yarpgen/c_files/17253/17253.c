/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 17253
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=17253 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/17253
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_13 = ((-((var_1 ? 33796 : (var_3 ^ var_4)))));
    var_14 = (var_11 >= -91263272);
    /* LoopNest 2 */
    for (int i_0 = 1; i_0 < 21;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 1;i_1 += 1)
        {
            {
                var_15 ^= -var_1;
                var_16 = 541338251;
            }
        }
    }
    var_17 = (var_2 < 199);
    #pragma endscop
}
