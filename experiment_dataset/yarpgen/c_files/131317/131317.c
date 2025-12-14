/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 131317
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=131317 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/131317
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_14 = var_0;
    /* LoopNest 2 */
    for (int i_0 = 1; i_0 < 1;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 17;i_1 += 1)
        {
            {
                var_15 = (max(var_15, ((((((~(arr_0 [i_0 - 1])))) ? (arr_0 [i_0 - 1]) : ((max((arr_0 [i_0 - 1]), (arr_0 [i_0 - 1])))))))));
                var_16 = max(var_10, (max(var_6, -var_0)));
                var_17 = ((1 ? (min(var_12, var_2)) : (~var_0)));
            }
        }
    }
    var_18 = ((var_11 ? ((var_0 ? ((min(var_3, var_10))) : -9135)) : var_11));
    #pragma endscop
}
