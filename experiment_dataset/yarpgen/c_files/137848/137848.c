/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 137848
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=137848 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/137848
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_14 = ((!((max(-7126661805941114698, 65535)))));
    /* LoopNest 3 */
    for (int i_0 = 0; i_0 < 10;i_0 += 1)
    {
        for (int i_1 = 2; i_1 < 7;i_1 += 1)
        {
            for (int i_2 = 1; i_2 < 8;i_2 += 1)
            {
                {
                    arr_6 [i_1] [i_1] [i_2] = (((1 + var_10) ? ((((1152921504606844928 - (arr_5 [i_0] [i_1 + 3] [i_0]))) - (arr_2 [i_2]))) : (min(2013247033, (((arr_5 [i_0] [i_1] [i_2]) - var_2))))));
                    var_15 = ((((min((((15647 ? (arr_0 [i_0]) : -752963398))), -203874493918431963))) ? (((min(65535, var_6)))) : (((arr_5 [i_2 + 2] [i_1 + 1] [i_2]) ? (((arr_0 [i_1]) ? var_8 : (arr_2 [i_0]))) : (!-1269040545)))));
                    /* LoopNest 2 */
                    for (int i_3 = 2; i_3 < 7;i_3 += 1)
                    {
                        for (int i_4 = 1; i_4 < 9;i_4 += 1)
                        {
                            {
                                arr_13 [i_1] [i_3 + 3] [i_1 + 1] [i_1 + 1] [i_1] = var_11;
                                var_16 = (min(var_16, (!var_13)));
                            }
                        }
                    }
                    var_17 |= var_1;
                }
            }
        }
    }
    var_18 = (~(max(var_11, (min(-656706329, var_3)))));
    var_19 = ((-(max(-203874493918431963, ((min(var_0, var_10)))))));
    #pragma endscop
}
