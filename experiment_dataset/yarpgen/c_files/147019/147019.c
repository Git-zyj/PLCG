/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 147019
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=147019 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/147019
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 3 */
    for (int i_0 = 0; i_0 < 20;i_0 += 1)
    {
        for (int i_1 = 2; i_1 < 19;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 20;i_2 += 1)
            {
                {
                    /* LoopNest 2 */
                    for (int i_3 = 0; i_3 < 1;i_3 += 1)
                    {
                        for (int i_4 = 3; i_4 < 19;i_4 += 1)
                        {
                            {
                                arr_15 [i_0] [12] [12] [i_0] [12] [0] |= ((13678898006483763847 >= ((((((arr_12 [i_4 - 3] [i_4] [i_4] [i_4 - 1] [i_4 - 1] [i_1 - 1] [i_1 + 1]) + 9223372036854775807)) << (var_2 - 1925087921))))));
                                var_12 += 4767846067225787781;
                            }
                        }
                    }
                    arr_16 [i_1] [i_1] = 13678898006483763816;
                    var_13 += (((var_5 ? var_9 : (min((arr_1 [i_0]), (arr_7 [i_0] [i_0] [i_0] [i_0]))))));
                    var_14 = (max(var_14, ((max(((-1 ? (((-(arr_4 [i_2] [i_1] [i_2])))) : (min((arr_12 [i_0] [i_2] [i_2] [i_2] [i_2] [i_0] [i_0]), 137)))), (((!(arr_2 [16])))))))));
                }
            }
        }
    }

    for (int i_5 = 0; i_5 < 13;i_5 += 1) /* same iter space */
    {

        for (int i_6 = 0; i_6 < 13;i_6 += 1)
        {
            var_15 = (min(var_15, ((((arr_7 [3] [i_5] [3] [i_6]) & (arr_17 [i_5] [i_6]))))));

            /* vectorizable */
            for (int i_7 = 2; i_7 < 11;i_7 += 1) /* same iter space */
            {
                var_16 = var_2;
                var_17 = (min(var_17, (((!((((arr_12 [19] [1] [1] [19] [i_6] [i_6] [i_6]) ? (arr_4 [i_7] [i_7] [8]) : var_10))))))));
            }
            for (int i_8 = 2; i_8 < 11;i_8 += 1) /* same iter space */
            {
                arr_25 [8] [i_6] [i_5] [1] = 2159385911;
                var_18 = (max(var_18, (arr_20 [10] [10])));
                var_19 -= (max(((((arr_7 [i_5] [i_8 + 1] [i_8] [i_8]) / (arr_7 [i_5] [i_8 - 2] [i_8] [i_6])))), (((arr_21 [i_8 + 1] [i_6] [i_8]) ? var_8 : var_5))));
                var_20 = ((max(var_7, ((max(137, 1657067160))))));
            }
        }
        var_21 = (min(var_21, ((((arr_8 [0] [i_5] [i_5] [i_5]) != (arr_17 [i_5] [i_5]))))));
        var_22 = (min(var_22, ((((((((~(arr_5 [i_5])))) || (!var_5))) ? (arr_24 [i_5] [i_5]) : (118 + 1657067186))))));
    }
    for (int i_9 = 0; i_9 < 13;i_9 += 1) /* same iter space */
    {
        /* LoopNest 2 */
        for (int i_10 = 1; i_10 < 12;i_10 += 1)
        {
            for (int i_11 = 0; i_11 < 13;i_11 += 1)
            {
                {
                    arr_33 [i_9] [4] [i_9] = arr_14 [i_9] [i_9] [i_10 - 1] [i_10] [i_10 - 1] [i_11];
                    var_23 += (max((arr_7 [i_9] [i_10 - 1] [i_9] [i_10]), (arr_3 [i_9] [i_9])));
                    /* LoopNest 2 */
                    for (int i_12 = 0; i_12 < 13;i_12 += 1)
                    {
                        for (int i_13 = 2; i_13 < 11;i_13 += 1)
                        {
                            {
                                arr_39 [i_12] [i_10 - 1] [i_12] [i_10] [i_10 - 1] [i_10] [i_10 - 1] = ((-((((arr_9 [i_10 + 1] [i_10] [i_10] [i_10 + 1]) > (!var_10))))));
                                arr_40 [i_9] [i_12] [i_11] [i_9] [i_12] = (!var_2);
                                var_24 = (max(var_24, (((((((-2584 > ((var_7 * (arr_21 [i_13] [i_13] [i_11]))))))) ^ (arr_31 [i_9] [i_10] [i_10] [5]))))));
                                var_25 = (min(var_25, (((((((-8192 / (arr_37 [i_9] [i_9] [i_10] [6] [6] [i_13]))) | ((max(8191, 1155201109))))) * var_6)))));
                                arr_41 [i_11] [i_10 + 1] [i_11] &= (arr_29 [i_9] [i_10]);
                            }
                        }
                    }
                }
            }
        }
        var_26 = (min(var_26, ((((arr_0 [i_9] [i_9]) ? (arr_36 [i_9] [i_9] [i_9] [i_9] [i_9] [i_9]) : (!-8184))))));
        var_27 ^= -1913053070;
    }
    /* vectorizable */
    for (int i_14 = 0; i_14 < 13;i_14 += 1) /* same iter space */
    {
        var_28 -= -131071;
        var_29 = (arr_12 [i_14] [i_14] [i_14] [i_14] [i_14] [i_14] [i_14]);
    }
    var_30 += (max(-11309, (((~8184) ? (13601980375250156635 ^ -1) : 0))));
    var_31 = ((-(min((max(var_11, var_6)), var_8))));
    #pragma endscop
}
