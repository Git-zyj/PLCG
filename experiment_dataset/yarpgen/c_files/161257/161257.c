/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 161257
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=161257 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/161257
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 18;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 18;i_1 += 1)
        {
            {
                arr_6 [i_0] = 1;
                var_11 = ((((((!var_0) && 1))) != (arr_5 [i_1])));
                arr_7 [i_0] [i_0] [i_0] = 4172386148;
                /* LoopNest 2 */
                for (int i_2 = 0; i_2 < 18;i_2 += 1)
                {
                    for (int i_3 = 1; i_3 < 15;i_3 += 1)
                    {
                        {

                            /* vectorizable */
                            for (int i_4 = 0; i_4 < 18;i_4 += 1)
                            {
                                var_12 = (min(var_12, 2130303778816));
                                var_13 = (((arr_10 [i_3 + 3] [11] [1] [1]) ? (arr_15 [i_3 + 3] [i_3] [i_3 + 3] [i_3 + 3] [i_2] [i_2] [i_0]) : var_6));
                                arr_16 [i_4] [1] [i_2] [i_1] [9] = ((130944 ? (arr_9 [i_3] [i_3 + 2] [i_3] [i_3 + 1]) : (arr_9 [i_3] [i_3 + 1] [i_3 + 2] [i_3 + 2])));
                                arr_17 [i_0] [i_0] [i_2] [i_3 + 3] [i_4] = (arr_2 [i_1] [i_3]);
                                var_14 = (((0 / var_2) ? var_8 : ((((!(arr_11 [10] [i_3] [i_2] [i_1])))))));
                            }
                            for (int i_5 = 0; i_5 < 18;i_5 += 1)
                            {
                                arr_20 [0] [i_2] [i_3 + 2] [i_5] = (arr_2 [i_0] [i_0]);
                                arr_21 [3] [i_1] [i_1] [i_1] [i_1] [9] [i_1] = 1948637349789517013;
                                var_15 = (((((arr_12 [i_3 + 3] [i_3] [i_3 + 1] [i_3 - 1]) >> (((arr_12 [i_3 - 1] [i_3 + 3] [i_3 + 2] [i_3 - 1]) - 18129838375316873189))))) ? (((arr_11 [i_0] [i_1] [i_3] [i_5]) ? var_2 : (!var_1))) : (((min(36, -1)))));
                                var_16 = ((((((arr_15 [16] [16] [i_1] [16] [0] [i_3 + 2] [16]) - 4122308769))) ? ((((-32767 - 1) ? 3410846222 : (arr_15 [i_0] [i_1] [i_3] [i_3] [i_5] [i_3 + 2] [5])))) : -2147483640));
                                arr_22 [11] [i_2] [i_0] = (max(var_4, (arr_13 [i_5] [i_1])));
                            }
                            arr_23 [8] [0] = (var_7 / 2054002335);
                            arr_24 [i_0] = (((-7 && -5112083225934177178) != (((((arr_11 [i_0] [i_2] [i_1] [i_0]) != (arr_10 [i_0] [i_0] [i_2] [2]))) ? (arr_5 [i_3 + 1]) : ((-(arr_15 [1] [i_1] [1] [i_3] [i_1] [i_1] [i_3 + 1])))))));
                        }
                    }
                }
            }
        }
    }
    var_17 = var_4;
    #pragma endscop
}
