/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 152197
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=152197 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/152197
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 1; i_0 < 1;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 14;i_1 += 1)
        {
            {
                /* LoopNest 3 */
                for (int i_2 = 2; i_2 < 13;i_2 += 1)
                {
                    for (int i_3 = 0; i_3 < 14;i_3 += 1)
                    {
                        for (int i_4 = 4; i_4 < 11;i_4 += 1)
                        {
                            {
                                var_10 = (min(var_10, (arr_12 [i_1] [i_1])));
                                arr_13 [i_2] [i_3] [i_3] [i_3] [8] [i_3] [i_2] = ((498042527 > (((max(154, 1))))));
                                var_11 = (min(var_11, (~var_5)));
                                var_12 = (((!(arr_0 [i_0 - 1]))) || (((-(min(var_5, (arr_7 [i_0] [i_0 - 1] [i_0 - 1] [13])))))));
                            }
                        }
                    }
                }
                var_13 = ((((max((-9223372036854775807 - 1), var_2))) ? ((498042527 * (min(12, (arr_4 [2]))))) : 1));
            }
        }
    }
    var_14 = var_7;
    #pragma endscop
}
