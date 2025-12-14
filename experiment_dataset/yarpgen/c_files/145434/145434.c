/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 145434
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=145434 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/145434
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_19 |= (max((!var_5), var_18));
    var_20 = -6290;
    var_21 = (max(1683, ((var_9 ? (46108 && 29276) : 7300776239900519129))));

    for (int i_0 = 1; i_0 < 14;i_0 += 1)
    {
        var_22 = arr_1 [1] [i_0];

        for (int i_1 = 1; i_1 < 12;i_1 += 1)
        {
            arr_6 [i_0] [i_1] = max((min((arr_0 [i_0] [10]), (min(var_6, (arr_4 [i_0 - 1] [6] [i_0 + 1]))))), (arr_2 [1] [i_1 + 3]));
            arr_7 [i_0] [i_0] = min(19428, (((1683 < -8209) ? (((((arr_2 [i_0] [i_0]) >= (arr_1 [i_0] [i_0]))))) : (arr_5 [i_0 + 1] [i_1]))));
            arr_8 [14] [i_1 + 1] [i_0] |= ((((((!12503) ? ((var_13 ? var_13 : var_12)) : (!21894)))) ? (arr_2 [i_0 - 1] [i_1]) : (arr_2 [i_0] [i_1])));
        }
        for (int i_2 = 0; i_2 < 15;i_2 += 1)
        {
            arr_11 [i_0] [0] [i_0] = ((~(max(var_12, 16071648312443161402))));
            var_23 = 16194345482274548448;
            /* LoopNest 2 */
            for (int i_3 = 2; i_3 < 14;i_3 += 1)
            {
                for (int i_4 = 0; i_4 < 15;i_4 += 1)
                {
                    {
                        var_24 = (min(-var_5, ((((max(-19018, (arr_4 [i_0] [i_2] [i_3])))) ? var_7 : var_14))));
                        var_25 = var_1;
                        var_26 = (((arr_0 [i_3 - 1] [i_0 + 1]) ? var_1 : ((46108 ? 21894 : 46106))));
                    }
                }
            }
        }
    }
    #pragma endscop
}
