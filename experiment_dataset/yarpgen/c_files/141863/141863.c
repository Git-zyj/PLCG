/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 141863
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=141863 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/141863
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 11;i_0 += 1)
    {
        for (int i_1 = 3; i_1 < 7;i_1 += 1)
        {
            {
                var_18 = (((arr_0 [i_1 + 2]) - (min(2698700101, (arr_0 [i_1 + 4])))));

                /* vectorizable */
                for (int i_2 = 2; i_2 < 9;i_2 += 1) /* same iter space */
                {
                    /* LoopNest 2 */
                    for (int i_3 = 0; i_3 < 11;i_3 += 1)
                    {
                        for (int i_4 = 1; i_4 < 7;i_4 += 1)
                        {
                            {
                                var_19 = (((var_2 ? (arr_7 [0] [7] [i_2 - 1]) : var_13)));
                                arr_13 [i_4 + 4] [i_1] [i_2] [i_1] [i_0] = 1;
                            }
                        }
                    }
                    var_20 = (var_14 + var_13);
                }
                for (int i_5 = 2; i_5 < 9;i_5 += 1) /* same iter space */
                {
                    /* LoopNest 2 */
                    for (int i_6 = 0; i_6 < 11;i_6 += 1)
                    {
                        for (int i_7 = 2; i_7 < 10;i_7 += 1)
                        {
                            {
                                arr_23 [i_1] [i_1] = ((-(min((arr_4 [i_7 + 1]), 224))));
                                arr_24 [i_0] [i_1] [i_1] [1] [i_6] [1] = (!((min((arr_11 [i_0] [i_5 + 2] [i_7] [i_7] [i_1] [i_7] [10]), (arr_11 [i_1] [i_5 + 2] [i_7] [i_7] [i_1] [5] [3])))));
                                var_21 &= var_11;
                                arr_25 [i_0] [i_0] [i_1] [i_6] = ((var_13 ? ((15520 ? 8795166090712102043 : 0)) : ((min((arr_1 [i_0]), (arr_11 [i_0] [i_1 - 3] [i_5] [i_6] [i_1] [i_7] [5]))))));
                                var_22 += ((((((arr_8 [i_5] [i_7] [i_7] [i_7 - 2] [i_5] [i_7]) - (arr_8 [i_6] [i_7] [i_7] [i_7 - 1] [i_0] [i_7])))) ? (min(var_13, var_7)) : (arr_8 [i_6] [i_7] [i_7] [i_7 - 1] [i_0] [i_7])));
                            }
                        }
                    }
                    arr_26 [i_0] [i_1] [0] [i_0] = (min(((32767 ? 1596267198 : -1548385935)), ((min(1, 33651)))));
                    var_23 = (-(((arr_21 [i_1] [i_1]) ? (arr_11 [i_5] [i_5 - 2] [i_5] [i_5 - 1] [i_1] [i_5 - 1] [i_5 + 1]) : (arr_11 [i_5] [i_5 - 1] [i_5] [i_5 - 1] [i_1] [i_5] [i_5 + 2]))));
                    arr_27 [6] [i_1] [i_1] [0] = (((224 >= var_2) * (min(var_15, (((var_4 ? var_12 : (arr_3 [i_0] [i_1 + 2] [i_1 + 2]))))))));
                }
            }
        }
    }
    /* LoopNest 3 */
    for (int i_8 = 4; i_8 < 17;i_8 += 1)
    {
        for (int i_9 = 0; i_9 < 1;i_9 += 1)
        {
            for (int i_10 = 1; i_10 < 19;i_10 += 1)
            {
                {
                    var_24 = var_5;
                    /* LoopNest 2 */
                    for (int i_11 = 4; i_11 < 20;i_11 += 1)
                    {
                        for (int i_12 = 2; i_12 < 19;i_12 += 1)
                        {
                            {
                                arr_43 [i_9] [i_9] [i_9] [i_12 + 1] = ((0 >= (var_0 > var_10)));
                                arr_44 [3] [i_9] [i_10] [i_11] [i_9] [i_12 - 1] = ((((((arr_38 [i_11 - 2] [i_12 + 1]) ? var_13 : (arr_28 [i_12 - 1])))) ? (((arr_35 [i_8] [8] [i_8 + 4] [4]) ? (0 != var_11) : (arr_39 [i_8]))) : (1596267195 > -5)));
                                var_25 = ((((arr_37 [i_9]) ? var_9 : (arr_37 [i_9]))));
                            }
                        }
                    }
                    arr_45 [i_8 - 4] [i_9] [i_9] = var_15;
                }
            }
        }
    }
    var_26 -= var_5;
    var_27 = ((var_1 < 13) ? var_3 : var_3);
    #pragma endscop
}
