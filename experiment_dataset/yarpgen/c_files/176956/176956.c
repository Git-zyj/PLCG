/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 176956
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=176956 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/176956
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 1; i_0 < 20;i_0 += 1)
    {
        for (int i_1 = 4; i_1 < 22;i_1 += 1)
        {
            {
                var_16 ^= ((-108 ? -7 : 194));
                var_17 = var_4;
                var_18 = ((min(((-1185354657 / (arr_1 [i_0] [i_1 + 1]))), ((var_9 / (arr_1 [i_0] [i_0]))))));
            }
        }
    }
    var_19 = (((((((var_11 ? var_15 : var_13))) ? (!1185354657) : var_13)) / (~62)));
    #pragma endscop
}
