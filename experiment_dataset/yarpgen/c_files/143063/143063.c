/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 143063
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=143063 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/143063
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_20 = (max((max(((1 ? var_19 : var_16)), 1)), 129));

    for (int i_0 = 1; i_0 < 16;i_0 += 1)
    {
        var_21 = (((arr_0 [i_0] [i_0]) ? ((~((148 ? 177 : 123)))) : -var_14));
        var_22 = var_9;
        arr_2 [i_0] = ((1556085896 ? 3738674452 : 171));
        arr_3 [i_0] = (max((~1), (~1556085889)));
        /* LoopNest 2 */
        for (int i_1 = 0; i_1 < 17;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 17;i_2 += 1)
            {
                {
                    arr_9 [i_0] [i_1] [i_0] [i_0] = 113;
                    arr_10 [i_0] [i_1] = ((1 ? 1 : 1050935434));
                    var_23 = ((((max((arr_4 [i_0]), 43552))) ? var_16 : ((4294967283 ? -6795 : (arr_4 [i_0])))));
                }
            }
        }
    }
    var_24 = ((var_12 ? (max(var_11, var_5)) : var_19));
    var_25 = ((var_16 ? 4 : var_7));
    var_26 = ((((max(var_18, (max(var_13, 1))))) ? (max(1, (var_18 - 125))) : (((((var_6 ? var_11 : -6))) ? ((var_5 ? var_16 : var_14)) : ((var_16 ? -13 : var_12))))));
    #pragma endscop
}
