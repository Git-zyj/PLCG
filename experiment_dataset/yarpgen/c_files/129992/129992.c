/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 129992
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=129992 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/129992
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_20 |= var_1;
    var_21 = var_16;

    for (int i_0 = 0; i_0 < 1;i_0 += 1)
    {
        arr_4 [i_0] [i_0] = ((0 | (arr_2 [i_0])));
        /* LoopNest 2 */
        for (int i_1 = 3; i_1 < 15;i_1 += 1)
        {
            for (int i_2 = 3; i_2 < 15;i_2 += 1)
            {
                {
                    /* LoopNest 2 */
                    for (int i_3 = 0; i_3 < 16;i_3 += 1)
                    {
                        for (int i_4 = 0; i_4 < 16;i_4 += 1)
                        {
                            {
                                var_22 *= 3;
                                arr_16 [i_0] [i_1] [i_2] [i_0] [i_1] = (arr_1 [i_0] [i_1]);
                            }
                        }
                    }
                    var_23 = (((-108 ^ (arr_5 [i_1 - 1] [i_0]))));
                }
            }
        }
        arr_17 [i_0] = (i_0 % 2 == 0) ? (((((((var_14 >> (((arr_12 [i_0]) - 946230308)))))) && ((max(((max(var_14, var_4))), (((arr_5 [i_0] [i_0]) / (arr_15 [i_0] [i_0] [i_0] [i_0] [i_0] [i_0] [i_0]))))))))) : (((((((var_14 >> (((((arr_12 [i_0]) - 946230308)) - 433918899)))))) && ((max(((max(var_14, var_4))), (((arr_5 [i_0] [i_0]) / (arr_15 [i_0] [i_0] [i_0] [i_0] [i_0] [i_0] [i_0])))))))));
        var_24 *= -4933;
    }
    /* vectorizable */
    for (int i_5 = 0; i_5 < 17;i_5 += 1)
    {
        var_25 = (var_6 ? (arr_18 [i_5] [i_5]) : (arr_19 [i_5]));
        arr_22 [i_5] [i_5] = var_17;
        arr_23 [i_5] = (var_9 ? (((((arr_21 [i_5]) || 7)))) : (arr_19 [i_5]));
    }
    var_26 = (max(var_26, ((-((var_16 ? var_16 : var_0))))));
    #pragma endscop
}
