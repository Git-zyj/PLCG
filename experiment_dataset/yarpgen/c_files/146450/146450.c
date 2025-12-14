/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 146450
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=146450 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/146450
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_13 &= var_4;
    var_14 &= (79 && var_8);
    /* LoopNest 3 */
    for (int i_0 = 0; i_0 < 14;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 14;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 1;i_2 += 1)
            {
                {
                    arr_9 [i_1] [i_1] [4] [i_1] = (~var_9);
                    arr_10 [5] [i_1] [i_1] [i_1] = (max((((29668 != 26687) + -9132808479691669043)), (((1 ? 9828 : 28471)))));
                    var_15 &= 55707;
                }
            }
        }
    }
    var_16 = max(var_10, (((var_10 - 64) ? var_8 : (~var_4))));
    #pragma endscop
}
