/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 175300
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=175300 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/175300
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_13 = ((~((var_5 ? var_7 : (var_6 >= var_12)))));

    for (int i_0 = 3; i_0 < 12;i_0 += 1)
    {
        var_14 = (arr_0 [i_0]);
        var_15 = (((!(((var_4 ? var_5 : (arr_0 [i_0])))))));
        var_16 = (!-var_3);
        var_17 = ((-(var_10 ^ var_11)));
    }
    /* vectorizable */
    for (int i_1 = 0; i_1 < 1;i_1 += 1)
    {
        arr_5 [i_1] [i_1] = var_5;
        /* LoopNest 2 */
        for (int i_2 = 1; i_2 < 12;i_2 += 1)
        {
            for (int i_3 = 0; i_3 < 14;i_3 += 1)
            {
                {
                    var_18 = (arr_2 [i_2]);
                    /* LoopNest 2 */
                    for (int i_4 = 2; i_4 < 11;i_4 += 1)
                    {
                        for (int i_5 = 2; i_5 < 13;i_5 += 1)
                        {
                            {
                                arr_15 [i_1] [i_2] [i_3] [i_4] [i_5] = (arr_10 [i_2 + 1] [i_2 + 1]);
                                arr_16 [i_5] [i_2] = arr_9 [i_4 - 1] [i_3];
                                arr_17 [i_1] [i_2] [i_3] [i_3] [i_5] [i_1] [i_5] = ((arr_8 [i_2 + 2] [i_2 + 1]) ? (arr_8 [i_2 + 1] [i_2 - 1]) : (arr_8 [i_2 + 1] [i_2 - 1]));
                                var_19 = (((arr_12 [i_1] [i_2] [i_3] [i_1] [i_3]) * (arr_13 [i_1] [i_1] [i_1] [i_1] [i_1] [i_1])));
                            }
                        }
                    }
                }
            }
        }
        var_20 = (((var_8 ? (arr_11 [i_1] [i_1] [i_1] [i_1] [i_1]) : var_2)));
        var_21 = var_10;
    }
    for (int i_6 = 0; i_6 < 23;i_6 += 1)
    {
        var_22 = arr_18 [i_6];
        arr_21 [i_6] = ((+(((((arr_18 [i_6]) ? var_10 : var_9)) << (((arr_20 [i_6]) - 1772702433))))));
        arr_22 [i_6] [i_6] = var_9;
    }
    #pragma endscop
}
