/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 123750
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=123750 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/123750
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_16 = (((!44701) ? var_11 : 7725777621194877490));
    /* LoopNest 2 */
    for (int i_0 = 4; i_0 < 12;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 13;i_1 += 1)
        {
            {
                var_17 = 4319;
                var_18 = (max((arr_1 [i_0 - 1]), (max((arr_1 [i_0 - 2]), (arr_1 [i_0 - 1])))));
            }
        }
    }
    var_19 = (var_14 | var_0);
    var_20 = var_14;
    #pragma endscop
}
