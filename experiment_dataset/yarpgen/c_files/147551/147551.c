/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 147551
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=147551 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/147551
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 1;i_0 += 1)
    {
        for (int i_1 = 4; i_1 < 20;i_1 += 1)
        {
            {
                var_17 = (arr_2 [i_0] [i_1]);

                for (int i_2 = 0; i_2 < 21;i_2 += 1)
                {
                    var_18 &= ((min(var_0, var_7)));

                    for (int i_3 = 1; i_3 < 1;i_3 += 1)
                    {
                        var_19 = ((var_6 % (max(357590034, -3095790728716401989))));
                        var_20 &= var_10;
                    }
                    for (int i_4 = 0; i_4 < 21;i_4 += 1)
                    {
                        var_21 = (max(var_21, var_3));
                        var_22 = (((arr_0 [i_1 + 1]) * ((-357590034 ? 24835 : 342594963))));
                    }
                    for (int i_5 = 1; i_5 < 19;i_5 += 1)
                    {
                        var_23 = ((((min(106, 143))) ? (((~var_6) ? (min(var_1, var_15)) : (arr_5 [9] [16] [i_5]))) : (var_13 < var_8)));
                        arr_14 [i_2] [3] [i_1] [i_2] = var_9;
                        var_24 = (arr_3 [11]);
                    }
                    var_25 = (max(var_25, (arr_11 [10] [i_1 - 2] [14] [10])));
                }
                /* vectorizable */
                for (int i_6 = 0; i_6 < 21;i_6 += 1)
                {
                    var_26 |= var_15;
                    var_27 *= ((var_15 ? var_0 : var_6));
                    var_28 = ((-(arr_6 [1] [18] [16])));
                    var_29 = (arr_5 [14] [i_1] [6]);
                }
                for (int i_7 = 3; i_7 < 17;i_7 += 1)
                {
                    var_30 = (((var_2 * var_16) ? (((arr_2 [i_1 - 4] [i_7 + 2]) ? var_10 : (arr_15 [i_1 - 4] [i_7] [i_7] [18]))) : ((((arr_15 [i_1 - 3] [i_1] [10] [13]) ? (arr_2 [i_1 + 1] [i_7 - 2]) : (arr_15 [i_1 - 2] [1] [i_7] [1]))))));
                    var_31 = ((((((arr_2 [18] [i_1]) ? (max((arr_19 [5] [5] [3]), var_6)) : (((var_5 ? var_5 : (arr_16 [19] [11] [2]))))))) ? (((arr_19 [i_7] [i_1] [5]) / (arr_20 [i_1 - 3] [i_1 - 3] [12] [i_7 - 3]))) : var_7));
                }
            }
        }
    }
    var_32 = ((min((min(var_3, var_9)), ((min(var_1, var_8))))));
    #pragma endscop
}
