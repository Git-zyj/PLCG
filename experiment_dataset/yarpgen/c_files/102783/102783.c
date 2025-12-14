/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 102783
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=102783 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/102783
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_17 = (max(var_17, var_8));
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 21;i_0 += 1)
    {
        for (int i_1 = 3; i_1 < 18;i_1 += 1)
        {
            {
                arr_5 [i_0] &= min(((~(2244980959 | 4053473688))), ((var_8 << (var_11 - 2114280996))));
                var_18 = 0;
            }
        }
    }
    #pragma endscop
}
