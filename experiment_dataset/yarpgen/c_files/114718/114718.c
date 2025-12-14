/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 114718
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=114718 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/114718
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_14 = var_1;
    var_15 = var_0;
    /* LoopNest 3 */
    for (int i_0 = 0; i_0 < 15;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 1;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 15;i_2 += 1)
            {
                {
                    var_16 = (max((max(3983538880, -21524)), ((max(var_8, var_9)))));
                    arr_6 [i_0] [i_0] [i_1] [i_1] &= (min(((min(48, (-14 + 108)))), (min(11619077056892306691, 1))));
                }
            }
        }
    }
    #pragma endscop
}
