/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 120295
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=120295 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/120295
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_18 = (max((max(((var_1 ? var_5 : var_7)), ((min(var_4, var_13))))), (((-((var_3 << (var_4 - 1977804996))))))));
    /* LoopNest 2 */
    for (int i_0 = 1; i_0 < 13;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 14;i_1 += 1)
        {
            {
                arr_7 [9] [i_1] [i_1] = (arr_4 [i_0 - 1] [i_1]);
                var_19 = ((var_2 ? (arr_5 [i_0] [i_1] [i_0]) : ((((((arr_2 [i_0] [i_1]) <= (arr_0 [i_1] [i_0 - 1])))) - (arr_1 [3])))));
                arr_8 [i_0] [i_0] [i_1] = -var_9;
                arr_9 [i_0] [i_1] = arr_2 [i_1] [i_0];
                var_20 = ((-((~(min((arr_1 [i_1]), var_6))))));
            }
        }
    }
    /* LoopNest 2 */
    for (int i_2 = 0; i_2 < 24;i_2 += 1)
    {
        for (int i_3 = 0; i_3 < 24;i_3 += 1)
        {
            {
                /* LoopNest 3 */
                for (int i_4 = 1; i_4 < 1;i_4 += 1)
                {
                    for (int i_5 = 0; i_5 < 1;i_5 += 1)
                    {
                        for (int i_6 = 0; i_6 < 24;i_6 += 1)
                        {
                            {
                                var_21 |= (((((arr_16 [i_2]) ? (((arr_19 [i_3] [i_3] [i_3] [i_2]) ? (arr_22 [i_2] [i_6]) : (arr_18 [0] [i_2] [i_3] [i_4] [i_5] [14]))) : (arr_14 [i_6] [i_3])))));
                                arr_23 [i_5] [i_5] [6] [i_2] [i_5] = (arr_13 [i_4] [i_2]);
                                arr_24 [i_2] = (i_2 % 2 == zero) ? (((((((((arr_14 [i_2] [i_2]) ? var_5 : var_15)) >> (((arr_22 [i_4 - 1] [i_2]) - 511825041))))) ? (arr_18 [i_6] [i_6] [9] [i_6] [9] [i_6]) : (-var_8 & var_15)))) : (((((((((arr_14 [i_2] [i_2]) ? var_5 : var_15)) >> (((((arr_22 [i_4 - 1] [i_2]) - 511825041)) - 571457667))))) ? (arr_18 [i_6] [i_6] [9] [i_6] [9] [i_6]) : (-var_8 & var_15))));
                                arr_25 [i_3] |= ((+(((var_6 <= var_16) << (((!(arr_15 [i_2] [i_3]))))))));
                                var_22 = ((!(((+(max((arr_22 [21] [i_2]), (arr_12 [i_5]))))))));
                            }
                        }
                    }
                }
                var_23 = (max(var_23, (((~((~(arr_21 [i_2] [i_2] [i_2] [i_2] [i_2] [i_2] [i_2]))))))));
            }
        }
    }
    #pragma endscop
}
