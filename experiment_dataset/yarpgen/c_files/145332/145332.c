/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 145332
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=145332 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/145332
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 3 */
    for (int i_0 = 0; i_0 < 14;i_0 += 1)
    {
        for (int i_1 = 3; i_1 < 10;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 14;i_2 += 1)
            {
                {
                    /* LoopNest 2 */
                    for (int i_3 = 0; i_3 < 1;i_3 += 1)
                    {
                        for (int i_4 = 1; i_4 < 12;i_4 += 1)
                        {
                            {
                                var_19 = (((((-(arr_18 [i_0] [i_0] [i_0] [i_0] [i_0])))) ? (var_14 + var_8) : (arr_15 [i_0] [5] [i_0] [i_3] [5] [i_4 + 2] [i_2])));
                                arr_19 [i_0] [i_0] [i_0] [i_4 + 1] [i_0] = (((((min(-61477944, var_11)))) ? (arr_8 [i_0] [i_1 - 2] [i_4 + 2] [i_4]) : (arr_3 [i_0] [i_1 + 2])));
                                var_20 = var_8;
                                var_21 = 61477942;
                            }
                        }
                    }
                    var_22 *= (!(!0));
                }
            }
        }
    }
    var_23 = var_12;
    #pragma endscop
}
