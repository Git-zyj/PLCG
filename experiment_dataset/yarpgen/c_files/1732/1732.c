/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 1732
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=1732 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/1732
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_15 = ((26017 ? var_0 : var_0));
    var_16 = 12;
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 18;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 18;i_1 += 1)
        {
            {

                for (int i_2 = 3; i_2 < 17;i_2 += 1)
                {

                    for (int i_3 = 0; i_3 < 18;i_3 += 1)
                    {
                        arr_9 [i_1] [i_2] [i_1] [i_1] = (((0 * var_11) ? (arr_1 [i_0]) : (((((arr_3 [i_0] [i_1]) ? (arr_0 [15] [14]) : 80)) + (var_8 + var_13)))));
                        arr_10 [i_1] = ((~((max((arr_1 [i_1]), (arr_1 [i_0]))))));
                        var_17 = ((-32755 ? (max(((15040 << (34852 - 34844))), var_11)) : (((((var_12 ? var_6 : 2607))) ? (arr_7 [i_2 - 1]) : var_1))));
                        arr_11 [i_1] [i_3] = (((arr_3 [14] [i_1]) ? ((min((arr_8 [i_2 - 1]), (arr_8 [i_2 - 2])))) : ((var_1 + ((var_10 / (arr_0 [i_0] [0])))))));
                    }
                    for (int i_4 = 3; i_4 < 16;i_4 += 1) /* same iter space */
                    {
                        arr_14 [i_0] [i_1] [i_1] [i_1] [8] [i_1] = (((arr_5 [16] [i_1] [i_2] [i_2 + 1]) ? (((arr_7 [15]) | var_2)) : ((30667 ? 82 : (arr_5 [10] [i_1] [16] [i_4])))));
                        var_18 = (((arr_3 [i_0] [i_1]) || ((max(var_10, (!var_9))))));
                        var_19 = (min(var_19, (arr_13 [i_0] [i_0])));
                        var_20 = 17;
                    }
                    /* vectorizable */
                    for (int i_5 = 3; i_5 < 16;i_5 += 1) /* same iter space */
                    {
                        var_21 = (((arr_2 [i_0]) == (arr_2 [i_1])));
                        arr_18 [i_5] [i_1] [i_1] [i_0] = var_7;
                        var_22 = (((arr_4 [i_2 - 1] [i_2 - 1] [i_5 - 2]) - (arr_4 [i_2 - 1] [i_2 - 2] [i_5 - 3])));
                        var_23 ^= (((((32415 ? var_9 : (arr_17 [i_0] [i_1] [i_0] [i_5 - 3] [i_5] [i_5])))) ? var_2 : (arr_17 [i_5 + 1] [3] [2] [i_1] [16] [i_0])));
                    }
                    arr_19 [i_1] [8] [i_2] [i_0] = var_12;
                }
                for (int i_6 = 1; i_6 < 15;i_6 += 1)
                {
                    arr_22 [i_1] [i_1] = (arr_7 [15]);
                    arr_23 [i_1] [i_1] [i_1] [i_1] = ((((((arr_12 [i_0] [3] [i_6 - 1] [i_6 + 2] [i_1]) | (arr_12 [11] [i_0] [i_6] [i_6 + 2] [i_1])))) ? (11677 + var_4) : (!0)));
                    /* LoopNest 2 */
                    for (int i_7 = 4; i_7 < 16;i_7 += 1)
                    {
                        for (int i_8 = 3; i_8 < 17;i_8 += 1)
                        {
                            {
                                arr_29 [i_0] [i_0] [i_1] [i_7 + 1] = (arr_26 [i_6] [7] [1] [i_7 - 1] [i_8] [i_7 - 1]);
                                var_24 = (min(var_24, var_2));
                            }
                        }
                    }
                    arr_30 [i_1] = var_12;
                }
                for (int i_9 = 4; i_9 < 17;i_9 += 1)
                {
                    arr_33 [i_9] [i_9] |= ((22249 & ((30667 << (64 - 51)))));
                    arr_34 [i_1] [5] [i_1] [i_1] = (min(((((arr_2 [i_9 - 2]) < (arr_2 [i_9 - 3])))), ((var_3 + (arr_31 [2] [1] [i_9])))));
                    /* LoopNest 2 */
                    for (int i_10 = 1; i_10 < 15;i_10 += 1)
                    {
                        for (int i_11 = 4; i_11 < 16;i_11 += 1)
                        {
                            {
                                var_25 = (((((arr_13 [i_9] [i_1]) & (arr_13 [i_1] [i_1]))) == (((~65535) + (var_0 | 32767)))));
                                arr_42 [i_0] [i_1] = (((((arr_1 [i_0]) << (((7 + var_12) - 38044)))) >= (arr_25 [i_1] [i_9] [i_1] [i_1])));
                            }
                        }
                    }
                    arr_43 [i_0] [i_1] = ((((-((min(33819, (arr_12 [i_0] [i_0] [i_0] [i_1] [i_0])))))) + (arr_36 [i_0] [i_1] [i_9 - 2] [11])));
                    /* LoopNest 2 */
                    for (int i_12 = 0; i_12 < 18;i_12 += 1)
                    {
                        for (int i_13 = 1; i_13 < 17;i_13 += 1)
                        {
                            {
                                arr_49 [i_0] [6] [0] [i_1] [i_0] [0] [i_0] = var_2;
                                arr_50 [i_1] [i_1] = (arr_17 [i_0] [i_0] [i_1] [i_9] [i_12] [i_13]);
                            }
                        }
                    }
                }
                arr_51 [i_0] [i_1] [8] = ((!(((75 + (((arr_40 [i_0] [i_0] [i_0] [i_0] [i_0] [6]) ^ (arr_26 [6] [i_1] [i_1] [i_1] [i_1] [i_1]))))))));
                arr_52 [i_1] [i_1] = (min((((arr_4 [i_1] [i_1] [i_0]) ? ((var_14 ? (arr_16 [i_1] [i_1] [11] [i_0]) : var_8)) : (arr_45 [i_1]))), (((((max((-32767 - 1), var_11))) >= (((arr_45 [i_0]) << (var_2 - 14552))))))));
                /* LoopNest 2 */
                for (int i_14 = 0; i_14 < 18;i_14 += 1)
                {
                    for (int i_15 = 0; i_15 < 18;i_15 += 1)
                    {
                        {
                            arr_57 [i_1] [3] [5] [i_15] [7] = ((-var_3 % (arr_41 [i_0] [i_1] [i_0] [i_15] [i_0] [4])));
                            var_26 = var_13;
                        }
                    }
                }
            }
        }
    }
    var_27 = var_6;
    #pragma endscop
}
