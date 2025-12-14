/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 140956
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=140956 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/140956
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 0; i_0 < 18;i_0 += 1)
    {
        /* LoopNest 2 */
        for (int i_1 = 0; i_1 < 18;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 18;i_2 += 1)
            {
                {
                    var_11 *= ((56 || (arr_4 [i_0] [i_1] [i_1] [i_0])));

                    for (int i_3 = 0; i_3 < 1;i_3 += 1)
                    {

                        /* vectorizable */
                        for (int i_4 = 0; i_4 < 18;i_4 += 1) /* same iter space */
                        {
                            var_12 = (min(var_12, (~-7750)));
                            arr_12 [i_0] [1] [i_2] [i_3] = (~-106);
                        }
                        /* vectorizable */
                        for (int i_5 = 0; i_5 < 18;i_5 += 1) /* same iter space */
                        {
                            arr_15 [i_0] [i_3] [i_3] [i_0] = (arr_10 [i_0] [i_3] [i_0] [i_3] [1]);
                            arr_16 [i_3] [i_3] [i_3] [i_2] [i_1] [i_3] = (arr_1 [i_1]);
                        }
                        for (int i_6 = 0; i_6 < 18;i_6 += 1) /* same iter space */
                        {
                            arr_19 [i_3] [i_3] [i_2] [i_3] = (((((arr_7 [i_0] [i_1] [14] [i_3]) ? (arr_7 [i_0] [i_0] [5] [i_0]) : (arr_9 [14] [i_2]))) - (arr_13 [i_0] [i_1] [i_2])));
                            var_13 = ((-((min(1, 1)))));
                        }

                        for (int i_7 = 2; i_7 < 14;i_7 += 1)
                        {
                            arr_22 [i_0] [i_1] [1] [i_1] [i_7] [i_3] [8] &= ((~(arr_7 [17] [i_3] [i_2] [i_0])));
                            arr_23 [i_0] [i_3] [i_0] [i_0] = (((((var_9 ? ((7760 ? var_7 : 1)) : (~4420)))) ? ((min((max((arr_2 [i_0] [i_0]), -4421)), ((((-127 - 1) <= 1)))))) : (max(74, ((var_10 ? var_7 : 55792))))));
                            var_14 = (min(var_14, var_1));
                            arr_24 [i_3] = (!(arr_17 [i_0] [i_7 + 3] [i_2] [i_3] [i_7]));
                        }
                        for (int i_8 = 0; i_8 < 18;i_8 += 1)
                        {
                            var_15 = ((!(arr_26 [i_0])));
                            arr_27 [i_0] [i_3] [i_2] [i_3] [16] = 38854;
                        }
                        var_16 = (max(var_16, 4420));

                        for (int i_9 = 0; i_9 < 18;i_9 += 1) /* same iter space */
                        {
                            var_17 -= (arr_25 [i_0] [i_0] [i_0] [i_0] [1] [i_0] [i_0]);
                            arr_31 [i_0] [i_0] [i_3] [i_2] [i_3] [i_9] = ((!((min((arr_30 [i_0] [i_1] [i_2] [i_3] [i_2]), (min((arr_18 [i_0] [i_1] [i_2] [i_3] [i_1] [17]), (arr_0 [i_0]))))))));
                        }
                        for (int i_10 = 0; i_10 < 18;i_10 += 1) /* same iter space */
                        {
                            arr_34 [i_0] [i_0] [i_2] [i_3] [i_10] [i_3] [i_2] = (((((~((max(306, (arr_14 [i_0] [i_1] [i_2] [i_3] [i_3] [1] [i_1]))))))) ? (((arr_32 [i_0] [i_1] [i_2] [i_2] [i_10] [i_0]) ? (arr_32 [i_0] [i_0] [i_2] [i_3] [i_3] [i_10]) : (arr_32 [i_10] [i_1] [i_2] [i_1] [i_0] [i_0]))) : var_3));
                            arr_35 [i_0] [i_1] [i_1] [i_1] [i_1] &= (((((min(45282, (arr_29 [i_0] [i_0] [i_0] [i_0] [0] [4]))))) ? (((!((max(var_3, var_9)))))) : (((arr_11 [i_0] [2] [i_0] [5] [i_10]) ? 27548 : ((min(var_7, (arr_7 [i_0] [15] [15] [i_10]))))))));
                            var_18 = (max(var_18, (arr_29 [9] [9] [i_1] [i_2] [i_2] [i_10])));
                            var_19 ^= ((-4407 ? -4421 : 31));
                        }
                        for (int i_11 = 0; i_11 < 18;i_11 += 1) /* same iter space */
                        {
                            var_20 = (max((((arr_17 [17] [i_1] [i_2] [i_3] [i_11]) ? (arr_17 [i_0] [i_1] [i_2] [i_3] [i_0]) : 45)), ((var_7 ? var_5 : (arr_17 [i_0] [i_0] [i_0] [i_0] [i_0])))));
                            var_21 = -17148;
                            var_22 += (min(33279, (arr_9 [i_3] [i_11])));
                        }
                    }
                    for (int i_12 = 1; i_12 < 1;i_12 += 1)
                    {
                        arr_42 [i_12] [i_1] [i_2] [i_2] [i_2] = arr_13 [i_0] [i_0] [i_2];
                        arr_43 [i_12] [i_1] [i_2] [i_12 - 1] [i_2] = (max(1, ((76 ? -26009 : var_2))));
                        var_23 ^= (max(7732, (max(var_5, ((min(16, (arr_40 [i_0] [i_1] [i_2] [i_2]))))))));
                        var_24 = max((min((arr_38 [i_0] [i_12 - 1] [i_12 - 1] [i_12 - 1] [i_12 - 1]), (arr_21 [i_0] [i_12] [i_12]))), -114);

                        for (int i_13 = 0; i_13 < 1;i_13 += 1)
                        {
                            arr_46 [i_13] [i_12 - 1] [i_12] [i_12] [5] [i_0] = (min((arr_10 [i_0] [i_12] [i_2] [i_12] [i_13]), ((((min((arr_17 [i_13] [i_12] [i_0] [i_1] [i_0]), var_2))) & (arr_39 [i_0] [i_12 - 1] [i_2] [i_12] [i_13])))));
                            var_25 += 33403;
                        }
                    }

                    for (int i_14 = 1; i_14 < 16;i_14 += 1)
                    {
                        var_26 = var_0;

                        for (int i_15 = 0; i_15 < 1;i_15 += 1) /* same iter space */
                        {
                            var_27 *= -89;
                            arr_52 [i_15] [i_15] [i_14] [i_2] [i_2] [i_1] [i_0] = (((((10691 ? var_4 : (arr_32 [i_0] [1] [i_2] [i_14 - 1] [i_15] [i_1]))) & ((max(1, (arr_41 [i_0] [i_14 + 1])))))));
                            var_28 += (min(var_7, (max(var_9, var_5))));
                        }
                        for (int i_16 = 0; i_16 < 1;i_16 += 1) /* same iter space */
                        {
                            var_29 = var_10;
                            arr_55 [i_0] [i_0] [i_0] [4] [i_0] = (((arr_39 [7] [i_1] [i_2] [i_14] [i_16]) < 1));
                        }
                        for (int i_17 = 0; i_17 < 18;i_17 += 1)
                        {
                            var_30 = (arr_37 [i_0] [i_14] [i_2] [i_1] [i_0]);
                            var_31 *= (arr_10 [i_0] [i_1] [i_0] [i_0] [i_1]);
                            arr_59 [i_0] [i_1] [i_2] [i_14 + 2] [i_17] = (1 | -43);
                        }
                    }
                }
            }
        }

        for (int i_18 = 0; i_18 < 1;i_18 += 1)
        {
            var_32 *= (min((min((var_5 * -1), var_0)), ((~(arr_26 [i_0])))));
            var_33 = (((((min((arr_37 [i_0] [i_0] [i_18] [i_18] [4]), -29441)))) ? var_10 : 1));
            /* LoopNest 3 */
            for (int i_19 = 3; i_19 < 15;i_19 += 1)
            {
                for (int i_20 = 0; i_20 < 1;i_20 += 1)
                {
                    for (int i_21 = 0; i_21 < 18;i_21 += 1)
                    {
                        {
                            var_34 = -81;
                            var_35 = (min((arr_53 [i_0] [i_18] [i_19] [11] [i_21] [i_19 - 2]), (arr_49 [i_0] [i_20] [i_21])));
                            arr_73 [i_19] [i_18] [i_19] [i_20] [i_19] = var_6;
                            var_36 = (min(var_36, (((!(!1))))));
                        }
                    }
                }
            }
        }
        for (int i_22 = 0; i_22 < 18;i_22 += 1) /* same iter space */
        {
            var_37 -= (arr_45 [i_0]);
            var_38 -= (max(var_4, (max(((min((arr_29 [i_0] [9] [i_0] [i_22] [i_22] [16]), (arr_9 [i_0] [i_22])))), var_4))));
        }
        for (int i_23 = 0; i_23 < 18;i_23 += 1) /* same iter space */
        {
            arr_80 [i_0] [i_0] [i_0] = -1;
            arr_81 [i_0] = (max((arr_44 [i_0] [i_23] [i_0] [i_23] [i_23] [1]), (arr_62 [i_0] [i_0] [i_0])));
            arr_82 [i_0] [i_23] = (min((arr_64 [i_0]), (((!1) ? ((min(var_7, (arr_58 [i_0] [1] [1] [i_23] [1])))) : (((arr_25 [i_0] [i_0] [i_0] [i_23] [i_23] [i_0] [i_23]) ? (arr_10 [i_0] [i_23] [i_0] [12] [i_23]) : var_5))))));
            var_39 -= (((arr_3 [i_0]) << (((((arr_37 [i_23] [i_23] [i_23] [i_0] [i_0]) ? (arr_33 [i_0] [i_23] [i_23] [i_0]) : ((min(var_8, (arr_7 [i_23] [i_23] [i_0] [i_0])))))) - 107))));
        }
    }
    var_40 ^= (((((~((min(32767, -26)))))) ? var_2 : 32132));
    var_41 = (min((((1 && ((max(1, 64512)))))), (max((!15), var_6))));
    #pragma endscop
}
