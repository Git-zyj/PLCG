/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 132457
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=132457 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/132457
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_17 = ((((((var_2 ? var_16 : 1))) ? (min(0, var_11)) : ((min(658007328, 26036))))));
    /* LoopNest 3 */
    for (int i_0 = 1; i_0 < 20;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 1;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 21;i_2 += 1)
            {
                {
                    arr_8 [i_0] = (((((-(max(16515072, var_6))))) ? (min((min(var_5, -658007329)), ((max((arr_6 [i_0]), (arr_3 [i_2] [i_1] [i_2])))))) : (((((max(var_10, var_3))) ? var_13 : ((var_7 ? (arr_5 [i_2] [1] [i_0]) : 0)))))));
                    /* LoopNest 2 */
                    for (int i_3 = 1; i_3 < 20;i_3 += 1)
                    {
                        for (int i_4 = 0; i_4 < 1;i_4 += 1)
                        {
                            {
                                arr_13 [i_0] [i_0] [i_0 - 1] [11] [11] [i_0] = 658007328;
                                arr_14 [i_0] [i_0] [i_0] [i_0] [i_0 - 1] [i_0] = (arr_9 [i_0] [i_3] [i_2] [i_0]);
                                arr_15 [i_0] [i_2] [i_0] = (((((arr_12 [i_0] [i_0] [i_0 - 1] [i_0] [i_4]) - (arr_12 [i_0] [i_0] [i_0 - 1] [i_1] [i_0 - 1]))) - ((min((arr_12 [i_0] [i_0 - 1] [i_0 - 1] [i_3 - 1] [i_3]), (arr_12 [i_0] [i_0] [i_0 - 1] [i_4] [i_0 - 1]))))));
                                arr_16 [i_1] [i_2] [i_0] [i_4] = (((min((((arr_3 [i_4] [i_3] [i_1]) ? var_10 : var_5)), (max(4240293147, 3270117281)))) << (((((arr_5 [i_3 - 1] [i_3 - 1] [i_3 - 1]) ? 2921427425 : (1198798789 < -19))) - 2921427400))));
                                arr_17 [i_2] [i_2] [i_0] [i_2] [i_0] [i_0] [i_2] = (((min(var_15, var_1)) / (arr_1 [i_3 + 1])));
                            }
                        }
                    }
                    var_18 = (min((((min((arr_0 [i_2] [i_1]), (arr_6 [i_0]))))), (max(var_6, ((17 ? var_6 : (arr_5 [i_2] [i_1] [i_0 - 1])))))));
                    arr_18 [i_0] [i_1] = min((((arr_5 [i_0] [i_0] [i_2]) ^ ((var_6 ^ (arr_12 [i_0] [i_2] [i_2] [i_2] [i_2]))))), ((min(var_13, 1))));
                }
            }
        }
    }
    #pragma endscop
}
