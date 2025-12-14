/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 148754
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=148754 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/148754
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 2; i_0 < 23;i_0 += 1)
    {
        arr_2 [i_0] &= -1;

        for (int i_1 = 3; i_1 < 22;i_1 += 1)
        {
            var_12 = (max(var_12, (~37348)));
            var_13 = (min(var_13, (arr_4 [i_0])));
            var_14 = (min(var_14, ((-(max((-19 & -30), (arr_0 [i_0])))))));
        }
        for (int i_2 = 0; i_2 < 24;i_2 += 1)
        {
            var_15 &= (((((arr_1 [i_0] [i_2]) && (((~(arr_4 [i_0])))))) ? (((min((arr_0 [i_0 + 1]), (arr_6 [i_0] [i_2] [i_0]))))) : 9223372036854775807));
            var_16 = (min(var_16, (min(((((arr_3 [i_0] [i_0] [i_0 - 2]) / (arr_0 [i_0])))), (min((arr_3 [i_2] [i_0] [i_0]), (max((arr_5 [i_2] [i_0]), -48))))))));
        }
        /* LoopNest 2 */
        for (int i_3 = 1; i_3 < 23;i_3 += 1)
        {
            for (int i_4 = 0; i_4 < 24;i_4 += 1)
            {
                {

                    /* vectorizable */
                    for (int i_5 = 0; i_5 < 1;i_5 += 1)
                    {

                        for (int i_6 = 0; i_6 < 24;i_6 += 1)
                        {
                            var_17 = 1;
                            var_18 = ((var_0 ? 288230375614840832 : (((0 ? 22 : (arr_11 [i_6] [i_5] [i_4] [1] [10]))))));
                        }
                        for (int i_7 = 0; i_7 < 24;i_7 += 1)
                        {
                            arr_17 [i_0] [i_3] [i_5] [i_5] [i_4] [i_5] = (arr_5 [i_0] [i_3 + 1]);
                            var_19 = (min(var_19, (arr_11 [i_0] [i_3] [i_4] [13] [i_7])));
                        }
                        var_20 = 15;
                        arr_18 [i_5] [i_4] [i_3] = (((arr_8 [i_3 + 1] [i_0] [i_0 - 2]) ? var_1 : (arr_8 [i_3 - 1] [i_0 + 1] [i_0 + 1])));
                    }
                    var_21 = (max(var_21, 0));
                    var_22 &= (arr_15 [14] [i_3] [i_0 + 1] [i_0] [i_3 - 1]);
                    var_23 -= ((-((((arr_3 [i_0] [i_0] [i_0]) + (arr_10 [i_0] [i_0] [i_0] [i_4]))))));
                }
            }
        }
    }
    for (int i_8 = 0; i_8 < 1;i_8 += 1)
    {
        var_24 -= ((((+(min((arr_20 [0]), -7745654384310168870)))) | (((var_9 ? (((arr_10 [i_8] [i_8] [1] [i_8]) ? 1 : (arr_3 [i_8] [20] [i_8]))) : ((min((arr_0 [1]), var_8))))))));
        var_25 = (((max((arr_20 [i_8]), (arr_20 [i_8]))) ? ((-((~(arr_14 [20] [i_8] [i_8] [i_8] [i_8]))))) : (((arr_9 [i_8]) ? (arr_9 [17]) : (arr_9 [i_8])))));
    }
    var_26 += (max(var_7, 0));
    /* LoopNest 2 */
    for (int i_9 = 0; i_9 < 11;i_9 += 1)
    {
        for (int i_10 = 3; i_10 < 7;i_10 += 1)
        {
            {
                var_27 = ((7745654384310168870 ? -1 : 4294967278));
                var_28 |= (arr_0 [i_10]);
                /* LoopNest 3 */
                for (int i_11 = 0; i_11 < 11;i_11 += 1)
                {
                    for (int i_12 = 1; i_12 < 9;i_12 += 1)
                    {
                        for (int i_13 = 1; i_13 < 9;i_13 += 1)
                        {
                            {
                                var_29 = (max(var_29, 4193792));
                                var_30 &= min((((arr_9 [i_13]) ? ((-(arr_7 [1]))) : (arr_14 [18] [i_10] [0] [i_12] [9]))), (((((min(1, var_5))) == (((arr_11 [i_9] [i_10] [i_11] [9] [5]) ? -7745654384310168870 : 2891764749))))));
                            }
                        }
                    }
                }
                var_31 += ((((arr_10 [i_10] [1] [1] [4]) || ((((arr_33 [i_9] [i_9] [i_9] [i_9] [i_9]) ? 233 : 6))))));
                arr_34 [i_9] = (((arr_12 [0] [i_10 - 1] [0]) ? ((max((arr_12 [1] [i_10 - 2] [1]), (arr_12 [18] [i_10 - 3] [18])))) : ((~(arr_12 [10] [i_10 - 2] [10])))));
            }
        }
    }
    #pragma endscop
}
