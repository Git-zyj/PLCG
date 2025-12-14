/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 162804
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=162804 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/162804
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 18;i_0 += 1)
    {
        for (int i_1 = 3; i_1 < 17;i_1 += 1)
        {
            {
                var_16 = (min((min((arr_4 [i_1 - 2] [i_1 - 1] [i_1 - 3]), (arr_4 [i_1 - 2] [i_1 - 1] [i_1 - 3]))), (min((arr_4 [i_1 - 2] [i_1 - 1] [i_1 - 3]), (arr_4 [i_1 - 2] [i_1 - 1] [i_1 - 3])))));
                var_17 = ((var_0 ? ((max((((arr_5 [6] [15] [5]) ? (arr_2 [i_1]) : var_9)), (arr_1 [i_0])))) : (max((arr_2 [i_0]), (((arr_4 [7] [i_1 - 1] [7]) ? (arr_4 [i_0] [8] [8]) : var_7))))));
                /* LoopNest 3 */
                for (int i_2 = 0; i_2 < 18;i_2 += 1)
                {
                    for (int i_3 = 1; i_3 < 17;i_3 += 1)
                    {
                        for (int i_4 = 3; i_4 < 14;i_4 += 1)
                        {
                            {
                                var_18 = (min(var_18, ((min((((((arr_5 [i_0] [i_0] [i_3]) && (arr_11 [7] [i_1] [i_1] [i_3] [i_4]))) ? (((arr_10 [i_0] [17] [17] [i_1] [10]) ? (arr_4 [1] [1] [i_3 - 1]) : (arr_10 [i_1 - 3] [i_1 - 3] [i_2] [i_1 - 3] [11]))) : (((min((arr_3 [1]), (arr_9 [i_0] [i_0]))))))), var_11)))));
                                var_19 = ((((max(var_6, (arr_1 [i_1 - 3])))) <= (arr_2 [i_3 - 1])));
                                arr_12 [i_2] [i_1] [i_2] [i_3] [i_4] = ((((max((((arr_7 [i_3 - 1] [i_2] [i_1 - 1] [16]) ? var_11 : var_12)), (((arr_2 [i_2]) ? var_12 : (arr_5 [i_1] [i_2] [i_4 + 4])))))) ? var_11 : (((min(var_12, (arr_4 [8] [i_3] [i_4])))))));
                                arr_13 [i_2] = (max((((var_10 ? (((arr_6 [i_0] [i_2]) ? (arr_1 [i_0]) : (arr_11 [i_0] [i_0] [6] [i_3] [i_1 + 1]))) : (arr_2 [i_3 + 1])))), (arr_4 [i_3] [13] [i_0])));
                            }
                        }
                    }
                }
            }
        }
    }

    for (int i_5 = 0; i_5 < 16;i_5 += 1) /* same iter space */
    {
        arr_16 [i_5] = (arr_5 [i_5] [i_5] [i_5]);
        arr_17 [7] = ((((min((arr_8 [i_5] [0] [13] [i_5]), ((var_14 ? (arr_8 [i_5] [i_5] [i_5] [i_5]) : var_6))))) ? (((802205558 ? -4178615685345616548 : 6555))) : (((((var_8 ? var_13 : var_3))) - var_4))));
        arr_18 [i_5] = ((((((min(var_5, (arr_5 [i_5] [16] [i_5])))) ? ((min(var_0, var_8))) : (arr_6 [8] [i_5]))) | (((!var_9) ? (arr_10 [17] [14] [i_5] [i_5] [i_5]) : ((var_3 & (arr_10 [14] [i_5] [i_5] [i_5] [3])))))));
        var_20 |= ((((min(255, -3316824697548299710))) ? -1229226565 : (((arr_14 [9] [3]) ? ((((arr_14 [0] [i_5]) ? var_15 : (arr_5 [i_5] [i_5] [i_5])))) : (((arr_4 [0] [i_5] [i_5]) ? (arr_4 [i_5] [i_5] [i_5]) : (arr_9 [i_5] [i_5])))))));
        var_21 = var_8;
    }
    for (int i_6 = 0; i_6 < 16;i_6 += 1) /* same iter space */
    {
        var_22 = ((((max((((arr_4 [i_6] [15] [i_6]) - (arr_6 [12] [i_6]))), ((((arr_20 [i_6]) ? (arr_6 [i_6] [i_6]) : (arr_11 [i_6] [i_6] [i_6] [i_6] [i_6]))))))) ? (((9223372036854775807 ? -1229226577 : 21))) : (max((min((arr_4 [i_6] [i_6] [9]), (arr_5 [i_6] [12] [i_6]))), (arr_7 [i_6] [i_6] [1] [i_6])))));
        arr_23 [4] = ((((arr_9 [14] [i_6]) ? var_8 : (arr_21 [6] [i_6]))));
        arr_24 [i_6] [i_6] = var_0;
        var_23 = (min((arr_22 [i_6]), (((arr_22 [i_6]) ^ (((((arr_6 [i_6] [i_6]) > (arr_11 [i_6] [i_6] [i_6] [i_6] [5])))))))));
    }
    for (int i_7 = 0; i_7 < 16;i_7 += 1) /* same iter space */
    {
        arr_27 [i_7] = (((arr_3 [i_7]) ? (arr_3 [i_7]) : ((var_0 - (arr_3 [i_7])))));
        var_24 ^= (arr_8 [i_7] [i_7] [i_7] [i_7]);
    }
    /* vectorizable */
    for (int i_8 = 0; i_8 < 1;i_8 += 1)
    {
        var_25 += (((arr_31 [i_8] [7]) != (arr_31 [i_8] [i_8])));
        /* LoopNest 2 */
        for (int i_9 = 0; i_9 < 23;i_9 += 1)
        {
            for (int i_10 = 2; i_10 < 21;i_10 += 1)
            {
                {
                    /* LoopNest 2 */
                    for (int i_11 = 0; i_11 < 23;i_11 += 1)
                    {
                        for (int i_12 = 2; i_12 < 21;i_12 += 1)
                        {
                            {
                                var_26 += (arr_37 [12] [i_10 - 1] [17]);
                                arr_43 [i_8] [i_8] [i_10] [i_11] [i_8] [i_9] [i_8] = var_11;
                                var_27 = (arr_40 [i_8] [i_9] [15] [i_11] [i_12]);
                            }
                        }
                    }
                    var_28 = (arr_40 [i_8] [i_10 + 1] [i_10 - 1] [i_10 + 2] [i_8]);
                }
            }
        }
    }
    #pragma endscop
}
