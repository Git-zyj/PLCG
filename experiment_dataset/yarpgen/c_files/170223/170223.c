/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 170223
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=170223 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/170223
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 0; i_0 < 1;i_0 += 1)
    {
        arr_3 [i_0] [10] = (((arr_0 [i_0]) ? ((((!(min((arr_1 [i_0]), (arr_1 [5]))))))) : 1945160850));
        var_19 -= (((((arr_2 [i_0]) + ((min((arr_2 [i_0]), (arr_0 [i_0])))))) + (((((1945160850 ? -1637979166 : 54))) ? ((max(0, 9))) : (arr_1 [i_0])))));
        var_20 = (((((max(72, 0))) ? (arr_2 [i_0]) : ((min((arr_2 [i_0]), var_14))))));
        var_21 = (arr_0 [i_0]);
    }
    for (int i_1 = 0; i_1 < 15;i_1 += 1)
    {
        /* LoopNest 3 */
        for (int i_2 = 3; i_2 < 11;i_2 += 1)
        {
            for (int i_3 = 0; i_3 < 1;i_3 += 1)
            {
                for (int i_4 = 0; i_4 < 15;i_4 += 1)
                {
                    {
                        var_22 = ((((min((((arr_8 [i_1] [i_2 + 3]) ? (arr_11 [i_1] [i_2] [i_3] [i_4]) : (arr_4 [4]))), var_11))) ? ((((((min((arr_8 [i_1] [i_2]), (arr_13 [i_1] [i_2 + 1] [6] [i_4] [i_1] [i_1])))) && (arr_14 [i_1] [i_2 + 3] [i_3] [i_4]))))) : (((((-378190200 ? 182 : 1637979165))) ? (((((arr_8 [i_1] [i_2 - 1]) <= (arr_5 [i_1]))))) : (((arr_10 [i_1] [i_1]) ? (arr_4 [i_1]) : 403645136613820625))))));
                        var_23 = (!0);
                    }
                }
            }
        }
        var_24 = max((max((max(734539225, -52)), (arr_8 [0] [0]))), 378190199);
        var_25 = (arr_11 [i_1] [10] [i_1] [i_1]);
        var_26 -= (arr_11 [2] [2] [i_1] [i_1]);
    }
    var_27 &= ((((min(-67, -0))) ? var_14 : ((min(182, 0)))));
    var_28 = (min(var_28, var_5));
    /* LoopNest 3 */
    for (int i_5 = 0; i_5 < 1;i_5 += 1)
    {
        for (int i_6 = 0; i_6 < 21;i_6 += 1)
        {
            for (int i_7 = 0; i_7 < 21;i_7 += 1)
            {
                {
                    var_29 = (min(var_29, ((((-(min((arr_19 [i_5] [i_6]), (arr_15 [i_6]))))) << ((((var_9 ? (max(0, 1945160850)) : (((2046 ? -79 : 53))))) - 1945160848))))));
                    /* LoopNest 2 */
                    for (int i_8 = 0; i_8 < 21;i_8 += 1)
                    {
                        for (int i_9 = 0; i_9 < 21;i_9 += 1)
                        {
                            {
                                var_30 = (max(0, 48));
                                arr_29 [i_5] [i_8] [i_7] [i_7] [i_8] [i_9] = ((0 ? 53 : 75));
                                var_31 -= var_3;
                            }
                        }
                    }
                    var_32 = (((min(var_8, (arr_21 [i_7] [i_7] [i_6] [i_5]))) % (((arr_27 [8]) + (max((arr_18 [i_6]), var_11))))));
                    var_33 = (arr_27 [10]);
                    var_34 = (min(var_34, ((max(-403645136613820626, (arr_19 [i_5] [i_6]))))));
                }
            }
        }
    }
    #pragma endscop
}
