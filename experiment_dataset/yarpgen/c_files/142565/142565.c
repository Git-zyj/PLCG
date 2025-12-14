/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 142565
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=142565 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/142565
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_14 &= ((var_13 ? -116 : var_11));
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 11;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 1;i_1 += 1)
        {
            {
                arr_4 [i_0] &= var_10;
                var_15 = var_3;
            }
        }
    }
    var_16 = var_4;
    #pragma endscop
}
