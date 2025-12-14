/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 141043
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=141043 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/141043
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_20 = var_0;
    /* LoopNest 2 */
    for (int i_0 = 1; i_0 < 8;i_0 += 1)
    {
        for (int i_1 = 4; i_1 < 7;i_1 += 1)
        {
            {

                for (int i_2 = 1; i_2 < 1;i_2 += 1) /* same iter space */
                {
                    var_21 = (((((66060288 < (arr_4 [i_0] [i_1] [i_1]))) ? -74 : (arr_5 [i_1 + 4] [i_0]))));

                    for (int i_3 = 3; i_3 < 10;i_3 += 1)
                    {

                        for (int i_4 = 0; i_4 < 11;i_4 += 1)
                        {
                            var_22 = (max(var_22, (arr_14 [i_2 - 1])));
                            arr_16 [i_0] [i_0] [i_2 - 1] [i_0] [i_4] = ((((max(var_11, ((74 ? -74 : 75))))) | ((var_1 ? (((var_1 ? var_14 : (arr_0 [i_0])))) : (max((arr_13 [i_4] [i_0] [i_2 - 1] [i_0] [i_0 + 3]), (arr_6 [i_1] [i_1] [i_0])))))));
                            var_23 = (((((arr_14 [i_3 + 1]) ? var_16 : (arr_14 [i_3 - 3]))) != (((arr_14 [i_3 + 1]) * 74))));
                            arr_17 [i_0] [8] [i_0] [i_3] [i_0] [i_4] = arr_13 [i_4] [i_0] [i_2] [i_0] [i_0];
                        }
                        /* vectorizable */
                        for (int i_5 = 4; i_5 < 8;i_5 += 1)
                        {
                            var_24 = (max(var_24, var_7));
                            var_25 = var_19;
                        }
                        var_26 = (min(var_26, (((-((76 & (((min((arr_10 [i_0] [i_0] [i_0] [i_0] [1] [i_0]), (arr_12 [2] [i_1] [i_2]))))))))))));
                    }
                    for (int i_6 = 0; i_6 < 11;i_6 += 1)
                    {
                        arr_22 [i_0] = -var_18;
                        var_27 = -74;

                        for (int i_7 = 1; i_7 < 8;i_7 += 1)
                        {
                            arr_26 [i_0] [i_1 - 2] [i_0] [i_6] [i_7] = (max((arr_12 [i_0] [i_7 + 3] [i_0]), (((!(arr_12 [i_0] [i_7 - 1] [i_0]))))));
                            arr_27 [i_0] [i_0] = (min(((-(arr_2 [i_0 - 1]))), var_6));
                        }
                    }
                    arr_28 [i_0] [i_1] = (((((76 / (562949949227008 / 57)))) ? 2501247387969662821 : 74));
                }
                for (int i_8 = 1; i_8 < 1;i_8 += 1) /* same iter space */
                {
                    /* LoopNest 2 */
                    for (int i_9 = 3; i_9 < 8;i_9 += 1)
                    {
                        for (int i_10 = 0; i_10 < 11;i_10 += 1)
                        {
                            {
                                arr_35 [i_10] [i_0] = (min((arr_21 [i_10] [i_9] [i_0] [i_1] [i_0]), var_5));
                                arr_36 [i_0] [i_0] [i_8] [i_9] [i_1 - 3] [i_0] [i_0 - 1] = (((arr_10 [i_1] [i_9] [i_8 - 1] [i_1] [i_1 - 4] [i_0]) ? (arr_19 [i_0] [i_1] [i_8] [i_0] [i_0]) : (max(57, -1))));
                                var_28 = (max(0, 4294967295));
                            }
                        }
                    }
                    var_29 = (min(var_29, (((((((var_15 ? 0 : (arr_4 [4] [i_1] [4]))))) ? (((((~(arr_5 [i_0] [i_1]))) ^ (arr_8 [6] [i_1] [6])))) : 5072044110287897136)))));
                }
                /* LoopNest 2 */
                for (int i_11 = 1; i_11 < 8;i_11 += 1)
                {
                    for (int i_12 = 1; i_12 < 9;i_12 += 1)
                    {
                        {
                            var_30 = (min(((((arr_37 [i_0] [i_0 + 2] [i_12 - 1]) ? ((max((arr_20 [i_0] [i_1] [i_11] [i_11] [i_12]), (arr_9 [i_0])))) : (32767 ^ 1)))), 29185));
                            arr_42 [i_0] [i_1] [i_1] [i_1 + 3] [i_1] = (max(((max((arr_33 [i_1] [i_1 - 2] [i_1 - 1] [i_1 + 3] [i_1 - 1]), (arr_40 [i_0] [i_12 + 2])))), (min(((-(arr_39 [i_0] [i_1]))), 33))));
                            arr_43 [i_0] [i_0] [i_0] [i_0] = (max((((((max(var_19, var_1))) && ((min(-63, 1853688659580335703)))))), (arr_25 [i_0] [i_1 - 3] [i_11] [i_11] [i_1 - 3])));
                        }
                    }
                }
                arr_44 [2] [i_0] = (((-((max(var_1, var_0))))));
            }
        }
    }
    var_31 = (min(var_13, ((((var_16 || -2501247387969662821) != -var_19)))));
    /* LoopNest 2 */
    for (int i_13 = 2; i_13 < 20;i_13 += 1)
    {
        for (int i_14 = 0; i_14 < 23;i_14 += 1)
        {
            {
                var_32 = 7763;
                var_33 = (arr_49 [i_14] [i_14]);
                arr_52 [i_13] [i_14] [i_13] = (min((((((((arr_51 [i_14]) != 0)))) < (min((arr_51 [i_14]), 1)))), (((1610465366 && -1417335659) && ((max(29185, 63)))))));
                arr_53 [i_13] [i_13] [i_13] = (max(1, -7948635917228041165));
            }
        }
    }
    #pragma endscop
}
