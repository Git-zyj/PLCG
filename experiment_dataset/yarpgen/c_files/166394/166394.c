/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 166394
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=166394 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/166394
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_20 -= (((848493548 != 84) ? var_11 : (((var_16 * 211) ? var_12 : -68))));
    /* LoopNest 3 */
    for (int i_0 = 3; i_0 < 20;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 21;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 21;i_2 += 1)
            {
                {
                    /* LoopNest 2 */
                    for (int i_3 = 0; i_3 < 21;i_3 += 1)
                    {
                        for (int i_4 = 2; i_4 < 19;i_4 += 1)
                        {
                            {
                                var_21 = ((((!127) - -0)));
                                var_22 = ((12435499173353291478 == (min((max(var_4, (arr_8 [i_0 - 3] [i_2] [i_0 - 3]))), (arr_7 [i_4 + 2] [i_4 + 1] [i_4 + 1] [i_4 + 2] [i_4 + 2] [i_0])))));
                                var_23 = (((((arr_4 [i_0] [i_2] [i_3] [i_4 - 2]) ? (arr_3 [i_1] [i_0] [i_2]) : var_2))) || (((-(arr_5 [i_0 - 2] [i_0 - 2] [i_4 + 2])))));
                            }
                        }
                    }
                    arr_11 [i_0] [i_1] [i_1] [i_1] = (arr_2 [i_0 - 3] [i_0 - 3]);
                    var_24 = (arr_2 [i_0 - 2] [i_0 - 2]);
                }
            }
        }
    }
    #pragma endscop
}
