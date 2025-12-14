/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 184254
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=184254 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/184254
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_16 = var_8;
    var_17 = var_8;
    var_18 &= ((var_3 ? ((((((min(var_8, -27959))) && var_15)))) : ((min(var_8, 12757122870489431871)))));
    /* LoopNest 2 */
    for (int i_0 = 2; i_0 < 12;i_0 += 1)
    {
        for (int i_1 = 3; i_1 < 11;i_1 += 1)
        {
            {
                arr_4 [i_1] = (arr_3 [i_1] [i_1]);
                var_19 = (((arr_2 [i_1 - 1] [i_1 - 1]) ? (((!((!(arr_2 [i_0 - 2] [1])))))) : (((arr_1 [i_0 - 1]) ? (arr_0 [i_1 + 1]) : (max((arr_0 [i_0]), -904461663))))));
            }
        }
    }
    var_20 = (min(((((var_11 * 1) ? var_8 : (((-9223372036854775807 - 1) ? 1 : var_7))))), ((var_5 ? var_3 : (((16 ? var_15 : var_15)))))));
    #pragma endscop
}
