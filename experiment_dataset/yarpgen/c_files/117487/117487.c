/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 117487
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=117487 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/117487
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_15 = var_14;
    /* LoopNest 2 */
    for (int i_0 = 2; i_0 < 10;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 11;i_1 += 1)
        {
            {
                arr_6 [i_0] [i_0] [i_0] = (max(195, ((((-849337313 || 224) < (201326592 - 0))))));
                var_16 = (((min(4093640703, var_8))));
                var_17 = 12682;
            }
        }
    }
    var_18 = 1;
    #pragma endscop
}
