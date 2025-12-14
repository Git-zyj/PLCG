/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 133310
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=133310 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/133310
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_20 = ((((((((var_14 ? var_10 : 1))) ? (((min(var_0, var_16)))) : (max(var_1, 1))))) ? ((var_7 ? (var_12 != var_12) : (var_5 / var_6))) : (-80 / 2026195)));
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 18;i_0 += 1)
    {
        for (int i_1 = 1; i_1 < 17;i_1 += 1)
        {
            {
                var_21 = (((~(var_17 | var_10))));
                var_22 = (((((((((513 >= (arr_1 [i_0] [i_1 - 1])))) != -1739)))) < (((40986 + 1209495441) ? var_12 : (((arr_2 [i_0]) ? var_18 : (arr_2 [i_0])))))));
            }
        }
    }
    var_23 = (max(var_23, var_5));
    var_24 = ((((var_8 + ((1 ? var_2 : var_2)))) < var_16));
    var_25 = var_1;
    #pragma endscop
}
