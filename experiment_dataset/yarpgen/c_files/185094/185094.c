/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 185094
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=185094 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/185094
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_17 ^= var_15;
    var_18 = var_13;
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 14;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 14;i_1 += 1)
        {
            {
                var_19 &= ((var_14 / (arr_3 [i_1] [i_0])));
                arr_6 [i_1] = ((-(((arr_0 [i_0]) ? (arr_0 [i_1]) : 1362094828))));
                arr_7 [i_0] = var_7;
            }
        }
    }
    #pragma endscop
}
