/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 115868
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=115868 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/115868
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_10 = 0;
    /* LoopNest 2 */
    for (int i_0 = 1; i_0 < 17;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 18;i_1 += 1)
        {
            {
                var_11 = var_1;
                var_12 = (((-2091600899 ? 36350 : ((2147483637 ? -84030814 : 2790893437)))));
                var_13 = (arr_1 [i_0 - 1]);
            }
        }
    }
    #pragma endscop
}
