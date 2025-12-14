/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 121696
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=121696 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/121696
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_14 = (max(var_14, (((var_3 == (~-var_4))))));
    var_15 = var_12;
    /* LoopNest 2 */
    for (int i_0 = 4; i_0 < 12;i_0 += 1)
    {
        for (int i_1 = 2; i_1 < 13;i_1 += 1)
        {
            {
                var_16 ^= -var_10;
                arr_4 [i_1] [i_0] [i_0] = ((1 ? -var_5 : var_0));
            }
        }
    }
    var_17 = 2487959430165912851;
    var_18 = ((((((var_4 ? 32750 : var_4))) ? ((var_12 ? 22449 : 2487959430165912851)) : var_5)));
    #pragma endscop
}
