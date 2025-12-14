/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 13724
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=13724 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/13724
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 22;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 22;i_1 += 1)
        {
            {
                arr_4 [16] [i_0] |= (arr_1 [15] [i_0]);
                var_18 = var_0;
                /* LoopNest 3 */
                for (int i_2 = 0; i_2 < 22;i_2 += 1)
                {
                    for (int i_3 = 3; i_3 < 21;i_3 += 1)
                    {
                        for (int i_4 = 0; i_4 < 22;i_4 += 1)
                        {
                            {
                                arr_12 [20] = var_10;
                                arr_13 [i_0] [i_1] [i_2] [i_3] [i_4] = var_10;
                                arr_14 [i_0] [i_1] [i_1] [i_2] [i_3] [i_3] [i_4] = 202;
                                var_19 = (~(arr_8 [i_3 - 1] [i_3 - 1] [i_4]));
                            }
                        }
                    }
                }
            }
        }
    }

    for (int i_5 = 0; i_5 < 16;i_5 += 1)
    {
        arr_18 [i_5] [i_5] = var_2;
        arr_19 [i_5] [i_5] = (((arr_3 [i_5] [i_5]) ? (max((arr_1 [i_5] [i_5]), (arr_1 [i_5] [i_5]))) : var_6));
        var_20 = ((1 ? 0 : 31));
        var_21 = arr_15 [i_5];
        var_22 = ((((-(arr_2 [i_5] [i_5] [i_5]))) - ((-(arr_6 [i_5] [i_5])))));
    }
    #pragma endscop
}
