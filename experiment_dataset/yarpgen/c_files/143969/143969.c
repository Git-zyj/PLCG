/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 143969
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=143969 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/143969
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 0; i_0 < 1;i_0 += 1) /* same iter space */
    {
        arr_2 [i_0] = (min(var_3, (arr_0 [i_0])));
        var_12 = (max(-var_7, ((((min((arr_1 [1]), 11))) ^ (arr_0 [16])))));
        arr_3 [i_0] = ((((min((arr_0 [i_0]), (min((arr_0 [i_0]), var_9))))) ? ((min(31, 11))) : (arr_1 [14])));
    }
    for (int i_1 = 0; i_1 < 1;i_1 += 1) /* same iter space */
    {

        /* vectorizable */
        for (int i_2 = 0; i_2 < 25;i_2 += 1)
        {
            arr_10 [16] [i_1] = var_8;
            arr_11 [i_1] [1] = (arr_4 [i_1]);
            var_13 = (max(var_13, (var_3 * 12784)));
        }
        arr_12 [i_1] = ((~(((arr_9 [i_1] [i_1] [22]) | (min(9831604722236917734, 12771))))));
        var_14 = (min(((-((var_10 ? 12783 : var_0)))), ((min((arr_0 [i_1]), 1)))));
    }
    /* LoopNest 2 */
    for (int i_3 = 2; i_3 < 23;i_3 += 1)
    {
        for (int i_4 = 2; i_4 < 24;i_4 += 1)
        {
            {
                var_15 = (min((var_0 + 11), (min(((var_6 + (arr_15 [i_3] [1]))), ((((arr_1 [20]) + (arr_1 [i_3]))))))));
                var_16 = 22121;
                arr_17 [i_3] [20] [1] = var_8;
                arr_18 [11] [i_3] = ((11 == ((98 ? (arr_9 [i_3] [i_3] [18]) : (arr_7 [15])))));

                /* vectorizable */
                for (int i_5 = 0; i_5 < 25;i_5 += 1) /* same iter space */
                {
                    arr_22 [i_3] [1] [i_5] = (((arr_1 [i_3]) ? (arr_1 [i_4 - 2]) : 6658));
                    var_17 = (min(var_17, 65));
                    arr_23 [i_5] [i_4] = ((0 & ((-6659 ? (arr_8 [i_3] [i_4]) : 9030759558380347246))));
                    /* LoopNest 2 */
                    for (int i_6 = 1; i_6 < 23;i_6 += 1)
                    {
                        for (int i_7 = 1; i_7 < 23;i_7 += 1)
                        {
                            {
                                arr_31 [8] [24] [17] [i_6] [i_5] = var_1;
                                var_18 *= (((((arr_19 [i_3]) + 9223372036854775807)) >> (((arr_19 [i_4]) + 2676352027010440779))));
                                arr_32 [12] [i_5] = (((arr_5 [i_3 - 2] [i_4 - 2]) ? (arr_5 [i_3 - 1] [i_4 - 2]) : (arr_5 [i_3 + 2] [i_4 - 2])));
                            }
                        }
                    }
                }
                /* vectorizable */
                for (int i_8 = 0; i_8 < 25;i_8 += 1) /* same iter space */
                {
                    var_19 = (((arr_26 [1] [i_3 - 1] [1] [i_4 - 2] [i_4 - 1] [i_4]) == (arr_28 [i_3 - 2] [i_3 - 1] [i_3 - 1] [i_3 - 1] [i_3 - 2] [i_3 + 2] [i_3 + 1])));
                    arr_35 [8] = (arr_6 [17] [24]);
                    var_20 += (((arr_29 [i_3] [i_3] [i_4 + 1] [14] [i_3]) ? 5451 : (arr_4 [i_3 - 1])));
                    var_21 *= ((arr_27 [i_3] [i_4]) || (arr_27 [i_4] [i_8]));
                }
                for (int i_9 = 0; i_9 < 25;i_9 += 1) /* same iter space */
                {
                    arr_38 [i_3] [1] [i_9] [5] = var_11;
                    arr_39 [1] [i_4] [i_9] [3] = (arr_19 [i_9]);
                }
                for (int i_10 = 3; i_10 < 24;i_10 += 1)
                {
                    var_22 += (((((~(16714 - 32240)))) ? var_1 : (((arr_37 [i_10 - 2] [23] [i_10 - 1] [11]) ? (arr_37 [i_10 - 1] [4] [i_10 - 1] [i_10]) : (arr_37 [i_10 - 1] [i_10] [i_10 - 2] [8])))));
                    var_23 = (var_1 < (arr_33 [20]));
                    arr_44 [19] [i_4] [i_10] = 12769;
                }
            }
        }
    }
    /* LoopNest 2 */
    for (int i_11 = 0; i_11 < 1;i_11 += 1)
    {
        for (int i_12 = 0; i_12 < 19;i_12 += 1)
        {
            {
                arr_50 [i_11] = ((((((3840 ? (arr_45 [i_11]) : (arr_7 [i_11]))))) << (var_0 - 51)));

                for (int i_13 = 1; i_13 < 18;i_13 += 1)
                {
                    var_24 *= (!(((-(max(var_0, (arr_29 [0] [i_12] [2] [22] [0])))))));
                    var_25 = ((arr_19 [i_11]) >= ((-29414 ? 15029938277488461694 : 16693)));
                    var_26 = (max(var_26, (((var_11 << (((((!12801) - 65535)) + 65576)))))));
                }
                for (int i_14 = 0; i_14 < 1;i_14 += 1)
                {
                    var_27 = (min(var_27, ((((((((-9030759558380347247 + 9223372036854775807) >> (((arr_8 [i_11] [1]) - 115)))) ^ (((var_8 << (var_9 - 62583)))))) << (((arr_41 [8]) - 17489537585214500754)))))));
                    /* LoopNest 2 */
                    for (int i_15 = 0; i_15 < 19;i_15 += 1)
                    {
                        for (int i_16 = 1; i_16 < 1;i_16 += 1)
                        {
                            {
                                arr_60 [i_11] [i_11] [i_11] [16] [i_11] = ((+((((arr_6 [i_15] [1]) || -6670)))));
                                arr_61 [i_11] = (((((min((max(var_5, 108)), var_2)))) % (((-2963403802031365247 + 9223372036854775807) << (12771 - 12771)))));
                            }
                        }
                    }
                    /* LoopNest 2 */
                    for (int i_17 = 0; i_17 < 19;i_17 += 1)
                    {
                        for (int i_18 = 0; i_18 < 1;i_18 += 1)
                        {
                            {
                                var_28 *= var_11;
                                arr_68 [2] [5] [i_11] [i_17] [i_18] = (!6641);
                                arr_69 [i_11] [i_12] [17] [14] [i_12] = ((var_0 ? ((min(var_10, (50686 || 6624454285605691237)))) : (((min(1, 12759))))));
                                var_29 *= (arr_59 [i_11] [i_12] [i_17] [18] [i_18]);
                            }
                        }
                    }
                }
            }
        }
    }
    #pragma endscop
}
