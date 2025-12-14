/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 142348
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=142348 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/142348
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_12 = var_2;
    var_13 = var_8;
    var_14 &= (((var_1 % var_0) ^ 0));
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 25;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 1;i_1 += 1)
        {
            {
                var_15 = (min(var_15, 6691835410820434048));
                var_16 -= (((arr_2 [i_0]) ? var_11 : 6691835410820434048));
            }
        }
    }
    var_17 = var_0;
    #pragma endscop
}
