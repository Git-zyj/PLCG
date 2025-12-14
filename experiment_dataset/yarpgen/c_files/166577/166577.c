/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 166577
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=166577 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/166577
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_15 = var_7;
    /* LoopNest 2 */
    for (int i_0 = 4; i_0 < 11;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 12;i_1 += 1)
        {
            {
                var_16 -= (((444456046 ? 3850511246 : 57)));
                var_17 = (min(((((((arr_5 [i_0] [i_0] [i_0]) | 75))) ? var_5 : (~-2561514928055519699))), var_9));
            }
        }
    }
    #pragma endscop
}
