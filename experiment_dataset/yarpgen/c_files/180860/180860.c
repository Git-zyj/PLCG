/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 180860
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=180860 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/180860
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 14;i_0 += 1)
    {
        for (int i_1 = 1; i_1 < 11;i_1 += 1)
        {
            {
                arr_6 [i_1] [i_1] [i_1] = ((((((((var_10 ? var_8 : var_3))) ? (var_4 && var_3) : (var_8 && var_14)))) && (((var_5 || var_8) && (var_2 || var_7)))));
                var_17 *= ((-((var_8 + (var_6 + var_3)))));
                var_18 = (max(var_18, ((((((var_13 ? (var_11 & var_14) : var_0))) ? ((((var_1 ? var_7 : var_14)) >> ((var_10 ? var_7 : var_1)))) : var_15)))));
                arr_7 [i_0] [i_1] [i_1] = ((var_10 & var_11) && var_14);
            }
        }
    }
    var_19 = var_3;
    #pragma endscop
}
