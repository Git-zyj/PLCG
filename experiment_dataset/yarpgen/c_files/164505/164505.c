/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 164505
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=164505 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/164505
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 13;i_0 += 1)
    {
        for (int i_1 = 1; i_1 < 1;i_1 += 1)
        {
            {
                var_17 = (((((((((arr_1 [i_0]) ? 56016 : var_14))) ? (arr_5 [3] [i_1]) : (!56016)))) ? 9519 : (((arr_1 [0]) ? (((((arr_5 [i_1] [i_0]) != 29384)))) : var_13))));
                arr_6 [i_1] = (((arr_1 [i_0]) + var_12));
                /* LoopNest 2 */
                for (int i_2 = 2; i_2 < 12;i_2 += 1)
                {
                    for (int i_3 = 0; i_3 < 13;i_3 += 1)
                    {
                        {

                            /* vectorizable */
                            for (int i_4 = 0; i_4 < 13;i_4 += 1)
                            {
                                var_18 = ((~((18055611039600511107 ? var_11 : (arr_4 [i_0] [i_4])))));
                                var_19 = ((arr_3 [i_1 - 1] [i_1 - 1] [i_2 - 1]) ? var_9 : (arr_3 [i_1 - 1] [i_1 - 1] [i_2 - 1]));
                                var_20 = (~var_16);
                                arr_16 [12] [i_1] [0] [i_3] [12] [i_1] [i_1] = 4650398748063800491;
                            }
                            for (int i_5 = 0; i_5 < 13;i_5 += 1)
                            {
                                arr_20 [i_0] [i_1] [i_0] [2] [i_2] [i_3] [i_5] = (min((((arr_11 [i_0] [i_0] [i_0] [i_1]) ? (((-(arr_7 [i_0] [i_5] [i_2])))) : 391133034109040483)), 5543827983862375213));
                                var_21 *= (min(56016, ((((arr_11 [i_0] [i_1 - 1] [i_2] [i_0]) * 391133034109040473)))));
                                var_22 = max(var_15, ((((arr_15 [i_2 - 2] [i_1] [i_2 - 2] [i_1] [i_1 - 1]) > (arr_4 [i_1 - 1] [i_1 - 1])))));
                                var_23 *= ((~(~var_13)));
                            }
                            var_24 = var_5;
                            var_25 = ((var_1 ? ((((!(var_16 < var_8))))) : var_11));
                        }
                    }
                }
            }
        }
    }
    var_26 = var_8;
    var_27 = var_15;
    #pragma endscop
}
