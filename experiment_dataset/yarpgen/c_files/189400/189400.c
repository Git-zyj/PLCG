/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 189400
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=189400 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/189400
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_17 = (min((max(var_12, (min(var_3, var_14)))), ((-(max(var_15, var_5))))));
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 16;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 16;i_1 += 1)
        {
            {
                var_18 = ((1113604142 ? ((min((arr_2 [i_1]), 52))) : (1314449431 / 122)));
                var_19 = (arr_1 [8]);
                var_20 = (max(var_20, ((min((arr_4 [9] [i_0] [4]), (arr_5 [i_0] [i_1]))))));
                arr_6 [i_0] [i_0] [i_0] = ((-((var_6 ? var_14 : var_16))));
            }
        }
    }
    var_21 = var_13;
    #pragma endscop
}
