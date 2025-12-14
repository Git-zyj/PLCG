/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 105035
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=105035 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/105035
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 1;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 13;i_1 += 1)
        {
            {
                arr_4 [i_0] [i_1] [i_1] = (((var_13 != 49833) ? -var_5 : (arr_3 [i_0])));
                /* LoopNest 3 */
                for (int i_2 = 0; i_2 < 13;i_2 += 1)
                {
                    for (int i_3 = 0; i_3 < 13;i_3 += 1)
                    {
                        for (int i_4 = 4; i_4 < 12;i_4 += 1)
                        {
                            {
                                var_18 = (((arr_6 [i_0] [i_3] [i_4 + 1]) ? ((~(arr_7 [i_4 - 2] [i_4 + 1]))) : ((((arr_13 [i_3] [i_4 - 4] [i_4] [i_4 - 4] [i_4 - 1]) && (arr_7 [i_4 + 1] [i_4 - 3]))))));
                                var_19 = (((((var_3 ? ((~(arr_1 [10]))) : ((max(var_11, var_12)))))) ? (((((((70 >> (var_14 - 65)))) && (arr_3 [10]))))) : ((var_1 - (arr_1 [11])))));
                                arr_14 [i_0] [2] [i_0] [i_3] [i_4 - 4] = (max((((~((var_9 ? (arr_6 [i_2] [i_1] [i_0]) : (arr_13 [i_0] [i_1] [i_2] [1] [7])))))), ((var_0 ? (arr_7 [i_4 - 2] [i_4 - 2]) : var_13))));
                            }
                        }
                    }
                }
            }
        }
    }
    /* LoopNest 2 */
    for (int i_5 = 2; i_5 < 7;i_5 += 1)
    {
        for (int i_6 = 3; i_6 < 8;i_6 += 1)
        {
            {
                var_20 = ((((-(arr_15 [i_6 + 2]))) ^ var_7));
                arr_20 [i_6] = var_6;
                var_21 = (((((((!var_0) ? (((-125 + 2147483647) << (((((arr_9 [i_6] [i_6] [i_6] [i_6]) + 1506974345)) - 29)))) : -14678)) + 2147483647)) >> (-var_10 + 35)));
            }
        }
    }
    var_22 = var_12;
    #pragma endscop
}
