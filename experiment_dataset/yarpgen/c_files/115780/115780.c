/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 115780
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=115780 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/115780
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_14 = var_12;
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 24;i_0 += 1)
    {
        for (int i_1 = 2; i_1 < 23;i_1 += 1)
        {
            {
                var_15 = ((((((~(arr_3 [i_0]))))) ? (min(-455, (min(17, (-32767 - 1))))) : (arr_1 [i_0] [i_1 - 2])));
                /* LoopNest 3 */
                for (int i_2 = 3; i_2 < 22;i_2 += 1)
                {
                    for (int i_3 = 0; i_3 < 24;i_3 += 1)
                    {
                        for (int i_4 = 2; i_4 < 23;i_4 += 1)
                        {
                            {
                                var_16 = ((1 ? 1 : 6719137281504444188));
                                var_17 = (max(var_17, ((((arr_0 [i_0]) ? ((var_9 ? ((((arr_4 [i_3] [i_1] [i_0]) ? 1 : var_2))) : (((arr_7 [11] [i_4]) * var_13)))) : ((var_4 ? (arr_3 [i_4 - 1]) : 4)))))));
                            }
                        }
                    }
                }
                /* LoopNest 3 */
                for (int i_5 = 4; i_5 < 23;i_5 += 1)
                {
                    for (int i_6 = 0; i_6 < 24;i_6 += 1)
                    {
                        for (int i_7 = 0; i_7 < 24;i_7 += 1)
                        {
                            {
                                var_18 = ((((min((((var_9 + 9223372036854775807) << 1)), (arr_16 [i_0] [i_0] [i_1 - 2] [i_1])))) ? ((1 ? (arr_5 [i_7] [i_1 - 2] [i_0]) : (~37347))) : var_2));
                                var_19 = (min(18352727162645610379, (((min(9223372036854775807, var_2))))));
                            }
                        }
                    }
                }
                var_20 = (((~(arr_5 [i_1] [i_0] [i_0]))));
            }
        }
    }
    #pragma endscop
}
