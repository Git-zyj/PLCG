/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 171630
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=171630 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/171630
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 0; i_0 < 19;i_0 += 1) /* same iter space */
    {
        /* LoopNest 2 */
        for (int i_1 = 0; i_1 < 19;i_1 += 1)
        {
            for (int i_2 = 1; i_2 < 17;i_2 += 1)
            {
                {
                    arr_6 [i_0] [i_0] [i_0] [i_0] = ((+((((max((arr_5 [i_0] [i_2] [i_0]), var_0))) ? (((30937 ? var_2 : -30935))) : (max((arr_1 [i_0] [i_0]), var_3))))));
                    var_12 = (-((22882 ? ((-17216 ? -27411 : 353725227424421983)) : ((max(2813589162, var_10))))));
                }
            }
        }
        var_13 = (arr_5 [i_0] [i_0] [i_0]);
        var_14 = (max(((-(arr_3 [i_0] [i_0] [i_0]))), -30945));
        arr_7 [i_0] = (min(30945, (((((253 ? 92 : var_9))) ? (arr_2 [i_0] [i_0]) : (arr_0 [i_0] [i_0])))));
    }
    for (int i_3 = 0; i_3 < 19;i_3 += 1) /* same iter space */
    {
        arr_10 [i_3] = (((arr_8 [i_3] [i_3]) ? (((-(arr_9 [i_3] [i_3])))) : (max(-101, 1779829902))));

        for (int i_4 = 0; i_4 < 19;i_4 += 1)
        {

            for (int i_5 = 0; i_5 < 19;i_5 += 1) /* same iter space */
            {
                var_15 = ((-(max(-2813589162, var_5))));
                arr_17 [i_3] [i_4] [16] = (((-(min(824539752, var_2)))));
                /* LoopNest 2 */
                for (int i_6 = 0; i_6 < 1;i_6 += 1)
                {
                    for (int i_7 = 0; i_7 < 19;i_7 += 1)
                    {
                        {
                            var_16 = var_10;
                            var_17 -= (((arr_12 [i_7] [i_3]) ? ((-(arr_2 [i_3] [i_6]))) : (arr_3 [i_4] [i_5] [i_6])));
                        }
                    }
                }
            }
            for (int i_8 = 0; i_8 < 19;i_8 += 1) /* same iter space */
            {
                var_18 |= ((var_1 ? (arr_12 [i_4] [i_3]) : (arr_16 [i_4] [i_4] [i_4] [1])));
                /* LoopNest 2 */
                for (int i_9 = 3; i_9 < 18;i_9 += 1)
                {
                    for (int i_10 = 0; i_10 < 19;i_10 += 1)
                    {
                        {
                            var_19 = ((-((((min(824539743, var_3))) ? 1779829902 : (arr_11 [i_3])))));
                            var_20 *= ((-30935 >= (max(((((arr_11 [i_8]) ? (arr_20 [i_3] [i_3] [i_3]) : var_11))), (max((arr_11 [i_3]), (arr_1 [i_10] [i_4])))))));
                            var_21 = 30944;
                        }
                    }
                }
            }
            for (int i_11 = 0; i_11 < 19;i_11 += 1)
            {
                arr_33 [4] [i_4] [i_11] = (min(3, 175));
                arr_34 [i_3] [i_3] [i_3] = (min((arr_27 [i_3] [i_4] [i_3] [i_3]), ((-((min((arr_15 [i_3] [i_4] [i_4] [i_11]), (arr_24 [i_3] [i_3] [i_4] [i_4] [i_11]))))))));
            }
            var_22 += ((((((arr_26 [i_3] [i_3] [i_3]) ? (arr_11 [i_4]) : (arr_11 [i_4])))) ? (((arr_26 [i_3] [i_3] [i_3]) ? 51861 : var_9)) : (min((arr_11 [i_3]), (arr_11 [i_3])))));
            /* LoopNest 2 */
            for (int i_12 = 1; i_12 < 18;i_12 += 1)
            {
                for (int i_13 = 0; i_13 < 19;i_13 += 1)
                {
                    {
                        arr_41 [i_3] [17] [i_3] [1] [i_13] [3] = (((((-(arr_4 [18] [i_3] [i_12] [i_12 + 1])))) ? ((((!var_3) + ((2 ? 17208 : -27551))))) : (max(var_10, (((arr_30 [i_13] [i_13] [i_13] [i_13] [i_13] [i_13]) + var_0))))));
                        arr_42 [i_13] [i_4] [i_3] = (min(((((max((arr_37 [i_12] [7]), var_0))) ? (123 % 42653) : (min((arr_13 [i_3]), (arr_31 [i_3] [i_4] [i_3] [i_13]))))), (arr_14 [i_3] [i_4])));
                        arr_43 [i_12] [i_12] [i_4] [i_3] = (min(((var_4 << (3887253852 - 3887253848))), ((min((arr_14 [i_12 - 1] [i_12 + 1]), 4294967295)))));
                        arr_44 [i_3] [i_3] [i_12] |= ((((!(arr_5 [i_12 + 1] [i_12 - 1] [i_12 + 1]))) ? var_0 : (max(((var_2 ? var_0 : (arr_32 [i_3] [i_3] [i_12] [i_13]))), 2515137393))));
                    }
                }
            }
        }
        for (int i_14 = 4; i_14 < 17;i_14 += 1)
        {
            arr_48 [i_14] = ((~((max((arr_9 [i_3] [i_3]), -18125)))));
            var_23 = (5116159838664194809 - (max(((27 ? 18446744073709551615 : (arr_15 [i_3] [18] [i_3] [i_3]))), (((arr_0 [i_14] [i_14]) ? -18151 : (arr_21 [15] [i_3] [i_3] [i_3] [1]))))));
        }
    }
    /* vectorizable */
    for (int i_15 = 1; i_15 < 10;i_15 += 1)
    {
        /* LoopNest 2 */
        for (int i_16 = 1; i_16 < 1;i_16 += 1)
        {
            for (int i_17 = 1; i_17 < 11;i_17 += 1)
            {
                {
                    arr_60 [i_15] [9] [i_15] = var_8;
                    var_24 = (min(var_24, 22));
                    arr_61 [i_15] = (((var_1 ? (arr_24 [i_15] [i_15 + 2] [i_16] [i_16] [i_17]) : var_6)));
                }
            }
        }
        var_25 = (((255 ^ -96) == (((arr_37 [2] [i_15 + 2]) ? 0 : var_10))));
        var_26 = (((arr_15 [i_15] [i_15] [i_15] [18]) ? (((arr_4 [i_15] [i_15 + 1] [i_15 + 1] [i_15]) ? (arr_23 [i_15] [i_15] [i_15] [i_15] [i_15 - 1] [i_15 - 1] [i_15 + 1]) : (arr_9 [i_15] [i_15]))) : 0));
    }
    var_27 = (max((max(var_3, var_3)), -4294967295));
    var_28 = (min(var_28, var_1));
    #pragma endscop
}
