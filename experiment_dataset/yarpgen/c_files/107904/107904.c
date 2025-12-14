/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 107904
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=107904 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/107904
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_13 = 2515594899175774108;
    var_14 = var_4;
    var_15 = (((var_8 >= 0) ? ((((((536838144 ? var_0 : var_8)) < var_9)))) : var_7));
    /* LoopNest 2 */
    for (int i_0 = 2; i_0 < 12;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 13;i_1 += 1)
        {
            {

                /* vectorizable */
                for (int i_2 = 0; i_2 < 13;i_2 += 1) /* same iter space */
                {
                    /* LoopNest 2 */
                    for (int i_3 = 0; i_3 < 13;i_3 += 1)
                    {
                        for (int i_4 = 1; i_4 < 11;i_4 += 1)
                        {
                            {
                                var_16 = (arr_12 [i_0] [i_0] [i_2] [i_4 - 1] [i_0]);
                                var_17 = (arr_4 [i_3] [i_1]);
                            }
                        }
                    }
                    arr_14 [i_1] [i_1] [i_1] = (arr_8 [i_0] [i_1] [i_1] [i_1]);
                }
                for (int i_5 = 0; i_5 < 13;i_5 += 1) /* same iter space */
                {
                    arr_17 [i_1] [i_1] = (((arr_2 [i_0 - 2] [i_1] [i_5]) ? (arr_2 [i_0 - 2] [i_1] [i_5]) : (arr_2 [i_0 + 1] [i_1] [i_1])));
                    var_18 = (min(((1 - ((-53 ? (arr_16 [i_0] [i_0] [i_5] [i_5]) : (arr_6 [i_0] [i_0] [i_0] [i_0]))))), ((min(((((arr_8 [i_0] [i_1] [i_5] [i_5]) ? (arr_9 [i_1]) : 41734))), (arr_2 [i_0] [i_1] [i_0]))))));
                    var_19 = 9868172051898822621;
                    var_20 = (max(var_20, (arr_5 [i_0 - 1] [i_1])));
                }
                /* LoopNest 3 */
                for (int i_6 = 4; i_6 < 11;i_6 += 1)
                {
                    for (int i_7 = 0; i_7 < 13;i_7 += 1)
                    {
                        for (int i_8 = 1; i_8 < 11;i_8 += 1)
                        {
                            {
                                var_21 = (arr_18 [i_0] [i_1] [i_0]);
                                arr_25 [i_1] = (max((min((arr_20 [i_8 + 2] [i_6 - 4] [i_0]), (arr_20 [i_8 + 1] [i_6 - 1] [i_6]))), (((arr_20 [i_8 - 1] [i_6 - 2] [i_1]) ? (arr_20 [i_8 - 1] [i_6 - 1] [i_6]) : (arr_20 [i_8 + 1] [i_6 - 2] [i_0])))));
                            }
                        }
                    }
                }
                var_22 = 10221;
                var_23 = (((arr_19 [i_0] [i_0] [i_1] [i_0]) | (((((max((arr_9 [i_1]), (arr_19 [i_0] [i_1] [i_0] [i_1])))) ? (max(-1512993882, (arr_3 [i_0] [i_0] [i_0]))) : (min((arr_10 [i_0]), 15)))))));

                /* vectorizable */
                for (int i_9 = 1; i_9 < 10;i_9 += 1) /* same iter space */
                {
                    var_24 += (((arr_10 [i_0 - 1]) ? (((10611 ^ (arr_22 [i_0])))) : 0));
                    var_25 += (arr_23 [i_0] [i_0] [i_0] [i_0] [i_0]);
                    arr_28 [i_1] = (arr_4 [i_1] [i_9]);
                    var_26 = (arr_4 [i_1] [i_1]);
                }
                for (int i_10 = 1; i_10 < 10;i_10 += 1) /* same iter space */
                {

                    for (int i_11 = 0; i_11 < 13;i_11 += 1) /* same iter space */
                    {
                        var_27 = (((arr_7 [i_0] [i_1] [i_11]) ? (arr_6 [i_0] [i_1] [i_10] [i_0]) : (((((1 - (arr_13 [i_0] [i_1] [i_10] [i_11] [i_10])))) ? (arr_6 [i_0] [i_0] [i_0] [i_0]) : (((min(10014, (arr_27 [i_0] [i_0] [i_0])))))))));
                        var_28 = (min(((((min((arr_27 [i_0] [i_0] [i_0]), (arr_5 [i_10] [i_10])))) ? (arr_33 [i_1] [i_10] [i_1] [i_10] [i_10 - 1] [i_1]) : (arr_22 [i_0]))), 145));
                        arr_34 [i_0] [i_1] [i_10] [i_1] = (arr_21 [i_1] [i_1] [i_0] [i_1] [i_0]);
                        arr_35 [i_0] [i_1] [i_1] [i_11] = 562915593682944;
                        var_29 = (((arr_2 [i_10] [i_1] [i_0]) > (32997 && 20036)));
                    }
                    for (int i_12 = 0; i_12 < 13;i_12 += 1) /* same iter space */
                    {
                        arr_39 [i_0] [i_1] [i_1] [i_1] = 351655496;
                        var_30 = ((((max((arr_33 [i_10 + 2] [i_10 + 2] [i_12] [i_10 + 2] [i_12] [i_12]), (arr_33 [i_10 + 1] [i_12] [i_10 + 1] [i_12] [i_12] [i_12])))) ? ((((arr_33 [i_10 + 1] [i_10 + 1] [i_10 + 1] [i_10 + 1] [i_10 + 1] [i_10]) | 1555753646))) : (((arr_33 [i_10 - 1] [i_10 - 1] [i_12] [i_12] [i_12] [i_10 - 1]) ? -10 : (arr_33 [i_10 + 2] [i_10] [i_10 + 2] [i_12] [i_12] [i_12])))));
                    }
                    /* LoopNest 2 */
                    for (int i_13 = 0; i_13 < 13;i_13 += 1)
                    {
                        for (int i_14 = 3; i_14 < 11;i_14 += 1)
                        {
                            {
                                arr_44 [i_1] [i_10] [i_10] [i_1] [i_1] = ((((((arr_43 [i_0] [i_0] [i_0] [i_0] [i_1] [i_0]) ? (arr_43 [i_14] [i_1] [i_0] [i_1] [i_1] [i_0]) : (arr_43 [i_0] [i_0] [i_0] [i_0] [i_1] [i_0])))) ? (((15742 ? 8881 : 4642))) : ((336547553 ? 0 : 1))));
                                var_31 += 20196;
                                var_32 = 4077718652786961647;
                            }
                        }
                    }
                    var_33 = (max(var_33, ((((max((arr_26 [i_0] [i_0] [i_10] [i_0]), (((34751 ? (arr_37 [i_0] [i_0]) : 65532))))) == (arr_42 [i_1]))))));
                }
                for (int i_15 = 1; i_15 < 10;i_15 += 1) /* same iter space */
                {
                    arr_47 [i_0] [i_0] [i_0] &= (min((arr_12 [i_0] [i_0] [i_0] [i_1] [i_0]), -6665254574112544359));
                    var_34 = (arr_7 [i_0] [i_0] [i_0 + 1]);
                    arr_48 [i_0] [i_0] [i_0] [i_1] = (max(1974752060550681913, (((262016 <= (arr_12 [i_15 + 1] [i_15] [i_15] [i_15] [i_15]))))));
                    arr_49 [i_0] [i_1] [i_15] [i_1] = (max((arr_26 [i_15] [i_15] [i_15] [i_0]), (arr_15 [i_0] [i_0] [i_0])));
                }
            }
        }
    }
    #pragma endscop
}
