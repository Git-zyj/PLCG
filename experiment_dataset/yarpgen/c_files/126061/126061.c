/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 126061
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=126061 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/126061
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_16 = var_2;

    for (int i_0 = 0; i_0 < 23;i_0 += 1)
    {
        arr_3 [i_0] [i_0] = var_6;
        /* LoopNest 2 */
        for (int i_1 = 0; i_1 < 23;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 23;i_2 += 1)
            {
                {

                    for (int i_3 = 0; i_3 < 23;i_3 += 1) /* same iter space */
                    {
                        var_17 = (((arr_2 [i_2] [i_0]) ? ((min((arr_10 [i_0] [i_0] [i_2] [i_3]), (max((arr_9 [i_0]), (arr_5 [i_3] [i_1])))))) : (arr_12 [i_0] [22] [i_0] [i_3] [7])));
                        var_18 = ((65535 ? -5533189136800187427 : 0));
                    }
                    for (int i_4 = 0; i_4 < 23;i_4 += 1) /* same iter space */
                    {
                        var_19 = (min((arr_2 [i_0] [i_0]), (arr_2 [i_0] [i_0])));
                        var_20 = var_11;
                        arr_16 [i_0] [i_2] [i_1] [i_0] = ((~(arr_5 [i_1] [i_4])));
                        var_21 = ((~(min(65522, 18446744073709551615))));
                        arr_17 [i_0] [2] [i_1] [2] [i_0] = (((arr_4 [i_1] [i_1]) != (arr_14 [i_0] [i_1] [i_0] [i_2] [i_2] [i_4])));
                    }
                    for (int i_5 = 0; i_5 < 23;i_5 += 1) /* same iter space */
                    {
                        var_22 = (((((+(((arr_12 [8] [i_1] [i_0] [i_5] [i_5]) ? (arr_8 [i_5] [i_1] [i_1]) : var_13))))) / var_8));
                        var_23 = (min(var_23, (arr_18 [i_0] [i_0] [17] [i_2] [i_0])));
                        arr_21 [i_0] [i_2] [i_0] [i_5] = (max(((9223372036854775807 | (((arr_19 [i_1]) ? (arr_0 [i_2]) : (arr_11 [i_5] [i_2] [i_2] [i_1] [i_0]))))), ((((arr_15 [i_0] [i_1] [i_2] [i_2] [i_0]) < (min((arr_18 [14] [i_2] [i_2] [i_1] [i_0]), var_9)))))));
                        var_24 = ((-((((((arr_0 [i_2]) ? var_3 : (arr_0 [i_1])))) ? (((((arr_0 [i_0]) + 9223372036854775807)) << (((arr_11 [i_0] [i_1] [i_1] [i_0] [i_5]) - 1285422676)))) : ((1762436531191452389 * (arr_8 [i_0] [i_0] [i_1])))))));
                    }
                    /* LoopNest 2 */
                    for (int i_6 = 1; i_6 < 21;i_6 += 1)
                    {
                        for (int i_7 = 0; i_7 < 23;i_7 += 1)
                        {
                            {
                                arr_26 [i_0] = (max(((((((var_8 << (((arr_4 [i_1] [i_0]) - 3199192947))))) ? (arr_22 [i_6 - 1] [i_6] [i_6 - 1] [i_6 + 2]) : (((arr_13 [i_0] [i_0] [i_2] [i_6]) ? (arr_5 [i_0] [i_0]) : (arr_9 [i_0])))))), (min((min(var_5, (arr_18 [i_0] [i_1] [i_2] [i_6] [i_7]))), ((((-15 + 2147483647) << (((arr_18 [i_0] [i_6] [i_0] [i_1] [i_0]) - 12779428029241322767)))))))));
                                var_25 = (max((min((arr_10 [i_6 + 1] [i_0] [i_6 + 1] [i_6 + 2]), -2451601816670772369)), ((-(arr_7 [i_7] [9] [i_7] [i_6 + 2])))));
                                arr_27 [i_0] [i_1] [i_2] [i_6] [i_0] = (max((arr_5 [i_1] [i_6 + 2]), var_10));
                                var_26 = (min(var_26, ((((((((!(arr_0 [i_2]))) ? (((arr_12 [8] [i_6 - 1] [i_2] [i_6] [i_7]) ? (arr_10 [i_0] [i_2] [1] [10]) : 1)) : var_5))) && (arr_10 [i_0] [i_2] [12] [i_7]))))));
                            }
                        }
                    }
                }
            }
        }
    }
    /* vectorizable */
    for (int i_8 = 0; i_8 < 18;i_8 += 1)
    {
        /* LoopNest 3 */
        for (int i_9 = 0; i_9 < 18;i_9 += 1)
        {
            for (int i_10 = 0; i_10 < 18;i_10 += 1)
            {
                for (int i_11 = 0; i_11 < 1;i_11 += 1)
                {
                    {
                        arr_37 [i_10] [i_10] [16] [i_10] = (arr_28 [i_11] [11]);
                        arr_38 [i_9] [i_10] = ((65535 ? 45 : 18446744073709551615));
                    }
                }
            }
        }
        /* LoopNest 2 */
        for (int i_12 = 0; i_12 < 18;i_12 += 1)
        {
            for (int i_13 = 1; i_13 < 14;i_13 += 1)
            {
                {
                    var_27 = (arr_35 [i_8] [i_13]);
                    arr_44 [i_12] [i_12] [i_12] [1] = (arr_40 [i_12] [i_12] [i_12]);
                    arr_45 [i_13] [i_12] [i_8] = (((arr_12 [i_13 + 1] [i_13 + 2] [i_12] [i_13 + 3] [i_12]) ? (arr_12 [i_13 - 1] [i_12] [i_12] [i_13 + 4] [i_8]) : (arr_12 [i_13 + 4] [1] [i_12] [i_13 + 2] [i_12])));
                }
            }
        }
    }
    var_28 = var_14;
    var_29 = (((((((var_14 >> (65535 - 65529)))) ? ((-1207747716 ? var_15 : var_15)) : -var_2)) >= (((var_3 ^ (~var_12))))));
    var_30 = (min(var_30, (((((var_9 ? var_9 : (var_9 - var_5))) <= (((var_14 - (var_4 - var_15)))))))));
    #pragma endscop
}
