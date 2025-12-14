/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 161788
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=161788 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/161788
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 3 */
    for (int i_0 = 0; i_0 < 17;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 17;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 17;i_2 += 1)
            {
                {

                    for (int i_3 = 0; i_3 < 17;i_3 += 1)
                    {
                        var_12 = ((((((min(6443294708086491402, 65507))) ? 27181 : 65507)) <= (arr_0 [i_0])));
                        var_13 = (max((max((arr_1 [i_0]), 968418004)), (((!(arr_7 [i_0] [i_3] [i_2] [i_3] [i_3] [i_0]))))));
                        var_14 = (arr_0 [i_0]);
                        var_15 = (arr_3 [i_0] [i_0] [i_3]);
                    }
                    for (int i_4 = 0; i_4 < 17;i_4 += 1)
                    {
                        var_16 = (((arr_4 [i_0] [i_0] [i_2]) ? ((-(arr_1 [i_0]))) : (arr_4 [i_1] [i_2] [i_2])));
                        arr_11 [i_0] [i_0] [i_1] [i_2] [i_2] [i_4] = (var_9 >> (1860661535 - 1860661504));
                    }
                    arr_12 [i_2] = (min(69, 46));

                    for (int i_5 = 0; i_5 < 17;i_5 += 1)
                    {
                        arr_15 [i_0] [i_1] [i_2] [i_0] = (arr_10 [i_5] [i_5] [i_5] [i_5] [i_2]);
                        arr_16 [5] [i_1] [i_1] [i_2] [i_1] = (max((max((((-(arr_4 [9] [i_1] [i_2])))), (min(32759, 3421394738583039156)))), (arr_5 [0] [i_1] [i_1] [i_0])));
                        var_17 = ((((max((arr_10 [i_0] [8] [i_1] [i_2] [i_2]), (arr_10 [10] [10] [i_0] [i_0] [i_2])))) ? ((((arr_10 [i_0] [i_0] [i_0] [i_0] [i_2]) ? (((659933732 ? (arr_1 [i_2]) : (arr_5 [6] [i_1] [i_2] [i_5])))) : (max((arr_0 [i_5]), (arr_9 [i_2] [i_2] [i_2])))))) : (arr_6 [i_0] [i_1] [i_1] [i_2] [i_1])));

                        for (int i_6 = 4; i_6 < 13;i_6 += 1)
                        {
                            var_18 -= ((((((((arr_17 [i_0] [10] [i_0]) >= 953969902)) ? (arr_2 [i_2]) : ((659933732 ? var_8 : var_10))))) ? (arr_9 [i_0] [i_5] [i_5]) : 6));
                            arr_19 [i_2] [i_2] [i_2] [i_2] [15] = (((arr_8 [i_0] [i_6 + 1] [i_1] [i_6] [i_6 + 1]) + ((-(arr_8 [i_6] [i_6] [i_6] [i_6] [i_6])))));
                        }
                        /* vectorizable */
                        for (int i_7 = 1; i_7 < 15;i_7 += 1)
                        {
                            var_19 = var_2;
                            arr_22 [i_7] [i_1] [i_2] [i_2] = (((((arr_10 [i_0] [i_1] [i_2] [16] [i_2]) || (arr_0 [i_0]))) ? (arr_6 [4] [4] [i_7 + 1] [i_7] [i_7]) : (arr_18 [i_0] [i_2] [i_2] [1] [0] [i_2] [i_7])));
                        }
                        for (int i_8 = 0; i_8 < 17;i_8 += 1)
                        {
                            var_20 = (arr_6 [i_0] [i_0] [i_0] [i_0] [i_0]);
                            var_21 = (min(var_21, ((min((max((((1 ? (arr_13 [i_2] [i_5] [i_8]) : (arr_2 [1])))), ((-(arr_10 [i_0] [1] [i_0] [i_0] [i_0]))))), ((((arr_21 [i_0] [i_5] [i_2] [i_1] [i_0]) > (arr_21 [i_0] [i_0] [i_0] [i_2] [i_2])))))))));
                        }
                        for (int i_9 = 0; i_9 < 17;i_9 += 1)
                        {
                            var_22 -= (arr_6 [3] [i_1] [i_2] [i_5] [i_9]);
                            arr_27 [i_2] [i_5] [i_0] [i_2] = 40;
                        }
                    }
                }
            }
        }
    }
    var_23 -= ((((var_9 ? 9634 : var_8))));
    #pragma endscop
}
