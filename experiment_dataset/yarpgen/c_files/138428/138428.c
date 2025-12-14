/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 138428
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=138428 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/138428
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_19 |= var_4;
    /* LoopNest 2 */
    for (int i_0 = 1; i_0 < 20;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 24;i_1 += 1)
        {
            {
                var_20 = max((((~(-32767 - 1)))), ((-19 ? 217 : 2857306721)));
                arr_7 [i_0] [i_1] = (((var_15 | (((min(var_12, -6)))))));
            }
        }
    }
    var_21 = (!var_2);
    #pragma endscop
}
