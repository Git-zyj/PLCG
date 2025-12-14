/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 13519
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=13519 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/13519
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_17 = (max(var_17, 6972399789781856860));
    var_18 = var_12;
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 1;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 13;i_1 += 1)
        {
            {
                /* LoopNest 3 */
                for (int i_2 = 0; i_2 < 1;i_2 += 1)
                {
                    for (int i_3 = 2; i_3 < 12;i_3 += 1)
                    {
                        for (int i_4 = 0; i_4 < 13;i_4 += 1)
                        {
                            {
                                var_19 *= (arr_9 [i_3 - 2] [i_3] [i_3] [i_3 + 1]);
                                arr_13 [i_0] [i_1] [i_3 - 1] [i_3] = (((var_10 + 9223372036854775807) << (((arr_8 [i_0] [i_3 + 1] [i_2] [i_3 - 1]) / (((arr_11 [i_0] [i_1] [i_2] [i_3 - 2] [i_4]) ? (arr_7 [i_2] [i_3 + 1] [i_4]) : var_4))))));
                                var_20 = ((0 ? 1 : -6698688116016563796));
                                var_21 *= ((arr_6 [i_0] [i_2] [i_1]) ? (min(1, 8719551097338467667)) : ((((arr_0 [i_3 - 1]) * (arr_0 [i_3 - 1])))));
                            }
                        }
                    }
                }
                var_22 = max(8719551097338467667, var_16);
                arr_14 [i_0] [i_1] = (((max(0, 1)) ? (((932826609948990830 >> (-6083889314624136241 + 6083889314624136301)))) : ((max(var_15, var_15)))));
                arr_15 [i_0] [i_1] [i_0] = (!var_1);
            }
        }
    }
    var_23 = var_3;
    var_24 = (((((9007199254740991 ? -8719551097338467668 : 0))) ? 1 : ((0 ? (~var_0) : 1))));
    #pragma endscop
}
