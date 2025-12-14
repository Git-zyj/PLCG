/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 160626
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=160626 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/160626
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 23;i_0 += 1)
    {
        for (int i_1 = 1; i_1 < 1;i_1 += 1)
        {
            {
                /* LoopNest 3 */
                for (int i_2 = 3; i_2 < 22;i_2 += 1)
                {
                    for (int i_3 = 0; i_3 < 1;i_3 += 1)
                    {
                        for (int i_4 = 0; i_4 < 1;i_4 += 1)
                        {
                            {
                                arr_14 [i_0] [13] [i_2 - 1] [i_3] [i_2] [i_1 - 1] = (((var_4 ? 0 : (arr_7 [i_1 - 1] [i_1 - 1] [i_2] [i_2 + 1]))));
                                var_17 = var_11;
                                arr_15 [i_0] [i_0] [i_2 - 3] [i_3] [i_2] = ((((!(((1695415578 << (1695415598 - 1695415598)))))) || ((((var_3 * var_8) ? ((max((arr_8 [22] [i_1] [i_2] [i_3] [i_4] [i_2]), var_3))) : (max((arr_11 [i_2] [i_3] [8] [9] [i_2]), (arr_0 [1] [3]))))))));
                            }
                        }
                    }
                }
                var_18 = ((((arr_0 [i_0] [i_1 - 1]) && (arr_9 [i_1 - 1] [i_1 - 1] [i_1 - 1] [22] [i_1]))));
            }
        }
    }
    var_19 = (max((!var_0), (max(var_5, (~var_4)))));
    var_20 = var_15;
    #pragma endscop
}
