/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 160110
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=160110 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/160110
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_17 = var_7;
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 14;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 14;i_1 += 1)
        {
            {
                var_18 = (arr_0 [i_1]);
                /* LoopNest 3 */
                for (int i_2 = 0; i_2 < 14;i_2 += 1)
                {
                    for (int i_3 = 0; i_3 < 14;i_3 += 1)
                    {
                        for (int i_4 = 2; i_4 < 11;i_4 += 1)
                        {
                            {
                                arr_16 [i_4 + 2] [i_3] [i_2] [i_1] [i_0] = ((min(13709, 3589)));
                                arr_17 [i_4] [i_3] [i_1] [i_0] = (max(19922, 79));
                                var_19 *= (arr_2 [i_4 + 2] [i_4 + 3]);
                            }
                        }
                    }
                }
            }
        }
    }
    var_20 = ((((max(((max(var_2, var_10))), var_4))) + ((var_14 - (max(var_13, var_3))))));
    #pragma endscop
}
