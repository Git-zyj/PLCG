/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 12076
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=12076 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/12076
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_16 = ((var_3 / (0 - var_4)));
    /* LoopNest 3 */
    for (int i_0 = 0; i_0 < 21;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 21;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 21;i_2 += 1)
            {
                {
                    var_17 = (arr_4 [i_2] [i_1] [i_1] [i_0]);
                    /* LoopNest 2 */
                    for (int i_3 = 3; i_3 < 20;i_3 += 1)
                    {
                        for (int i_4 = 0; i_4 < 21;i_4 += 1)
                        {
                            {
                                var_18 &= var_3;
                                var_19 = ((!(((var_1 ? var_11 : (arr_6 [i_0] [i_1] [i_2] [i_1]))))));
                                var_20 = ((!(arr_7 [i_0] [i_3 - 1] [i_3 - 1] [i_3 - 1])));
                                var_21 = (((((arr_8 [i_3 + 1] [i_1] [17] [i_3 + 1]) ? (arr_8 [i_3 + 1] [i_3 + 1] [i_1] [1]) : -92)) >= (!var_7)));
                            }
                        }
                    }
                    var_22 = var_8;
                }
            }
        }
    }
    #pragma endscop
}
