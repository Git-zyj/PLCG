/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 177345
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=177345 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/177345
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_15 = ((-((134217727 ? var_9 : (-1139496422779044477 != 215)))));
    /* LoopNest 3 */
    for (int i_0 = 2; i_0 < 22;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 24;i_1 += 1)
        {
            for (int i_2 = 2; i_2 < 20;i_2 += 1)
            {
                {
                    var_16 = (max(var_16, (((-((((max(-8840, 1))) << (((((arr_1 [i_0 + 2]) ? var_4 : 1)) - 664818682)))))))));
                    var_17 *= (arr_7 [i_0] [i_1] [i_2] [i_0]);
                    /* LoopNest 2 */
                    for (int i_3 = 0; i_3 < 24;i_3 += 1)
                    {
                        for (int i_4 = 3; i_4 < 21;i_4 += 1)
                        {
                            {
                                arr_14 [i_0] [i_1] [3] [i_3] [i_4] = (((((-8 ? 1 : 78))) ? (3 || -17) : -791932939));
                                arr_15 [i_2] [i_2] [i_2] [i_0] [18] = (arr_9 [19] [i_1] [i_2] [i_3] [i_0]);
                                arr_16 [i_0] [i_3] [i_2 + 1] [i_1] [i_0] = (((((((3682226498 ? 254 : 18312837562566273544)) / (~var_2)))) ? var_11 : (arr_0 [i_0 - 2])));
                            }
                        }
                    }
                    arr_17 [i_0] [i_0] [19] = var_1;
                }
            }
        }
    }
    var_18 += (((((var_6 ? (var_9 > var_4) : (var_6 && var_13)))) ? (-1021437226 / var_8) : var_0));
    var_19 = ((var_11 / (((var_11 && ((max(var_9, var_14))))))));
    #pragma endscop
}
