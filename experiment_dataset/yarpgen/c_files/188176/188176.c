/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 188176
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=188176 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/188176
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 3 */
    for (int i_0 = 2; i_0 < 8;i_0 += 1)
    {
        for (int i_1 = 1; i_1 < 6;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 10;i_2 += 1)
            {
                {

                    for (int i_3 = 3; i_3 < 7;i_3 += 1)
                    {
                        var_20 = 1219440981;
                        arr_11 [i_3 + 1] [i_1] [i_2] [i_1] [i_1] [i_0] = var_19;
                    }
                    for (int i_4 = 3; i_4 < 9;i_4 += 1) /* same iter space */
                    {
                        arr_15 [i_0] [i_1] [i_1] [i_4] = ((~(!1219440980)));
                        var_21 = (max(var_21, ((((var_8 <= (arr_4 [i_0 - 1] [4])))))));
                    }
                    for (int i_5 = 3; i_5 < 9;i_5 += 1) /* same iter space */
                    {
                        arr_19 [i_1] [i_1] = (((((min(1051504243, 2063028395)))) ? (max(1219440981, 2525938599)) : (((var_6 ? 51014 : ((-(arr_5 [i_5]))))))));
                        var_22 = 1;
                    }
                    /* LoopNest 2 */
                    for (int i_6 = 0; i_6 < 1;i_6 += 1)
                    {
                        for (int i_7 = 2; i_7 < 9;i_7 += 1)
                        {
                            {
                                arr_25 [1] [i_6] [1] [4] [i_6] [i_1] = (((((arr_0 [i_2]) - (((var_0 ? var_0 : 60040)))))) ? ((((arr_5 [i_7]) ? 1219440972 : 51018))) : 4294967279);
                                arr_26 [i_1] [i_1] [i_1] [i_0 + 2] = 710341995;
                            }
                        }
                    }
                    /* LoopNest 2 */
                    for (int i_8 = 0; i_8 < 10;i_8 += 1)
                    {
                        for (int i_9 = 0; i_9 < 10;i_9 += 1)
                        {
                            {
                                var_23 = (min(var_23, (arr_17 [i_0 - 2] [i_1 + 3] [i_1 + 3])));
                                var_24 = (min(var_24, (((+(min((arr_29 [i_0] [i_1 + 2] [i_2] [i_2] [i_9]), (arr_29 [i_1] [i_8] [i_2] [i_1] [6]))))))));
                                var_25 *= (((((var_0 ? var_10 : (arr_23 [3] [i_0 + 2])))) ? 1457169374 : (max((!57902), -710342008))));
                                var_26 = 2244622923;
                            }
                        }
                    }
                    arr_32 [i_1] [i_2] = (max((((51014 ? (((arr_6 [8] [i_1] [i_2]) ? 14506 : (arr_30 [i_0] [i_1 + 4]))) : (((!(arr_0 [i_2]))))))), (((~var_16) - ((((arr_14 [i_2] [1] [5] [i_0 + 1]) ? var_6 : 58576)))))));
                    var_27 = (((((max(var_19, var_8)))) ? ((((!var_5) > (min((arr_10 [i_0] [i_0] [6] [i_1] [i_2] [i_2]), var_15))))) : 710341986));
                }
            }
        }
    }
    var_28 = ((var_1 ? var_3 : (max(((var_7 ? var_17 : var_18)), var_10))));
    var_29 = (max(var_29, var_4));
    /* LoopNest 2 */
    for (int i_10 = 0; i_10 < 13;i_10 += 1)
    {
        for (int i_11 = 2; i_11 < 12;i_11 += 1)
        {
            {
                arr_37 [i_11] = ((((((~var_8) << (((max(2147483647, 2792542001)) - 2792541986))))) ? ((var_10 ? (~4294967263) : ((((!(arr_35 [i_11]))))))) : (!65535)));
                var_30 = (min(((max(4214, (((arr_34 [5] [i_10]) ? -710341994 : (arr_34 [i_10] [i_11 - 2])))))), -var_10));

                for (int i_12 = 2; i_12 < 9;i_12 += 1)
                {

                    /* vectorizable */
                    for (int i_13 = 2; i_13 < 9;i_13 += 1)
                    {
                        arr_43 [i_13 - 2] [i_12] [i_11] [5] [i_12] [i_10] = 27393;
                        var_31 = (((arr_39 [i_12 - 2] [i_12 + 4] [i_12 + 1]) ? (arr_39 [i_12] [i_12 + 1] [i_12 + 2]) : (arr_39 [i_12 + 2] [i_12 - 1] [i_12 + 1])));
                    }

                    for (int i_14 = 1; i_14 < 12;i_14 += 1)
                    {
                        arr_46 [i_12] = var_16;
                        var_32 |= (8 == 1);
                    }
                    /* vectorizable */
                    for (int i_15 = 0; i_15 < 13;i_15 += 1)
                    {
                        var_33 *= (((arr_39 [i_12] [i_12 + 2] [i_11 - 1]) + (((!(arr_38 [i_12 + 3] [10] [4] [4]))))));
                        arr_50 [i_12] [i_12 + 1] [9] [i_15] = ((var_12 + (arr_44 [i_12 - 2] [i_11 - 1] [i_11] [i_11 - 1] [i_11 + 1])));
                    }
                    /* LoopNest 2 */
                    for (int i_16 = 0; i_16 < 1;i_16 += 1)
                    {
                        for (int i_17 = 1; i_17 < 10;i_17 += 1)
                        {
                            {
                                var_34 = (arr_56 [i_12]);
                                var_35 = -823034987;
                                arr_58 [i_10] [i_11] [i_12] [i_16] = min(((-(arr_35 [i_10]))), (((!(arr_45 [i_12])))));
                                var_36 = ((7 ? 14522 : 1981368430));
                            }
                        }
                    }
                    var_37 = ((4294967295 ? ((((((var_15 ? var_8 : (arr_56 [i_12])))) ? (((var_3 ? 57902 : 14522))) : ((var_6 + (arr_54 [i_10] [i_10] [i_11] [i_11 + 1] [9])))))) : (min((~3016252183), 1278715115))));
                }
            }
        }
    }
    var_38 = var_19;
    #pragma endscop
}
