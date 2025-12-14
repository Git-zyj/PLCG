/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 175565
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=175565 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/175565
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 0; i_0 < 16;i_0 += 1)
    {
        var_15 = (min(var_15, 1411865665));
        var_16 = (min(var_16, var_13));
        arr_3 [i_0] [i_0] = var_2;
    }
    for (int i_1 = 0; i_1 < 1;i_1 += 1)
    {
        var_17 = (min(var_17, -var_12));
        var_18 -= ((var_7 ^ (~var_13)));
        var_19 = ((!(((~(!var_1))))));
        arr_7 [i_1] |= (var_4 * var_4);
    }
    for (int i_2 = 4; i_2 < 18;i_2 += 1)
    {
        var_20 = (min(var_20, (((-((((63 ? 19461 : 112)) % 112)))))));
        var_21 -= var_6;
        var_22 = (var_2 - var_2);
        var_23 = var_9;
    }
    var_24 *= -11435;
    /* LoopNest 2 */
    for (int i_3 = 1; i_3 < 22;i_3 += 1)
    {
        for (int i_4 = 0; i_4 < 24;i_4 += 1)
        {
            {
                arr_16 [i_3] [i_3] = -var_14;
                var_25 = (max(var_25, var_8));
            }
        }
    }
    #pragma endscop
}
