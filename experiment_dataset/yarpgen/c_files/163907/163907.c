/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 163907
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=163907 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/163907
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 3 */
    for (int i_0 = 2; i_0 < 19;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 21;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 21;i_2 += 1)
            {
                {
                    /* LoopNest 2 */
                    for (int i_3 = 1; i_3 < 18;i_3 += 1)
                    {
                        for (int i_4 = 2; i_4 < 19;i_4 += 1)
                        {
                            {
                                var_20 = (max(var_20, (arr_1 [i_3 - 1])));
                                var_21 = (min((arr_4 [i_0 - 2] [i_0 + 1] [i_0]), ((var_6 + ((-(arr_7 [15] [i_1] [i_4 - 2] [i_4 - 1] [15] [i_4 - 1])))))));
                                var_22 = (min(var_22, ((max(-218691608, (((var_19 || var_9) ? ((var_3 ? (arr_7 [i_0 + 2] [i_0] [i_0 - 2] [i_0 + 2] [i_0 + 1] [i_0]) : (arr_6 [i_0] [i_1] [i_2] [i_4 - 2]))) : 11691)))))));
                            }
                        }
                    }

                    /* vectorizable */
                    for (int i_5 = 0; i_5 < 21;i_5 += 1)
                    {

                        for (int i_6 = 4; i_6 < 20;i_6 += 1)
                        {
                            arr_18 [10] [i_0] [i_1] [i_2] [i_5] [i_2] [i_6 - 4] = (((arr_5 [i_6 - 1] [i_6] [i_6]) ? -1 : (arr_5 [i_0 - 1] [i_1] [i_2])));
                            var_23 = ((var_0 >= (((8646911284551352320 ? -18 : 3)))));
                        }
                        arr_19 [18] [18] [i_1] [i_2] [i_1] = (((arr_16 [i_0] [i_0 + 1] [i_2] [i_5]) ? (arr_16 [i_0] [i_0 + 1] [i_2] [i_1]) : (arr_16 [i_0] [i_0 + 1] [i_0] [i_5])));
                        var_24 = (max(var_24, 25972));
                    }
                    /* vectorizable */
                    for (int i_7 = 0; i_7 < 21;i_7 += 1)
                    {
                        var_25 = (arr_8 [i_1] [i_1]);
                        var_26 = (((arr_3 [i_1] [i_1]) < (7 + var_4)));
                        var_27 = (min(var_27, (arr_16 [i_0 - 2] [i_0 - 2] [i_2] [i_0 - 1])));

                        for (int i_8 = 0; i_8 < 21;i_8 += 1)
                        {
                            var_28 = (max(var_28, var_2));
                            var_29 = (arr_27 [i_0 + 1] [i_0 + 1] [i_2] [i_0 + 2] [i_8] [6] [i_7]);
                        }
                    }

                    for (int i_9 = 0; i_9 < 21;i_9 += 1)
                    {

                        for (int i_10 = 0; i_10 < 21;i_10 += 1)
                        {
                            var_30 = (min(var_30, (~var_1)));
                            arr_34 [i_1] [i_0] [i_0] [i_0] [i_0] [i_1] = (min(9799832789158199290, (arr_32 [i_0 + 1] [i_0] [i_1] [i_0] [i_0 + 1])));
                        }
                        var_31 = (min(var_31, -252));
                        var_32 = (min(20234, -1));
                        arr_35 [i_0] [i_0] [i_1] [i_9] [i_9] = ((arr_2 [i_9]) ? (((arr_2 [i_9]) ? 13075137229611529145 : (arr_2 [i_1]))) : 65525);
                    }
                    for (int i_11 = 3; i_11 < 18;i_11 += 1)
                    {
                        var_33 = var_3;
                        var_34 = var_12;
                        var_35 = (arr_15 [i_0 - 2] [i_0 - 2] [i_0 - 2] [i_1] [i_1] [i_2] [i_11]);
                        var_36 = (arr_13 [i_0 - 1] [i_0 - 2] [i_0] [i_0] [i_0 - 1]);
                    }
                    for (int i_12 = 2; i_12 < 17;i_12 += 1)
                    {

                        for (int i_13 = 3; i_13 < 18;i_13 += 1)
                        {
                            var_37 = (min(var_37, ((max((arr_32 [i_1] [i_0 + 1] [i_0] [i_12] [i_13 + 3]), 2147482624)))));
                            var_38 = (((((((arr_25 [i_1]) ? (arr_43 [i_0] [i_1] [i_0 + 1] [i_0 - 1] [i_0]) : (arr_9 [i_2] [i_1] [i_13 - 3]))))) ? (min((min(0, (arr_12 [i_1] [i_12 + 4]))), ((((arr_29 [i_0] [i_1] [i_12]) <= var_5))))) : (arr_3 [i_1] [i_12 + 3])));
                            var_39 = (max(var_39, var_2));
                        }

                        for (int i_14 = 0; i_14 < 21;i_14 += 1)
                        {
                            arr_48 [i_0] [i_1] [i_2] [i_12] [i_1] = (arr_11 [i_1] [i_14] [i_2] [i_12] [i_2]);
                            var_40 = ((var_1 ? (((arr_42 [i_0 - 2] [i_0 - 2] [i_0 - 1] [i_0 - 2] [i_0] [i_1] [i_0]) ? (arr_32 [i_12 + 4] [i_12 + 2] [i_1] [i_12 + 4] [i_12 + 3]) : (((arr_0 [i_1] [i_1]) ? var_17 : -6197)))) : ((~((var_10 ? var_3 : var_7))))));
                            var_41 = (max(var_41, ((min((arr_1 [i_0 + 2]), (min((arr_1 [i_0 - 1]), (arr_1 [i_0 + 2]))))))));
                            var_42 = (min(var_42, 13620969679866645449));
                        }
                        /* vectorizable */
                        for (int i_15 = 0; i_15 < 21;i_15 += 1)
                        {
                            var_43 = (~13330123894498157881);
                            var_44 = (!var_12);
                            var_45 = (18446744073709551615 <= 18446744073709551615);
                            var_46 = (max(var_46, (arr_14 [i_0] [i_12 + 4] [i_0] [i_0])));
                        }
                        var_47 = (max(var_47, (arr_43 [i_0 - 1] [i_0] [i_0 + 2] [i_2] [i_12 + 1])));
                        var_48 = (min(var_48, (arr_17 [i_0 - 1] [i_0] [i_1] [i_1] [i_12 + 1])));
                    }
                    for (int i_16 = 0; i_16 < 21;i_16 += 1)
                    {
                        arr_56 [i_16] [i_1] [i_0] = ((~(arr_40 [i_1] [i_0 - 2] [i_1] [i_2] [i_16] [i_16])));
                        var_49 = ((45301 ? 18446744073709551615 : 33521664));

                        /* vectorizable */
                        for (int i_17 = 2; i_17 < 19;i_17 += 1)
                        {
                            var_50 = ((var_11 / (arr_6 [i_17 + 1] [i_17 + 1] [i_2] [i_1])));
                            var_51 = (max(var_51, (arr_27 [i_0] [i_0] [i_1] [i_2] [i_16] [i_17 + 1] [i_17 - 2])));
                            var_52 = (arr_4 [i_0 - 2] [i_17 - 2] [i_17 + 2]);
                        }
                    }
                }
            }
        }
    }
    /* LoopNest 2 */
    for (int i_18 = 0; i_18 < 14;i_18 += 1)
    {
        for (int i_19 = 1; i_19 < 11;i_19 += 1)
        {
            {
                var_53 = 59209;
                var_54 = (max(var_54, (((((min(var_1, (arr_36 [i_19 + 3] [i_19 - 1] [i_19] [i_19 + 3] [i_19 - 1])))) ? (((~(96 < 29573)))) : (((arr_42 [i_18] [i_18] [i_19] [i_18] [i_19] [i_18] [i_18]) ? (arr_44 [i_18] [3] [i_19 - 1]) : var_13)))))));
            }
        }
    }
    #pragma endscop
}
