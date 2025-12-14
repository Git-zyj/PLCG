/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 114318
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=114318 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/114318
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_16 = 1024;
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 18;i_0 += 1)
    {
        for (int i_1 = 1; i_1 < 16;i_1 += 1)
        {
            {
                var_17 = (arr_1 [i_0]);
                var_18 = ((((((arr_1 [i_0]) ? (min((arr_2 [5] [5]), 3317692692738061954)) : (~var_4)))) ? ((var_0 ^ (max((arr_1 [i_0]), var_12)))) : (1384208184244988509 * 17062535889464563106)));
            }
        }
    }
    var_19 = (max(var_19, var_0));
    #pragma endscop
}
