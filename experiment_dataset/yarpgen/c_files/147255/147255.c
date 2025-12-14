/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 147255
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=147255 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/147255
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_19 = (~var_7);
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 10;i_0 += 1)
    {
        for (int i_1 = 4; i_1 < 9;i_1 += 1)
        {
            {

                for (int i_2 = 0; i_2 < 10;i_2 += 1)
                {
                    var_20 = ((((arr_0 [i_1 - 3] [i_1 + 1]) + (arr_4 [i_1 + 1] [i_1 - 3]))));
                    /* LoopNest 2 */
                    for (int i_3 = 0; i_3 < 10;i_3 += 1)
                    {
                        for (int i_4 = 1; i_4 < 8;i_4 += 1)
                        {
                            {
                                arr_11 [i_4] [i_1] [i_2] [i_1] [i_0] = (max(var_0, 40));
                                var_21 = arr_5 [i_1];
                            }
                        }
                    }
                }
                for (int i_5 = 4; i_5 < 8;i_5 += 1)
                {
                    arr_15 [i_0] [i_1] [i_5 - 1] = var_18;
                    var_22 = (~(arr_12 [i_5 - 3] [i_1 - 2] [i_1]));

                    for (int i_6 = 0; i_6 < 1;i_6 += 1)
                    {
                        var_23 = 63682409;

                        /* vectorizable */
                        for (int i_7 = 0; i_7 < 10;i_7 += 1)
                        {
                            var_24 += ((11220798315203698262 ? (arr_14 [i_0] [i_1] [8]) : 7225945758505853334));
                            arr_22 [i_1] [i_1] = (arr_2 [i_0]);
                        }
                        /* vectorizable */
                        for (int i_8 = 0; i_8 < 10;i_8 += 1) /* same iter space */
                        {
                            var_25 = -11160;
                            var_26 = ((arr_14 [i_0] [i_1 + 1] [i_1]) ? (((114 ? var_0 : 44))) : 6494620746653849011);
                            var_27 = ((var_15 ? var_0 : (arr_0 [i_8] [i_1 - 1])));
                            arr_26 [i_0] [i_1 - 2] [i_1] [i_6] [i_5 - 2] [i_1] = (arr_4 [i_1 + 1] [i_1 + 1]);
                        }
                        for (int i_9 = 0; i_9 < 10;i_9 += 1) /* same iter space */
                        {
                            var_28 = -7225945758505853353;
                            var_29 ^= (max(((211 ? var_14 : (arr_25 [i_1 + 1] [6] [i_5 + 2] [i_6] [i_9]))), ((((arr_25 [i_1 - 1] [1] [i_5 - 2] [i_5] [i_5]) != (arr_25 [i_1 - 2] [4] [i_1] [i_1 - 2] [i_9]))))));
                        }
                        /* vectorizable */
                        for (int i_10 = 0; i_10 < 10;i_10 += 1)
                        {
                            var_30 = 1656320242;
                            arr_33 [i_0] [i_1] [i_5 - 4] [i_6] [i_10] = (arr_28 [i_0] [i_1] [i_5 - 4] [i_6] [i_10]);
                            var_31 = (((arr_28 [i_0] [i_1] [i_5] [i_6] [i_0]) ? var_15 : var_13));
                            var_32 = var_6;
                        }
                    }
                }
                for (int i_11 = 0; i_11 < 10;i_11 += 1)
                {
                    arr_38 [i_0] [i_1] = 22672;

                    for (int i_12 = 0; i_12 < 10;i_12 += 1) /* same iter space */
                    {
                        arr_41 [i_0] [i_1] [i_1] [i_11] [i_11] [i_12] = var_6;
                        arr_42 [i_0] [i_0] [i_1] [i_0] = (arr_6 [i_1] [i_1 + 1] [i_11] [i_12]);
                        var_33 = (max(((42863 ? (((arr_20 [i_12] [i_12] [i_1] [i_11] [i_1] [i_1] [i_0]) * (arr_19 [i_0] [i_1] [i_12]))) : (arr_18 [i_1] [i_12] [i_11] [i_11] [i_1 - 3] [i_1]))), (!var_10)));
                        arr_43 [i_0] [i_1 - 3] [i_1] [i_12] = (min((arr_27 [i_1 - 1] [i_1] [i_1] [i_11] [i_11]), (7871947842422441543 >= var_8)));
                    }
                    for (int i_13 = 0; i_13 < 10;i_13 += 1) /* same iter space */
                    {
                        var_34 = ((243 ? var_1 : var_7));
                        var_35 = var_11;
                        var_36 = (max(var_36, ((max(68, -1560)))));
                    }
                    var_37 = (((((arr_10 [i_1 - 3] [i_1 - 4] [i_1 + 1] [i_1 - 2] [i_1 - 2]) == 63682398)) ? (((min(var_15, (arr_14 [i_1] [i_1] [i_1]))))) : ((208 | (arr_30 [i_0] [i_1 + 1] [i_11])))));
                }
                for (int i_14 = 0; i_14 < 10;i_14 += 1)
                {
                    var_38 = 44;
                    /* LoopNest 2 */
                    for (int i_15 = 0; i_15 < 1;i_15 += 1)
                    {
                        for (int i_16 = 0; i_16 < 10;i_16 += 1)
                        {
                            {
                                var_39 = (min(var_39, (((-((((max((arr_36 [i_0] [i_1] [i_14] [i_16]), (arr_53 [i_0] [i_0] [i_1] [i_14] [i_15] [i_16] [i_16])))) * var_11)))))));
                                var_40 += var_16;
                            }
                        }
                    }
                    /* LoopNest 2 */
                    for (int i_17 = 0; i_17 < 10;i_17 += 1)
                    {
                        for (int i_18 = 0; i_18 < 10;i_18 += 1)
                        {
                            {
                                var_41 = 0;
                                arr_62 [i_0] [i_1 - 2] [i_1] [i_17] [i_18] = ((((max((-32767 - 1), (arr_39 [i_0] [i_0])))) >> ((var_0 ? ((((var_13 < (arr_49 [i_14] [i_17] [i_18]))))) : (arr_35 [i_1 - 2] [i_1] [i_14])))));
                            }
                        }
                    }
                }
                var_42 = var_12;

                for (int i_19 = 0; i_19 < 10;i_19 += 1)
                {
                    arr_65 [i_0] [i_1] = ((-76 ? (((((arr_17 [i_1]) || (arr_17 [i_1]))))) : var_14));
                    arr_66 [i_1] [i_1 + 1] [i_19] = (((max((min((arr_14 [i_1] [i_1 - 1] [i_1]), (arr_57 [i_0] [i_0] [i_1 - 2] [i_19]))), var_13)) % ((min((arr_51 [i_1] [i_1 - 1] [i_19]), -2198)))));
                }
                /* vectorizable */
                for (int i_20 = 3; i_20 < 9;i_20 += 1)
                {
                    /* LoopNest 2 */
                    for (int i_21 = 0; i_21 < 1;i_21 += 1)
                    {
                        for (int i_22 = 0; i_22 < 1;i_22 += 1)
                        {
                            {
                                var_43 = var_1;
                                var_44 += (var_0 ? (((30301 >> (var_9 - 4280)))) : (arr_70 [i_0] [i_1 - 4] [i_20 - 1] [i_21]));
                                var_45 = (max(var_45, (!var_14)));
                            }
                        }
                    }
                    var_46 = var_2;
                    var_47 -= -44;
                }
                /* vectorizable */
                for (int i_23 = 3; i_23 < 8;i_23 += 1)
                {
                    var_48 = (arr_36 [i_23 - 2] [i_23 - 3] [i_23 - 2] [i_23 - 1]);
                    arr_78 [i_1] [i_1 - 1] [i_1] = var_18;
                    /* LoopNest 2 */
                    for (int i_24 = 0; i_24 < 10;i_24 += 1)
                    {
                        for (int i_25 = 1; i_25 < 9;i_25 += 1)
                        {
                            {
                                var_49 = arr_72 [i_1 - 2] [i_23 + 2] [i_24] [i_1] [i_25] [i_25 - 1];
                                var_50 = (max(var_50, 249));
                                arr_84 [i_0] [i_1] [i_23] [i_24] [i_25 - 1] = (arr_13 [i_25 + 1] [i_1 - 4] [i_23 - 2]);
                            }
                        }
                    }
                    /* LoopNest 2 */
                    for (int i_26 = 0; i_26 < 10;i_26 += 1)
                    {
                        for (int i_27 = 1; i_27 < 6;i_27 += 1)
                        {
                            {
                                var_51 = (((arr_46 [i_27 + 3] [i_1] [i_1 - 2] [i_23 - 1]) || -89));
                                var_52 = -var_15;
                                var_53 = (((arr_85 [i_1 - 2] [i_1] [i_27 + 3] [i_1]) ? (arr_67 [i_1 - 4] [i_23] [i_27 + 3] [i_26]) : (arr_85 [i_1 - 4] [i_0] [i_27 + 4] [i_1])));
                                var_54 = ((((var_12 ? var_7 : var_8))) ? (arr_57 [i_1 - 4] [i_1 - 4] [i_23 - 3] [i_27 + 1]) : (arr_58 [i_1 - 2] [i_1]));
                            }
                        }
                    }
                }
            }
        }
    }
    var_55 = 44;
    #pragma endscop
}
