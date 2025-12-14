/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 11585
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=11585 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/11585
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 13;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 13;i_1 += 1)
        {
            {

                for (int i_2 = 0; i_2 < 13;i_2 += 1)
                {
                    arr_8 [i_1] = (arr_2 [i_2]);
                    arr_9 [i_0] [i_0] &= (((!(arr_3 [i_0]))));
                    arr_10 [i_1] [i_0] [i_1] [i_2] = var_2;
                }

                for (int i_3 = 0; i_3 < 1;i_3 += 1)
                {
                    /* LoopNest 2 */
                    for (int i_4 = 1; i_4 < 10;i_4 += 1)
                    {
                        for (int i_5 = 0; i_5 < 13;i_5 += 1)
                        {
                            {
                                arr_17 [i_5] [i_1] [i_0] [i_1] [i_0] &= ((!(((!0) || (15 && -15376)))));
                                arr_18 [i_5] [i_1] [i_4] [1] [4] [i_1] [4] = (max(((((var_5 ? 1 : 7346)) + (arr_2 [i_4]))), (arr_14 [i_0] [i_0])));
                                var_18 = (min(var_12, ((-((((arr_5 [i_4] [i_4]) > var_13)))))));
                            }
                        }
                    }
                    arr_19 [i_0] [i_1] [i_1] [i_3] = 1;
                    arr_20 [i_0] &= (max(var_14, (max((arr_0 [i_0]), (~-1373263222)))));
                    arr_21 [i_0] [i_0] [i_0] &= ((((min((255 - 1), 0))) ? var_3 : (arr_7 [i_1])));
                    var_19 = ((-(arr_3 [i_1])));
                }
                for (int i_6 = 0; i_6 < 13;i_6 += 1)
                {
                    /* LoopNest 2 */
                    for (int i_7 = 0; i_7 < 13;i_7 += 1)
                    {
                        for (int i_8 = 0; i_8 < 13;i_8 += 1)
                        {
                            {
                                arr_30 [i_0] [i_1] = (max(65535, ((-((var_5 ? -3688934379121421717 : (arr_24 [i_0] [i_1] [i_0] [i_7])))))));
                                var_20 = ((-(((((arr_14 [i_0] [i_0]) + -15376)) + (((0 ? var_16 : 0)))))));
                                var_21 = ((((max(((min(0, 96))), var_4))) != (!65533)));
                            }
                        }
                    }
                    var_22 = -1353;

                    for (int i_9 = 0; i_9 < 13;i_9 += 1)
                    {

                        for (int i_10 = 1; i_10 < 10;i_10 += 1)
                        {
                            arr_38 [i_0] [i_1] [i_6] [i_6] [i_9] [i_9] [i_6] &= (max((arr_31 [i_0]), ((~(arr_4 [i_6])))));
                            var_23 = ((((((((arr_24 [i_1] [i_6] [i_6] [i_10]) ? var_7 : -8642))) ? (((max(var_17, (arr_0 [i_0]))))) : (min(6063861347805063949, var_9)))) << (arr_7 [12])));
                            arr_39 [i_0] [i_1] [i_6] [i_9] [i_10] = max((arr_27 [i_10 + 1] [i_9] [i_6] [1] [i_0]), ((((arr_22 [i_0] [i_1] [i_6] [i_1]) > (arr_22 [i_0] [i_1] [i_0] [i_10 - 1])))));
                        }
                        /* vectorizable */
                        for (int i_11 = 0; i_11 < 13;i_11 += 1) /* same iter space */
                        {
                            arr_42 [10] [i_1] [10] [10] [7] = ((~(arr_37 [i_11] [i_1] [i_6])));
                            arr_43 [i_0] [i_1] [i_1] [i_0] [i_1] [i_9] [i_9] = (((arr_32 [i_0] [i_1] [i_1] [i_11]) ? (arr_29 [i_0] [i_1] [i_6] [i_1] [i_11]) : (arr_5 [i_11] [i_0])));
                            var_24 = var_10;
                        }
                        for (int i_12 = 0; i_12 < 13;i_12 += 1) /* same iter space */
                        {
                            var_25 = ((((((((arr_7 [i_6]) - (arr_41 [i_0] [i_1] [i_12]))) % (min((arr_33 [i_0] [1] [i_1] [i_6] [2] [i_0]), -1633234906))))) - ((min(var_17, 1373263222)))));
                            var_26 = (max((arr_29 [i_1] [i_1] [i_6] [i_1] [i_0]), (((!((min(1548126759, 1))))))));
                            var_27 &= var_13;
                        }
                        /* vectorizable */
                        for (int i_13 = 0; i_13 < 13;i_13 += 1) /* same iter space */
                        {
                            arr_49 [i_1] [i_1] [i_1] [i_6] [i_9] [i_13] [i_13] = (((((255 ? 1 : (arr_11 [i_0] [i_1] [i_6])))) ? (arr_34 [i_0] [i_1] [8] [i_9] [i_13]) : 472173457));
                            arr_50 [i_1] = -1;
                        }

                        for (int i_14 = 0; i_14 < 13;i_14 += 1)
                        {
                            arr_53 [i_0] [i_1] [i_0] [i_0] [i_0] [i_14] = (!1);
                            var_28 = 117;
                            arr_54 [i_0] [i_0] [i_6] [i_1] = (max((arr_1 [i_6]), (max((arr_1 [i_6]), (arr_1 [i_1])))));
                        }
                        for (int i_15 = 2; i_15 < 12;i_15 += 1)
                        {
                            var_29 = ((!(~var_3)));
                            var_30 = (max(0, (min((min((arr_15 [i_0] [i_1] [i_1] [i_6] [i_9] [i_15]), 2427402763)), ((((arr_52 [i_0] [i_1] [i_0] [i_0] [i_15]) * var_3)))))));
                            arr_58 [i_0] [i_1] [i_6] [i_1] = ((((arr_52 [i_1] [i_6] [i_15] [i_15 - 1] [i_15]) + -9223372036854775798)));
                        }
                        var_31 = (min(var_11, ((~(~var_17)))));
                        var_32 = (max(var_32, var_9));
                        arr_59 [i_0] [i_1] [i_1] [i_1] [i_6] [i_9] = (((((min((arr_27 [i_0] [i_6] [i_0] [i_0] [i_0]), (arr_27 [i_0] [i_1] [i_6] [i_0] [i_9]))))) == (64183 <= -4)));
                    }
                    var_33 &= ((((min(378973899, ((64183 | (arr_4 [i_0])))))) ? -1 : -var_12));
                }
            }
        }
    }
    var_34 = -var_14;
    #pragma endscop
}
