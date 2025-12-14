/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 106678
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=106678 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/106678
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_19 = var_14;
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 16;i_0 += 1)
    {
        for (int i_1 = 1; i_1 < 13;i_1 += 1)
        {
            {
                var_20 = ((((((-(arr_0 [i_0] [i_1 + 3]))) + 2147483647)) >> (-1226195674 + 1226195685)));
                var_21 ^= ((((var_0 % (arr_2 [i_0]))) >> (-232559710 + 232559741)));
                var_22 = 31;
            }
        }
    }
    #pragma endscop
}
