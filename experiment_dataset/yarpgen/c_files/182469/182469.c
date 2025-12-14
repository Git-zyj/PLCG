/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 182469
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=182469 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/182469
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_18 = (min(var_18, var_1));
    var_19 &= (!var_13);
    /* LoopNest 3 */
    for (int i_0 = 0; i_0 < 20;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 20;i_1 += 1)
        {
            for (int i_2 = 1; i_2 < 18;i_2 += 1)
            {
                {
                    var_20 = 1;
                    arr_8 [i_0] [i_1] [i_2] = ((9007199254740960 ? 6166863981034667138 : 127));
                    var_21 = (!9007199254740970);
                }
            }
        }
    }
    var_22 = (((-9223372036854775807 - 1) ? ((var_3 ? (min(9007199254740960, var_5)) : var_11)) : (((max((var_15 && var_4), (!var_12)))))));
    #pragma endscop
}
