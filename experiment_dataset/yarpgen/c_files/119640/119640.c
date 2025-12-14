/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 119640
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=119640 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/119640
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 3; i_0 < 10;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 0;i_1 += 1)
        {
            {
                var_17 = ((((((((arr_0 [10]) ? 22736 : (arr_1 [i_0 - 1] [i_0 - 1])))) ? ((-13590 ? 9002411268985492992 : var_5)) : (arr_3 [i_0]))) * ((((arr_3 [i_0 + 1]) ? (arr_3 [i_1 + 1]) : (arr_3 [i_0 - 2]))))));

                for (int i_2 = 0; i_2 < 11;i_2 += 1)
                {
                    arr_7 [i_2] [i_2] = (min(((-((var_10 << (((arr_3 [9]) - 57653)))))), (((!((min((arr_5 [i_0]), (arr_4 [5] [i_2] [5])))))))));
                    arr_8 [9] [i_1] [i_2] = max((min((arr_5 [i_1]), (((arr_4 [i_0] [i_2] [i_2]) ? (arr_4 [10] [i_2] [i_2]) : (arr_1 [10] [1]))))), (((~((~(arr_6 [i_0])))))));
                    var_18 = ((-(min((arr_1 [i_0 - 1] [i_1 + 1]), (arr_1 [i_0 - 1] [i_1 + 1])))));
                }
                for (int i_3 = 0; i_3 < 11;i_3 += 1)
                {
                    /* LoopNest 2 */
                    for (int i_4 = 0; i_4 < 11;i_4 += 1)
                    {
                        for (int i_5 = 2; i_5 < 10;i_5 += 1)
                        {
                            {
                                arr_17 [1] [2] [1] [i_3] [2] [i_4] [i_1 + 1] = (arr_0 [i_0]);
                                var_19 = (((arr_3 [i_1]) << (((arr_0 [0]) - 48784))));
                                var_20 = ((~(arr_6 [i_0 - 3])));
                            }
                        }
                    }
                    arr_18 [i_3] [6] [8] = (((arr_11 [2] [i_0 + 1] [i_0 + 1]) | (~2139095040)));
                }
                var_21 = ((((((arr_5 [i_0 - 2]) ? (arr_5 [i_0 - 2]) : (arr_5 [i_0 - 1])))) ? (((arr_5 [i_0 - 2]) ? (arr_15 [i_0] [i_0 - 1] [i_0] [i_1] [i_1 + 1]) : (arr_3 [i_0 + 1]))) : (((arr_3 [i_0 - 3]) + 13585))));
            }
        }
    }
    var_22 = var_2;
    #pragma endscop
}
