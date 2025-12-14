/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 146560
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=146560 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/146560
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 3 */
    for (int i_0 = 0; i_0 < 17;i_0 += 1)
    {
        for (int i_1 = 4; i_1 < 16;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 1;i_2 += 1)
            {
                {
                    arr_10 [i_0] [i_1 - 4] [i_0] = 3405412049682019745;
                    /* LoopNest 2 */
                    for (int i_3 = 1; i_3 < 1;i_3 += 1)
                    {
                        for (int i_4 = 0; i_4 < 17;i_4 += 1)
                        {
                            {
                                arr_15 [i_1] [i_2] [i_3 - 1] [i_4] = (-78 ? ((var_6 ? var_1 : (arr_5 [i_0] [i_0] [i_1 - 3]))) : var_1);
                                var_12 -= ((-((15041321297949926903 ? var_5 : ((15898 ? var_2 : (arr_3 [i_0] [i_1 - 1] [i_1 - 1])))))));
                                var_13 = (((-1792563689 ? (arr_3 [i_1 + 1] [i_1 + 1] [i_2]) : (arr_0 [i_1 + 1] [i_1 - 4]))));
                            }
                        }
                    }
                }
            }
        }
    }
    var_14 = var_4;
    #pragma endscop
}
