/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 129242
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=129242 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/129242
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_14 = (max(42033, (((!(((23502 ? 109 : var_4))))))));
    var_15 = (max(-31, (max(((max(258735047, var_10))), ((var_2 ? var_7 : 13090280163724666374))))));
    var_16 |= (min(((((var_11 + 9223372036854775807) << (((max(24569, var_13)) - 1484290155))))), (((((12986390393288572885 ? var_6 : var_12))) ? ((min(var_10, 258735052))) : (134217720 & 42057)))));
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 17;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 17;i_1 += 1)
        {
            {
                var_17 = (max((max((var_12 ^ var_9), (min((arr_2 [i_1] [i_0]), var_3)))), (~42033)));
                /* LoopNest 2 */
                for (int i_2 = 0; i_2 < 17;i_2 += 1)
                {
                    for (int i_3 = 0; i_3 < 17;i_3 += 1)
                    {
                        {
                            arr_15 [5] [5] [i_1] [i_1] [i_1] = ((17293822569102704640 | (((258735047 ? 0 : 12803)))));
                            arr_16 [i_0] [i_0] [i_2] [i_1] = ((2788 - (-127 - 1)));
                            var_18 += (min(((20725 ? 16160662317060968653 : var_4)), (((var_5 ? 2147483647 : (arr_10 [15] [i_1]))))));
                            var_19 = (((((((min((arr_9 [i_1] [i_1] [i_2] [i_1]), 44))) ? (min(var_2, 9906)) : var_11))) ? 0 : var_7));
                        }
                    }
                }
            }
        }
    }
    #pragma endscop
}
