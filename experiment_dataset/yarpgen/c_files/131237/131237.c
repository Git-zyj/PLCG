/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 131237
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=131237 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/131237
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 1;i_0 += 1)
    {
        for (int i_1 = 1; i_1 < 22;i_1 += 1)
        {
            {
                var_17 = ((var_3 ? (~var_4) : ((var_7 ? (arr_0 [i_1 - 1] [i_1 + 1]) : var_14))));
                arr_5 [4] [i_1] = arr_1 [i_1 - 1];
                var_18 = (max((~-5), (~722429413843415307)));
            }
        }
    }
    var_19 ^= ((-(var_7 + 5)));
    var_20 = var_15;
    var_21 = var_11;
    #pragma endscop
}
