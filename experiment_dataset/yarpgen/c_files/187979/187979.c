/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 187979
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=187979 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/187979
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_19 = var_18;
    var_20 = var_3;
    var_21 |= var_12;
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 22;i_0 += 1)
    {
        for (int i_1 = 1; i_1 < 19;i_1 += 1)
        {
            {
                var_22 &= (min((arr_5 [i_0] [i_1 + 1] [i_0]), (((arr_1 [i_0]) / (((arr_2 [i_0]) / (arr_2 [i_0])))))));
                var_23 |= var_16;
            }
        }
    }
    var_24 = (min(var_24, (!var_5)));
    #pragma endscop
}
