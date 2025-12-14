/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 188213
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=188213 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/188213
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 3 */
    for (int i_0 = 0; i_0 < 24;i_0 += 1)
    {
        for (int i_1 = 4; i_1 < 23;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 24;i_2 += 1)
            {
                {
                    /* LoopNest 2 */
                    for (int i_3 = 0; i_3 < 24;i_3 += 1)
                    {
                        for (int i_4 = 3; i_4 < 21;i_4 += 1)
                        {
                            {
                                arr_13 [14] [14] [i_2] [i_2] |= (var_10 ? (1827498755158594789 ^ 0) : ((((~var_8) ? var_5 : var_7))));
                                var_14 ^= (var_8 && var_5);
                            }
                        }
                    }
                    var_15 = ((((arr_3 [i_1 - 4] [i_1 - 2]) * (arr_11 [i_1] [i_1 + 1] [i_1 - 2] [i_1 - 3] [i_1 - 1] [i_1 - 1] [i_1 + 1]))));
                    var_16 = (~var_5);
                    var_17 = (((((~(arr_1 [i_1 - 4])))) + ((16821662095832570912 ? 1827498755158594789 : 35753))));
                }
            }
        }
    }
    var_18 = ((((((((var_8 ? var_13 : var_3))) ? (max(var_6, 35753)) : var_3))) ? ((((((var_1 ? var_4 : var_4))) ? ((9 ? var_1 : 451839209)) : (!var_7)))) : (min(var_11, var_3))));
    var_19 = (((-var_9 ? var_4 : (((max(17392, 29795)))))));
    #pragma endscop
}
