/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 134803
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=134803 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/134803
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_14 -= (min(var_7, (((((18446744073709551615 ? var_11 : 26)) >> ((((min(var_10, var_0))) + 17527)))))));
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 1;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 14;i_1 += 1)
        {
            {
                var_15 *= (-22557 != 22557);
                arr_5 [i_0] [2] [i_0] = (min((max(18446744073709551615, 253)), (~22557)));
            }
        }
    }
    var_16 &= var_11;
    var_17 &= ((var_2 <= (!var_3)));
    #pragma endscop
}
