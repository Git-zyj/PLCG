/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 147948
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=147948 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/147948
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_20 = 9339;
    var_21 = ((var_14 & (((((9339 ? 92 : 33486))) ? -var_14 : var_12))));
    /* LoopNest 2 */
    for (int i_0 = 3; i_0 < 12;i_0 += 1)
    {
        for (int i_1 = 2; i_1 < 12;i_1 += 1)
        {
            {
                arr_6 [i_0] [i_0] [i_0] = 583979941;
                arr_7 [i_0] [i_0] [i_0] = (arr_1 [i_0] [i_0]);
                arr_8 [0] [0] [i_0] = var_6;
            }
        }
    }
    #pragma endscop
}
