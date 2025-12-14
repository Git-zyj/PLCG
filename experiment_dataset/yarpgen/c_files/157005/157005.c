/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 157005
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=157005 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/157005
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_14 = (-4334627396007413807 ? var_7 : (((var_12 ? ((var_10 ? 9 : 2100801902)) : 4334627396007413806))));
    /* LoopNest 3 */
    for (int i_0 = 0; i_0 < 17;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 1;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 1;i_2 += 1)
            {
                {
                    arr_8 [i_1] [8] [i_1] = var_8;
                    var_15 = 4334627396007413807;
                }
            }
        }
    }
    #pragma endscop
}
