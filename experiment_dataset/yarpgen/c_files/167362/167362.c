/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 167362
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=167362 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/167362
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_16 += var_7;
    var_17 = var_3;
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 1;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 1;i_1 += 1)
        {
            {

                for (int i_2 = 1; i_2 < 23;i_2 += 1)
                {
                    arr_6 [12] [i_2] = var_14;
                    /* LoopNest 2 */
                    for (int i_3 = 1; i_3 < 22;i_3 += 1)
                    {
                        for (int i_4 = 1; i_4 < 22;i_4 += 1)
                        {
                            {
                                arr_13 [i_0] [5] [5] [i_3] [i_3] [i_2] = (min(((((((arr_5 [i_0]) || (arr_2 [1] [i_2 - 1] [i_2]))) || (((var_2 ? (arr_4 [i_0] [i_0]) : var_0)))))), (max(((((arr_2 [i_4] [i_2] [i_1]) ? (arr_8 [i_2] [i_2] [i_2] [i_2] [i_0]) : var_1))), (arr_11 [i_2 + 1] [i_2] [i_3] [i_4] [22])))));
                                var_18 -= var_13;
                            }
                        }
                    }
                }
                for (int i_5 = 2; i_5 < 23;i_5 += 1)
                {
                    var_19 = ((((max(var_11, -var_7))) ? ((max((max((arr_2 [i_0] [i_0] [i_5]), var_8)), (arr_14 [i_1] [i_5 - 2] [i_5 + 1])))) : (((arr_5 [i_0]) ? var_13 : (arr_3 [i_5 + 1] [i_1] [i_1])))));

                    for (int i_6 = 2; i_6 < 21;i_6 += 1)
                    {
                        var_20 = ((-(((arr_15 [i_0] [i_0] [i_0] [i_0]) ? (arr_15 [1] [i_1] [i_5 + 1] [i_6 + 1]) : (arr_15 [i_0] [i_0] [i_0] [i_0])))));
                        var_21 -= ((((((arr_18 [i_0] [i_0] [i_1] [3] [i_1]) ? (arr_2 [i_0] [i_0] [i_0]) : (arr_11 [12] [4] [i_1] [i_5] [i_6 + 1])))) ? (((!(arr_7 [i_5] [6] [i_5] [i_5 - 1] [i_6])))) : ((((((var_12 ? (arr_11 [i_0] [8] [8] [10] [8]) : var_10))) && ((min((arr_11 [22] [10] [1] [i_6 + 1] [i_1]), (arr_2 [i_0] [7] [i_6])))))))));
                    }
                    /* vectorizable */
                    for (int i_7 = 0; i_7 < 24;i_7 += 1)
                    {
                        var_22 = (max(var_22, (!var_3)));
                        arr_23 [i_0] [i_7] [3] [i_7] [i_7] = (arr_14 [i_0] [i_1] [i_0]);
                    }
                }
                /* vectorizable */
                for (int i_8 = 3; i_8 < 21;i_8 += 1)
                {
                    /* LoopNest 2 */
                    for (int i_9 = 1; i_9 < 23;i_9 += 1)
                    {
                        for (int i_10 = 0; i_10 < 24;i_10 += 1)
                        {
                            {
                                var_23 = (arr_9 [i_10]);
                                var_24 = (var_7 * var_13);
                            }
                        }
                    }
                    var_25 = (arr_18 [i_1] [i_1] [i_1] [i_1] [i_1]);
                }
                for (int i_11 = 0; i_11 < 24;i_11 += 1)
                {

                    for (int i_12 = 0; i_12 < 24;i_12 += 1) /* same iter space */
                    {
                        var_26 -= ((((((arr_9 [i_11]) ? var_13 : (arr_9 [i_11])))) ? ((max((((arr_37 [i_0] [i_11]) ^ var_13)), (((arr_5 [i_0]) ? (arr_27 [i_11] [i_1] [22] [6]) : var_13))))) : ((((((arr_4 [i_1] [i_11]) ? var_3 : (arr_20 [i_0] [i_0] [i_0] [i_11] [14])))) ? ((var_14 ? var_7 : (arr_30 [i_11] [i_11] [i_11] [i_12] [i_12]))) : var_4))));
                        var_27 = (max((min((arr_18 [i_0] [i_0] [i_0] [i_0] [2]), (arr_10 [i_0] [i_0] [i_0] [i_0] [i_11] [i_12] [i_12]))), (((!((((arr_16 [3] [i_11] [3] [3]) ^ var_3))))))));
                        arr_39 [i_0] [i_0] [i_11] [i_0] [i_12] = ((((((arr_17 [i_0] [i_0] [8] [i_1] [i_11] [i_12]) ? (max(var_5, (arr_29 [i_0] [i_1] [i_0] [i_12]))) : ((((arr_25 [i_0] [i_12] [i_11] [i_11]) << (var_7 - 8890548249787626678))))))) ? (((var_10 ? (((!(arr_15 [i_0] [i_1] [i_11] [i_1])))) : ((max((arr_12 [i_0] [i_1] [i_1] [17] [i_12]), var_3)))))) : var_14));
                        arr_40 [i_0] [i_0] [i_0] [i_12] = (max((max((max((arr_20 [i_0] [i_0] [i_0] [i_12] [i_0]), var_12)), (arr_35 [i_0] [i_0] [i_0] [i_0]))), ((((arr_5 [i_0]) ^ (arr_8 [i_0] [i_12] [i_1] [i_11] [i_11]))))));
                    }
                    for (int i_13 = 0; i_13 < 24;i_13 += 1) /* same iter space */
                    {

                        for (int i_14 = 0; i_14 < 24;i_14 += 1) /* same iter space */
                        {
                            var_28 = var_1;
                            var_29 += (arr_3 [i_0] [i_1] [i_11]);
                        }
                        for (int i_15 = 0; i_15 < 24;i_15 += 1) /* same iter space */
                        {
                            var_30 = (max((max((((-(arr_46 [11] [19] [i_11] [i_11] [1])))), (max(var_0, var_1)))), ((-(arr_36 [i_1] [i_1] [i_11])))));
                            arr_49 [i_0] [i_1] [i_11] [i_13] [i_15] = ((((-(arr_22 [i_0] [i_11])))) * (((arr_33 [i_15]) ? var_12 : (arr_9 [i_15]))));
                            arr_50 [i_0] [i_1] [2] [i_13] [i_15] = max(var_9, (arr_2 [i_1] [i_1] [i_15]));
                        }
                        for (int i_16 = 0; i_16 < 1;i_16 += 1)
                        {
                            var_31 = ((-(max((((arr_10 [i_0] [i_0] [i_1] [i_11] [i_13] [i_13] [i_11]) ? var_12 : var_4)), ((((arr_22 [i_16] [i_13]) - (arr_34 [i_0] [1]))))))));
                            arr_53 [i_0] = (+(((arr_22 [i_16] [4]) ? var_4 : ((var_9 * (arr_34 [i_1] [i_1]))))));
                            var_32 += (((((!((min((arr_42 [i_0] [i_1] [20] [i_11] [i_13] [i_13]), (arr_45 [i_16] [i_16] [i_11] [1] [i_16] [i_1]))))))) >= (arr_45 [i_0] [i_1] [i_11] [10] [i_16] [i_16])));
                            var_33 = var_14;
                            var_34 = ((~(min(((min((arr_42 [20] [7] [i_11] [i_0] [14] [i_0]), (arr_44 [4] [i_16] [i_16])))), var_7))));
                        }
                        arr_54 [i_0] [i_0] [i_0] [6] [i_0] |= (min(var_4, (max((arr_5 [10]), var_4))));
                        var_35 ^= (arr_45 [i_1] [16] [i_0] [i_13] [i_13] [i_0]);
                        arr_55 [i_0] [i_0] [i_11] [i_13] = ((-(arr_0 [i_0] [i_0])));
                    }
                    /* vectorizable */
                    for (int i_17 = 0; i_17 < 24;i_17 += 1) /* same iter space */
                    {
                        var_36 = ((((((!(arr_36 [i_1] [23] [i_17]))))) != (arr_57 [i_11] [i_11] [i_17])));
                        var_37 &= var_4;
                        arr_59 [i_0] [i_0] [i_0] [i_17] [i_0] = (arr_21 [i_0] [i_17]);

                        for (int i_18 = 0; i_18 < 24;i_18 += 1)
                        {
                            var_38 -= var_5;
                            var_39 = (arr_36 [i_0] [i_0] [i_11]);
                            var_40 = (!var_7);
                            var_41 *= ((!(arr_43 [i_17] [4] [4] [i_0])));
                            arr_62 [18] [i_1] [i_17] [i_1] [i_17] [i_1] = (((var_12 == (arr_43 [i_17] [i_1] [i_1] [i_17]))));
                        }
                    }
                    /* LoopNest 2 */
                    for (int i_19 = 0; i_19 < 1;i_19 += 1)
                    {
                        for (int i_20 = 4; i_20 < 20;i_20 += 1)
                        {
                            {
                                var_42 = (min((max(((max(var_1, (arr_34 [i_1] [i_20 - 2])))), (min((arr_22 [i_19] [i_20 - 2]), (arr_20 [i_1] [i_1] [i_1] [i_19] [i_1]))))), ((max((((arr_45 [i_19] [i_1] [i_20 + 2] [i_20 - 1] [i_20 - 4] [i_20 - 1]) ? (arr_45 [i_0] [i_0] [i_0] [i_0] [i_19] [i_20]) : var_13)), var_1)))));
                                arr_70 [i_0] [i_1] [i_0] [i_19] [i_19] [i_0] [i_0] = ((((((max((arr_38 [i_19]), (arr_16 [i_0] [i_1] [i_11] [18])))) || -var_1)) ? ((((arr_48 [i_1] [i_20 + 3] [i_20 + 3] [i_20] [i_20 + 3] [i_20 + 3] [i_20 + 3]) ? (arr_17 [i_0] [i_1] [i_11] [i_11] [i_19] [5]) : var_13))) : ((((min(var_6, (arr_37 [i_0] [i_19])))) ? ((var_3 ? var_11 : var_3)) : (arr_48 [i_1] [i_19] [i_11] [i_19] [i_20] [i_19] [i_20 - 1])))));
                                arr_71 [i_19] = -var_4;
                                var_43 = (min(var_43, (((!((max(var_12, (((-(arr_27 [i_11] [i_1] [i_11] [i_20]))))))))))));
                            }
                        }
                    }
                    var_44 += (((-(var_14 <= var_7))) != ((min((arr_5 [i_0]), (max((arr_22 [i_0] [i_1]), (arr_37 [i_0] [i_11])))))));
                    arr_72 [i_1] [i_11] |= (arr_19 [i_0] [i_0] [12] [i_0] [i_0] [i_0]);
                    var_45 = ((((arr_68 [i_0] [i_0] [i_0] [i_0] [i_0] [i_0] [i_0]) ? (arr_68 [i_1] [i_1] [i_1] [i_1] [0] [i_1] [i_1]) : var_12)));
                }
                var_46 -= (arr_5 [i_0]);
                var_47 = (arr_9 [12]);
                arr_73 [i_0] [i_0] = (max((min(((var_5 ? var_0 : (arr_20 [4] [i_1] [i_1] [4] [8]))), (arr_67 [14] [2]))), (((((max(var_5, var_4))) ? -var_9 : var_4)))));
                var_48 = (((((var_1 / (arr_63 [i_0] [i_0] [i_0] [20])))) ^ (min((min((arr_14 [i_0] [i_0] [i_0]), var_12)), (!var_10)))));
            }
        }
    }
    var_49 = ((var_14 ? var_9 : ((((!(((var_9 ? var_10 : var_10)))))))));
    #pragma endscop
}
