/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 117669
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=117669 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/117669
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 2; i_0 < 14;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 16;i_1 += 1)
        {
            {
                var_11 ^= var_0;
                arr_4 [i_0] [i_0] [i_1] = (((min(10156138758773712009, 1))) ? (max((max(var_5, var_1)), var_5)) : (((((max(var_6, var_6))) ? ((((arr_0 [13]) || var_8))) : var_2))));
                var_12 = var_9;
            }
        }
    }
    var_13 = (min(((min(((var_8 ? var_2 : var_4)), -var_5))), var_8));
    #pragma endscop
}
