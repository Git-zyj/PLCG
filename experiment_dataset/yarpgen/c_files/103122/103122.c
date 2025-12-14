/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 103122
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=103122 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/103122
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_19 = var_3;

    for (int i_0 = 1; i_0 < 19;i_0 += 1)
    {
        arr_3 [10] &= (-1 != 1);
        /* LoopNest 2 */
        for (int i_1 = 1; i_1 < 17;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 20;i_2 += 1)
            {
                {
                    /* LoopNest 2 */
                    for (int i_3 = 0; i_3 < 20;i_3 += 1)
                    {
                        for (int i_4 = 3; i_4 < 19;i_4 += 1)
                        {
                            {
                                var_20 = ((-(min(173, 2657282410614050395))));
                                var_21 = 1;
                                arr_13 [i_0] [i_0] [i_0] [i_3] [i_0] = (((arr_11 [i_0 + 1] [i_1 + 2] [i_1] [i_2] [i_3] [i_4]) == -1));
                                var_22 &= (max((arr_1 [18] [i_3]), ((max(((4802538832139658341 != (arr_1 [i_0] [i_3]))), (arr_6 [i_3]))))));
                            }
                        }
                    }

                    for (int i_5 = 0; i_5 < 1;i_5 += 1) /* same iter space */
                    {

                        for (int i_6 = 3; i_6 < 19;i_6 += 1) /* same iter space */
                        {
                            arr_21 [i_0] [i_2] [i_2] [i_1] [i_0] = (arr_8 [i_0] [i_0] [i_2]);
                            var_23 = (min(var_23, ((max(var_18, 10481)))));
                            arr_22 [i_0] [i_1] [14] [i_1] [i_0] = (arr_14 [i_0] [i_0]);
                            arr_23 [i_0] [i_0] [i_2] [i_0] [i_0] = (arr_18 [i_0 - 1] [i_0 - 1] [i_0 - 1] [i_1 - 1] [i_0 - 1] [i_6 - 1] [i_0 - 1]);
                        }
                        for (int i_7 = 3; i_7 < 19;i_7 += 1) /* same iter space */
                        {
                            arr_26 [i_0 - 1] [i_0 - 1] [i_2] [i_5] [i_2] [i_2] &= (((((~(arr_17 [i_2] [i_2] [i_2] [i_5] [i_2])))) ? (max(((var_4 ? (arr_24 [i_0 - 1] [i_1] [i_0 - 1] [17] [i_7]) : 1)), (arr_12 [i_0 + 1] [i_1 + 3] [i_1 + 3] [i_7]))) : var_13));
                            arr_27 [i_2] [i_2] [i_0] = -7860940570363727107;
                            var_24 = 11608;
                            arr_28 [i_0 - 1] [i_1 + 2] [1] [i_0] [7] = (arr_8 [i_0] [i_5] [i_0]);
                        }
                        arr_29 [i_0] [i_0] [i_0] [i_0] = var_1;
                        arr_30 [i_0] = (min((arr_15 [i_1] [i_0]), var_6));
                        var_25 = ((~((~(arr_12 [i_0 + 1] [i_1 + 2] [i_1] [i_1])))));
                        var_26 *= (((1 ? -4811884041942868507 : var_4)) != (min(1, (~-881428528167642728))));
                    }
                    for (int i_8 = 0; i_8 < 1;i_8 += 1) /* same iter space */
                    {
                        arr_34 [i_0] [i_0] [i_2] [i_8] [7] [14] = var_5;
                        var_27 = (arr_8 [i_0] [i_1] [i_0 + 1]);
                    }
                    var_28 = (min(var_28, 423));

                    /* vectorizable */
                    for (int i_9 = 0; i_9 < 20;i_9 += 1)
                    {
                        var_29 = (arr_9 [i_0 + 1] [i_0] [i_0]);
                        var_30 = ((-(arr_9 [i_0 - 1] [i_0] [i_9])));
                        arr_38 [i_0] [i_0] [i_0] [i_0] = (arr_33 [i_0] [i_2] [i_2] [i_9]);
                        var_31 = (((arr_15 [i_0] [i_0]) % 1));
                    }
                    for (int i_10 = 0; i_10 < 20;i_10 += 1)
                    {
                        var_32 = var_11;
                        var_33 = (arr_36 [i_0 + 1] [i_0] [i_0] [i_0 + 1] [i_0] [i_0 - 1]);
                    }
                }
            }
        }
        var_34 = ((1 ? 14627 : -10980));
    }
    for (int i_11 = 0; i_11 < 23;i_11 += 1)
    {
        /* LoopNest 2 */
        for (int i_12 = 2; i_12 < 22;i_12 += 1)
        {
            for (int i_13 = 0; i_13 < 23;i_13 += 1)
            {
                {
                    /* LoopNest 2 */
                    for (int i_14 = 2; i_14 < 19;i_14 += 1)
                    {
                        for (int i_15 = 0; i_15 < 23;i_15 += 1)
                        {
                            {
                                var_35 += (arr_54 [i_15] [i_12 - 1]);
                                arr_55 [i_11] [1] = ((!((!(~1)))));
                                var_36 += (arr_51 [i_15] [i_11] [i_14 - 1] [i_13] [i_11] [i_11] [i_11]);
                                var_37 = (max(98, -1191));
                                arr_56 [i_11] [i_12] [i_14 + 1] [i_14] [i_14] [i_15] = max(-51, -19667);
                            }
                        }
                    }

                    for (int i_16 = 4; i_16 < 21;i_16 += 1) /* same iter space */
                    {
                        var_38 |= ((((~(arr_44 [i_11]))) | ((var_13 ? (arr_44 [i_16 - 4]) : (arr_57 [i_13])))));
                        arr_59 [i_11] [i_13] [i_16] [i_16] = (min(((~((-(arr_52 [i_11] [i_12] [i_16] [i_16] [19]))))), ((max((arr_50 [i_11] [i_11] [i_12] [i_13] [i_13] [i_13]), 6780)))));
                        var_39 ^= var_13;
                        var_40 = var_14;
                    }
                    for (int i_17 = 4; i_17 < 21;i_17 += 1) /* same iter space */
                    {
                        var_41 = -var_10;
                        var_42 = var_5;
                        var_43 = (min(var_43, (((1 ? 0 : 1)))));
                    }
                }
            }
        }
        var_44 = var_18;
        var_45 = ((+(((arr_47 [i_11] [i_11] [8] [i_11]) ? (arr_47 [i_11] [i_11] [i_11] [i_11]) : (arr_47 [i_11] [i_11] [i_11] [i_11])))));
    }
    for (int i_18 = 1; i_18 < 12;i_18 += 1)
    {

        for (int i_19 = 0; i_19 < 1;i_19 += 1) /* same iter space */
        {
            var_46 += (arr_24 [i_18] [i_18 - 1] [i_18] [i_19] [i_19]);
            arr_69 [i_18] = (~-10803);

            for (int i_20 = 2; i_20 < 12;i_20 += 1)
            {
                var_47 = var_5;
                var_48 |= (arr_14 [i_18] [i_18]);
                arr_72 [i_18] [i_18] [i_19] [i_20 - 1] = ((((~(((arr_12 [i_18 - 1] [i_18 + 1] [i_18 + 1] [i_18]) << (((-127 - 1) + 157)))))) > ((((-29824 == -24405) < var_18)))));
                var_49 = (arr_14 [i_18 + 1] [i_19]);
            }
            /* vectorizable */
            for (int i_21 = 3; i_21 < 12;i_21 += 1)
            {
                var_50 = var_6;
                var_51 = (arr_33 [1] [i_19] [4] [4]);
                var_52 = (arr_37 [i_18]);
            }
            var_53 = (arr_1 [i_18] [i_18]);
        }
        for (int i_22 = 0; i_22 < 1;i_22 += 1) /* same iter space */
        {
            var_54 = (((arr_60 [i_18] [i_22] [i_18] [i_18] [i_18] [i_18]) ^ (arr_60 [i_22] [i_18] [i_22] [i_18] [i_18] [i_18])));
            var_55 = (arr_35 [i_18] [i_18] [i_18 - 1] [i_18]);
        }
        arr_79 [i_18] = var_1;
    }
    #pragma endscop
}
