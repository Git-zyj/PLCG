/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 158734
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=158734 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/158734
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_16 |= (!19690);
    /* LoopNest 3 */
    for (int i_0 = 0; i_0 < 12;i_0 += 1)
    {
        for (int i_1 = 3; i_1 < 11;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 12;i_2 += 1)
            {
                {
                    var_17 = ((((var_15 ? var_13 : (arr_8 [i_1 - 3] [i_0] [i_1 - 3] [i_1 + 1]))) & var_3));
                    var_18 = 231;

                    for (int i_3 = 0; i_3 < 12;i_3 += 1)
                    {
                        var_19 = (((((~(((!(arr_3 [i_0]))))))) ? var_15 : (((-1088750608 ^ (~-19684))))));
                        var_20 ^= (((-var_4 ? -19695 : (arr_10 [8] [i_1] [i_3] [i_3] [i_3]))));
                        var_21 = var_15;
                        var_22 = (((-((var_5 ? var_7 : 11137573228149129394)))));
                    }
                    for (int i_4 = 4; i_4 < 11;i_4 += 1)
                    {
                        arr_15 [i_0] [i_0] [1] [i_0] [i_0] = (arr_6 [i_2]);
                        var_23 += (-19687 <= (min(((var_4 % (arr_2 [10]))), var_0)));
                        var_24 = var_6;
                    }
                    for (int i_5 = 0; i_5 < 12;i_5 += 1) /* same iter space */
                    {
                        var_25 = -19690;
                        var_26 = -var_12;
                        var_27 = (min(var_27, (((1707660798 % (arr_11 [i_5] [i_0] [i_1] [i_0] [i_0]))))));
                        var_28 += ((0 ? -19684 : (((2505481588332594508 < 1) ? (min(33376, -1613569711)) : var_11))));

                        for (int i_6 = 0; i_6 < 12;i_6 += 1)
                        {
                            var_29 = -19679;
                            var_30 = (min(1639828239, ((19674 ? 7393 : -4314440132118165960))));
                            var_31 = (1 & -20768);
                            var_32 = (min(var_32, ((((((var_2 ? -var_10 : (!-19684)))) ? var_5 : 775995233)))));
                        }
                    }
                    for (int i_7 = 0; i_7 < 12;i_7 += 1) /* same iter space */
                    {
                        arr_24 [7] [i_1] [i_0] [9] = ((22181 ? -1596136952424341604 : 8));
                        arr_25 [i_0] [i_1 - 2] [i_2] [i_0] [i_7] = -360829037;
                        var_33 = (max(58142, 19683));
                        arr_26 [i_0] [i_0] [i_2] [i_0] = var_0;
                    }
                }
            }
        }
    }
    var_34 = var_7;
    /* LoopNest 3 */
    for (int i_8 = 0; i_8 < 14;i_8 += 1)
    {
        for (int i_9 = 2; i_9 < 12;i_9 += 1)
        {
            for (int i_10 = 0; i_10 < 14;i_10 += 1)
            {
                {
                    /* LoopNest 2 */
                    for (int i_11 = 0; i_11 < 14;i_11 += 1)
                    {
                        for (int i_12 = 0; i_12 < 14;i_12 += 1)
                        {
                            {
                                arr_39 [i_8] [11] [i_8] [i_8] [8] = (min(1, ((max(2147483622, -2147483646)))));
                                arr_40 [i_8] = 45701;
                                arr_41 [i_12] [i_8] [i_8] [i_10] [i_8] [i_8] |= var_8;
                                arr_42 [i_8] [9] [9] [9] [i_10] = (max(-115, 10422595148248246899));
                                arr_43 [i_10] [3] [3] = (max(((~((max(1, -19695))))), ((1585226128 ? ((9223372036854775807 ? 58142 : 65535)) : ((147 ? 19684 : 1133803198))))));
                            }
                        }
                    }
                    var_35 = (max(var_35, ((max(7226, 1723660046)))));
                    var_36 = ((-32544 ? 9223372036854775807 : var_9));
                }
            }
        }
    }
    /* LoopNest 2 */
    for (int i_13 = 0; i_13 < 14;i_13 += 1)
    {
        for (int i_14 = 2; i_14 < 13;i_14 += 1)
        {
            {
                var_37 = var_13;
                /* LoopNest 3 */
                for (int i_15 = 4; i_15 < 12;i_15 += 1)
                {
                    for (int i_16 = 2; i_16 < 13;i_16 += 1)
                    {
                        for (int i_17 = 0; i_17 < 14;i_17 += 1)
                        {
                            {
                                var_38 += ((68719476735 ? 32186 : (min(var_2, (1 / var_11)))));
                                arr_55 [i_13] [i_13] [i_13] [i_13] [i_17] = ((((min((arr_32 [4] [i_16 - 1] [i_17]), (arr_33 [i_14 + 1] [i_15 - 3] [i_17])))) ? var_8 : (min((arr_53 [i_14] [i_14 + 1] [2] [i_15 - 3] [i_16 - 1]), (arr_53 [i_13] [i_13] [i_14 + 1] [i_15 - 2] [i_15 - 2])))));
                            }
                        }
                    }
                }
            }
        }
    }
    #pragma endscop
}
