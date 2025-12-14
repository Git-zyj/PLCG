/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 100534
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=100534 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/100534
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 3 */
    for (int i_0 = 0; i_0 < 18;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 18;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 18;i_2 += 1)
            {
                {
                    var_10 |= (arr_1 [i_1]);
                    var_11 ^= (arr_4 [i_0] [i_0] [9] [9]);
                    /* LoopNest 2 */
                    for (int i_3 = 0; i_3 < 1;i_3 += 1)
                    {
                        for (int i_4 = 0; i_4 < 18;i_4 += 1)
                        {
                            {
                                var_12 = ((~(max((arr_11 [i_0] [i_1] [i_2] [i_0] [i_4]), (arr_11 [i_0] [i_0] [i_2] [i_0] [i_4])))));
                                var_13 = (min(var_13, (((!(arr_8 [0] [i_1] [i_2] [i_3]))))));
                                var_14 = ((~((~(arr_0 [i_0])))));
                                arr_12 [i_0] [i_0] [i_0] [i_0] [2] [2] = ((~(min((((-(arr_9 [i_3] [i_2] [i_0] [i_0])))), (~18334852577179965575)))));
                            }
                        }
                    }
                    var_15 = ((arr_1 [i_0]) ? (min((arr_10 [i_0] [i_0] [i_0] [i_0] [i_0] [8]), 0)) : (((-906654461 || 1137070766434141197) ? (!17309673307275410417) : ((((arr_9 [i_0] [13] [i_0] [i_0]) || (arr_6 [i_0])))))));
                }
            }
        }
    }
    var_16 = ((~(max(var_9, (((-32767 - 1) ? 21208 : (-32767 - 1)))))));
    var_17 = (max((((((18158513697557839872 ? 2047 : 44327))) && (~var_1))), (((-32767 - 1) != var_2))));
    var_18 = ((((((((var_7 << (-120 + 161)))) ? ((var_7 ? 33 : 1137070766434141198)) : 1344073687))) ? (((var_2 && var_7) ? (var_2 >= var_6) : ((1137070766434141198 ? var_7 : var_6)))) : var_6));
    var_19 = (((max(17309673307275410411, 44327)) ^ (((((-32749 ? 32765 : var_0)))))));
    #pragma endscop
}
