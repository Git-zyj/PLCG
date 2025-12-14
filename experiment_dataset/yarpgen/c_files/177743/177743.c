/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 177743
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=177743 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/177743
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_16 = (max(63, 69));
    /* LoopNest 3 */
    for (int i_0 = 1; i_0 < 8;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 11;i_1 += 1)
        {
            for (int i_2 = 2; i_2 < 7;i_2 += 1)
            {
                {
                    /* LoopNest 2 */
                    for (int i_3 = 0; i_3 < 11;i_3 += 1)
                    {
                        for (int i_4 = 3; i_4 < 9;i_4 += 1)
                        {
                            {
                                arr_16 [i_0] [2] [i_2] [i_0] [i_0] [i_1] = (((((((min(-3725119966578684587, (arr_14 [i_3] [3])))) ? (arr_2 [i_0 + 3]) : (arr_9 [i_1] [i_1] [i_1])))) ? (((max(59788, 59798)))) : (min((((arr_9 [i_1] [3] [3]) ? (arr_11 [7] [7] [7]) : 63)), ((min((arr_8 [i_0] [i_0] [i_1]), (arr_8 [0] [0] [i_1]))))))));
                                var_17 = ((((((((5747 & (arr_6 [i_0])))) ? ((63 ? (arr_5 [i_0] [i_1] [10]) : (arr_12 [1] [9] [9] [1] [9]))) : (arr_9 [i_1] [i_2 + 1] [i_2 + 1])))) | (arr_10 [i_0] [i_0] [i_3])));
                            }
                        }
                    }

                    for (int i_5 = 0; i_5 < 11;i_5 += 1)
                    {
                        arr_19 [i_1] = (min((((arr_18 [i_1]) ? (arr_18 [i_1]) : (arr_18 [i_1]))), ((((arr_0 [i_0 - 1]) ? (arr_0 [i_0 + 1]) : -1705093451)))));
                        arr_20 [i_1] = (arr_2 [i_0]);
                    }
                    for (int i_6 = 0; i_6 < 11;i_6 += 1)
                    {
                        arr_23 [4] [i_1] [i_1] [i_1] [i_1] = (((((3095008474 ? (arr_7 [i_2 + 3]) : 874))) ? ((5747 ? (arr_7 [i_2 + 4]) : (arr_7 [i_2 - 1]))) : (((arr_7 [i_2 - 1]) / (arr_7 [i_2 + 3])))));
                        var_18 = ((min((max((arr_1 [i_2] [i_6]), -1705093451)), (arr_15 [i_0] [i_0 + 2] [i_0 + 2] [i_0 - 1] [i_0] [i_0 + 1]))));
                        var_19 = (max(var_19, ((((arr_8 [i_2 + 3] [i_2 + 4] [6]) ? ((((arr_13 [i_2 + 2] [i_2 + 2] [i_2 + 1] [i_2 - 2] [2] [i_2 + 2]) && (arr_13 [i_2 + 2] [i_2 - 2] [i_2 + 1] [i_2 - 2] [4] [i_2 - 1])))) : (arr_8 [i_2 + 3] [i_2 - 2] [6]))))));
                        arr_24 [i_0] [i_0] [i_0] [i_1] [i_0] = (((((arr_0 [i_0 - 1]) ? (arr_0 [i_0 - 1]) : (arr_0 [i_0 + 3])))) ? (((arr_0 [i_0 + 1]) ^ (arr_0 [i_0 + 3]))) : (((arr_0 [i_0 + 3]) ? (arr_0 [i_0 + 1]) : (arr_0 [i_0 - 1]))));
                    }
                    var_20 = ((((((arr_7 [i_2 - 2]) & 15079))) ? (arr_21 [i_0] [i_1] [i_2 + 2] [i_2 + 2] [i_2 - 1] [i_2 + 2]) : 1));
                }
            }
        }
    }
    var_21 = (max(var_21, (((((max((min(-42, 252)), var_0))) ? var_14 : (((3095008471 ? 5737 : 48))))))));
    #pragma endscop
}
