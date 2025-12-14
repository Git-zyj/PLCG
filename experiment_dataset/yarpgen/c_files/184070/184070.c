/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 184070
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=184070 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/184070
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 19;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 19;i_1 += 1)
        {
            {
                var_19 = (arr_3 [i_0] [i_1]);
                /* LoopNest 3 */
                for (int i_2 = 0; i_2 < 19;i_2 += 1)
                {
                    for (int i_3 = 0; i_3 < 19;i_3 += 1)
                    {
                        for (int i_4 = 0; i_4 < 1;i_4 += 1)
                        {
                            {
                                var_20 = var_9;
                                var_21 = var_14;
                            }
                        }
                    }
                }
                var_22 = (-(arr_5 [i_1] [i_1] [i_0] [i_0]));
                var_23 = ((((-(((!(arr_9 [i_0] [i_1] [i_1] [i_0] [i_1]))))))) ? var_2 : (((-(arr_3 [i_0] [i_1])))));
            }
        }
    }
    var_24 = (((((min(var_16, var_4)) ? ((var_8 ? var_10 : var_15)) : 29116))));
    var_25 |= 1;
    #pragma endscop
}
