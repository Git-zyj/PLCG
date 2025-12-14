/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 188187
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=188187 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/188187
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_13 = max((((-(max(2147483647, 12288))))), (max((var_12 || var_3), (var_2 | var_0))));
    var_14 = (max(((var_4 & (~var_7))), -1213806654));
    var_15 = (var_11 - 1868934002);
    var_16 = (!448);
    /* LoopNest 3 */
    for (int i_0 = 0; i_0 < 19;i_0 += 1)
    {
        for (int i_1 = 1; i_1 < 17;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 19;i_2 += 1)
            {
                {
                    var_17 = 1498555650;
                    arr_8 [18] [i_1] [11] = (max((max((1498555650 / var_12), 3891583494)), (((-1498555628 / 1498555636) * (0 / 27)))));
                }
            }
        }
    }
    #pragma endscop
}
