/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 14484
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=14484 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/14484
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 3 */
    for (int i_0 = 0; i_0 < 17;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 17;i_1 += 1)
        {
            for (int i_2 = 1; i_2 < 13;i_2 += 1)
            {
                {
                    arr_6 [i_1] [i_1] = (((((~(arr_4 [i_1] [i_0] [i_2 + 2] [i_2])))) ? ((var_6 ? (arr_5 [i_0] [i_0]) : ((min(1, (arr_1 [6] [6])))))) : 106));
                    /* LoopNest 2 */
                    for (int i_3 = 0; i_3 < 17;i_3 += 1)
                    {
                        for (int i_4 = 0; i_4 < 17;i_4 += 1)
                        {
                            {
                                arr_13 [i_0] [i_1] [i_2] [i_3] [i_4] [i_1] [i_2] = var_0;
                                arr_14 [i_3] [i_1] [i_2] [i_1] [i_0] = (arr_12 [i_0] [i_1] [i_2 - 1] [i_3] [i_1] [i_1]);
                                var_11 = (((arr_7 [i_0] [i_0] [i_1] [i_0]) ? (arr_7 [i_0] [i_1] [i_1] [13]) : ((2492907395 ? 2492907397 : (arr_8 [i_1] [i_1] [i_2 + 3] [i_2])))));
                                var_12 ^= ((((((!var_10) % (arr_2 [i_4] [i_4])))) % (arr_8 [i_0] [i_4] [i_0] [i_0])));
                                var_13 -= (max((arr_12 [i_0] [i_0] [i_0] [i_0] [i_0] [i_0]), (max((~var_0), ((~(arr_11 [i_4] [i_2] [i_4])))))));
                            }
                        }
                    }
                }
            }
        }
    }
    var_14 = (max((min(var_9, var_1)), var_1));
    #pragma endscop
}
