/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 105546
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=105546 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/105546
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_18 = var_9;
    var_19 = var_16;
    /* LoopNest 2 */
    for (int i_0 = 2; i_0 < 12;i_0 += 1)
    {
        for (int i_1 = 3; i_1 < 11;i_1 += 1)
        {
            {
                var_20 = (min(var_20, ((0 >> (max(var_5, ((((-2147483647 - 1) || var_6)))))))));
                var_21 = (min(var_21, (((+((+(min((arr_0 [0]), 215)))))))));
                var_22 = 1;
            }
        }
    }
    #pragma endscop
}
