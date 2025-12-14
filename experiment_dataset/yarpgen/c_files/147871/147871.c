/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 147871
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=147871 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/147871
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 17;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 17;i_1 += 1)
        {
            {
                var_14 = (((arr_1 [0]) ? ((var_12 ? (arr_1 [i_0]) : (arr_1 [i_1]))) : ((((max((arr_3 [i_0] [i_0] [i_0]), 40775))) ? (24757 / 5730592890466624697) : ((max((arr_0 [i_0]), var_7)))))));
                /* LoopNest 3 */
                for (int i_2 = 3; i_2 < 14;i_2 += 1)
                {
                    for (int i_3 = 4; i_3 < 14;i_3 += 1)
                    {
                        for (int i_4 = 0; i_4 < 17;i_4 += 1)
                        {
                            {
                                var_15 = (min(-var_7, (((arr_8 [i_3 + 3] [i_3 - 3] [i_3 + 1] [i_3 + 3]) - 46))));
                                arr_13 [i_0] [i_1] [7] = ((((-(!var_13))) != var_11));
                            }
                        }
                    }
                }
                var_16 = (min(var_16, -1382366369));
            }
        }
    }
    var_17 = var_2;
    #pragma endscop
}
