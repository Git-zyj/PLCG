/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 146775
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=146775 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/146775
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 24;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 24;i_1 += 1)
        {
            {
                arr_6 [i_0] = (~var_1);
                var_15 = (~-26943);
            }
        }
    }
    var_16 = var_10;
    #pragma endscop
}
