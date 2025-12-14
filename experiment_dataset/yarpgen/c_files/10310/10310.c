/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 10310
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=10310 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/10310
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    /* vectorizable */
    for (int i_0 = 0; i_0 < 1;i_0 += 1)
    {
        var_13 *= (((arr_1 [7] [i_0]) % (arr_1 [i_0] [i_0])));
        var_14 = (!222);
        var_15 = (((arr_1 [i_0] [i_0]) + (arr_1 [i_0] [i_0])));
    }
    /* vectorizable */
    for (int i_1 = 0; i_1 < 22;i_1 += 1)
    {
        /* LoopNest 2 */
        for (int i_2 = 0; i_2 < 22;i_2 += 1)
        {
            for (int i_3 = 0; i_3 < 1;i_3 += 1)
            {
                {
                    var_16 = (max(var_16, (arr_6 [i_1])));
                    var_17 = (((arr_7 [i_3] [i_1]) ? ((var_5 ? var_3 : (arr_8 [i_1]))) : (arr_7 [i_2] [i_2])));
                    /* LoopNest 2 */
                    for (int i_4 = 0; i_4 < 22;i_4 += 1)
                    {
                        for (int i_5 = 2; i_5 < 21;i_5 += 1)
                        {
                            {
                                var_18 = (((~(arr_9 [i_2] [i_2] [i_3]))));
                                arr_18 [i_5 + 1] [i_2] [i_4] [i_2] [i_2] [i_1] [i_1] = (((arr_13 [i_1] [i_5 - 1] [i_5] [i_5 + 1] [i_5] [i_5 + 1]) ? (arr_5 [10] [i_4]) : ((var_0 ^ (arr_5 [2] [16])))));
                            }
                        }
                    }
                }
            }
        }
        var_19 = ((!((!(arr_11 [1] [1] [i_1] [i_1])))));
    }
    var_20 &= ((-var_3 / (min(((var_10 ? var_9 : var_0)), ((var_7 ? var_12 : var_12))))));
    var_21 = var_6;
    #pragma endscop
}
