/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 147610
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=147610 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/147610
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 3 */
    for (int i_0 = 0; i_0 < 25;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 1;i_1 += 1)
        {
            for (int i_2 = 1; i_2 < 23;i_2 += 1)
            {
                {
                    /* LoopNest 2 */
                    for (int i_3 = 3; i_3 < 22;i_3 += 1)
                    {
                        for (int i_4 = 0; i_4 < 25;i_4 += 1)
                        {
                            {
                                var_13 -= (((((arr_14 [i_1] [i_2 + 1] [i_4] [i_4] [i_4]) ? ((1 ? (arr_6 [3] [22] [3]) : (arr_10 [i_0]))) : ((((arr_4 [i_2] [i_1]) > 1))))) == (((((var_8 ? 1 : (arr_7 [i_0] [i_0]))) == var_3)))));
                                var_14 *= 3;
                                arr_15 [i_0] [i_1] [i_2] [13] [i_2] = (min((~8), ((max(var_3, ((min(76, 1))))))));
                            }
                        }
                    }
                    var_15 = ((-((max((arr_13 [i_2 + 1] [i_2] [i_1] [i_2] [i_0]), 248)))));
                    var_16 = ((1 ? -1938801357 : 254));
                    arr_16 [i_2] [i_1] [i_0] [i_2] = min((arr_9 [i_2] [i_1] [i_2 + 2] [i_0]), (max((arr_9 [i_2] [i_1] [i_1] [i_2]), (arr_9 [i_2] [i_0] [i_1] [i_2 + 1]))));
                    var_17 = ((((arr_1 [i_0] [i_2 - 1]) ? var_10 : (max(24, var_3)))) | (((0 < 1) ? ((((arr_8 [i_0] [i_2] [i_2]) / var_4))) : var_5)));
                }
            }
        }
    }
    var_18 *= var_1;
    #pragma endscop
}
