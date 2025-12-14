/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 126502
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=126502 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/126502
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 3 */
    for (int i_0 = 0; i_0 < 23;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 23;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 23;i_2 += 1)
            {
                {
                    var_17 = ((((max((max(var_8, 2406975481)), -2406975479))) ? (((((var_5 ? 52 : var_13))) ? var_13 : (arr_3 [i_1]))) : (((arr_11 [10] [i_0]) / -var_16))));
                    /* LoopNest 2 */
                    for (int i_3 = 1; i_3 < 21;i_3 += 1)
                    {
                        for (int i_4 = 3; i_4 < 21;i_4 += 1)
                        {
                            {
                                var_18 = (min(var_18, ((((((~((var_10 ? (arr_7 [16] [16] [i_4]) : var_5))))) ? (max(117, 1369220185)) : (((var_5 <= var_8) ? (arr_8 [i_4 + 1] [i_4 - 2] [i_4 + 1]) : (max(1369220203, var_0)))))))));
                                arr_16 [i_3] [20] [i_2] [i_1] [i_3] = arr_12 [i_0] [i_1] [i_1] [13];
                            }
                        }
                    }
                }
            }
        }
    }
    var_19 = (((var_2 ^ var_9) << (((((var_4 ? var_16 : var_3))) - 18446744072914110491))));

    for (int i_5 = 0; i_5 < 21;i_5 += 1)
    {
        var_20 = ((((((arr_12 [i_5] [i_5] [i_5] [i_5]) ? (arr_2 [i_5]) : (arr_2 [i_5])))) ? (~24151) : (((arr_2 [i_5]) ? var_9 : var_10))));
        var_21 = ((-((max((arr_15 [i_5] [i_5] [i_5] [1] [i_5]), -12692)))));
    }
    var_22 = ((var_16 ? var_13 : 8944643950427301713));
    #pragma endscop
}
