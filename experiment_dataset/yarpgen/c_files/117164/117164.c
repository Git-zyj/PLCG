/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 117164
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=117164 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/117164
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_15 = ((var_11 ? ((min(0, 5))) : ((max(1, var_2)))));
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 14;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 14;i_1 += 1)
        {
            {
                arr_4 [i_0] = ((((min((arr_0 [i_0] [i_1]), (arr_0 [i_0] [i_1])))) && (arr_0 [i_0] [i_0])));
                var_16 = (max((max((arr_1 [i_0] [i_1]), -1033761419)), (((var_13 ? 18360 : -1558505651)))));
                /* LoopNest 3 */
                for (int i_2 = 3; i_2 < 11;i_2 += 1)
                {
                    for (int i_3 = 1; i_3 < 11;i_3 += 1)
                    {
                        for (int i_4 = 0; i_4 < 14;i_4 += 1)
                        {
                            {
                                var_17 -= ((((arr_0 [12] [i_3 + 2]) || (arr_0 [12] [i_3 - 1]))));
                                arr_13 [i_0] [6] [i_0] [8] [1] = 10304;
                            }
                        }
                    }
                }
            }
        }
    }
    #pragma endscop
}
