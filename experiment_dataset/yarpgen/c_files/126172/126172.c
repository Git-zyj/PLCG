/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 126172
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=126172 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/126172
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_11 = var_8;

    for (int i_0 = 0; i_0 < 10;i_0 += 1)
    {
        arr_3 [i_0] = ((((((arr_2 [i_0]) % (arr_2 [i_0])))) ? (((!(arr_2 [i_0])))) : (arr_2 [i_0])));
        /* LoopNest 2 */
        for (int i_1 = 0; i_1 < 10;i_1 += 1)
        {
            for (int i_2 = 1; i_2 < 9;i_2 += 1)
            {
                {
                    var_12 = (!-7532056454788538710);
                    var_13 = (((!2130706432) ? (min(((var_1 ? (arr_6 [i_0] [i_1]) : var_0)), ((~(arr_6 [i_1] [i_2]))))) : (((min(var_2, (arr_9 [i_0] [i_1] [i_2] [i_1])))))));
                    var_14 = (max(var_14, ((((arr_2 [i_2 - 1]) - (-2130706449 / 6132))))));
                }
            }
        }
        arr_11 [i_0] = ((-(((arr_4 [i_0] [i_0]) ^ (arr_1 [i_0] [i_0])))));
    }
    for (int i_3 = 3; i_3 < 11;i_3 += 1)
    {
        /* LoopNest 3 */
        for (int i_4 = 0; i_4 < 12;i_4 += 1)
        {
            for (int i_5 = 0; i_5 < 12;i_5 += 1)
            {
                for (int i_6 = 0; i_6 < 12;i_6 += 1)
                {
                    {
                        arr_23 [i_5] [i_4] = ((64 ? (min(-var_3, (~var_9))) : ((((arr_12 [i_3 + 1]) ? (arr_12 [i_3 + 1]) : var_4)))));
                        arr_24 [i_3] [i_5] [i_4] [i_6] [i_4] [i_4] = (((arr_13 [i_3 - 1] [i_3 - 2]) / (arr_13 [i_3 - 1] [i_3 - 2])));
                    }
                }
            }
        }
        arr_25 [i_3] = (7532056454788538698 ? ((((((arr_12 [i_3]) ? var_2 : (arr_19 [6] [i_3] [6]))) < (arr_14 [i_3 - 1])))) : (((arr_13 [i_3 - 2] [i_3 + 1]) ? (arr_13 [i_3 + 1] [i_3 - 2]) : (arr_13 [i_3 + 1] [i_3 - 1]))));
    }

    for (int i_7 = 1; i_7 < 14;i_7 += 1)
    {
        var_15 ^= (arr_27 [4] [4]);
        arr_28 [i_7] = (~0);
    }
    for (int i_8 = 0; i_8 < 1;i_8 += 1) /* same iter space */
    {
        /* LoopNest 2 */
        for (int i_9 = 0; i_9 < 24;i_9 += 1)
        {
            for (int i_10 = 3; i_10 < 22;i_10 += 1)
            {
                {
                    var_16 = var_6;
                    /* LoopNest 2 */
                    for (int i_11 = 2; i_11 < 22;i_11 += 1)
                    {
                        for (int i_12 = 0; i_12 < 1;i_12 += 1)
                        {
                            {
                                arr_42 [i_8] [i_8] [i_8] [i_8] [i_8] [i_10] [i_8] = (min((arr_32 [i_8] [i_8]), (arr_29 [i_8])));
                                var_17 = (min(var_17, (~var_8)));
                            }
                        }
                    }
                    var_18 = (min((((arr_36 [i_10] [i_10] [i_8] [i_8]) % var_8)), 7532056454788538704));
                }
            }
        }
        var_19 = (max(var_19, (max((0 >= var_1), ((~(arr_29 [i_8])))))));
        arr_43 [i_8] [i_8] = (-(min((((var_3 ? var_2 : 2130706432))), (min((arr_38 [i_8] [i_8] [i_8] [i_8] [i_8]), -2130706422)))));
        /* LoopNest 2 */
        for (int i_13 = 0; i_13 < 24;i_13 += 1)
        {
            for (int i_14 = 0; i_14 < 24;i_14 += 1)
            {
                {
                    /* LoopNest 2 */
                    for (int i_15 = 0; i_15 < 24;i_15 += 1)
                    {
                        for (int i_16 = 0; i_16 < 24;i_16 += 1)
                        {
                            {
                                var_20 = (max(((((arr_54 [i_8]) ? var_0 : var_6))), (arr_54 [i_8])));
                                var_21 = (max(-32752, -2130706431));
                                var_22 = (min((min((arr_56 [i_15] [i_14] [i_13] [i_8]), (!-32729))), var_3));
                                arr_59 [i_8] [i_8] [i_13] [i_8] [i_15] [i_16] = ((-(((arr_40 [i_8] [i_13] [i_14] [i_13] [i_13]) << (((arr_40 [i_8] [i_13] [i_8] [i_8] [i_16]) - 12541))))));
                            }
                        }
                    }
                    /* LoopNest 2 */
                    for (int i_17 = 0; i_17 < 24;i_17 += 1)
                    {
                        for (int i_18 = 0; i_18 < 24;i_18 += 1)
                        {
                            {
                                var_23 = (arr_60 [i_13] [i_14]);
                                var_24 = (max(7532056454788538709, var_8));
                            }
                        }
                    }
                    arr_66 [i_8] [i_8] [i_14] = arr_33 [i_8] [i_14];
                    var_25 = ((((arr_48 [i_8] [i_13] [i_8] [i_8]) - 0)));
                    arr_67 [i_8] = ((!(((var_0 ? (((-(arr_64 [i_8] [i_8] [i_8] [i_8] [i_8] [i_8])))) : (min((arr_51 [i_14]), 8191)))))));
                }
            }
        }
        var_26 += (((((max(8200, (arr_33 [i_8] [i_8]))) > (!var_1))) ? (min(-7532056454788538704, -105)) : (max((min(var_6, 7532056454788538734)), (arr_40 [i_8] [i_8] [i_8] [i_8] [i_8])))));
    }
    for (int i_19 = 0; i_19 < 1;i_19 += 1) /* same iter space */
    {
        arr_70 [i_19] |= (min((min((arr_54 [i_19]), (arr_54 [i_19]))), -199));
        arr_71 [i_19] = (-(arr_38 [i_19] [i_19] [i_19] [i_19] [i_19]));
        var_27 = (((~var_2) ? (((arr_48 [i_19] [i_19] [i_19] [i_19]) % var_9)) : 48));

        for (int i_20 = 1; i_20 < 21;i_20 += 1)
        {
            /* LoopNest 2 */
            for (int i_21 = 0; i_21 < 1;i_21 += 1)
            {
                for (int i_22 = 0; i_22 < 24;i_22 += 1)
                {
                    {
                        arr_79 [i_19] [i_19] [i_21] [i_21] [i_22] [i_19] = (-8191 / 4556970729723509554);
                        var_28 = (min(var_28, (max(56, 9223372036854775807))));
                    }
                }
            }
            /* LoopNest 2 */
            for (int i_23 = 3; i_23 < 22;i_23 += 1)
            {
                for (int i_24 = 1; i_24 < 22;i_24 += 1)
                {
                    {
                        var_29 = ((-((max(var_2, (arr_35 [i_20 - 1] [i_20 - 1] [i_20 + 3]))))));
                        arr_87 [i_19] [i_23] = (min((((arr_85 [i_24 + 2] [i_23 - 1] [i_23 + 1] [i_23 - 1] [i_20 + 1]) ? var_8 : var_10)), (arr_63 [i_23 + 1])));
                    }
                }
            }
        }
    }
    var_30 = var_9;
    var_31 -= var_6;
    #pragma endscop
}
