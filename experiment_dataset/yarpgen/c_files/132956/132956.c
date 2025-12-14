/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 132956
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=132956 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/132956
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 3 */
    for (int i_0 = 1; i_0 < 13;i_0 += 1)
    {
        for (int i_1 = 2; i_1 < 14;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 16;i_2 += 1)
            {
                {
                    /* LoopNest 2 */
                    for (int i_3 = 2; i_3 < 13;i_3 += 1)
                    {
                        for (int i_4 = 1; i_4 < 14;i_4 += 1)
                        {
                            {
                                var_20 = (min(var_20, (((((((((arr_7 [i_0] [i_0] [i_0] [i_0]) ? var_14 : var_0))) ? (min((arr_7 [6] [i_1 + 1] [i_1 + 2] [i_1 + 2]), (arr_3 [i_0] [i_1] [i_1]))) : ((((arr_2 [i_1] [i_1]) >> (((arr_4 [i_0] [i_0]) + 5266422700481238634))))))) | ((((~(arr_6 [i_0 + 3]))) | (arr_10 [11] [i_2] [i_1]))))))));
                                var_21 = ((+(((arr_6 [i_3 + 2]) ? (max(var_6, (arr_6 [i_0]))) : (((arr_3 [i_1] [i_2] [i_3]) | (arr_3 [i_3 - 1] [i_1] [i_0])))))));
                                var_22 = (max((arr_1 [i_3]), (((((arr_2 [i_2] [i_1]) && var_11)) ? (max((arr_3 [i_0] [i_3] [i_0]), (arr_2 [i_0] [i_0]))) : var_17))));
                                arr_12 [i_0] [i_0] [i_0] [i_0 + 3] [i_0] = (((((min((arr_2 [i_3 + 2] [i_2]), (arr_3 [14] [i_1] [i_1])))) ? (~var_3) : (((arr_4 [i_0] [i_1]) ? var_11 : (arr_6 [i_0]))))) != (arr_4 [1] [i_4]));
                                arr_13 [i_3 - 2] = (min((((max((arr_11 [i_0 + 1] [i_0 + 1] [i_2] [12] [i_2] [i_4] [i_4]), (arr_6 [i_2]))))), (((arr_2 [i_1 - 2] [i_0 - 1]) - (arr_6 [i_0])))));
                            }
                        }
                    }
                    /* LoopNest 2 */
                    for (int i_5 = 0; i_5 < 1;i_5 += 1)
                    {
                        for (int i_6 = 0; i_6 < 16;i_6 += 1)
                        {
                            {
                                var_23 = (max((min((((arr_17 [i_0] [i_5] [i_0] [i_0]) ? var_8 : (arr_5 [i_0] [i_1] [13] [i_6]))), ((min((arr_10 [i_0] [i_1] [i_0]), var_3))))), ((((max((arr_2 [i_0] [i_1]), (arr_17 [i_0] [i_0] [i_0] [i_0 - 1])))) ? (arr_16 [i_0 + 1] [i_1 - 2] [i_1 - 1]) : (((min(var_11, (arr_8 [i_6] [i_6] [i_6] [i_6] [i_6])))))))));
                                arr_21 [i_6] [i_6] [i_2] [i_2] [i_2] = (arr_6 [i_2]);
                                arr_22 [i_1] [i_0 - 1] [i_6] [i_2] [i_6] [i_1] [i_0 - 1] = (arr_15 [i_1 - 2] [i_1] [i_2] [i_5]);
                                arr_23 [1] [i_1] [i_2] [1] [i_5] [i_6] = ((!((min((((arr_17 [i_1] [1] [i_5] [i_6]) ? (arr_9 [i_0] [i_0] [i_0] [i_0]) : (arr_6 [i_6]))), (!var_0))))));
                            }
                        }
                    }
                    var_24 = ((var_6 != (min((((!(arr_4 [i_1 - 1] [i_0])))), (arr_5 [i_1 - 2] [i_0 + 2] [i_0 - 1] [i_0 - 1])))));
                    var_25 ^= (min(((~(((arr_15 [i_0] [i_1] [i_1] [12]) ? var_3 : var_3)))), ((((((-(arr_9 [15] [i_1 + 2] [i_1] [i_0])))) == (max((arr_3 [i_2] [i_1 - 1] [i_0]), (arr_0 [i_1]))))))));
                    var_26 ^= var_3;
                }
            }
        }
    }
    var_27 = (max(((((var_15 | var_14) * (min(var_4, var_11))))), (((!var_15) ? (((var_1 ? var_19 : var_12))) : var_13))));
    #pragma endscop
}
