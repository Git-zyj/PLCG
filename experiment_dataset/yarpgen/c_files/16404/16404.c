/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 16404
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=16404 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/16404
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_20 = ((var_13 & (var_6 < var_15)));
    /* LoopNest 3 */
    for (int i_0 = 0; i_0 < 16;i_0 += 1)
    {
        for (int i_1 = 2; i_1 < 13;i_1 += 1)
        {
            for (int i_2 = 2; i_2 < 14;i_2 += 1)
            {
                {
                    arr_8 [i_2] [i_1] [i_1] [i_2] = ((((((max((arr_4 [6] [i_1]), (arr_7 [i_2] [i_1] [i_1] [8]))) - (arr_4 [i_0] [i_0])))) && ((((arr_3 [i_0] [i_1] [i_2]) % 1741249302)))));
                    /* LoopNest 2 */
                    for (int i_3 = 0; i_3 < 16;i_3 += 1)
                    {
                        for (int i_4 = 0; i_4 < 16;i_4 += 1)
                        {
                            {
                                var_21 *= (max((((arr_1 [i_2 - 2] [i_1 + 2]) * (arr_1 [i_2 - 1] [i_1 - 1]))), ((((((arr_0 [i_0]) ? (arr_0 [i_1]) : 1))) ? (arr_2 [i_1 - 2] [i_1 - 1]) : 135263417))));
                                var_22 = (max((min((arr_15 [i_2 - 2] [i_1 + 3] [i_1 + 3]), 1741249302)), (arr_15 [i_2 - 2] [i_1 + 3] [i_1 + 3])));
                            }
                        }
                    }
                    arr_16 [i_1] = ((arr_6 [i_1 - 1] [i_1 + 3] [i_2 - 2]) ^ (((((arr_6 [i_1 - 1] [i_1 - 1] [i_2 + 1]) <= (arr_13 [i_1 + 2] [i_1] [i_1 + 3] [i_2 + 1] [i_2]))))));
                }
            }
        }
    }
    var_23 = (((var_3 ? (var_3 == var_4) : var_12)));
    #pragma endscop
}
