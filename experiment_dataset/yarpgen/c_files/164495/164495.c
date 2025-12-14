/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 164495
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=164495 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/164495
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_18 = var_11;

    /* vectorizable */
    for (int i_0 = 1; i_0 < 19;i_0 += 1)
    {
        /* LoopNest 2 */
        for (int i_1 = 3; i_1 < 18;i_1 += 1)
        {
            for (int i_2 = 3; i_2 < 18;i_2 += 1)
            {
                {
                    arr_9 [i_0] [i_0 - 1] = var_11;
                    var_19 = (min(var_19, ((((arr_6 [i_1 - 2] [i_1] [i_0]) + 174)))));
                }
            }
        }
        arr_10 [i_0] = (!12956562331592590058);
        var_20 -= (~-9223372036854775807);
    }
    var_21 = (((((((23961 ? 5448828152634965581 : var_12)) >> (((1237699107 * var_11) - 39213062))))) ? (((-8895622350813706211 ? ((min(28430, var_1))) : var_6))) : ((((94 ? var_9 : var_14)) * var_9))));
    var_22 = (12956562331592590054 ^ 12956562331592590073);
    #pragma endscop
}
