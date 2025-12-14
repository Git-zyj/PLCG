/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 145376
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=145376 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/145376
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 24;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 24;i_1 += 1)
        {
            {
                var_18 = (max(var_18, 1));
                /* LoopNest 3 */
                for (int i_2 = 3; i_2 < 23;i_2 += 1)
                {
                    for (int i_3 = 0; i_3 < 24;i_3 += 1)
                    {
                        for (int i_4 = 0; i_4 < 24;i_4 += 1)
                        {
                            {
                                var_19 = ((!((((var_0 ? var_5 : 1)) != 38))));
                                var_20 = ((2879863473 ? (arr_2 [i_3]) : ((0 ? var_16 : 19223))));
                                var_21 = (max(var_21, ((((((arr_5 [i_2] [i_2 + 1] [i_2 + 1]) - var_5)) + (max(57, (arr_5 [i_4] [i_2 - 2] [i_2 - 2]))))))));
                            }
                        }
                    }
                }
            }
        }
    }
    var_22 = (~var_2);
    var_23 = (max(var_23, 2047));
    var_24 = -var_1;
    #pragma endscop
}
