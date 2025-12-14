/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 142467
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=142467 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/142467
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 0; i_0 < 16;i_0 += 1)
    {
        /* LoopNest 2 */
        for (int i_1 = 0; i_1 < 16;i_1 += 1)
        {
            for (int i_2 = 3; i_2 < 15;i_2 += 1)
            {
                {
                    var_16 = (min(var_16, ((max((max((((arr_6 [i_2 - 2]) & (arr_4 [1]))), (arr_1 [i_0]))), -20)))));
                    var_17 ^= ((-(max((arr_4 [i_2 - 1]), (max((arr_4 [i_0]), var_13))))));

                    for (int i_3 = 0; i_3 < 16;i_3 += 1)
                    {
                        var_18 -= (((((((arr_7 [i_0]) % (arr_5 [i_0] [i_0] [i_0]))))) >> var_3));
                        var_19 ^= (max((arr_5 [i_3] [i_2 - 2] [i_2 - 2]), (((var_3 != (arr_3 [i_0] [i_2 + 1] [i_1]))))));
                    }
                    var_20 ^= (max((arr_2 [i_0] [i_0]), (((arr_9 [i_1] [i_1] [i_1] [i_2 + 1] [i_2]) - (arr_5 [i_0] [7] [i_0])))));
                    var_21 = (min(var_21, ((((((max((arr_2 [i_1] [i_2 - 2]), var_8)))) ? ((max((arr_10 [i_0] [i_1] [i_2 - 1]), (arr_6 [i_0])))) : (max(((var_7 | (arr_7 [i_1]))), ((max(var_12, var_12))))))))));
                }
            }
        }
        /* LoopNest 2 */
        for (int i_4 = 1; i_4 < 14;i_4 += 1)
        {
            for (int i_5 = 0; i_5 < 1;i_5 += 1)
            {
                {
                    var_22 = ((max((arr_6 [i_5]), (arr_9 [i_0] [i_0] [15] [i_0] [i_0]))));
                    var_23 = (max((max((max(var_14, (arr_12 [i_0] [i_4 - 1] [11]))), (arr_5 [i_5] [i_4] [i_0]))), (((((((arr_13 [i_4] [1]) != (arr_9 [i_5] [i_5] [i_0] [10] [i_0])))) <= var_11)))));

                    for (int i_6 = 2; i_6 < 15;i_6 += 1)
                    {
                        var_24 = (min(var_24, ((max((((arr_13 [i_4 + 2] [i_4 + 1]) ? (arr_13 [i_4 - 1] [i_4 + 1]) : (arr_13 [i_4 + 1] [i_4 + 2]))), (max((arr_7 [i_4 + 1]), (arr_7 [i_4 + 1]))))))));

                        for (int i_7 = 1; i_7 < 1;i_7 += 1)
                        {
                            var_25 = (max(var_25, (((+(((arr_9 [i_4] [i_4 - 1] [i_6 - 1] [i_6 - 1] [i_7 - 1]) ? (arr_4 [i_6 + 1]) : 9933)))))));
                            var_26 = (max(var_26, (arr_16 [i_0] [10] [i_0] [10])));
                            var_27 = (max(var_27, ((((((var_1 % var_4) ? var_12 : (arr_9 [i_0] [4] [i_4 - 1] [i_6 - 1] [i_7]))) - ((max(var_12, var_2))))))));
                            var_28 = (max(var_28, ((((((max(903631241, 122)))) && ((max((arr_9 [i_0] [i_0] [9] [i_7 - 1] [i_7]), (arr_17 [i_0] [i_7] [5] [i_7 - 1] [i_7 - 1])))))))));
                        }
                        var_29 -= (((max(((max(var_1, var_1)), (arr_21 [i_6] [i_6 + 1] [i_6 + 1] [i_4 + 1] [14] [5]))))));
                    }
                    for (int i_8 = 3; i_8 < 14;i_8 += 1)
                    {
                        var_30 = (max(((max((arr_0 [i_0]), (arr_4 [i_0])))), var_4));

                        for (int i_9 = 1; i_9 < 13;i_9 += 1)
                        {
                            var_31 = (max(var_31, (arr_9 [i_0] [i_4 - 1] [i_4 - 1] [i_4 - 1] [4])));
                            var_32 = (min(var_32, (((((((arr_3 [i_0] [i_0] [8]) ? (arr_19 [i_4] [i_4]) : (arr_11 [i_0] [1] [i_0])))) ? ((((((arr_7 [i_8 - 3]) ^ (arr_0 [15])))) ? (arr_20 [i_4 + 2] [i_4] [i_5]) : var_1)) : (((((-(arr_20 [i_9] [i_4] [i_5])))) ? var_6 : (((arr_0 [i_9]) - (arr_5 [i_8] [i_4] [i_5]))))))))));
                        }
                    }
                    for (int i_10 = 2; i_10 < 14;i_10 += 1)
                    {
                        arr_32 [i_4] = (((((arr_8 [15] [15] [i_5] [i_5]) ? (3391336046 != 7004174068727513847) : (arr_12 [i_4 + 1] [i_4 + 1] [i_0]))) < (((max((arr_19 [i_4 - 1] [i_4 + 2]), var_2))))));

                        for (int i_11 = 0; i_11 < 16;i_11 += 1)
                        {
                            var_33 -= var_6;
                            var_34 ^= ((max((arr_30 [7] [6] [i_0] [0] [0] [i_4 + 2]), (arr_30 [i_0] [i_0] [i_0] [i_0] [i_4 + 1] [i_4 - 1]))));
                        }
                        for (int i_12 = 2; i_12 < 14;i_12 += 1)
                        {
                            arr_37 [i_0] [i_4] [i_5] [i_10 + 1] [i_12 - 1] = (max(((~(arr_9 [i_0] [9] [i_4 + 1] [i_5] [i_10 + 1]))), 16178742839646809293));
                            var_35 = (min(var_35, ((max(((max(((!(arr_29 [i_12] [15] [i_12]))), ((!(arr_7 [i_0])))))), ((((max((arr_29 [i_10 - 2] [1] [i_4]), var_3))) ? var_2 : ((max((arr_36 [i_0] [i_4] [i_10]), (arr_5 [i_0] [0] [i_0])))))))))));
                        }
                    }
                    for (int i_13 = 2; i_13 < 14;i_13 += 1)
                    {
                        var_36 = (min(var_36, ((max((max(var_2, (arr_6 [i_5]))), var_12)))));
                        var_37 = (max((((!(arr_10 [4] [i_4] [i_13 + 1])))), ((~(arr_2 [3] [7])))));
                    }
                    var_38 = (max((arr_15 [i_0]), var_10));
                    var_39 += (max((arr_28 [i_4] [i_4] [i_4] [i_4 + 2] [i_4 + 1] [i_5]), ((((((var_3 ? (arr_18 [i_5] [i_5] [i_0] [i_0] [i_0]) : (arr_1 [i_0])))) <= (arr_12 [i_4 + 1] [i_4 + 2] [i_4]))))));
                }
            }
        }
        var_40 = ((((!(((var_15 ? var_12 : var_0))))) ? (arr_38 [14] [i_0] [i_0] [1] [8]) : ((((((max(var_5, (arr_33 [i_0] [i_0] [i_0] [i_0] [i_0])))) < (arr_23 [i_0] [i_0] [i_0])))))));
        arr_42 [i_0] [i_0] = -6454;
    }
    /* vectorizable */
    for (int i_14 = 0; i_14 < 1;i_14 += 1)
    {
        arr_45 [i_14] [i_14] = 2864146779558704454;
        arr_46 [i_14] = ((-(arr_43 [i_14])));
    }
    /* vectorizable */
    for (int i_15 = 0; i_15 < 12;i_15 += 1)
    {
        arr_51 [i_15] = (arr_18 [0] [0] [0] [i_15] [i_15]);
        var_41 += (((arr_49 [i_15]) != ((((var_9 <= (arr_41 [i_15] [12] [i_15] [i_15])))))));
    }
    var_42 = (min(var_42, ((max(var_13, ((max(var_9, (~var_10)))))))));
    var_43 = (min(var_43, var_0));
    var_44 = var_2;
    /* LoopNest 2 */
    for (int i_16 = 0; i_16 < 16;i_16 += 1)
    {
        for (int i_17 = 0; i_17 < 16;i_17 += 1)
        {
            {
                arr_56 [i_16] = ((+((((max((arr_34 [i_16] [i_17]), var_5)) == (arr_0 [i_16]))))));
                var_45 = (max(var_45, ((max((((((arr_9 [i_16] [i_16] [5] [i_16] [i_17]) ? (arr_23 [i_16] [i_17] [i_17]) : (arr_21 [i_16] [i_17] [i_17] [13] [i_17] [i_16]))) >> ((((max(var_11, var_9))) - 191)))), (max((arr_19 [i_16] [i_17]), (arr_54 [i_16] [i_16]))))))));
            }
        }
    }
    #pragma endscop
}
