/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 119989
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=119989 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/119989
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_19 = var_6;
    var_20 = ((var_7 != (((min(518582523, var_5)) - 7))));
    var_21 -= (var_8 <= var_11);
    /* LoopNest 2 */
    for (int i_0 = 2; i_0 < 9;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 1;i_1 += 1)
        {
            {
                var_22 ^= ((!((min(1, (arr_3 [i_0 + 1] [2]))))));
                var_23 = 1;
                var_24 = ((1 ? 1 : (((-103 <= ((4228502685 ? -2004351662 : var_18)))))));
            }
        }
    }
    var_25 = ((var_13 > (!var_0)));
    #pragma endscop
}
