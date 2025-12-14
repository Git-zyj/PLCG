/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 114772
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=114772 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/114772
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 19;i_0 += 1)
    {
        for (int i_1 = 3; i_1 < 17;i_1 += 1)
        {
            {
                var_11 = 4439;

                /* vectorizable */
                for (int i_2 = 0; i_2 < 19;i_2 += 1)
                {
                    var_12 = (arr_6 [i_0] [17] [i_1 + 1]);
                    var_13 = ((!(arr_5 [i_1] [i_1 + 2] [i_1])));
                }
                for (int i_3 = 1; i_3 < 1;i_3 += 1)
                {
                    arr_12 [i_0] [i_0] [1] &= ((min(var_5, 1231563492)));

                    for (int i_4 = 0; i_4 < 19;i_4 += 1)
                    {
                        var_14 -= ((((((arr_14 [i_0] [i_1 - 1] [i_1 - 1] [i_4]) ? (arr_10 [12] [i_4]) : (arr_16 [0] [i_3 - 1])))) ? var_3 : 32767));
                        arr_17 [i_1] [i_1 - 1] [i_1] = var_8;
                        arr_18 [16] [i_1] [i_1 + 2] [i_1] [6] = ((-(arr_5 [i_1 - 3] [i_3] [i_1])));
                    }
                    for (int i_5 = 0; i_5 < 19;i_5 += 1)
                    {
                        arr_22 [i_1] = var_1;
                        arr_23 [i_0] [i_0] [i_1] [i_5] = (((arr_9 [i_1] [i_1]) >= -1));
                        var_15 = ((arr_9 [i_1] [i_1]) ? (((arr_14 [i_5] [i_3] [i_1] [17]) & (min(255, var_4)))) : (((((var_9 ? (arr_20 [i_0] [i_1] [i_3 - 1] [i_5]) : var_5))) + (max(2715719564, 2292504796)))));
                    }
                    for (int i_6 = 0; i_6 < 19;i_6 += 1)
                    {
                        var_16 = (max(var_16, (((((((!(!var_0))))) == var_10)))));
                        var_17 = (min(var_17, ((min((((arr_15 [i_1 - 3] [i_3 - 1]) ? (min((arr_5 [i_0] [i_6] [10]), var_8)) : (arr_7 [i_0] [i_0] [i_0]))), (((4 + ((1 ? 0 : (arr_3 [i_6] [i_1 - 2])))))))))));
                        var_18 = 1;
                    }
                    var_19 = (min(var_19, ((((min(var_5, -4)))))));
                }
                for (int i_7 = 0; i_7 < 1;i_7 += 1)
                {
                    /* LoopNest 2 */
                    for (int i_8 = 1; i_8 < 1;i_8 += 1)
                    {
                        for (int i_9 = 1; i_9 < 18;i_9 += 1)
                        {
                            {
                                var_20 = ((arr_27 [1] [i_1] [4]) ? (((((max((arr_7 [17] [i_8 - 1] [i_0]), var_1))) ? ((min(-27, 1))) : 1))) : (max((1433669294 * 178), -var_7)));
                                var_21 += (((170 ? ((1 ? (arr_29 [i_0] [4] [i_1] [i_8 - 1]) : (arr_30 [i_0] [i_1] [i_7] [i_8] [i_0]))) : (arr_27 [i_7] [i_7] [i_9]))) & (((arr_2 [i_9]) ? (!1) : ((1 ? var_4 : 76)))));
                            }
                        }
                    }
                    /* LoopNest 2 */
                    for (int i_10 = 0; i_10 < 19;i_10 += 1)
                    {
                        for (int i_11 = 2; i_11 < 17;i_11 += 1)
                        {
                            {
                                arr_41 [i_0] [i_1] [i_7] [i_7] [i_11 - 1] [i_0] [i_7] = (min(-13786, 1));
                                arr_42 [i_0] [i_11] [i_7] [i_7] [i_11 + 1] &= 27;
                                var_22 = (!-var_1);
                                arr_43 [i_0] [i_11] [i_7] [i_1] [i_1 + 2] [i_11 + 1] = arr_30 [i_0] [i_0] [i_0] [i_0] [i_0];
                                var_23 = (min(var_23, (((max(-28, (arr_40 [i_10] [8] [i_1 + 2] [i_10] [i_11] [i_11]))) | (arr_39 [i_0] [i_1] [i_7] [i_10] [i_7] [i_11] [i_11])))));
                            }
                        }
                    }
                    var_24 *= ((min((arr_3 [i_1 - 3] [i_1 - 3]), var_5)));
                    var_25 = ((1158166538 ? ((((var_1 >= ((((arr_27 [i_1] [i_1 - 1] [i_7]) != 1))))))) : (((((min(-22349, var_3)))) | (min(247, var_4))))));
                    arr_44 [i_1 - 1] [i_1 + 1] [i_1] [i_7] = ((!(1 || 1)));
                }
                arr_45 [16] &= ((((min((((arr_7 [i_0] [i_1] [i_0]) ? var_3 : 4294967295)), ((-21873 ? (arr_6 [i_0] [i_0] [i_1]) : var_6))))) ? (((min((arr_21 [i_0] [i_0] [i_1 - 1] [i_1 - 1]), (arr_24 [i_0] [i_1] [i_0] [i_0] [i_0] [i_0]))) << ((((var_1 ? (arr_9 [14] [18]) : (arr_35 [i_0] [i_0] [i_0] [1]))) - 46)))) : var_1));
            }
        }
    }
    var_26 = var_7;
    #pragma endscop
}
