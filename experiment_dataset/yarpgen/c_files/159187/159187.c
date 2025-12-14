/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 159187
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=159187 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/159187
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_16 = (min((~var_7), var_2));
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 19;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 19;i_1 += 1)
        {
            {
                var_17 = ((((((arr_3 [i_0] [i_0]) ? var_4 : var_8))) ? ((-(arr_3 [12] [i_0]))) : ((min((arr_3 [i_0] [i_1]), var_10)))));
                var_18 = (max(var_18, (((((min((arr_2 [i_0] [i_0]), var_7))) && (((-(arr_0 [i_0])))))))));
            }
        }
    }

    for (int i_2 = 1; i_2 < 16;i_2 += 1)
    {
        var_19 += (min((((!(((var_12 ? var_12 : var_5)))))), 3));
        /* LoopNest 3 */
        for (int i_3 = 2; i_3 < 16;i_3 += 1)
        {
            for (int i_4 = 1; i_4 < 15;i_4 += 1)
            {
                for (int i_5 = 2; i_5 < 16;i_5 += 1)
                {
                    {
                        var_20 = ((var_5 ? (((((arr_11 [i_5 - 1] [i_4 + 2] [i_3 - 1]) && (arr_11 [i_5 + 1] [i_4 - 1] [i_3 - 2]))))) : (((((arr_3 [7] [i_3 - 1]) ? var_15 : var_12)) * (arr_1 [i_4])))));
                        var_21 = (((((max((arr_4 [4] [i_2]), var_13)) <= (var_9 * var_5))) ? (((arr_4 [i_3] [i_4]) ? (arr_10 [i_5 - 2] [i_3 - 2] [i_4 + 1]) : ((~(arr_13 [i_5]))))) : (((((arr_7 [i_2] [i_2]) ? var_12 : var_2)) & ((min(var_14, var_4)))))));
                    }
                }
            }
        }
    }
    for (int i_6 = 2; i_6 < 17;i_6 += 1)
    {
        /* LoopNest 2 */
        for (int i_7 = 0; i_7 < 20;i_7 += 1)
        {
            for (int i_8 = 2; i_8 < 18;i_8 += 1)
            {
                {
                    var_22 = (min((min((arr_22 [14]), (arr_24 [i_8] [i_8 - 1] [i_8 + 1]))), ((((arr_18 [i_6]) != -var_9)))));
                    var_23 = (max(var_23, var_12));
                    var_24 = (min(var_24, (((~((((!(arr_21 [i_6] [i_6] [i_6 + 1]))))))))));
                    /* LoopNest 2 */
                    for (int i_9 = 0; i_9 < 20;i_9 += 1)
                    {
                        for (int i_10 = 0; i_10 < 20;i_10 += 1)
                        {
                            {
                                var_25 = (max(var_25, (((-(((((arr_21 [i_8] [i_8] [i_10]) ? (arr_18 [i_9]) : (arr_18 [i_7]))) ^ (11706281785617071111 ^ 5))))))));
                                var_26 = ((+(min(((var_3 ? (arr_28 [i_7] [i_8] [i_8] [i_9] [i_10]) : var_14)), (arr_20 [i_8 - 1] [i_6 + 3])))));
                            }
                        }
                    }
                }
            }
        }
        /* LoopNest 2 */
        for (int i_11 = 1; i_11 < 16;i_11 += 1)
        {
            for (int i_12 = 0; i_12 < 20;i_12 += 1)
            {
                {
                    var_27 = ((var_3 <= (((!(arr_30 [i_11 - 1] [i_6 + 2]))))));
                    var_28 = ((-(((((arr_30 [i_6] [i_11 + 4]) ? (arr_27 [i_12] [i_12] [i_12] [i_12] [i_12] [4] [i_12]) : (arr_20 [i_11] [i_11])))))));
                    var_29 = ((min((min((arr_33 [i_11 - 1] [i_11 - 1] [i_12] [i_11 - 1]), var_3)), (arr_26 [i_6 + 1] [i_6 + 1] [i_6 + 1] [i_6 + 1] [i_12] [i_12]))));

                    for (int i_13 = 0; i_13 < 20;i_13 += 1)
                    {

                        for (int i_14 = 0; i_14 < 20;i_14 += 1)
                        {
                            var_30 += (((((((arr_22 [i_13]) ? (arr_37 [0] [i_11 + 3] [i_12] [i_13] [i_14]) : (arr_33 [i_6] [19] [i_12] [i_14])))) ? ((var_4 ? (arr_31 [i_6] [12]) : (arr_23 [i_6] [i_6]))) : (arr_16 [i_12] [i_6 - 1]))));
                            arr_39 [i_13] [0] [i_12] [8] [i_13] = (((((min(var_13, (arr_21 [i_11 - 1] [i_13] [i_14]))))) & ((~((~(arr_27 [i_6 + 1] [i_6 + 2] [i_11] [i_11 - 1] [i_12] [i_13] [i_14])))))));
                        }
                        for (int i_15 = 0; i_15 < 20;i_15 += 1)
                        {
                            var_31 += (((arr_34 [i_6] [i_11] [i_6] [i_13] [i_15]) + var_10));
                            var_32 = (((min((min(var_6, var_6)), (arr_25 [i_11] [i_13] [i_13] [i_11])))) ? ((min((arr_30 [i_6] [5]), ((var_0 ? var_0 : var_0))))) : (((((arr_40 [i_12] [i_13]) != (arr_31 [i_11 + 3] [i_12]))) ? ((var_0 ? var_5 : var_7)) : (max(var_0, (arr_24 [i_15] [i_11 + 3] [i_6]))))));
                            arr_42 [12] [i_11 + 2] [i_13] [4] [i_13] = ((((((((var_11 ? var_13 : var_15))) ? (((var_10 ? (arr_27 [i_13] [i_13] [i_13] [i_13] [i_13] [i_13] [i_13]) : (arr_27 [i_6] [i_6] [i_11 + 2] [i_11] [i_12] [i_13] [i_15])))) : (max(var_15, var_4))))) ? var_4 : (!var_13)));
                        }
                        var_33 = (((-(arr_21 [i_11 + 1] [i_11] [i_11]))));
                        var_34 = (((((!((max((arr_26 [8] [i_12] [18] [i_11] [i_6 - 1] [i_6 - 1]), (arr_16 [i_11] [i_11]))))))) / ((((arr_34 [6] [11] [i_11 + 4] [i_11 + 4] [i_6 + 2]) <= (arr_34 [i_6] [i_13] [i_11 + 2] [i_6] [i_6 + 3]))))));
                        var_35 = ((var_12 ? ((var_3 ? (arr_26 [i_6] [i_11 + 4] [i_12] [i_13] [i_13] [i_13]) : ((max((arr_33 [i_6] [i_11 + 1] [i_12] [i_13]), (arr_20 [i_12] [i_11 - 1])))))) : var_13));
                    }
                    /* vectorizable */
                    for (int i_16 = 0; i_16 < 20;i_16 += 1)
                    {
                        var_36 = var_0;
                        arr_47 [i_6] [i_11] [i_12] [i_16] = ((arr_27 [17] [i_12] [14] [i_6 + 2] [i_6 - 1] [i_6 + 2] [i_6 - 1]) - (((arr_18 [i_6]) ? (arr_26 [i_6 - 1] [15] [i_11] [i_11] [i_12] [9]) : (arr_25 [16] [i_11 + 1] [i_6] [i_16]))));
                    }
                    arr_48 [11] [i_6] [13] [i_6 + 2] = (max((min(var_7, (max(18446744073709551613, 19)))), ((((((var_11 ? var_10 : (arr_41 [i_6] [i_12] [i_6] [18] [18] [i_12])))) ? (min(var_1, (arr_17 [i_12]))) : (!var_8))))));
                }
            }
        }
    }
    #pragma endscop
}
