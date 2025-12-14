/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 175853
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=175853 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/175853
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_13 = var_9;
    /* LoopNest 2 */
    for (int i_0 = 3; i_0 < 20;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 24;i_1 += 1)
        {
            {

                /* vectorizable */
                for (int i_2 = 1; i_2 < 21;i_2 += 1)
                {
                    var_14 = (max(var_14, ((((arr_0 [i_2]) ^ (arr_1 [i_0]))))));

                    for (int i_3 = 0; i_3 < 24;i_3 += 1)
                    {
                        arr_11 [i_0] = (((arr_0 [i_0 + 4]) & (arr_0 [i_0 + 2])));
                        arr_12 [i_0] [i_0] = (((arr_8 [i_2 + 3] [i_0 + 3]) && (arr_8 [i_2 + 3] [i_0 + 2])));
                        var_15 = (min(var_15, ((((((arr_7 [i_0 + 2] [i_0 + 2] [i_0 + 2] [9]) / (arr_4 [8] [i_0] [i_0]))) - ((((arr_8 [i_2 + 2] [i_3]) ? (arr_0 [i_0 - 3]) : (arr_1 [i_1])))))))));
                    }
                    var_16 = (min(var_16, ((((((arr_6 [i_1] [i_1] [i_2 - 1]) ? (arr_5 [i_0] [i_1]) : (arr_7 [i_1] [i_1] [i_2 + 2] [i_0]))) / (arr_9 [i_0] [i_1] [i_0] [i_0] [i_0] [i_0]))))));
                }
                for (int i_4 = 0; i_4 < 24;i_4 += 1) /* same iter space */
                {
                    arr_16 [i_0] [i_0] [i_1] [i_4] = ((~(arr_9 [i_0] [13] [i_0] [i_1] [i_4] [i_4])));
                    arr_17 [i_0 - 2] [i_0 - 2] [i_0] [i_0 - 2] = ((~(min((((arr_2 [i_0] [i_0]) ? (arr_5 [i_4] [i_0]) : (arr_4 [1] [i_1] [1]))), ((max((arr_1 [i_1]), (arr_13 [3]))))))));

                    /* vectorizable */
                    for (int i_5 = 2; i_5 < 21;i_5 += 1) /* same iter space */
                    {
                        var_17 += (arr_0 [i_4]);
                        arr_21 [i_5] [i_4] [i_4] [i_5] [i_5] = (((((arr_1 [i_4]) && (arr_5 [i_1] [i_4]))) ? (((arr_18 [i_5] [i_4] [i_1] [i_0]) ? (arr_10 [i_4] [i_4]) : (arr_7 [i_5 - 2] [i_4] [i_1] [3]))) : (arr_1 [i_0])));
                    }
                    /* vectorizable */
                    for (int i_6 = 2; i_6 < 21;i_6 += 1) /* same iter space */
                    {
                        arr_25 [i_6] [i_6] = (((((~(arr_0 [i_0])))) ? (((arr_7 [i_0 - 3] [i_1] [i_4] [i_6 + 1]) | (arr_5 [i_0 + 1] [13]))) : ((((arr_24 [i_6] [i_6]) << (arr_13 [i_0]))))));
                        arr_26 [i_0] [i_1] [19] [i_6] [i_4] = (arr_5 [i_0] [i_0 + 4]);
                        arr_27 [6] [i_0] [i_6] [i_4] [i_6 - 2] = (arr_3 [i_1] [i_4] [i_4]);
                        var_18 -= (arr_0 [i_0 - 3]);
                        var_19 -= (arr_24 [i_1] [14]);
                    }
                    /* vectorizable */
                    for (int i_7 = 2; i_7 < 21;i_7 += 1) /* same iter space */
                    {
                        var_20 = ((arr_5 [i_4] [i_7]) ? (arr_0 [i_1]) : (arr_22 [i_0 + 4] [i_7 - 1] [1] [i_7 - 1]));
                        var_21 = (arr_7 [i_0] [i_7 + 1] [i_7] [i_7]);
                    }
                    for (int i_8 = 2; i_8 < 21;i_8 += 1) /* same iter space */
                    {
                        var_22 = (max(var_22, (arr_18 [i_8 - 2] [i_1] [i_1] [i_0 - 1])));
                        arr_33 [i_0] [22] [22] [i_0 + 3] [i_0] &= ((~(min((((arr_5 [i_0] [0]) ^ (arr_6 [i_8] [i_4] [7]))), ((((arr_15 [i_8 - 1] [i_8 - 2] [i_8]) >> (arr_23 [17] [i_1] [i_1] [i_1]))))))));
                    }
                    var_23 = (arr_31 [i_0 - 2]);
                }
                for (int i_9 = 0; i_9 < 24;i_9 += 1) /* same iter space */
                {
                    var_24 = (min(var_24, (((+((((min((arr_6 [1] [7] [1]), (arr_35 [i_0] [i_1])))) ^ (arr_22 [i_0 - 3] [i_0 - 2] [i_0] [i_0]))))))));
                    var_25 = (((arr_28 [i_0 - 3] [i_0 - 2]) != ((((arr_15 [i_0 + 4] [1] [i_0]) ^ (((arr_7 [i_0] [i_1] [i_0] [i_9]) ? (arr_34 [i_0 + 2] [i_1] [i_9]) : (arr_24 [i_9] [i_1]))))))));
                    arr_36 [i_9] = ((((((max((arr_5 [i_0] [i_1]), (arr_6 [i_0] [i_0] [21]))) >> ((((arr_28 [i_0] [i_9]) == (arr_32 [i_0] [i_0 + 4] [i_0 + 3] [i_1] [i_1] [i_9]))))))) ? (((((~(arr_3 [i_0] [i_1] [i_9])))) ? (arr_31 [i_9]) : (((arr_23 [16] [16] [i_9] [18]) - (arr_7 [i_9] [i_1] [i_1] [i_0]))))) : (arr_28 [i_0 - 1] [i_1])));
                    arr_37 [1] [i_1] &= (((arr_1 [i_0 - 1]) & ((((arr_1 [i_0 + 1]) && (arr_1 [i_0 + 1]))))));
                    var_26 = arr_34 [i_9] [i_1] [i_0];
                }

                /* vectorizable */
                for (int i_10 = 0; i_10 < 24;i_10 += 1)
                {
                    arr_41 [i_0] [14] [i_10] = ((arr_32 [i_10] [i_10] [i_1] [i_0] [i_0] [i_0]) > (((arr_20 [i_10] [i_1] [7] [i_0] [i_10] [i_0]) ? (arr_6 [i_0] [i_0] [i_0]) : (arr_10 [i_0 + 1] [1]))));
                    var_27 -= ((((((arr_13 [i_0 + 1]) && (arr_19 [i_1])))) * (((arr_38 [i_0 + 2] [i_1] [i_10]) + (arr_0 [i_0])))));
                    /* LoopNest 2 */
                    for (int i_11 = 0; i_11 < 1;i_11 += 1)
                    {
                        for (int i_12 = 0; i_12 < 24;i_12 += 1)
                        {
                            {
                                arr_46 [16] [i_11] = (((((arr_28 [i_10] [i_11]) * (arr_44 [i_0] [i_1]))) - ((((arr_1 [i_11]) ? (arr_24 [i_11] [i_11]) : (arr_8 [i_0 - 3] [i_1]))))));
                                arr_47 [i_12] [i_11] [i_1] = (((arr_2 [19] [i_1]) ? ((((arr_38 [17] [i_10] [i_10]) || (arr_14 [i_10] [i_11] [i_12])))) : (((arr_15 [i_11] [6] [6]) ? (arr_0 [i_1]) : (arr_24 [i_11] [i_10])))));
                                var_28 *= ((((((arr_23 [i_0 - 2] [i_0 + 1] [i_0] [i_0]) / (arr_28 [i_12] [i_1])))) ? (arr_19 [i_0 + 2]) : (arr_28 [13] [13])));
                                arr_48 [i_0 + 3] [i_10] [i_11] [i_11] [i_12] [i_0 - 2] [i_10] = (arr_34 [i_0 + 4] [i_0 + 2] [7]);
                            }
                        }
                    }
                }
                arr_49 [i_1] = ((~((((((arr_31 [3]) & (arr_28 [i_1] [i_0]))) > (((arr_14 [i_0 + 1] [i_1] [i_1]) ? (arr_22 [i_0] [i_0 - 1] [i_1] [i_1]) : (arr_18 [i_0] [i_0] [5] [5]))))))));
                arr_50 [12] = (((arr_30 [0] [i_1] [i_1] [i_0] [i_0]) ? ((((((arr_31 [i_0]) / (arr_8 [i_0] [i_0 - 2])))))) : (15 * 4225668146)));
                arr_51 [2] = (((((((arr_35 [i_0 + 3] [i_1]) <= (arr_43 [i_0] [i_0] [i_0] [i_1] [i_0]))) ? (arr_10 [i_1] [6]) : (arr_23 [i_0 + 1] [i_0] [i_0] [i_0 - 3]))) - ((((((arr_10 [13] [13]) + (arr_19 [i_1]))))))));
            }
        }
    }
    #pragma endscop
}
