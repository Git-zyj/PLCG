/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 164389
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=164389 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/164389
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_15 = (min(var_15, var_13));
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 1;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 12;i_1 += 1)
        {
            {
                var_16 += (max(((min((arr_0 [i_0] [i_1]), 583332846))), (min(var_10, 11))));
                var_17 += ((-(((8 ? 583332846 : (arr_2 [i_1] [i_0] [i_0]))))));
            }
        }
    }
    #pragma endscop
}
