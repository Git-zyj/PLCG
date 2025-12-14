/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 107807
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=107807 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/107807
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 2; i_0 < 13;i_0 += 1)
    {
        for (int i_1 = 1; i_1 < 12;i_1 += 1)
        {
            {
                var_16 = (min(var_16, (((~(((!(arr_4 [i_1] [i_0 + 1] [i_0 + 1])))))))));
                var_17 = (max(var_17, (((-30997 ? 67 : 14)))));
            }
        }
    }
    var_18 = (((17119 || var_12) / (((((1 ? var_15 : var_1))) ? var_5 : (!var_14)))));
    var_19 = (min(((var_6 ? ((var_11 ? var_15 : var_4)) : var_1)), (!var_9)));
    var_20 = (((((~var_13) ? var_14 : (~-32759)))) ? var_6 : (((var_0 * var_5) ? ((max(var_4, var_12))) : (var_10 + var_9))));
    #pragma endscop
}
