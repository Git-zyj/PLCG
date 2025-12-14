/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 175341
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=175341 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/175341
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_19 *= (((((var_14 ? ((min(var_5, var_4))) : var_7))) ? var_12 : var_12));
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 19;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 19;i_1 += 1)
        {
            {
                arr_6 [i_1] = ((!(arr_1 [i_0])));

                /* vectorizable */
                for (int i_2 = 4; i_2 < 18;i_2 += 1) /* same iter space */
                {
                    /* LoopNest 2 */
                    for (int i_3 = 2; i_3 < 18;i_3 += 1)
                    {
                        for (int i_4 = 0; i_4 < 19;i_4 += 1)
                        {
                            {
                                var_20 = var_14;
                                arr_16 [i_0] [i_1] [i_2 - 3] [i_0] = ((var_17 || (arr_8 [i_0] [i_0] [i_1])));
                                arr_17 [i_1] [i_1] [i_1] = 4294967295;
                                var_21 = (arr_15 [i_0] [i_0] [i_1] [i_2 + 1] [7] [5] [i_4]);
                            }
                        }
                    }
                    var_22 = (max(var_22, 616043550));
                }
                /* vectorizable */
                for (int i_5 = 4; i_5 < 18;i_5 += 1) /* same iter space */
                {
                    var_23 -= ((arr_12 [i_0] [i_5 - 1] [i_0] [i_5 - 3]) || 10414);

                    for (int i_6 = 1; i_6 < 18;i_6 += 1)
                    {
                        var_24 = var_8;
                        var_25 += ((var_0 | (arr_19 [i_1] [i_6 - 1] [i_5 - 4] [i_1])));
                        var_26 -= ((var_2 ? (arr_15 [i_0] [i_0] [i_5] [i_5 - 4] [i_6] [11] [i_5 - 4]) : (arr_10 [i_5] [1] [6] [i_5])));
                        arr_22 [16] [i_1] [i_1] = (arr_1 [i_1]);
                    }
                    for (int i_7 = 0; i_7 < 19;i_7 += 1)
                    {

                        for (int i_8 = 1; i_8 < 18;i_8 += 1)
                        {
                            arr_28 [i_5] [i_1] [i_1] = ((~(arr_26 [i_5 - 1] [i_8 - 1] [i_8 + 1] [i_8 - 1] [i_8])));
                            arr_29 [17] [i_1] [10] [i_1] [i_8] = (~(arr_23 [i_1] [i_1] [i_5 - 1] [i_5 - 2]));
                        }
                        for (int i_9 = 3; i_9 < 17;i_9 += 1)
                        {
                            var_27 = var_16;
                            var_28 = (((arr_15 [i_0] [i_5 - 2] [i_9 - 3] [i_9 - 3] [i_9 + 2] [i_9 - 3] [1]) ? 7 : var_8));
                            arr_32 [i_1] [i_1] [i_1] [i_1] = (arr_25 [i_5 - 2] [i_9 - 2] [15] [i_9 - 2] [i_1] [i_9 - 2] [i_9 - 2]);
                        }
                        for (int i_10 = 1; i_10 < 17;i_10 += 1)
                        {
                            arr_36 [i_0] [i_0] [i_1] [i_7] = var_6;
                            arr_37 [i_1] [i_1] [7] = ((616043550 ? 29098 : 61625));
                            var_29 += ((!(((-1071689159 ? var_9 : (arr_10 [i_7] [i_7] [i_7] [i_7]))))));
                            var_30 = 2;
                            var_31 = (1 ? (arr_21 [i_5 - 1] [i_5 - 1] [i_10 + 2] [i_10 - 1] [i_10 - 1]) : (9223372036854775807 ^ var_9));
                        }
                        arr_38 [i_1] [i_1] [i_1] [i_1] [i_1] = -57820694266204155;
                        arr_39 [i_0] [i_1] [i_5] [i_7] = var_12;
                        arr_40 [i_0] [1] [2] [i_1] = (((arr_30 [i_5 - 4] [i_5 + 1] [i_5] [i_5] [i_5 - 4]) % (arr_30 [i_5] [i_5 + 1] [i_5] [7] [i_5 - 3])));
                        var_32 = (max(var_32, (((!(arr_33 [i_5] [i_5 - 4] [i_7] [i_5 - 4] [i_5 - 3]))))));
                    }
                    for (int i_11 = 2; i_11 < 18;i_11 += 1) /* same iter space */
                    {
                        var_33 = ((var_6 != ((var_3 ? var_9 : (arr_21 [i_0] [i_0] [i_0] [i_0] [i_11 - 2])))));
                        arr_44 [3] [i_1] [i_1] [i_11 - 1] = (105 && -1373456782);
                        arr_45 [i_0] [0] [i_1] [i_11 - 2] = (arr_41 [i_1]);
                    }
                    for (int i_12 = 2; i_12 < 18;i_12 += 1) /* same iter space */
                    {
                        var_34 = (min(var_34, (((-(arr_34 [i_12 + 1] [i_12 + 1] [i_0] [14]))))));
                        var_35 = (((arr_19 [i_5 - 4] [i_5 - 1] [i_5 - 3] [i_5]) ? (var_9 | 4676640326027680655) : (arr_20 [i_1] [i_12 - 2] [i_12 + 1] [i_12 - 1])));
                    }

                    for (int i_13 = 4; i_13 < 16;i_13 += 1)
                    {
                        arr_50 [i_0] [i_0] [i_0] [i_1] [i_0] = (arr_26 [15] [i_1] [i_13 + 2] [i_13] [i_13 - 2]);
                        var_36 = (max(var_36, var_11));
                        var_37 = (max(var_37, var_5));
                    }
                }
                for (int i_14 = 4; i_14 < 18;i_14 += 1) /* same iter space */
                {
                    arr_53 [i_1] [i_1] [i_1] [i_1] = (arr_46 [i_14 + 1] [i_14 - 2] [5] [11] [i_14 + 1] [i_14 - 4]);
                    var_38 = (min(var_38, ((max(0, (arr_35 [16]))))));
                }
                var_39 = (min(var_4, (((2097088 ? (arr_49 [i_0] [i_1] [12]) : 1971998365)))));
                var_40 = ((((((arr_12 [i_1] [i_0] [i_1] [i_1]) ^ (arr_12 [i_1] [i_1] [i_1] [i_1])))) ? (max((arr_12 [i_1] [i_0] [i_0] [i_1]), (arr_12 [i_1] [i_1] [i_1] [9]))) : (((((arr_43 [i_0] [i_1] [i_0] [i_1]) == (arr_43 [i_0] [i_1] [i_1] [9])))))));
            }
        }
    }
    #pragma endscop
}
