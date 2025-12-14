/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 108236
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=108236 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/108236
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_10 = -9368;
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 23;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 0;i_1 += 1)
        {
            {
                var_11 = var_7;
                var_12 -= var_9;
                var_13 = var_8;
                var_14 = 36447;
            }
        }
    }

    for (int i_2 = 0; i_2 < 21;i_2 += 1)
    {
        var_15 = 1;
        var_16 += 11763;
        var_17 = var_5;
    }
    for (int i_3 = 4; i_3 < 14;i_3 += 1)
    {
        var_18 = 47444;
        var_19 |= var_7;
    }
    for (int i_4 = 0; i_4 < 19;i_4 += 1)
    {
        var_20 = 0;
        var_21 |= var_0;
        var_22 = var_5;
    }
    #pragma endscop
}
