/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 138290
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=138290 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/138290
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_14 = var_3;
    /* LoopNest 2 */
    for (int i_0 = 1; i_0 < 9;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 12;i_1 += 1)
        {
            {
                var_15 -= (arr_1 [i_0]);
                var_16 += var_3;
            }
        }
    }
    var_17 = var_4;
    var_18 = (((((min(var_11, var_3))) ? (var_2 || var_11) : var_9)));
    var_19 ^= var_11;
    #pragma endscop
}
