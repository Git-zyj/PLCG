/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 166879
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=166879 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/166879
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_12 += ((((max(var_0, ((max(var_1, var_1)))))) && ((max(var_1, (var_11 > var_6))))));
    /* LoopNest 2 */
    for (int i_0 = 3; i_0 < 22;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 24;i_1 += 1)
        {
            {

                for (int i_2 = 0; i_2 < 24;i_2 += 1)
                {
                    arr_9 [i_0] [i_0] = var_2;

                    for (int i_3 = 0; i_3 < 24;i_3 += 1)
                    {

                        /* vectorizable */
                        for (int i_4 = 1; i_4 < 23;i_4 += 1)
                        {
                            arr_15 [i_0] [i_1] [i_2] = var_1;
                            var_13 = (max(var_13, ((((arr_3 [i_4 - 1] [i_4] [21]) > (var_9 >= var_11))))));
                        }
                        var_14 = ((((((arr_13 [i_0 - 1] [9] [i_0] [3] [i_2]) ? (arr_13 [i_0 - 1] [i_3] [i_0] [i_0] [i_0]) : (arr_13 [i_0 - 3] [i_1] [i_0] [11] [i_1])))) <= 65535));
                        var_15 = ((~(((1 != ((-2147483635 ? 586251255 : 18446744073709551613)))))));
                        var_16 = (((((arr_10 [i_0 - 3] [i_0 - 2] [i_0] [i_0]) + (arr_10 [i_0 + 2] [i_0 + 2] [i_0] [i_0]))) + ((max((arr_4 [i_0 - 3] [i_0]), (arr_4 [i_0 + 2] [i_0]))))));
                    }

                    for (int i_5 = 4; i_5 < 21;i_5 += 1)
                    {
                        var_17 = (max(var_17, (((((var_9 >> (((((arr_0 [10]) & var_0)) - 102760465)))) << ((((max((arr_16 [i_5 - 2] [i_5 - 2] [i_2] [i_5 - 3]), (arr_16 [i_5 - 1] [i_1] [i_5 - 1] [i_5 + 1])))) - 247)))))));
                        var_18 = (max((arr_10 [i_0] [i_1] [i_2] [i_0]), ((max((~var_8), (((var_4 <= (arr_0 [i_0])))))))));
                        var_19 = max((((-(((arr_11 [i_0 + 1] [i_1] [i_2] [i_5]) >> (var_2 - 7768)))))), (2 % 1));
                        var_20 = (arr_14 [i_0 + 2] [i_1] [i_2] [i_5 - 3] [i_2]);
                    }
                    for (int i_6 = 0; i_6 < 24;i_6 += 1)
                    {
                        arr_23 [i_0] [i_0] [1] [i_6] [i_2] = ((((((arr_20 [i_0]) | (arr_20 [i_0])))) ? ((((arr_11 [i_0] [i_0 - 3] [i_0 - 1] [i_0 + 1]) / (arr_11 [i_0] [i_0 + 1] [i_0] [i_0 - 1])))) : (arr_20 [i_0])));
                        var_21 = arr_14 [i_0] [i_0] [i_0] [i_0 - 2] [i_0];
                    }
                    /* LoopNest 2 */
                    for (int i_7 = 2; i_7 < 22;i_7 += 1)
                    {
                        for (int i_8 = 1; i_8 < 21;i_8 += 1)
                        {
                            {
                                var_22 = (var_7 < (var_8 << var_7));
                                var_23 = ((max(var_1, (~var_6))));
                                var_24 = (((arr_17 [i_0] [i_0] [i_0] [6] [i_7 - 1] [i_8]) + (((max((arr_5 [i_0] [i_0]), var_6))))));
                                var_25 = (((min((arr_17 [i_8] [i_7] [i_2] [12] [12] [9]), ((((arr_6 [i_0] [9] [2]) * (arr_25 [i_0] [1] [i_0] [i_7] [i_8])))))) / (((((min((arr_22 [i_0] [i_0] [i_0 - 1] [15] [i_0] [22]), var_7)))) + (arr_17 [0] [i_0 - 2] [5] [2] [16] [i_0 - 2])))));
                                var_26 = (((arr_25 [i_7] [i_1] [i_0] [i_7] [i_8]) < (max((arr_20 [i_0]), var_11))));
                            }
                        }
                    }
                }
                /* vectorizable */
                for (int i_9 = 0; i_9 < 24;i_9 += 1)
                {
                    var_27 = ((!(arr_25 [i_0 + 1] [i_0 + 1] [i_0] [i_0 + 2] [i_0])));
                    var_28 = var_5;
                    arr_32 [i_0] [i_1] [i_9] = ((var_8 * (arr_6 [i_0] [i_0 - 1] [i_0 - 3])));
                    arr_33 [i_0] [i_9] [i_9] = ((!(arr_30 [i_0] [i_0] [i_0])));
                }
                for (int i_10 = 2; i_10 < 23;i_10 += 1)
                {
                    var_29 = ((((arr_30 [i_0 - 3] [i_10 - 2] [i_10 - 2]) * (arr_8 [12] [i_10 + 1] [i_0 + 2]))) | ((min((arr_3 [i_0] [i_0 - 1] [i_0]), (arr_3 [i_0] [i_0 + 1] [i_0 + 1])))));
                    var_30 = (max((max(586251276, (-586251281 >= 188))), 2047));
                    var_31 = ((var_5 > (((!(arr_24 [i_0] [i_10] [i_10] [i_0] [i_0]))))));
                    var_32 = (((arr_17 [i_0] [i_0] [19] [i_0] [i_0 - 1] [i_0]) == var_4));
                }
                var_33 = (min(var_33, ((((!var_11) >= (var_2 > var_10))))));

                for (int i_11 = 0; i_11 < 24;i_11 += 1)
                {
                    arr_38 [i_0] [i_0] [i_0] [i_0] = ((max(((min(var_1, var_2))), ((var_6 - (arr_34 [i_0]))))));
                    var_34 = ((!var_6) + (((arr_11 [21] [i_0 - 3] [i_0 + 2] [i_0 + 1]) * (arr_6 [i_0] [i_1] [i_0]))));
                    /* LoopNest 2 */
                    for (int i_12 = 0; i_12 < 24;i_12 += 1)
                    {
                        for (int i_13 = 0; i_13 < 24;i_13 += 1)
                        {
                            {
                                var_35 = (arr_39 [i_1] [i_1] [i_1] [i_12] [i_1]);
                                var_36 = ((((max(((var_5 ? (arr_1 [13]) : var_8)), (arr_0 [i_0])))) == ((((var_3 * (arr_30 [i_0] [i_0 - 2] [i_0 - 3]))) >> (var_9 - 951778557)))));
                                var_37 = (max(((((arr_21 [15] [i_0] [17] [5] [i_0] [i_0]) != (max((arr_12 [i_13] [i_12] [i_0] [i_0] [i_1] [i_0 + 1]), var_8))))), var_2));
                                var_38 = (max(var_38, (((((((((max(var_2, var_2)))) * (min(var_0, var_9))))) % ((max(var_9, var_7))))))));
                            }
                        }
                    }
                }
                arr_45 [i_0] [i_0] [i_1] = (((!(((arr_25 [i_1] [i_1] [i_0] [i_1] [i_1]) <= var_10)))));
            }
        }
    }
    #pragma endscop
}
