/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 103154
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=103154 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/103154
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_14 = (((min(var_8, (min(var_9, var_5)))) <= (min((min(2686262653648979930, 1178653136240071708)), var_10))));
    /* LoopNest 3 */
    for (int i_0 = 0; i_0 < 21;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 21;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 21;i_2 += 1)
            {
                {
                    arr_9 [1] [i_1] [14] = ((min((arr_4 [i_2] [i_1]), 173)));
                    var_15 = var_10;
                    /* LoopNest 2 */
                    for (int i_3 = 0; i_3 < 21;i_3 += 1)
                    {
                        for (int i_4 = 0; i_4 < 21;i_4 += 1)
                        {
                            {
                                arr_15 [i_1] [1] [i_2] [i_1] [i_1] [i_1] = (((((173 || 0) || 173)) || ((!(((arr_13 [i_0] [i_1] [11] [i_2] [i_3] [i_4]) || 246))))));
                                arr_16 [i_0] [i_1] = 246;
                            }
                        }
                    }
                }
            }
        }
    }
    var_16 = (((((!var_0) ? (min(524287, 2651871670876177230)) : var_3)) < (min((var_1 & 1), ((var_11 ? -13863 : 0))))));
    var_17 = ((min(var_3, 1178653136240071709)));
    var_18 = var_0;
    #pragma endscop
}
