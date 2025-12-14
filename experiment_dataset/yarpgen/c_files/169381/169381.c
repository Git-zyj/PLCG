/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 169381
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=169381 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/169381
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 20;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 1;i_1 += 1)
        {
            {
                /* LoopNest 2 */
                for (int i_2 = 0; i_2 < 20;i_2 += 1)
                {
                    for (int i_3 = 3; i_3 < 17;i_3 += 1)
                    {
                        {
                            arr_8 [i_1] [i_2] [i_3] = ((arr_2 [18] [i_1]) + (arr_3 [i_2] [i_2]));
                            var_12 = ((!(((-1 + ((var_5 | (arr_4 [i_0] [i_1] [i_2] [i_0]))))))));
                        }
                    }
                }
                var_13 += (((max((arr_0 [i_0]), (arr_6 [2] [i_1] [i_0]))) + (((min(-11, 10))))));
                /* LoopNest 2 */
                for (int i_4 = 0; i_4 < 20;i_4 += 1)
                {
                    for (int i_5 = 1; i_5 < 17;i_5 += 1)
                    {
                        {
                            var_14 = (min(var_14, var_7));
                            var_15 = (max(((((max(-11, (arr_9 [1] [1] [i_5 - 1])))) - (11 > 22))), ((((arr_3 [i_5 + 1] [i_1]) > (arr_3 [i_5 + 1] [i_0]))))));
                        }
                    }
                }
                var_16 = (((arr_9 [i_1] [16] [1]) / (arr_9 [12] [i_1] [i_1])));
                var_17 -= (max((((arr_3 [i_0] [i_0]) == (arr_3 [i_1] [i_0]))), ((!(arr_3 [i_0] [i_0])))));
            }
        }
    }
    var_18 -= var_9;
    var_19 = (min(((var_2 == (((max(var_5, var_3)))))), (((75 * var_0) == 973306782))));
    /* LoopNest 2 */
    for (int i_6 = 0; i_6 < 20;i_6 += 1)
    {
        for (int i_7 = 0; i_7 < 20;i_7 += 1)
        {
            {
                var_20 = (arr_13 [i_6] [i_6] [i_6]);

                /* vectorizable */
                for (int i_8 = 0; i_8 < 20;i_8 += 1) /* same iter space */
                {
                    var_21 = ((-11 ? -11 : -71));
                    arr_23 [i_8] [i_6] [i_6] [i_6] = (59459 > 22);
                    arr_24 [i_8] [i_6] [i_6] = (((((arr_5 [i_6]) * (arr_12 [4] [i_6] [i_6] [i_6] [4]))) + (arr_9 [i_6] [i_6] [3])));
                }
                for (int i_9 = 0; i_9 < 20;i_9 += 1) /* same iter space */
                {
                    var_22 += (((((((13 == (arr_7 [i_6] [i_6])))) + -75)) + (26704 - 1432571394)));
                    /* LoopNest 2 */
                    for (int i_10 = 0; i_10 < 20;i_10 += 1)
                    {
                        for (int i_11 = 0; i_11 < 0;i_11 += 1)
                        {
                            {
                                arr_34 [1] [1] [1] [0] [i_10] [i_6] = (+-172);
                                var_23 = ((+(((arr_22 [i_7] [i_6] [i_6] [i_7]) ? (arr_27 [i_6] [i_11 + 1]) : (arr_27 [i_6] [i_11 + 1])))));
                                arr_35 [i_11] [i_10] [i_6] [i_6] [i_6] [i_6] = (min(19636, ((((max(4341, (arr_10 [i_6] [i_7] [18])))) ? (((arr_3 [i_11] [i_11]) ? (arr_22 [i_6] [i_6] [i_6] [i_6]) : (arr_2 [i_6] [i_6]))) : ((max((arr_31 [i_11] [i_10] [i_9] [7] [i_7] [7]), 1507157616048587419)))))));
                            }
                        }
                    }
                }
                /* vectorizable */
                for (int i_12 = 0; i_12 < 20;i_12 += 1) /* same iter space */
                {
                    /* LoopNest 2 */
                    for (int i_13 = 0; i_13 < 20;i_13 += 1)
                    {
                        for (int i_14 = 0; i_14 < 1;i_14 += 1)
                        {
                            {
                                var_24 = (max(var_24, (((-19637 ? -1507157616048587420 : 9223372036854775807)))));
                                var_25 *= (((((arr_41 [i_6] [6] [14] [16]) - (arr_37 [i_14] [i_7] [i_12] [i_12]))) > var_9));
                            }
                        }
                    }
                    var_26 ^= (arr_39 [i_7] [i_6] [i_12] [8]);
                    arr_44 [i_6] [i_6] [i_6] [i_6] = ((+(((arr_13 [i_6] [i_6] [18]) ? 70 : (arr_41 [4] [4] [4] [i_6])))));
                    arr_45 [i_6] = var_8;
                }
                for (int i_15 = 0; i_15 < 20;i_15 += 1) /* same iter space */
                {
                    arr_48 [1] [12] [12] [i_15] &= ((((((-9223372036854775795 + (arr_27 [i_6] [i_6])))) ? 7 : -2221155139041765086)));
                    arr_49 [i_15] [i_6] [i_15] = ((((min(var_6, 1884555363))) ? 78 : ((max((arr_25 [i_6] [i_7] [i_7] [i_15]), (arr_14 [i_6]))))));
                    var_27 = (max(var_27, ((((~0) ? ((~(arr_13 [i_15] [6] [i_6]))) : (arr_13 [i_6] [18] [i_15]))))));
                    arr_50 [i_6] [4] [i_15] [12] |= (((max(var_3, (max((arr_40 [i_6] [i_7] [0] [9] [i_15]), var_7)))) > (((9 - (arr_43 [i_6] [i_6] [i_6] [i_6] [i_6] [i_6] [i_6]))))));
                }
            }
        }
    }
    #pragma endscop
}
