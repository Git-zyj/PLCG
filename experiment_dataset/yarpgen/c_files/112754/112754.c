/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 112754
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=112754 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/112754
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 4; i_0 < 7;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 10;i_1 += 1)
        {
            {

                for (int i_2 = 1; i_2 < 9;i_2 += 1)
                {

                    /* vectorizable */
                    for (int i_3 = 0; i_3 < 10;i_3 += 1) /* same iter space */
                    {
                        var_14 = (arr_6 [i_2] [i_1] [i_2]);
                        arr_11 [i_0] [i_1] [i_1] [4] [i_3] [i_2] = (((((245 ? (arr_1 [i_0]) : 11))) ? (arr_5 [i_0] [i_1] [i_2] [i_3]) : (((!(arr_10 [i_0] [i_1] [i_1] [i_2] [i_2 - 1] [i_1]))))));
                        var_15 += (((arr_8 [i_0 - 1] [i_2 + 1] [i_3] [i_3]) ? (arr_8 [i_0 - 1] [i_2 + 1] [i_3] [i_1]) : var_4));
                        arr_12 [i_3] [i_3] [i_2] [i_3] = 32640;

                        for (int i_4 = 0; i_4 < 10;i_4 += 1)
                        {
                            var_16 = 397070933;
                            arr_15 [i_0 - 2] [i_1] [i_2] [i_3] [i_4] = ((((arr_2 [i_0]) <= 18)) ? (var_3 + -32748) : var_1);
                            var_17 += var_11;
                            arr_16 [i_4] [i_2] [i_2] [i_2] [i_0 - 1] = (((arr_2 [i_2 - 1]) ? (arr_14 [i_4] [i_4] [i_3] [i_2 - 1] [i_3] [i_2 - 1]) : ((244 ^ (arr_8 [i_0] [i_1] [i_3] [i_2])))));
                            arr_17 [i_2] [i_3] [i_2] [i_1] [i_0] [i_2] = ((((var_12 ? var_6 : (arr_9 [i_0] [i_0] [i_2] [i_2] [i_3] [i_4]))) > (((arr_2 [i_0]) ? 245 : 16477052596106275549))));
                        }
                    }
                    for (int i_5 = 0; i_5 < 10;i_5 += 1) /* same iter space */
                    {
                        var_18 -= (arr_4 [i_0] [i_0] [i_2]);
                        var_19 = ((1 ? 2147483631 : ((var_2 ? (11 || 1659156194) : (arr_14 [i_0 + 3] [i_1] [i_0 + 3] [i_5] [i_5] [5])))));
                    }
                    var_20 -= var_4;
                }
                for (int i_6 = 3; i_6 < 9;i_6 += 1)
                {
                    var_21 = ((((var_2 ? (arr_7 [i_0 + 3]) : (arr_7 [i_0 + 3]))) & ((min((arr_7 [i_0 + 3]), var_11)))));
                    /* LoopNest 2 */
                    for (int i_7 = 0; i_7 < 10;i_7 += 1)
                    {
                        for (int i_8 = 0; i_8 < 10;i_8 += 1)
                        {
                            {
                                arr_26 [i_6] = (((arr_7 [i_7]) ? (min((arr_22 [i_0] [i_0] [i_6] [i_7]), (((arr_9 [9] [i_1] [i_6] [i_0 + 2] [i_8] [i_1]) ? 29418 : (arr_6 [i_6] [i_7] [i_8]))))) : (max((((arr_18 [i_0 + 2] [i_1] [i_6 - 1] [i_8] [i_8] [9]) ? 0 : var_8)), (arr_1 [i_1])))));
                                arr_27 [i_6] [i_1] [i_6 + 1] [i_7] [i_1] [i_8] = (arr_3 [i_0 + 1] [i_0 - 1] [i_0]);
                            }
                        }
                    }
                    arr_28 [i_6] [i_1] [i_1] = (arr_13 [i_0 + 1] [i_6 - 2] [i_6 - 1] [i_6] [i_1] [i_6]);
                }
                arr_29 [1] = (arr_23 [i_0] [i_1] [i_1] [i_1]);
            }
        }
    }
    /* LoopNest 3 */
    for (int i_9 = 1; i_9 < 22;i_9 += 1)
    {
        for (int i_10 = 0; i_10 < 24;i_10 += 1)
        {
            for (int i_11 = 0; i_11 < 24;i_11 += 1)
            {
                {
                    var_22 = (min(-var_13, ((((90 <= (arr_31 [i_11])))))));
                    arr_38 [i_11] [i_10] [i_9] = ((((max((arr_32 [i_9 + 2] [i_10]), 0))) ? (((((1 ? 4471 : (arr_35 [i_9] [i_10] [i_11])))) ? 245 : (max(113, (arr_33 [i_10]))))) : 255));
                }
            }
        }
    }
    var_23 = ((((((var_10 ? var_10 : 2875215057)))) ? var_10 : 36118));
    #pragma endscop
}
