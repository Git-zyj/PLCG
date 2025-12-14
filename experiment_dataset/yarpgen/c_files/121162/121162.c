/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 121162
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=121162 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/121162
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 3 */
    for (int i_0 = 1; i_0 < 22;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 23;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 1;i_2 += 1)
            {
                {
                    /* LoopNest 2 */
                    for (int i_3 = 1; i_3 < 22;i_3 += 1)
                    {
                        for (int i_4 = 1; i_4 < 22;i_4 += 1)
                        {
                            {
                                arr_12 [8] [i_1] [i_2] [i_3 - 1] [i_1] = (~(arr_4 [18]));
                                var_19 = (min(var_19, (arr_5 [i_3 - 1] [i_3 - 1])));
                                var_20 ^= ((-(min(-15, -15))));
                                var_21 -= ((!((max((arr_10 [2] [i_1] [2] [i_3 + 1] [i_4 + 1] [i_2]), -1352857729)))));
                            }
                        }
                    }
                    var_22 *= 1;
                    var_23 -= ((-((-(min(var_16, var_12))))));
                }
            }
        }
    }
    var_24 = -14;
    var_25 = ((!(((3 ? 10969028845630789201 : var_16)))));
    #pragma endscop
}
