/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 121506
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=121506 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/121506
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_13 = (((((var_2 ? var_4 : var_12)) != (!var_0))));
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 22;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 22;i_1 += 1)
        {
            {
                var_14 = ((-8488791676844615252 ? -1617887573259552090 : var_6));
                arr_6 [i_0] [i_1] = ((-var_4 ? var_2 : (min(((var_0 ? -45 : -1617887573259552112)), (((var_0 ? var_8 : var_2)))))));
            }
        }
    }
    var_15 = (max(-var_5, (((1643157354 ? 86 : -1)))));
    #pragma endscop
}
