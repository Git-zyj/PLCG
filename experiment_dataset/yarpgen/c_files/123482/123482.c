/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 123482
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=123482 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/123482
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_13 = (max(var_13, var_7));
    var_14 = var_8;

    for (int i_0 = 0; i_0 < 21;i_0 += 1)
    {
        /* LoopNest 3 */
        for (int i_1 = 0; i_1 < 21;i_1 += 1)
        {
            for (int i_2 = 2; i_2 < 19;i_2 += 1)
            {
                for (int i_3 = 0; i_3 < 21;i_3 += 1)
                {
                    {
                        var_15 += (arr_6 [i_0]);

                        for (int i_4 = 0; i_4 < 21;i_4 += 1)
                        {
                            arr_14 [i_4] [i_3] [i_2] [i_3] [i_0] = (max((max(var_12, var_1)), (((!((max(-19465, (arr_0 [i_0])))))))));
                            arr_15 [i_4] [i_3] [i_2] [i_3] [10] = ((18446744073709551615 && (((~(max(var_9, (arr_13 [i_1] [i_2] [i_4]))))))));
                            arr_16 [0] [16] [16] [1] [10] [0] [i_2] &= (((arr_5 [i_0]) - (((((arr_6 [i_4]) < var_6)) ? ((9223372036854775807 ? (arr_6 [i_1]) : (arr_12 [i_0] [i_1] [i_1]))) : ((max((arr_10 [8]), 36762)))))));
                            arr_17 [9] [9] [i_4] [i_4] [i_3] = max((arr_10 [i_3]), (arr_1 [i_2 - 1]));
                        }
                    }
                }
            }
        }
        var_16 *= (((max((arr_5 [i_0]), -17686))));
    }
    for (int i_5 = 0; i_5 < 12;i_5 += 1) /* same iter space */
    {
        arr_20 [i_5] = var_6;
        /* LoopNest 2 */
        for (int i_6 = 0; i_6 < 1;i_6 += 1)
        {
            for (int i_7 = 0; i_7 < 12;i_7 += 1)
            {
                {
                    var_17 = (max(var_17, ((((arr_2 [i_6]) ? (arr_13 [7] [i_6] [i_7]) : -5249)))));
                    var_18 += (26696 && var_6);
                }
            }
        }
        var_19 = var_7;
    }
    for (int i_8 = 0; i_8 < 12;i_8 += 1) /* same iter space */
    {
        var_20 = (max((((!(arr_13 [i_8] [16] [6])))), (arr_13 [i_8] [i_8] [i_8])));
        arr_29 [i_8] = (arr_4 [i_8] [18] [i_8]);
    }
    var_21 = var_2;
    #pragma endscop
}
