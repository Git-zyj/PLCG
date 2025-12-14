/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 166146
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=166146 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/166146
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 0; i_0 < 1;i_0 += 1)
    {
        var_16 = (arr_1 [i_0] [i_0]);
        var_17 = ((1 ? (max((arr_1 [i_0] [i_0]), (arr_1 [i_0] [i_0]))) : (min((arr_1 [i_0] [i_0]), (arr_1 [i_0] [i_0])))));
    }

    /* vectorizable */
    for (int i_1 = 0; i_1 < 21;i_1 += 1)
    {
        /* LoopNest 3 */
        for (int i_2 = 0; i_2 < 1;i_2 += 1)
        {
            for (int i_3 = 1; i_3 < 18;i_3 += 1)
            {
                for (int i_4 = 1; i_4 < 1;i_4 += 1)
                {
                    {
                        var_18 += ((((arr_7 [i_1] [i_2] [i_2] [15]) ? (arr_8 [20] [i_2] [i_3] [i_4]) : (arr_2 [i_4] [i_1]))));
                        var_19 = (((arr_2 [i_1] [0]) ? ((~(arr_1 [i_2] [i_3]))) : var_13));
                    }
                }
            }
        }
        /* LoopNest 2 */
        for (int i_5 = 0; i_5 < 21;i_5 += 1)
        {
            for (int i_6 = 1; i_6 < 1;i_6 += 1)
            {
                {
                    /* LoopNest 2 */
                    for (int i_7 = 3; i_7 < 18;i_7 += 1)
                    {
                        for (int i_8 = 1; i_8 < 19;i_8 += 1)
                        {
                            {
                                var_20 = -0;
                                var_21 = (((arr_2 [i_7 - 1] [i_8 + 1]) ? ((var_7 & (arr_5 [i_6] [i_6]))) : var_5));
                                var_22 = ((arr_8 [i_1] [i_5] [i_7 + 2] [3]) * var_11);
                                var_23 = ((-188631214146479279 ? 16776960 : 1));
                            }
                        }
                    }
                    var_24 = (max(var_24, (arr_18 [i_1] [0] [i_6] [i_1] [i_1] [i_5] [i_5])));
                }
            }
        }
        var_25 = var_0;
    }
    for (int i_9 = 0; i_9 < 11;i_9 += 1)
    {
        /* LoopNest 2 */
        for (int i_10 = 0; i_10 < 11;i_10 += 1)
        {
            for (int i_11 = 0; i_11 < 11;i_11 += 1)
            {
                {
                    /* LoopNest 2 */
                    for (int i_12 = 0; i_12 < 11;i_12 += 1)
                    {
                        for (int i_13 = 4; i_13 < 9;i_13 += 1)
                        {
                            {
                                var_26 = (max(49894, 91));
                                var_27 = ((((-(arr_23 [i_12]))) > ((~(arr_23 [i_9])))));
                            }
                        }
                    }

                    for (int i_14 = 0; i_14 < 1;i_14 += 1) /* same iter space */
                    {
                        var_28 = (min(var_28, 49894));
                        var_29 = (1 >= 43965);
                    }
                    for (int i_15 = 0; i_15 < 1;i_15 += 1) /* same iter space */
                    {
                        var_30 = ((!((max((!118), (arr_19 [i_9] [i_10] [i_11] [i_15] [9]))))));

                        /* vectorizable */
                        for (int i_16 = 1; i_16 < 9;i_16 += 1)
                        {
                            var_31 = (((((arr_5 [i_9] [i_15]) ^ (arr_12 [i_9] [2] [i_16]))) > (((!(arr_40 [i_15] [i_15] [i_15] [i_15]))))));
                            var_32 = ((-(arr_43 [i_9] [i_9] [i_9] [i_9] [i_9])));
                            var_33 = (arr_37 [i_9] [i_15] [i_10] [7] [i_16]);
                        }
                        var_34 = ((max(var_8, ((max(8128, (arr_26 [i_9] [i_9] [i_9] [i_9])))))));
                    }
                    /* LoopNest 2 */
                    for (int i_17 = 4; i_17 < 10;i_17 += 1)
                    {
                        for (int i_18 = 0; i_18 < 11;i_18 += 1)
                        {
                            {
                                var_35 = -188631214146479261;
                                var_36 = (arr_44 [i_9] [i_9] [i_9] [i_9] [i_9]);
                            }
                        }
                    }
                }
            }
        }
        var_37 = (max((((!(arr_16 [14] [i_9] [i_9] [i_9] [i_9] [i_9])))), (arr_35 [i_9] [i_9] [i_9] [i_9] [i_9] [i_9])));

        for (int i_19 = 4; i_19 < 9;i_19 += 1)
        {
            var_38 = 4294967295;
            var_39 = ((1 ? ((((arr_31 [i_9] [i_9] [0] [i_9]) == ((((arr_15 [i_9] [i_9] [i_9] [i_9] [i_9] [i_9]) >= (arr_37 [i_9] [i_19] [i_9] [i_9] [i_9]))))))) : (max((arr_8 [i_9] [20] [i_19 - 2] [3]), (arr_49 [i_19 + 2] [i_19 - 3] [i_19] [i_19 + 2] [i_19 + 2])))));
        }
        /* vectorizable */
        for (int i_20 = 1; i_20 < 10;i_20 += 1)
        {
            var_40 = (((!var_5) ? (arr_13 [i_9] [i_9]) : (((arr_0 [i_9] [i_9]) ? (arr_41 [i_20 - 1] [10] [i_9] [i_9]) : (arr_49 [i_9] [i_9] [i_20] [i_20] [i_20])))));
            var_41 = (arr_13 [i_20 - 1] [i_20 + 1]);
        }
    }
    /* vectorizable */
    for (int i_21 = 2; i_21 < 10;i_21 += 1)
    {
        /* LoopNest 2 */
        for (int i_22 = 0; i_22 < 12;i_22 += 1)
        {
            for (int i_23 = 1; i_23 < 8;i_23 += 1)
            {
                {
                    var_42 &= (((((arr_3 [i_21] [i_21 + 1]) ? (arr_4 [i_21]) : var_12)) == 43965));
                    var_43 = (188631214146479308 ? 21570 : 9223372036854775807);
                }
            }
        }
        var_44 = (((arr_5 [i_21 - 1] [i_21 + 2]) != -188631214146479265));

        for (int i_24 = 3; i_24 < 11;i_24 += 1)
        {
            var_45 = (arr_4 [i_21 - 1]);
            /* LoopNest 2 */
            for (int i_25 = 4; i_25 < 8;i_25 += 1)
            {
                for (int i_26 = 1; i_26 < 8;i_26 += 1)
                {
                    {
                        var_46 = (((arr_61 [i_24] [i_24 - 2] [i_24] [i_24 - 3]) & (((arr_68 [i_21] [i_24 - 3] [i_25 + 4] [i_26 - 1]) ? (arr_19 [i_26] [i_26] [i_26] [i_26 + 1] [i_26 - 1]) : var_1))));
                        var_47 *= (((arr_4 [i_24 - 1]) ? (arr_4 [i_24 - 2]) : var_4));
                        var_48 -= -var_6;
                        var_49 = ((((arr_5 [i_21] [i_21]) - (arr_9 [i_26 + 2] [i_21] [i_25] [i_25] [i_21] [i_21]))) == (((arr_3 [19] [i_24]) ? (arr_18 [i_21] [i_24 - 3] [i_21] [i_25] [i_25] [i_26] [i_26 + 4]) : var_9)));
                    }
                }
            }
            var_50 = (min(var_50, (arr_3 [i_21 - 2] [i_24 - 1])));
        }
        for (int i_27 = 3; i_27 < 10;i_27 += 1)
        {
            /* LoopNest 2 */
            for (int i_28 = 0; i_28 < 1;i_28 += 1)
            {
                for (int i_29 = 4; i_29 < 10;i_29 += 1)
                {
                    {
                        var_51 = (((arr_16 [i_21 + 2] [i_21] [i_21] [i_21 + 2] [i_29] [i_29 - 2]) | 0));
                        var_52 += var_10;
                    }
                }
            }
            var_53 = var_2;
        }
        for (int i_30 = 1; i_30 < 8;i_30 += 1)
        {
            var_54 ^= (var_2 - var_12);
            var_55 = (arr_7 [i_21] [i_21] [i_21 - 1] [i_21 + 2]);
            var_56 = var_5;
            var_57 = 1;
            /* LoopNest 2 */
            for (int i_31 = 0; i_31 < 12;i_31 += 1)
            {
                for (int i_32 = 0; i_32 < 12;i_32 += 1)
                {
                    {
                        var_58 = (((((~(arr_3 [i_31] [i_32])))) ^ (~var_13)));
                        var_59 = ((((var_13 ? (arr_83 [i_21] [i_21] [i_21] [i_21] [i_21] [i_21 - 2]) : -188631214146479279)) == (((var_0 ? 131071 : (arr_68 [i_21 - 1] [i_30 + 1] [i_30 + 1] [i_32]))))));
                    }
                }
            }
        }
        for (int i_33 = 0; i_33 < 12;i_33 += 1)
        {
            var_60 |= (~(arr_58 [6] [i_21] [i_21 - 2]));
            var_61 = 1;
            var_62 = (min(var_62, ((-(arr_84 [i_21 - 2])))));
            var_63 = var_0;
        }
    }
    for (int i_34 = 0; i_34 < 14;i_34 += 1)
    {
        var_64 = (max((arr_16 [i_34] [i_34] [i_34] [i_34] [i_34] [i_34]), ((max((!-213964862), (arr_5 [i_34] [i_34]))))));
        var_65 &= (min((arr_3 [i_34] [i_34]), (min(-188631214146479268, -var_1))));
    }
    var_66 = var_13;
    #pragma endscop
}
