/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 174335
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=174335 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/174335
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_17 ^= (var_9 >= var_9);
    var_18 = (max(var_18, var_16));
    var_19 = var_2;
    var_20 = var_15;
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 12;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 1;i_1 += 1)
        {
            {
                /* LoopNest 2 */
                for (int i_2 = 0; i_2 < 12;i_2 += 1)
                {
                    for (int i_3 = 1; i_3 < 8;i_3 += 1)
                    {
                        {
                            arr_8 [6] [4] [i_2] [10] |= (((((max(154, (max((arr_5 [i_0] [9] [9]), (arr_6 [i_0] [i_0] [i_0] [i_0] [i_0]))))))) / (~var_16)));
                            var_21 = (arr_3 [i_1]);
                            var_22 = ((((-(arr_0 [i_3 + 2] [i_2]))) | ((-(arr_0 [i_0] [i_2])))));

                            for (int i_4 = 0; i_4 < 12;i_4 += 1)
                            {
                                var_23 |= 77;
                                var_24 = (arr_2 [i_1] [8] [i_3]);
                            }
                            for (int i_5 = 0; i_5 < 12;i_5 += 1)
                            {
                                var_25 = (arr_5 [4] [4] [4]);
                                var_26 |= (max(49236, 16300));
                                var_27 = (((var_4 ? 16279 : 49236)));
                                var_28 -= ((!((max(49221, 49236)))));
                                arr_13 [i_5] [i_2] [i_2] [8] [i_2] [i_0] = (((arr_5 [i_3 + 4] [i_3 - 1] [i_3 + 4]) ? ((max(47942, -590))) : var_3));
                            }
                        }
                    }
                }
                arr_14 [5] [i_0] = var_14;
            }
        }
    }
    #pragma endscop
}
