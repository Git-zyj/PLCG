/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 10643
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=10643 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/10643
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_16 = (~var_12);
    var_17 = var_7;

    /* vectorizable */
    for (int i_0 = 0; i_0 < 23;i_0 += 1)
    {
        var_18 += ((arr_1 [i_0]) - ((var_12 | (arr_0 [i_0]))));
        var_19 = (-(arr_1 [i_0]));
    }
    /* LoopNest 2 */
    for (int i_1 = 3; i_1 < 20;i_1 += 1)
    {
        for (int i_2 = 0; i_2 < 21;i_2 += 1)
        {
            {
                /* LoopNest 3 */
                for (int i_3 = 3; i_3 < 20;i_3 += 1)
                {
                    for (int i_4 = 0; i_4 < 21;i_4 += 1)
                    {
                        for (int i_5 = 0; i_5 < 21;i_5 += 1)
                        {
                            {
                                var_20 = (arr_14 [i_1] [i_1] [i_1 - 2] [i_1 - 2] [12]);
                                arr_19 [i_1] [i_1] [7] [i_4] [i_4] [i_5] = (((arr_13 [i_2] [i_3 - 2] [i_1] [16]) * (((-(6654 * -23022))))));
                                var_21 += (max(-23016, ((~(arr_17 [i_1 - 3] [i_1 - 3] [i_1 + 1] [20] [i_1])))));
                            }
                        }
                    }
                }
                arr_20 [i_1] [i_1] = (arr_12 [i_1] [i_2] [i_1] [i_2]);
                arr_21 [i_1] [i_1] = (((((arr_17 [i_1] [i_1] [i_2] [i_1] [i_2]) ? (max((arr_3 [i_1]), var_14)) : (arr_10 [i_1 - 3] [i_1]))) < (((~(arr_18 [i_1] [i_1] [i_1] [i_1] [i_1]))))));
            }
        }
    }
    var_22 = ((~((var_6 ? -598632551 : var_4))));
    #pragma endscop
}
