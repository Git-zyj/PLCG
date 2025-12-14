/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 102134
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=102134 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/102134
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_10 = var_7;
    var_11 = (max(var_11, (((var_5 ? (max(var_6, (~var_3))) : (((~(~-13247)))))))));
    var_12 = var_1;
    /* LoopNest 3 */
    for (int i_0 = 0; i_0 < 13;i_0 += 1)
    {
        for (int i_1 = 3; i_1 < 12;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 13;i_2 += 1)
            {
                {
                    /* LoopNest 2 */
                    for (int i_3 = 1; i_3 < 1;i_3 += 1)
                    {
                        for (int i_4 = 3; i_4 < 12;i_4 += 1)
                        {
                            {
                                var_13 = ((-((((arr_8 [i_2]) && 1)))));
                                var_14 = 194;
                                var_15 = (max(var_15, (((~(max(13246, 797596726)))))));
                                var_16 = ((((!(arr_11 [i_3] [i_3] [i_3 - 1] [i_3 - 1] [i_3 - 1])))));
                            }
                        }
                    }
                    var_17 = (max((arr_8 [i_0]), ((-(max(var_4, 194))))));
                    arr_12 [i_0] [i_1 + 1] [i_0] [i_1] = ((((((((11225802208104597033 ? 13245 : -13237))) || 24919))) >> ((((+(((arr_8 [i_0]) ? 255 : -13247)))) - 235))));
                    var_18 -= ((+(max((arr_4 [i_2] [i_1 - 3] [i_0]), 42753))));
                }
            }
        }
    }
    #pragma endscop
}
