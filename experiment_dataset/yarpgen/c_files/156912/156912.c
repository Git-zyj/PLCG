/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 156912
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=156912 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/156912
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_12 -= ((((min((((1769459325 ? var_11 : var_0))), ((var_1 ? var_2 : var_4))))) ? (!var_8) : (min(var_1, var_1))));
    var_13 |= -var_6;
    /* LoopNest 2 */
    for (int i_0 = 2; i_0 < 21;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 22;i_1 += 1)
        {
            {
                var_14 = ((-(min((arr_0 [i_0]), (arr_0 [i_0])))));
                var_15 = (arr_1 [i_1]);
                var_16 += ((((arr_4 [10]) & 4197831856433501307)));
                var_17 = (arr_3 [i_0] [i_0]);
            }
        }
    }
    #pragma endscop
}
