/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 12950
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=12950 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/12950
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_18 &= (((((var_1 ? ((90436517 ? 839184806 : -839184806)) : ((var_7 ? var_1 : var_11))))) & (((var_2 ^ var_6) ? ((var_2 ? var_7 : var_13)) : -var_4))));
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 25;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 25;i_1 += 1)
        {
            {
                var_19 ^= (((var_14 / var_3) ? ((var_4 ? var_6 : var_10)) : (((var_12 ? var_3 : var_3)))));
                var_20 = ((-((((max(var_9, var_9))) ? ((var_10 ? var_1 : var_17)) : ((var_11 ? var_11 : var_9))))));
            }
        }
    }
    #pragma endscop
}
