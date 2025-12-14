/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 186650
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=186650 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/186650
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 1; i_0 < 1;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 1;i_1 += 1)
        {
            {
                var_15 = ((-((~(min(var_0, 4294967285))))));
                arr_4 [i_1] = ((~(((!(142 > 2))))));
                var_16 = -1121844686;
            }
        }
    }
    var_17 = -126381529;
    #pragma endscop
}
