/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 145297
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=145297 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/145297
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_20 *= ((((max(var_7, (((var_7 ? 553102211 : var_0)))))) <= (((-55 % var_18) * (((1608965974543436862 << (((-8217530821248870027 + 8217530821248870084) - 56)))))))));
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 25;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 1;i_1 += 1)
        {
            {
                var_21 = (-8217530821248870027 + 8217530821248870023);
                var_22 = (!-0);
                arr_8 [i_0] [i_1] = (max(-5162196741720145768, ((((arr_7 [i_0] [i_0]) ? var_1 : (437074973 & 5384))))));
                var_23 = (((arr_4 [i_0] [i_0] [i_0]) ? (((arr_7 [i_0] [i_0]) ? 8217530821248870026 : var_1)) : (((arr_1 [8] [i_0]) ? ((min(0, 0))) : ((var_0 ? -5086028505728480430 : var_8))))));
                var_24 = ((-(((arr_7 [i_1] [i_0]) ? var_17 : (arr_7 [i_1] [i_0])))));
            }
        }
    }
    var_25 = ((((min(var_14, (max(0, var_7))))) ? var_4 : (!4294967295)));
    #pragma endscop
}
