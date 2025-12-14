/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 179098
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=179098 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/179098
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 3 */
    for (int i_0 = 0; i_0 < 17;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 17;i_1 += 1)
        {
            for (int i_2 = 1; i_2 < 14;i_2 += 1)
            {
                {
                    arr_7 [i_0] [i_2] [i_2] = ((((16 ? -0 : (((-31348 ? var_7 : 1))))) * (((max((max(var_11, -1)), var_2))))));
                    arr_8 [i_2] [i_2] = ((-(max(1152921504606846912, (var_9 / -23401)))));
                    arr_9 [9] [i_2] [i_2] [i_0] = 31350;
                }
            }
        }
    }
    var_14 = (min(var_14, 0));
    #pragma endscop
}
