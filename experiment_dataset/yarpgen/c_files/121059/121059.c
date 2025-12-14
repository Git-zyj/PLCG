/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 121059
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=121059 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/121059
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 2; i_0 < 19;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 20;i_1 += 1)
        {
            {
                var_15 = (((!var_0) ? var_3 : (max(var_6, ((((arr_2 [i_1] [i_1]) ? (arr_2 [i_1] [i_1]) : (arr_2 [i_0] [i_1]))))))));
                var_16 -= ((-((-127 * (arr_4 [i_0 + 1] [i_0 + 1] [i_0 - 2])))));
            }
        }
    }
    var_17 = (max(var_17, var_1));
    #pragma endscop
}
