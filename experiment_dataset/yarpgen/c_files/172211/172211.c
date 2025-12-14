/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 172211
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=172211 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/172211
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 10;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 10;i_1 += 1)
        {
            {

                for (int i_2 = 1; i_2 < 1;i_2 += 1)
                {

                    for (int i_3 = 1; i_3 < 9;i_3 += 1)
                    {
                        arr_10 [i_2] [i_1] [i_2] [i_2] [i_3 + 1] = (max((!var_8), ((151 * (arr_9 [i_2 - 1] [i_2 - 1] [i_2 - 1] [i_3 + 1])))));
                        arr_11 [i_0] [i_1] [i_2] [i_3] = (((((151 ? (arr_1 [i_1]) : (!var_10)))) || ((max(137, var_5)))));

                        for (int i_4 = 1; i_4 < 6;i_4 += 1)
                        {
                            arr_15 [i_0] [i_2] [i_1] [i_1] [i_3] [i_4] = ((var_11 ? (((((1749719793 ? (arr_12 [i_1] [i_2 - 1] [i_2] [i_3] [i_4 + 1]) : (arr_7 [i_0] [i_1] [i_2] [i_4]))) <= (1 < 0)))) : 64686));
                            var_16 *= ((~((max(124, (((14311 && (arr_6 [i_0] [i_1] [i_1] [i_1])))))))));
                            var_17 = (!19);
                            var_18 = ((+(max((((14815808458591530412 ? (arr_2 [i_2]) : (arr_1 [i_2])))), (((arr_1 [i_0]) | 3630935615118021204))))));
                        }
                        for (int i_5 = 0; i_5 < 0;i_5 += 1)
                        {
                            arr_19 [i_0] [i_0] [i_1] [i_2] [i_1] [i_0] [i_2] = 105;
                            var_19 = arr_8 [i_0] [i_1] [i_1] [i_5];
                        }
                        for (int i_6 = 2; i_6 < 9;i_6 += 1)
                        {
                            arr_22 [i_3] [i_3 - 1] [i_2] [i_3] [i_2] [i_2] = (((!(((arr_21 [i_0] [i_3]) || 65515)))));
                            var_20 = (min(var_20, var_15));
                        }
                    }
                    var_21 = max((arr_7 [i_0] [i_0] [i_0] [i_0]), var_3);
                }
                for (int i_7 = 2; i_7 < 9;i_7 += 1)
                {
                    var_22 = (max(var_22, ((min(1, 3423427902)))));

                    for (int i_8 = 4; i_8 < 9;i_8 += 1)
                    {
                        var_23 -= ((!((((min(2485542594, var_10)) | ((((!(arr_3 [i_0] [i_0] [i_0]))))))))));
                        arr_29 [i_0] [i_1] = (arr_21 [i_1] [i_7]);
                        arr_30 [1] [i_1] [1] [i_1] = (arr_24 [i_1] [i_7 - 2] [i_8 - 4]);
                    }
                    for (int i_9 = 0; i_9 < 10;i_9 += 1)
                    {
                        var_24 = (max(var_24, 1066949134));
                        var_25 = (arr_24 [i_0] [i_1] [i_7]);
                        var_26 = (max(2897432325, (min((!var_12), (max((arr_0 [i_9]), 2485542594))))));
                    }
                    arr_34 [i_0] [i_1] [i_0] = (!-var_11);
                }
                arr_35 [i_0] [i_1] = 0;

                for (int i_10 = 0; i_10 < 1;i_10 += 1)
                {
                    arr_39 [i_0] [i_10] [i_0] = (((arr_37 [i_0] [i_1] [i_1] [i_10]) ? (max(-8681, 14815808458591530427)) : ((((arr_36 [4] [i_1] [i_10] [i_10]) ? (arr_36 [i_0] [i_1] [i_1] [i_10]) : 151)))));
                    var_27 = min(var_11, ((((arr_28 [i_0] [i_1] [i_10] [i_10]) ? var_14 : (arr_28 [i_0] [i_1] [i_10] [i_10])))));
                }
                for (int i_11 = 0; i_11 < 1;i_11 += 1)
                {
                    arr_42 [i_1] |= ((var_5 ? var_10 : (min(1022139851, var_8))));
                    var_28 = (((!(arr_3 [8] [i_1] [i_11]))));
                    arr_43 [i_0] [i_11] = (arr_26 [i_11] [i_11] [i_11]);
                    /* LoopNest 2 */
                    for (int i_12 = 1; i_12 < 1;i_12 += 1)
                    {
                        for (int i_13 = 1; i_13 < 8;i_13 += 1)
                        {
                            {
                                var_29 = 1;
                                arr_49 [i_0] [i_0] [i_1] [i_11] [i_11] [i_12 - 1] [i_11] = ((((((!0) != (max((arr_38 [1] [i_12] [i_11]), var_13))))) & (((((((-4066723648353967862 >= (arr_36 [i_0] [i_1] [i_11] [i_13]))))) <= (min(var_5, 4294967295)))))));
                            }
                        }
                    }
                    /* LoopNest 2 */
                    for (int i_14 = 2; i_14 < 6;i_14 += 1)
                    {
                        for (int i_15 = 0; i_15 < 10;i_15 += 1)
                        {
                            {
                                var_30 = (max(var_30, (((((min(21, 4066723648353967848)) != 12))))));
                                arr_56 [i_11] = ((!((max(var_0, 3630935615118021197)))));
                                var_31 = var_3;
                            }
                        }
                    }
                }
            }
        }
    }
    var_32 = var_6;
    #pragma endscop
}
