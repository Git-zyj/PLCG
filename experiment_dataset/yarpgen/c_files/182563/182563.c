/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 182563
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=182563 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/182563
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 22;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 22;i_1 += 1)
        {
            {
                var_17 += (((((~(arr_5 [i_0] [i_0])))) ? ((~(3074894143 || 2188087652))) : (arr_0 [i_0])));

                for (int i_2 = 0; i_2 < 22;i_2 += 1)
                {
                    var_18 = (((-3024337154226495878 - 17043) ? (((arr_1 [i_0]) + (arr_1 [i_1]))) : ((-(arr_1 [i_0])))));
                    var_19 = (((arr_0 [i_0]) ? ((((arr_0 [i_2]) - (arr_0 [i_0])))) : ((var_14 % (arr_0 [i_2])))));
                    var_20 = (arr_0 [i_0]);
                    var_21 = (max(var_21, ((max(((((((arr_0 [i_1]) >= (arr_7 [i_0] [12] [12]))) ? (((var_4 ? (arr_0 [i_2]) : (arr_0 [i_1])))) : (arr_7 [i_0] [i_1] [i_2])))), (arr_2 [21] [i_1]))))));
                }
                for (int i_3 = 0; i_3 < 22;i_3 += 1)
                {

                    for (int i_4 = 0; i_4 < 22;i_4 += 1)
                    {
                        var_22 += ((((33852 << (48504 - 48493))) >> (((max((max(var_16, (arr_2 [i_0] [i_1]))), (arr_0 [i_3]))) - 674952378573318570))));
                        var_23 = (arr_4 [i_3]);
                        var_24 -= ((((((max(var_5, (arr_9 [i_0] [i_0] [i_3] [i_4])))) ? (arr_3 [i_1] [i_1]) : (max((arr_4 [i_1]), var_16)))) > (((~(arr_3 [i_0] [i_1]))))));
                    }
                    for (int i_5 = 0; i_5 < 22;i_5 += 1)
                    {

                        /* vectorizable */
                        for (int i_6 = 0; i_6 < 22;i_6 += 1)
                        {
                            arr_18 [i_0] [i_0] [i_0] [i_0] [i_0] = ((~(arr_12 [i_0] [i_0] [i_3] [11])));
                            arr_19 [i_6] [i_5] [i_3] [i_1] [i_0] [i_0] = (arr_7 [i_3] [15] [i_6]);
                        }
                        for (int i_7 = 0; i_7 < 22;i_7 += 1)
                        {
                            var_25 = (min(var_25, (arr_6 [i_5] [i_3] [i_0])));
                            var_26 = (((arr_12 [i_0] [i_3] [i_5] [4]) << (((((arr_8 [19] [7] [7] [i_7]) ? (arr_8 [i_3] [i_1] [i_3] [6]) : var_10)) - 1913483652))));
                            var_27 += (((arr_3 [i_5] [i_0]) && ((min(var_9, (arr_3 [i_1] [i_0]))))));
                        }

                        /* vectorizable */
                        for (int i_8 = 1; i_8 < 20;i_8 += 1)
                        {
                            var_28 = (max(var_28, (((!(arr_7 [i_8] [i_8 + 2] [i_8]))))));
                            var_29 = (~-3483807702489394951);
                            var_30 = (max(var_30, (109 + 17043)));
                            var_31 *= ((((var_11 % (arr_5 [i_5] [12]))) << (((var_16 & var_7) - 674952378573318547))));
                        }
                        for (int i_9 = 2; i_9 < 21;i_9 += 1)
                        {
                            arr_26 [i_9] [i_5] [i_3] [i_0] [i_0] = var_12;
                            arr_27 [i_0] [i_0] [i_0] = ((((((((arr_12 [i_0] [i_1] [i_3] [i_3]) ? (arr_22 [i_0] [i_0] [i_5] [i_3] [i_9]) : (arr_23 [i_0] [i_1] [i_3] [i_3] [i_5] [i_0] [i_9])))) && ((((arr_1 [i_5]) - (arr_15 [i_3] [i_0])))))) ? ((((arr_2 [i_3] [i_1]) ? (arr_15 [i_0] [i_3]) : (((-(arr_12 [i_1] [i_3] [i_5] [i_9]))))))) : ((var_0 ? var_14 : (arr_4 [i_5])))));
                        }
                    }
                    /* LoopNest 2 */
                    for (int i_10 = 0; i_10 < 22;i_10 += 1)
                    {
                        for (int i_11 = 1; i_11 < 21;i_11 += 1)
                        {
                            {
                                var_32 -= ((!(((((-(arr_25 [i_1] [i_3]))) << (((((arr_12 [i_1] [i_1] [i_1] [i_1]) - var_14)) + 1512301451545276430)))))));
                                arr_33 [1] = ((((((arr_6 [i_11 - 1] [i_1] [i_3]) ? (arr_6 [i_11 - 1] [i_0] [i_11 - 1]) : (arr_6 [i_11 + 1] [i_1] [i_3])))) ? (50844 << 0) : (min(((((arr_31 [10] [i_1] [i_1] [i_10] [i_11 - 1] [8]) < var_0))), (var_2 - var_7)))));
                                var_33 &= ((-(((((arr_17 [i_11 + 1] [i_10] [i_3] [i_1] [i_0]) ? (arr_24 [i_11] [i_3] [11]) : (arr_20 [i_11] [1] [i_10] [i_3] [i_0] [i_0]))) - (arr_3 [i_11 - 1] [i_11 - 1])))));
                                var_34 = max(-3483807702489394937, 17);
                            }
                        }
                    }
                }
                /* LoopNest 3 */
                for (int i_12 = 0; i_12 < 22;i_12 += 1)
                {
                    for (int i_13 = 0; i_13 < 22;i_13 += 1)
                    {
                        for (int i_14 = 3; i_14 < 20;i_14 += 1)
                        {
                            {
                                var_35 += (max((arr_5 [i_14 + 1] [i_14 - 2]), ((((((var_5 <= (arr_30 [i_0] [i_1] [i_12])))) <= (arr_21 [i_0]))))));
                                var_36 = (max(var_36, ((((((var_8 >> (((arr_3 [i_0] [i_0]) - 88)))) << (((((arr_30 [i_0] [i_12] [11]) + var_1)) + 1684770685409582356)))) & ((~(arr_38 [i_0] [i_0] [i_0] [i_0] [i_0])))))));
                                arr_41 [i_12] = (arr_28 [i_0] [i_0] [i_0]);
                            }
                        }
                    }
                }
            }
        }
    }
    var_37 = (max(-var_13, var_4));
    var_38 = ((((!(var_12 <= var_15))) ? var_14 : var_8));
    var_39 = min(var_11, var_16);
    #pragma endscop
}
