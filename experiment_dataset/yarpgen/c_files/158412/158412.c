/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 158412
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=158412 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/158412
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_12 = var_7;
    var_13 = (((min(var_11, ((min(var_4, 1))))) + var_10));
    var_14 = (min(var_14, (((var_0 < (!32932))))));

    /* vectorizable */
    for (int i_0 = 0; i_0 < 12;i_0 += 1)
    {
        var_15 |= (((arr_3 [1]) ? (arr_1 [i_0] [7]) : ((32951 ? 32928 : 10932640748229104323))));
        arr_4 [i_0] &= var_3;
        var_16 = (((~(arr_3 [i_0]))) * ((var_1 ? var_8 : var_10)));
    }
    for (int i_1 = 0; i_1 < 19;i_1 += 1)
    {
        var_17 = (((arr_6 [i_1] [i_1]) ? ((max((min(var_0, 32625)), (971541775 < var_6)))) : (~10932640748229104323)));
        arr_9 [i_1] = (984953778 | 2266008888);
        var_18 *= var_5;
        var_19 = (min(var_19, (~221)));
        var_20 = (-8987172601656885845 * 15102184244253340151);
    }
    for (int i_2 = 0; i_2 < 12;i_2 += 1)
    {
        var_21 = (((~122) ^ ((((min(42791, var_11))) ? (arr_8 [8]) : var_6))));

        for (int i_3 = 0; i_3 < 12;i_3 += 1)
        {
            var_22 = (((min(((10932640748229104336 << (3252724711879107452 - 3252724711879107437))), 156)) * ((100 + (min(var_5, 99))))));
            var_23 *= (arr_2 [i_3]);
        }
        /* LoopNest 2 */
        for (int i_4 = 3; i_4 < 9;i_4 += 1)
        {
            for (int i_5 = 0; i_5 < 12;i_5 += 1)
            {
                {
                    var_24 = (min(var_24, ((((8073234856325736416 << ((((var_5 << (var_1 - 59211))) - 8846508919832903680))))))));
                    arr_19 [i_2] [i_2] = (((((arr_15 [i_2] [10] [i_5]) ? (var_8 & var_7) : ((var_8 << (var_5 - 3980191157702223094))))) << (var_5 - 3980191157702223086)));
                    arr_20 [i_2] = 364709241140623696;
                }
            }
        }
    }
    #pragma endscop
}
