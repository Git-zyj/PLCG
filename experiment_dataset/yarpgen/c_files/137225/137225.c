/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 137225
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=137225 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/137225
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 15;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 15;i_1 += 1)
        {
            {
                var_19 = var_5;
                var_20 = var_18;
                var_21 &= (min((min(var_7, (((var_12 ? var_18 : 60))))), ((((-123 ? 6773854570988624671 : (-9223372036854775807 - 1)))))));
                var_22 = min((max((((~(arr_3 [i_0] [i_0])))), (56 ^ 1383343991))), ((((122 ? 119 : 145)))));
                var_23 = ((45 ? 357544502470124408 : (((max((arr_5 [i_0] [i_0] [i_0]), var_13))))));
            }
        }
    }
    var_24 = (var_15 * var_17);
    var_25 &= (!56);
    var_26 = var_15;
    #pragma endscop
}
