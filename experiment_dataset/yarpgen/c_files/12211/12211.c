/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 12211
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=12211 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/12211
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 25;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 25;i_1 += 1)
        {
            {
                arr_4 [i_0] [i_0] = (max((((var_9 % var_9) / 37187)), (((~(arr_2 [i_0]))))));
                arr_5 [i_1] [i_1] [i_0] = var_0;
            }
        }
    }
    var_10 = ((var_9 ? var_0 : (-var_1 * var_8)));
    var_11 = ((((((((65529 ? (-9223372036854775807 - 1) : 1152921504606830592))) ? ((199 ? (-9223372036854775807 - 1) : -1711814519)) : var_6))) ? (((((min(var_5, var_7)) > var_5)))) : (max(2047, var_1))));
    var_12 = 85;
    #pragma endscop
}
