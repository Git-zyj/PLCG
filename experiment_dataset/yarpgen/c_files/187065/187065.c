/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 187065
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=187065 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/187065
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 3; i_0 < 11;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 13;i_1 += 1)
        {
            {
                arr_4 [6] |= (min((0 / 18446744073709551611), (arr_2 [0])));
                var_12 *= ((((arr_2 [0]) ? (arr_3 [12] [12]) : (arr_0 [i_0 + 1] [i_0 + 1]))));
                var_13 |= (arr_3 [12] [i_1]);
                /* LoopNest 2 */
                for (int i_2 = 0; i_2 < 13;i_2 += 1)
                {
                    for (int i_3 = 0; i_3 < 13;i_3 += 1)
                    {
                        {
                            var_14 = var_2;
                            var_15 = (((((arr_1 [i_0 - 3]) ? (arr_1 [i_0 + 2]) : (arr_1 [i_0 + 2]))) - (arr_0 [12] [i_3])));
                        }
                    }
                }
            }
        }
    }
    /* LoopNest 2 */
    for (int i_4 = 0; i_4 < 20;i_4 += 1)
    {
        for (int i_5 = 0; i_5 < 1;i_5 += 1)
        {
            {
                arr_16 [i_4] [i_5] = (~12751216408939880721);
                /* LoopNest 2 */
                for (int i_6 = 0; i_6 < 20;i_6 += 1)
                {
                    for (int i_7 = 4; i_7 < 18;i_7 += 1)
                    {
                        {
                            var_16 = (min(var_16, (arr_14 [i_4] [16])));
                            arr_21 [i_4] [i_4] [i_6] [i_6] [i_5] = (((arr_15 [i_4]) ^ (min((arr_15 [i_4]), (arr_15 [i_4])))));
                        }
                    }
                }
                var_17 = (((arr_18 [i_4] [i_4] [i_5] [i_4]) ? (arr_18 [i_4] [i_4] [i_5] [i_5]) : (max((arr_15 [i_4]), 1))));
                /* LoopNest 2 */
                for (int i_8 = 2; i_8 < 17;i_8 += 1)
                {
                    for (int i_9 = 0; i_9 < 20;i_9 += 1)
                    {
                        {
                            var_18 = ((249 ? (arr_13 [i_4]) : (((arr_20 [i_4] [i_8 - 2] [i_8] [i_4]) ? (arr_20 [i_9] [i_8 + 1] [i_9] [i_4]) : (arr_20 [i_4] [i_8 + 3] [i_8 + 1] [i_4])))));
                            var_19 = (((arr_18 [i_4] [13] [i_8 - 1] [i_9]) ? ((-(arr_24 [i_4] [i_8 + 3] [i_4] [i_4]))) : 2));
                            var_20 |= ((((max((((arr_26 [i_9] [i_8 + 1] [3] [i_4]) ? (arr_20 [i_4] [i_5] [i_4] [16]) : (arr_14 [8] [8]))), var_11))) ? ((((((arr_18 [0] [i_9] [i_9] [i_9]) ? (arr_25 [2] [2] [2] [i_4]) : var_7))) * ((-(arr_14 [i_5] [0]))))) : (arr_22 [10] [10])));
                            arr_27 [i_4] [i_4] [i_4] [i_9] = (arr_22 [i_4] [i_8 - 2]);
                        }
                    }
                }
            }
        }
    }
    var_21 = var_4;
    #pragma endscop
}
