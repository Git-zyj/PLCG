/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 160491
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=160491 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/160491
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_18 = var_12;
    /* LoopNest 3 */
    for (int i_0 = 0; i_0 < 22;i_0 += 1)
    {
        for (int i_1 = 1; i_1 < 18;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 22;i_2 += 1)
            {
                {
                    var_19 = ((+((((~64) <= 14223)))));
                    /* LoopNest 2 */
                    for (int i_3 = 2; i_3 < 18;i_3 += 1)
                    {
                        for (int i_4 = 0; i_4 < 22;i_4 += 1)
                        {
                            {
                                var_20 = (min(var_20, ((((max((((arr_4 [i_3] [i_1] [i_3]) || 65535)), (((arr_8 [i_0]) != (arr_8 [i_2]))))) ? ((((((((var_15 + 2147483647) << (((arr_5 [i_2] [i_3] [i_4]) - 47503))))) <= ((14095 ? 26195 : 2598816744)))))) : 749291814)))));
                                var_21 = (min(((var_11 ? ((max(var_17, var_13))) : (min((arr_3 [1] [i_1]), 1)))), ((min(((min((arr_5 [i_1 - 1] [i_2] [i_4]), 2))), (arr_11 [i_1] [i_1] [i_1] [i_1 - 1] [i_1 - 1]))))));
                                arr_13 [i_0] [i_1 - 1] [i_1 - 1] [i_1 - 1] [i_4] = var_13;
                                var_22 = (min(((2622860745178252670 | (arr_6 [i_0] [i_0] [i_3 - 2]))), (min(var_11, (arr_6 [i_0] [i_0] [i_3 + 2])))));
                            }
                        }
                    }
                }
            }
        }
    }
    var_23 = ((-((4294967295 ? 1858666222 : 26172))));
    var_24 = (min(var_24, (((min(var_12, var_11))))));
    var_25 = var_4;
    #pragma endscop
}
