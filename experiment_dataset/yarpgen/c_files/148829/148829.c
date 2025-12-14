/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 148829
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=148829 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/148829
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_19 = (max((min(var_16, 0)), (297521461 * -1)));
    var_20 = (((((((var_8 ? 22493 : -23338))) ? (max(2438357283, 13)) : 11341)) % (((((3601115334 && 55) || (!-7979453242127638190)))))));
    /* LoopNest 2 */
    for (int i_0 = 3; i_0 < 20;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 23;i_1 += 1)
        {
            {
                var_21 = (((((4294967295 ? ((var_18 ? -1873213095 : 5)) : (1 && var_8)))) || var_6));
                var_22 = (min(var_22, ((max((((((22868 ? var_15 : var_7)) << ((((((3990318347 ? var_6 : var_17)) + 15829)) - 11))))), ((((var_7 ? var_8 : var_9)) | var_3)))))));
                arr_7 [1] [i_0] [i_1] = (((((var_7 ? 127 : ((-95 ? 672771368 : var_5))))) ? ((227 ? 8 : ((min(119, -2))))) : (-1 ^ 98)));
                var_23 = (var_11 ? (min(4019990768, -var_18)) : 3127363406);
            }
        }
    }
    #pragma endscop
}
