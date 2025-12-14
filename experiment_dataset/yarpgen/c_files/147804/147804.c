/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 147804
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=147804 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/147804
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 2; i_0 < 13;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 14;i_1 += 1)
        {
            {
                var_11 = (min(var_11, var_5));
                arr_6 [i_1] [i_1] = ((-19057 ? (((-127 - 1) ? 36 : 52417)) : 1732082503));
            }
        }
    }
    var_12 = (max(var_12, ((((((4 ? ((var_8 ? 3275038812632718715 : var_10)) : (((min(var_2, -21))))))) ? (((4 - 49240) ? 1073741823 : (((-26651 ? -1151047403563771351 : 16296))))) : var_5)))));
    var_13 = -2090869738;
    #pragma endscop
}
