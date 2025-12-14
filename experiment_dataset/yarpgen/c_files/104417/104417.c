/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 104417
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=104417 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/104417
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_17 = ((~((~((max(8, 6)))))));
    /* LoopNest 2 */
    for (int i_0 = 3; i_0 < 14;i_0 += 1)
    {
        for (int i_1 = 3; i_1 < 14;i_1 += 1)
        {
            {
                arr_6 [i_0] = (((132 / var_1) ? (((var_7 / (((arr_4 [i_0]) ? (arr_5 [i_0] [i_0] [i_0]) : (arr_5 [i_1] [i_1] [i_0])))))) : ((-(arr_0 [i_0] [i_0])))));
                arr_7 [i_0] = ((-(-4580882341305641378 && -22098)));
                var_18 += ((116 >> (116 - 114)));
                /* LoopNest 2 */
                for (int i_2 = 1; i_2 < 12;i_2 += 1)
                {
                    for (int i_3 = 0; i_3 < 15;i_3 += 1)
                    {
                        {
                            var_19 = (min(var_19, (((-(arr_2 [i_0] [i_1 - 1]))))));

                            for (int i_4 = 1; i_4 < 14;i_4 += 1)
                            {
                                arr_15 [i_0] [i_0] [i_2] = ((max((arr_4 [i_0]), (((arr_8 [i_0] [i_0] [i_3] [i_4]) | var_8)))));
                                arr_16 [i_0] [i_1] [i_0] [i_1] [i_2] [i_0] [i_4] = (min(var_11, var_4));
                                var_20 *= ((((min(133, -22110))) ? (((arr_12 [i_0] [i_0] [i_0 - 2] [i_0] [i_0 - 3] [i_0 + 1]) ? var_0 : (arr_12 [i_0] [i_0] [i_0] [i_0] [i_0 - 3] [i_3]))) : ((((arr_12 [i_0] [i_0] [i_0] [i_0] [i_0 - 3] [i_2]) ? (arr_11 [i_0] [i_0] [i_0] [i_0] [i_0 - 3] [i_4 - 1]) : (arr_12 [i_0] [i_0] [i_0 - 1] [i_0] [i_0 - 3] [i_4]))))));
                            }
                            var_21 = (min(var_21, (((!(max(((var_13 != (arr_5 [i_0 - 2] [i_1] [i_3]))), (arr_14 [i_3] [i_2] [i_2] [i_1] [i_0]))))))));
                            arr_17 [i_0] [i_0] [i_2] = (arr_1 [i_3] [i_0]);
                            var_22 = (((min(var_13, var_4)) < ((((arr_14 [i_0] [i_1 - 1] [i_2 + 3] [i_0 - 3] [i_0]) ? (arr_14 [i_0] [i_1 + 1] [i_2 + 1] [i_0 - 1] [i_3]) : (arr_14 [i_0] [i_1 + 1] [i_2 + 1] [i_0 - 2] [i_3]))))));
                        }
                    }
                }
            }
        }
    }
    /* LoopNest 2 */
    for (int i_5 = 0; i_5 < 21;i_5 += 1)
    {
        for (int i_6 = 0; i_6 < 21;i_6 += 1)
        {
            {
                var_23 += (((((~(arr_23 [i_5])))) || ((max(-65472, (max((arr_22 [i_5]), var_6)))))));
                var_24 = min(12, 22098);
                var_25 *= ((1333218717238983518 <= (max((arr_22 [i_5]), (arr_22 [i_6])))));
            }
        }
    }
    /* LoopNest 2 */
    for (int i_7 = 0; i_7 < 24;i_7 += 1)
    {
        for (int i_8 = 0; i_8 < 24;i_8 += 1)
        {
            {
                var_26 = var_13;
                var_27 *= ((((!(arr_26 [i_8] [i_7]))) || ((max(var_2, (arr_25 [i_7]))))));
                var_28 = (min(var_28, ((((((((((arr_25 [i_7]) ? (arr_27 [i_8] [i_7]) : var_3))) ? ((((arr_28 [i_7] [i_8] [i_8]) | var_9))) : (~var_2)))) ? (((max(132, (arr_28 [i_8] [i_8] [i_7]))) & var_15)) : (arr_28 [i_7] [i_8] [i_7]))))));

                /* vectorizable */
                for (int i_9 = 0; i_9 < 24;i_9 += 1)
                {
                    var_29 -= var_5;
                    /* LoopNest 2 */
                    for (int i_10 = 2; i_10 < 23;i_10 += 1)
                    {
                        for (int i_11 = 0; i_11 < 24;i_11 += 1)
                        {
                            {
                                arr_36 [i_7] [i_8] [i_9] [i_10] [i_11] = ((!(arr_30 [i_7] [i_11] [i_10 - 2] [i_10])));
                                var_30 = (((var_4 / (arr_25 [i_8]))) / 54614);
                                var_31 = ((var_8 ? ((var_5 ? (arr_28 [i_7] [i_7] [i_7]) : (arr_24 [i_11]))) : ((var_4 ? var_3 : var_6))));
                                var_32 = (min(var_32, var_7));
                            }
                        }
                    }
                    arr_37 [i_7] = -255;
                    var_33 *= (((arr_33 [i_7] [i_8] [i_9]) <= var_10));
                }
                /* LoopNest 2 */
                for (int i_12 = 0; i_12 < 24;i_12 += 1)
                {
                    for (int i_13 = 0; i_13 < 24;i_13 += 1)
                    {
                        {
                            arr_43 [i_7] [i_7] [i_7] = ((~(max(((((arr_42 [i_12]) ? (arr_38 [i_8]) : 14))), (max(12, 2147483647))))));
                            var_34 = (((((arr_24 [i_7]) ? (114 / var_2) : (arr_30 [i_7] [i_8] [i_12] [i_13]))) << ((((min((arr_34 [i_7] [i_7] [i_7] [i_13] [i_7] [i_8] [i_13]), (arr_34 [i_7] [i_8] [i_13] [i_13] [i_7] [i_7] [i_7])))) - 119))));
                            arr_44 [i_7] [i_8] [i_12] [i_12] [i_13] = (((arr_39 [i_8] [i_8] [i_8]) & (arr_27 [i_7] [i_8])));
                            var_35 = (min(var_35, (arr_33 [i_8] [i_8] [i_8])));
                        }
                    }
                }
            }
        }
    }
    var_36 = (max(-var_12, -var_14));
    #pragma endscop
}
