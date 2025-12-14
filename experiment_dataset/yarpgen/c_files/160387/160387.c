/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 160387
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=160387 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/160387
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 3; i_0 < 11;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 1;i_1 += 1)
        {
            {
                var_14 -= (min(((-1 ? (!45) : ((14048 & (arr_4 [i_1]))))), ((-(arr_2 [i_0 - 2])))));
                arr_5 [i_1] [i_1] = ((var_9 ? (((~var_4) ? 43053 : 32759)) : (max((~57344), -10))));
            }
        }
    }
    var_15 = ((var_2 ? (min((var_7 | var_1), (var_4 | var_4))) : (((var_4 < var_0) + 10))));
    var_16 = 1;
    #pragma endscop
}
