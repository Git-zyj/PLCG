/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 138504
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=138504 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/138504
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_14 = var_0;
    var_15 = -7;
    var_16 = (min(var_16, var_4));
    var_17 = var_3;
    /* LoopNest 3 */
    for (int i_0 = 0; i_0 < 15;i_0 += 1)
    {
        for (int i_1 = 2; i_1 < 13;i_1 += 1)
        {
            for (int i_2 = 3; i_2 < 12;i_2 += 1)
            {
                {
                    var_18 *= (min(-505305828, (((arr_4 [i_1]) << ((((-(arr_1 [i_1 - 2]))) - 26417))))));

                    /* vectorizable */
                    for (int i_3 = 1; i_3 < 13;i_3 += 1)
                    {
                        arr_10 [i_0] [i_0] [i_2] [i_0] = (10 ? var_12 : (arr_0 [i_1] [i_0]));
                        arr_11 [i_0] [2] [i_0] [i_3] = (((arr_4 [i_0]) + (((arr_5 [i_1] [7] [i_3]) ? 18446744073709551613 : (arr_7 [14])))));
                        arr_12 [i_0] [i_1 - 1] [i_1] [0] [i_0] = (((arr_0 [i_1 - 2] [i_0]) >> (((arr_8 [i_1 + 1] [i_1 + 1] [i_1 - 2] [i_1 - 1]) - 6017195482896444404))));
                        var_19 += 8638;
                    }
                    arr_13 [i_1] [i_0] [12] = (210 + (arr_1 [i_1 + 1]));
                }
            }
        }
    }
    #pragma endscop
}
