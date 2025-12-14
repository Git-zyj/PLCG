/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 15303
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=15303 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/15303
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_20 = var_9;
    var_21 = (min(var_5, ((((((4064 ? 10645279397920008297 : var_4))) ? ((86 ? 2300633782 : var_2)) : (((min(var_16, var_8)))))))));
    /* LoopNest 3 */
    for (int i_0 = 1; i_0 < 15;i_0 += 1)
    {
        for (int i_1 = 1; i_1 < 16;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 19;i_2 += 1)
            {
                {
                    var_22 *= (arr_1 [i_0]);
                    var_23 = (!58675);
                    arr_7 [i_2] &= (min((arr_2 [i_0 - 1]), (((-26846 | 0) ? ((var_6 ? 1 : var_17)) : var_0))));
                }
            }
        }
    }
    var_24 = ((((min(var_4, (var_10 == var_16)))) ? (((var_9 >= 0) ? (((min(var_12, 0)))) : ((var_7 ? var_3 : var_0)))) : var_3));
    var_25 = ((var_16 ? var_12 : (((18446744073709551615 && 994117715) ? ((0 ? var_8 : var_13)) : var_18))));
    #pragma endscop
}
