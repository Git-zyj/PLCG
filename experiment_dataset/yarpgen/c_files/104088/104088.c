/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 104088
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=104088 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/104088
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    /* vectorizable */
    for (int i_0 = 0; i_0 < 15;i_0 += 1)
    {
        /* LoopNest 2 */
        for (int i_1 = 1; i_1 < 13;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 15;i_2 += 1)
            {
                {
                    var_20 = (1631297773 ? 1646355436 : (arr_2 [i_1] [i_1] [i_1 - 1]));
                    arr_9 [i_0] [i_1 + 1] [i_0] = ((arr_7 [i_0]) ^ ((1430788555900218787 ^ (-2147483647 - 1))));
                }
            }
        }
        var_21 = ((arr_7 [i_0]) + (arr_7 [i_0]));
        var_22 ^= 1646355424;
    }
    var_23 = ((var_2 ? (var_17 != var_16) : var_18));
    var_24 = (min((((min(var_15, 17015955517809332827)) >> (((min(-1707390317, -1707390310)) + 1707390318)))), var_13));
    /* LoopNest 3 */
    for (int i_3 = 1; i_3 < 13;i_3 += 1)
    {
        for (int i_4 = 0; i_4 < 15;i_4 += 1)
        {
            for (int i_5 = 3; i_5 < 12;i_5 += 1)
            {
                {
                    var_25 ^= ((!((((((var_5 ? var_5 : 1646355436))) ? (arr_8 [i_5 - 3] [i_4] [i_4] [i_3]) : 1079334477)))));
                    var_26 = -425819308;
                    var_27 = (((((((min((arr_0 [i_4]), var_3))) ? 1377614024 : 18446744073709551615))) ? (17015955517809332833 ^ 2147483626) : (((~(-2147483647 - 1))))));
                    arr_17 [i_5] [i_4] [i_5] = (((arr_8 [i_3 - 1] [i_3] [i_3] [0]) ? (max((arr_10 [i_3 + 1]), (4172471767211004403 / -1646355437))) : var_17));
                    var_28 = (((-1170989645 <= var_19) ? ((var_12 ? 18311476062053764584 : var_11)) : ((max((arr_12 [i_5 - 2]), (~1631297773))))));
                }
            }
        }
    }
    #pragma endscop
}
