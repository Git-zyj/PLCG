/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 131076
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=131076 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/131076
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 0; i_0 < 1;i_0 += 1)
    {

        /* vectorizable */
        for (int i_1 = 0; i_1 < 12;i_1 += 1)
        {
            var_10 = (max(var_10, (arr_4 [i_1])));
            /* LoopNest 2 */
            for (int i_2 = 1; i_2 < 11;i_2 += 1)
            {
                for (int i_3 = 0; i_3 < 12;i_3 += 1)
                {
                    {
                        arr_12 [i_0] [i_0] [i_1] [11] = (~(arr_3 [i_1]));
                        arr_13 [i_1] = (((arr_9 [i_3] [i_3] [i_1] [i_2 + 1] [i_2 + 1]) ? (!2) : (arr_11 [i_1] [i_2 + 1] [i_2] [i_1] [i_0] [i_1])));
                        var_11 = (max(var_11, ((((arr_7 [2] [i_1] [i_2 + 1]) > 1)))));
                        var_12 = ((!(arr_4 [i_0])));
                    }
                }
            }
        }
        /* LoopNest 2 */
        for (int i_4 = 0; i_4 < 12;i_4 += 1)
        {
            for (int i_5 = 0; i_5 < 12;i_5 += 1)
            {
                {
                    arr_21 [i_5] = (arr_17 [i_5]);
                    /* LoopNest 2 */
                    for (int i_6 = 0; i_6 < 12;i_6 += 1)
                    {
                        for (int i_7 = 0; i_7 < 12;i_7 += 1)
                        {
                            {
                                var_13 ^= ((((((arr_11 [i_0] [i_7] [i_5] [i_6] [i_7] [i_7]) ? (arr_11 [i_0] [i_0] [i_0] [i_0] [i_0] [i_4]) : (arr_11 [i_0] [i_4] [i_4] [i_5] [i_4] [i_6])))) ? (((arr_11 [i_0] [i_0] [i_0] [i_0] [i_0] [i_7]) ? (arr_11 [i_0] [i_4] [i_4] [i_5] [i_6] [i_7]) : (arr_11 [i_0] [2] [i_4] [i_5] [i_6] [i_6]))) : (arr_11 [i_4] [i_7] [i_6] [i_5] [i_0] [i_4])));
                                var_14 *= 2755;
                                arr_27 [i_0] [i_0] [i_0] = (((2149584111064622772 / 1) ? (((((((var_7 ? (-9223372036854775807 - 1) : 1264413907))) < 4611686018427387904)))) : 613474951762035006));
                            }
                        }
                    }
                    var_15 = (arr_9 [i_0] [i_4] [i_4] [i_5] [i_5]);
                }
            }
        }
        /* LoopNest 2 */
        for (int i_8 = 0; i_8 < 1;i_8 += 1)
        {
            for (int i_9 = 0; i_9 < 12;i_9 += 1)
            {
                {
                    /* LoopNest 2 */
                    for (int i_10 = 0; i_10 < 12;i_10 += 1)
                    {
                        for (int i_11 = 2; i_11 < 8;i_11 += 1)
                        {
                            {
                                var_16 *= (((((((min((-2147483647 - 1), (arr_39 [i_10] [i_8] [i_9] [i_10] [i_11 + 3] [i_9] [i_11])))) ? ((-(arr_0 [i_11]))) : (arr_34 [i_10] [i_9] [i_10] [i_9])))) < (1 / 12582912)));
                                var_17 *= 0;
                            }
                        }
                    }
                    arr_41 [1] [i_9] [i_8] = (min(((((arr_8 [i_9] [i_0]) * 126))), ((36 ? 0 : (-9223372036854775807 - 1)))));
                    var_18 = ((arr_7 [i_8] [i_8] [i_8]) ? (min((arr_9 [i_0] [i_8] [i_8] [i_8] [i_8]), (arr_9 [i_0] [i_8] [i_8] [i_8] [i_8]))) : (((4032 ? (arr_10 [i_0] [i_0] [i_0] [i_0]) : (arr_10 [i_9] [i_9] [i_8] [i_0])))));
                    var_19 = ((3030553389 + (arr_23 [i_0] [0] [i_9] [i_9] [i_0])));
                    var_20 ^= 50913;
                }
            }
        }
    }
    /* vectorizable */
    for (int i_12 = 0; i_12 < 18;i_12 += 1)
    {
        arr_44 [i_12] = ((((((arr_43 [i_12]) | (arr_43 [i_12])))) ? (arr_42 [1]) : ((73 % (-2147483647 - 1)))));
        var_21 = (min(var_21, ((-2 ? -82 : 0))));
        arr_45 [i_12] [i_12] = (((arr_42 [i_12]) * (1 == 10)));
        var_22 = arr_42 [i_12];
        arr_46 [i_12] = ((1984 / (arr_42 [i_12])));
    }
    for (int i_13 = 0; i_13 < 17;i_13 += 1)
    {
        arr_50 [i_13] [i_13] &= (min(((0 ? 59108 : 3030553388)), 1));
        arr_51 [i_13] = (arr_47 [i_13] [i_13]);
        arr_52 [i_13] [i_13] = var_1;
        arr_53 [i_13] &= (~1152921504606846960);
    }
    var_23 |= ((((((0 ? var_5 : var_6))) ? var_1 : (min(0, var_1)))));
    #pragma endscop
}
