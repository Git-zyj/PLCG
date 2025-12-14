/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 174807
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=174807 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/174807
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_16 = (min((var_10 || var_6), var_7));
    /* LoopNest 3 */
    for (int i_0 = 0; i_0 < 11;i_0 += 1)
    {
        for (int i_1 = 1; i_1 < 8;i_1 += 1)
        {
            for (int i_2 = 1; i_2 < 10;i_2 += 1)
            {
                {
                    /* LoopNest 2 */
                    for (int i_3 = 0; i_3 < 11;i_3 += 1)
                    {
                        for (int i_4 = 3; i_4 < 7;i_4 += 1)
                        {
                            {
                                var_17 = ((((var_8 | (arr_9 [i_1 + 3] [i_3] [i_3] [i_3]))) > (arr_7 [1] [i_2 + 1] [i_1])));
                                var_18 = (((((((var_2 ? var_1 : 6899526503141806827))) ? (arr_2 [i_1 + 2]) : (~var_11))) >= (min((min(var_5, 53)), -var_0))));
                                var_19 = (max(var_19, (arr_7 [i_1] [i_2] [i_0])));
                            }
                        }
                    }
                    var_20 *= ((((((arr_11 [i_2 - 1] [i_1 + 3] [i_2 + 1] [i_1] [i_2] [i_1 - 1]) ? -7322876042877858307 : var_3))) ? ((((((var_1 ? -7322876042877858310 : 7322876042877858328)) <= (arr_7 [i_0] [i_1 + 3] [i_0]))))) : (((arr_10 [i_2 + 1] [i_2 + 1] [i_2 - 1] [i_2 - 1]) ? (((arr_11 [i_0] [i_2 - 1] [i_2] [i_0] [i_2] [i_2]) ? 3211063457 : (arr_3 [i_0] [i_1] [i_0]))) : (!8191)))));
                }
            }
        }
    }
    #pragma endscop
}
