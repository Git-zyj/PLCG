/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 141472
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=141472 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/141472
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_19 = var_18;
    var_20 &= ((((((1048575 ? 18446744073708503040 : var_8)))) ? (max(((var_14 ? 18446744073708503041 : var_9)), ((max(var_7, var_10))))) : (((((var_17 ? var_16 : var_3))) - (max(var_1, 18446744073708503040))))));
    /* LoopNest 2 */
    for (int i_0 = 2; i_0 < 17;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 19;i_1 += 1)
        {
            {
                var_21 = ((max((arr_1 [i_0 - 1] [i_0]), (arr_1 [i_0 - 1] [i_0 - 2]))) * ((((-1048575 < (1048597 == 2))))));
                var_22 = 10196120319235316989;
            }
        }
    }
    #pragma endscop
}
