/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 181642
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=181642 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/181642
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 23;i_0 += 1)
    {
        for (int i_1 = 1; i_1 < 19;i_1 += 1)
        {
            {
                arr_6 [i_0] = (((min(-var_1, var_11))) ? (((arr_3 [i_0] [i_1]) | (((arr_3 [1] [i_1]) & var_5)))) : ((min(((((arr_3 [8] [i_1]) <= var_5))), (min(var_12, (arr_4 [15] [i_0] [i_1])))))));
                arr_7 [i_0] = (((~62) ? ((((min(var_3, var_3))) ? (((var_3 ? var_5 : (arr_0 [i_0])))) : var_3)) : (((((arr_0 [i_0]) >= (min(var_4, (arr_0 [i_0])))))))));
            }
        }
    }
    var_14 = var_9;
    /* LoopNest 2 */
    for (int i_2 = 0; i_2 < 11;i_2 += 1)
    {
        for (int i_3 = 1; i_3 < 8;i_3 += 1)
        {
            {
                arr_14 [i_2] [5] = ((var_10 ? ((((((var_12 ? (arr_12 [i_2] [i_2] [i_2]) : 1767974172550050311)) > ((min((arr_13 [i_2]), (arr_9 [i_3] [i_3])))))))) : (((arr_13 [i_2]) / (arr_2 [i_3 + 3])))));
                /* LoopNest 3 */
                for (int i_4 = 0; i_4 < 11;i_4 += 1)
                {
                    for (int i_5 = 0; i_5 < 11;i_5 += 1)
                    {
                        for (int i_6 = 0; i_6 < 11;i_6 += 1)
                        {
                            {
                                arr_23 [i_2] [i_3 + 1] [i_4] [i_5] [i_4] [i_5] [i_2] = min((((arr_19 [i_2] [i_3] [i_3] [i_2]) ? (var_9 ^ var_11) : ((-(arr_3 [i_2] [i_6]))))), (((!((((arr_1 [i_5]) ? (arr_11 [i_5] [9]) : (arr_2 [i_4]))))))));
                                arr_24 [i_2] [i_2] [i_2] [i_2] [i_2] = (max((max((arr_20 [i_3 + 2] [i_3 + 2]), (max(var_1, var_9)))), -1643955690));
                            }
                        }
                    }
                }
            }
        }
    }
    #pragma endscop
}
