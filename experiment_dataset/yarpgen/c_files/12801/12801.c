/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 12801
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=12801 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/12801
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 2; i_0 < 19;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 1;i_1 += 1)
        {
            {
                arr_6 [6] [i_1] [6] &= (var_7 * var_5);
                var_17 = (~var_2);
                arr_7 [i_0] = (!-var_5);
            }
        }
    }
    var_18 = (max((max(var_1, (var_15 - 799548131))), var_0));
    var_19 = (max((~var_3), 41963));
    /* LoopNest 3 */
    for (int i_2 = 0; i_2 < 25;i_2 += 1)
    {
        for (int i_3 = 1; i_3 < 24;i_3 += 1)
        {
            for (int i_4 = 0; i_4 < 25;i_4 += 1)
            {
                {
                    /* LoopNest 2 */
                    for (int i_5 = 0; i_5 < 25;i_5 += 1)
                    {
                        for (int i_6 = 0; i_6 < 25;i_6 += 1)
                        {
                            {
                                var_20 = (max(var_20, (((((min((~var_8), 23574))) ? var_7 : ((41961 ? ((min(var_10, var_8))) : ((59706 ? (arr_14 [i_2] [i_4] [i_4] [i_6]) : var_16)))))))));
                                arr_21 [i_6] [i_6] [i_6] [i_6] [i_3 + 1] [16] &= (((+((var_3 ? (arr_20 [i_2] [i_4] [i_6]) : var_14)))) & 1778033046);
                                var_21 = (41961 ? (((arr_19 [i_3 - 1]) ? (~-1) : ((~(arr_20 [i_2] [i_2] [i_2]))))) : ((~(arr_8 [i_2]))));
                            }
                        }
                    }
                    var_22 = (~((((((arr_20 [i_4] [3] [3]) ? var_2 : 23586))) ? ((min(var_16, var_11))) : (~var_4))));
                }
            }
        }
    }
    var_23 = (~(~41979));
    #pragma endscop
}
