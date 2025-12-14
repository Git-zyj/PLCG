/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 114178
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=114178 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/114178
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_10 = var_6;
    var_11 |= var_2;
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 10;i_0 += 1)
    {
        for (int i_1 = 2; i_1 < 9;i_1 += 1)
        {
            {
                var_12 = 7015;
                var_13 = (10215633330057407163 == 18261);
                arr_4 [i_0] [i_1 + 1] [i_0] = var_5;
            }
        }
    }
    var_14 = var_3;
    #pragma endscop
}
