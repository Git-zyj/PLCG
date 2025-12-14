/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 116645
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=116645 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/116645
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_17 = var_16;
    /* LoopNest 3 */
    for (int i_0 = 1; i_0 < 9;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 1;i_1 += 1)
        {
            for (int i_2 = 3; i_2 < 9;i_2 += 1)
            {
                {
                    /* LoopNest 2 */
                    for (int i_3 = 0; i_3 < 10;i_3 += 1)
                    {
                        for (int i_4 = 1; i_4 < 7;i_4 += 1)
                        {
                            {
                                var_18 = (max(var_18, ((((arr_7 [i_0] [9] [i_3] [0]) ? (max((max(0, (arr_5 [6] [6]))), (max(var_1, 8793945538560)))) : (((arr_6 [8]) ? 13510798882111488 : var_11)))))));
                                var_19 = (max(var_19, (((((var_1 ? 0 : ((var_8 ? (arr_6 [1]) : (arr_2 [i_0] [i_0]))))) < (((((var_3 ? 15315195542842159970 : (arr_6 [1])))) ? ((((arr_5 [i_0] [8]) ? 1 : var_15))) : ((var_14 - (arr_12 [i_0] [7] [i_0] [3] [7] [i_0]))))))))));
                                arr_13 [i_0] [i_1] [2] = (((arr_2 [i_1] [i_0]) < (max(((((arr_4 [i_1]) > (arr_7 [i_0 - 1] [6] [i_3] [i_4])))), ((var_15 ? (arr_1 [i_4]) : (arr_4 [i_1])))))));
                            }
                        }
                    }
                    var_20 = (((((max(var_4, 1317523104)) + ((25 ? var_6 : -2)))) == (max(((var_8 ? var_8 : 2513196778611617384)), ((1 ? 241 : (arr_8 [i_0] [i_0] [8] [i_0])))))));
                    var_21 = (((arr_8 [i_2] [i_2] [8] [8]) ? (max(var_13, ((226 ? (arr_5 [i_0 - 1] [i_1]) : 369991893)))) : (((((arr_10 [2] [i_1] [i_1] [i_0] [i_0]) <= ((1 ? 38640 : (arr_5 [i_0] [i_1])))))))));

                    for (int i_5 = 0; i_5 < 10;i_5 += 1)
                    {
                        var_22 = ((!((((arr_8 [8] [8] [8] [8]) ? ((((arr_4 [i_1]) ? 50 : (arr_9 [i_0] [i_1] [i_0])))) : (min((arr_8 [2] [7] [i_0] [i_0]), (arr_1 [i_0]))))))));
                        arr_18 [8] [i_1] [i_1] = ((((75 > (arr_16 [8] [8] [8] [i_0] [3]))) ? (((arr_15 [i_0 - 1] [i_2 - 1]) + (~var_4))) : ((max(228, var_0)))));
                    }
                    arr_19 [i_1] [3] [3] = (arr_2 [i_0] [i_0]);
                }
            }
        }
    }
    var_23 += var_8;
    #pragma endscop
}
