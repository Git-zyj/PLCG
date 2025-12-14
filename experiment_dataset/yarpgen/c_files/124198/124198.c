/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 124198
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=124198 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/124198
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 12;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 12;i_1 += 1)
        {
            {
                var_13 = (max((max((arr_2 [i_0] [i_0] [i_0]), var_7)), (!2147483647)));
                var_14 ^= 0;
                var_15 ^= ((1073741823 / (((arr_3 [i_0]) ? var_4 : var_8))));
            }
        }
    }
    var_16 ^= (((var_2 ? var_11 : var_8)));
    var_17 = -2147483652;
    var_18 = var_6;
    #pragma endscop
}
