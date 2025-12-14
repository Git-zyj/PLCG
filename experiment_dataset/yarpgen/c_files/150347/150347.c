/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 150347
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=150347 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/150347
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_14 = ((-(((!var_10) ? var_7 : ((60382 ? -2147483631 : -5747))))));
    var_15 = var_13;
    var_16 = ((((max(var_6, ((var_2 ? var_9 : var_2))))) ? ((-(!var_9))) : (((!var_13) % ((-7360889533371251228 ? -2147483642 : 5164))))));
    /* LoopNest 3 */
    for (int i_0 = 0; i_0 < 23;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 23;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 23;i_2 += 1)
            {
                {
                    var_17 = (min(var_17, (2147483642 && 5156)));
                    var_18 = var_3;
                    arr_10 [i_0] [11] [i_0] = (min((((((arr_6 [i_0] [i_1] [i_2]) ? (arr_2 [i_0] [i_0]) : 4294967295)))), ((var_11 / (arr_1 [i_0] [i_1])))));
                    /* LoopNest 2 */
                    for (int i_3 = 1; i_3 < 22;i_3 += 1)
                    {
                        for (int i_4 = 0; i_4 < 23;i_4 += 1)
                        {
                            {
                                arr_15 [i_0] [i_0] [i_0] [i_0] [i_0] = (min((((arr_6 [3] [i_3 + 1] [i_2]) | (min(9223372036854775807, 34158)))), (arr_14 [i_0] [i_1] [i_2] [i_3] [i_4])));
                                var_19 = (max(((((((arr_4 [i_2] [i_1]) ? (arr_6 [i_0] [i_0] [i_0]) : (arr_11 [i_4] [i_4] [i_4] [i_4])))) ? (((3 ? (arr_5 [i_4] [i_2] [i_2]) : (arr_5 [i_4] [i_1] [i_0])))) : (min(var_6, -9223372036854775800)))), ((((arr_12 [i_3 + 1] [i_3 - 1] [i_3] [i_3 + 1]) || ((min(var_7, (arr_9 [i_0] [i_0] [i_0])))))))));
                            }
                        }
                    }
                }
            }
        }
    }
    /* LoopNest 2 */
    for (int i_5 = 1; i_5 < 1;i_5 += 1)
    {
        for (int i_6 = 1; i_6 < 13;i_6 += 1)
        {
            {
                arr_22 [i_6] = (arr_0 [i_5 - 1]);
                var_20 = (((((-(max(var_8, 70))))) ? ((min(var_9, (arr_2 [i_6] [i_6])))) : (arr_17 [i_5 - 1] [i_6 + 1])));
                /* LoopNest 2 */
                for (int i_7 = 0; i_7 < 15;i_7 += 1)
                {
                    for (int i_8 = 0; i_8 < 15;i_8 += 1)
                    {
                        {
                            arr_29 [i_6] [6] [i_7] [i_8] = (min((max((arr_20 [i_5 - 1] [i_5 - 1] [i_6 - 1]), ((min(var_6, var_12))))), (arr_25 [i_8] [i_8] [i_7] [i_8] [i_8])));
                            var_21 = ((~(arr_19 [i_5 - 1])));
                            var_22 = (max(var_22, ((max(1, (1027583528 % 1431536232))))));
                            var_23 = (((~-9223372036854775800) ? ((((arr_27 [i_5] [i_5] [i_5] [i_6] [i_5] [i_5]) ? (arr_27 [i_5] [i_5] [i_6] [i_6] [i_7] [i_7]) : (arr_27 [i_6] [i_6 + 2] [i_6 - 1] [i_6] [i_6] [13])))) : (((arr_27 [i_5] [i_6] [i_6] [i_6] [i_6] [i_7]) ? var_6 : 18446744073709551613))));
                        }
                    }
                }
                var_24 = (((-32767 - 1) ? 1 : 15));
            }
        }
    }
    #pragma endscop
}
