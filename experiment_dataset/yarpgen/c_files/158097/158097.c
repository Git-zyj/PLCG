/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 158097
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=158097 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/158097
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_16 = var_13;
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 14;i_0 += 1)
    {
        for (int i_1 = 2; i_1 < 13;i_1 += 1)
        {
            {
                var_17 = (max(var_17, var_4));
                var_18 = ((!(930215779 - 26802)));
            }
        }
    }
    var_19 = var_11;
    var_20 = var_12;
    var_21 = (max(var_21, var_15));
    #pragma endscop
}
