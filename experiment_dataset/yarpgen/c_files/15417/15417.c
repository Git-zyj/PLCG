/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 15417
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=15417 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/15417
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_12 = (((~(~var_10))));
    var_13 = var_1;
    var_14 = var_1;
    var_15 &= ((((-((7350485371174682879 ? var_10 : -115))))) ? var_5 : var_4);
    /* LoopNest 3 */
    for (int i_0 = 0; i_0 < 20;i_0 += 1)
    {
        for (int i_1 = 1; i_1 < 17;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 20;i_2 += 1)
            {
                {
                    var_16 = (arr_2 [i_2] [i_1 + 2] [i_2]);
                    var_17 = max(-3904200116105867186, -67);
                    arr_8 [i_0] [i_1] [i_2] = (min(((((((var_9 ? var_9 : var_8))) ? ((min((arr_2 [i_2] [i_1 + 1] [i_0]), var_4))) : (!380121827)))), (max(((max(var_4, -121))), -4774604326181884216))));
                    arr_9 [i_1] [i_1] [i_0] = (((((-((((arr_1 [i_0] [i_0]) || var_3)))))) ? (~84) : (((arr_7 [i_1 + 2] [i_1 + 2] [i_1 + 2] [i_1]) ? (var_0 + 11737260666913609181) : ((1 ? var_7 : 254659332571525410))))));

                    for (int i_3 = 0; i_3 < 20;i_3 += 1)
                    {
                        arr_12 [i_0] [i_1 - 1] [i_2] [i_1] = ((((((arr_10 [i_1 + 1] [i_1] [i_1 + 2] [i_1 + 3] [i_1]) & var_10))) ? (arr_10 [i_1 + 2] [i_1 + 2] [i_1 - 1] [i_1 - 1] [i_0]) : (arr_10 [i_1 + 1] [6] [i_1] [i_1 + 1] [17])));
                        arr_13 [i_1] = (~(arr_4 [i_1 + 3] [i_1 + 2]));
                        arr_14 [i_0] [i_0] [i_1] [i_2] [i_3] [i_3] = ((-(((!(arr_3 [i_0] [i_0] [i_2]))))));
                        arr_15 [i_1] [i_1] = arr_1 [i_0] [i_0];

                        for (int i_4 = 1; i_4 < 18;i_4 += 1)
                        {
                            var_18 = ((min(var_5, (arr_3 [i_0] [i_1 + 1] [i_2]))));
                            arr_18 [i_0] [16] [i_1 + 3] [i_1] [i_0] [i_3] [i_4 - 1] = ((254659332571525413 ? 131 : (((var_0 == (min((arr_6 [i_0]), 2543480298)))))));
                            arr_19 [i_1] [i_2] [i_1] [i_1] = var_9;
                        }
                        for (int i_5 = 0; i_5 < 20;i_5 += 1)
                        {
                            var_19 |= ((arr_20 [i_5] [i_3] [i_2] [i_1 + 1] [i_0]) ? (((arr_3 [i_1 - 1] [i_1 + 2] [i_1 + 1]) + (arr_7 [i_0] [i_1 + 2] [i_1 + 3] [i_0]))) : (((arr_4 [i_1 + 3] [i_1 + 2]) ? (((var_10 ? var_4 : (arr_1 [i_3] [i_3])))) : (arr_3 [i_1 + 2] [5] [i_0]))));
                            arr_24 [i_0] [i_0] &= (arr_23 [4] [i_0] [i_2] [i_3] [i_3] [i_5]);
                            arr_25 [i_1] = (max(((29 ? (arr_7 [i_0] [i_0] [i_2] [i_1]) : -19234)), -4170960140913580190));
                            arr_26 [i_1] [i_1] [i_1] [i_2] [i_5] [i_1] = ((1 ? var_2 : ((-((var_8 ? 1862185217 : (arr_5 [i_2] [i_1 + 1])))))));
                        }
                    }
                }
            }
        }
    }
    #pragma endscop
}
