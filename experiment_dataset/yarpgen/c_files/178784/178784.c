/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 178784
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=178784 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/178784
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 20;i_0 += 1)
    {
        for (int i_1 = 1; i_1 < 17;i_1 += 1)
        {
            {
                var_19 *= -var_13;
                var_20 = ((!(((var_7 ? ((var_16 ? var_3 : var_7)) : (var_12 * var_13))))));
                var_21 &= (var_1 ? ((~(max(var_15, var_15)))) : ((((!var_3) ? var_5 : var_4))));
                arr_6 [16] |= (-(((~var_18) ? var_8 : -var_14)));
            }
        }
    }
    var_22 += var_5;
    #pragma endscop
}
