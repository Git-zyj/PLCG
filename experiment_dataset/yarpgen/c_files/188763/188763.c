/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 188763
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=188763 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/188763
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_14 = (min(var_12, var_11));
    var_15 = var_2;
    /* LoopNest 2 */
    for (int i_0 = 1; i_0 < 18;i_0 += 1)
    {
        for (int i_1 = 3; i_1 < 18;i_1 += 1)
        {
            {
                var_16 = (max(var_16, (arr_1 [i_0 - 1] [11])));

                for (int i_2 = 0; i_2 < 1;i_2 += 1)
                {
                    var_17 = (max(var_17, (arr_5 [i_0] [i_0] [i_1 - 2] [i_2])));
                    var_18 = (arr_5 [i_2] [i_1] [i_2] [i_0]);

                    /* vectorizable */
                    for (int i_3 = 2; i_3 < 18;i_3 += 1)
                    {
                        arr_9 [i_3 + 1] [i_2] [i_0] [i_1] [i_0] = (~-var_1);
                        var_19 ^= (((arr_7 [i_0] [i_1 - 2]) >> (((arr_5 [i_0 + 1] [i_3 - 1] [i_3 - 1] [i_3 - 2]) + 5847318805687810194))));
                        arr_10 [i_1] [i_2] [i_2] [2] &= (arr_4 [i_3 + 1] [i_1 - 3] [i_0 + 1]);
                        var_20 = (((arr_3 [i_1 - 2] [i_1 - 3] [i_0 - 1]) > (arr_0 [i_3 - 1])));
                        var_21 ^= (arr_2 [i_1 - 3] [i_0 + 1]);
                    }
                }

                /* vectorizable */
                for (int i_4 = 0; i_4 < 19;i_4 += 1)
                {
                    arr_13 [i_0] [i_1 - 2] [16] = (((arr_5 [i_0] [i_0] [12] [i_4]) + var_3));
                    arr_14 [i_1] [i_4] = (!var_9);
                    var_22 = (arr_1 [i_0] [i_4]);
                }
                /* vectorizable */
                for (int i_5 = 0; i_5 < 1;i_5 += 1)
                {
                    var_23 = ((~(arr_18 [7])));
                    var_24 = ((~((1602474544 ? (arr_17 [i_0] [i_1] [1]) : (arr_4 [i_0] [7] [11])))));
                }
                for (int i_6 = 2; i_6 < 16;i_6 += 1)
                {
                    var_25 = (max(((-var_2 ? -var_6 : ((var_5 ? var_4 : (arr_17 [1] [i_1] [i_6]))))), (arr_2 [1] [i_1])));

                    for (int i_7 = 0; i_7 < 19;i_7 += 1)
                    {

                        for (int i_8 = 0; i_8 < 19;i_8 += 1)
                        {
                            var_26 = ((-(((var_3 / (arr_8 [i_8] [i_8] [i_8] [4]))))));
                            arr_25 [i_6] = (arr_16 [i_0] [i_1] [i_6 - 2]);
                            var_27 = (arr_21 [i_0 + 1] [13] [i_1 + 1] [i_6] [17] [i_8]);
                            var_28 = (min(var_28, (((((((((var_4 ? (arr_15 [0] [i_1]) : (arr_1 [i_1] [i_0])))) <= var_3))) | (arr_1 [i_6] [i_8]))))));
                        }
                        for (int i_9 = 2; i_9 < 18;i_9 += 1)
                        {
                            var_29 = var_7;
                            var_30 -= (arr_5 [i_0] [i_1 - 2] [i_6] [i_7]);
                            var_31 = var_11;
                        }
                        arr_29 [i_6] = ((((!(arr_26 [i_0] [i_1] [i_6])))));
                        arr_30 [i_0 + 1] [i_0 + 1] [i_6] [i_7] [i_7] [i_6] = (!var_8);
                    }
                    /* vectorizable */
                    for (int i_10 = 2; i_10 < 15;i_10 += 1)
                    {
                        arr_34 [0] [i_6 - 2] [i_6] = var_13;
                        var_32 = var_13;
                    }
                    var_33 = (((arr_22 [5] [i_6 + 3] [i_6 + 3] [i_6 + 3] [i_1 - 3] [i_0 - 1]) ? (arr_4 [i_6 + 1] [i_0 - 1] [i_1 + 1]) : (arr_8 [i_0 - 1] [i_1] [i_0 - 1] [i_6])));
                }
                for (int i_11 = 0; i_11 < 19;i_11 += 1)
                {

                    /* vectorizable */
                    for (int i_12 = 0; i_12 < 19;i_12 += 1) /* same iter space */
                    {
                        var_34 = (arr_5 [i_0 + 1] [i_11] [i_11] [i_12]);
                        var_35 = (arr_21 [i_0 - 1] [i_0] [i_0 - 1] [i_1 + 1] [i_11] [i_12]);
                        arr_40 [16] [i_1] = (arr_35 [i_0 + 1]);
                        var_36 = (max(var_36, (!var_4)));
                    }
                    /* vectorizable */
                    for (int i_13 = 0; i_13 < 19;i_13 += 1) /* same iter space */
                    {
                        var_37 = (~var_7);
                        var_38 = (arr_12 [5]);
                        var_39 = ((-(arr_7 [i_1 - 3] [i_0 - 1])));
                    }
                    for (int i_14 = 0; i_14 < 19;i_14 += 1) /* same iter space */
                    {
                        var_40 = (arr_31 [i_1] [i_14] [i_1] [i_0] [i_14] [i_0 - 1]);
                        var_41 = (arr_38 [3] [i_1 - 3] [i_0]);

                        for (int i_15 = 0; i_15 < 19;i_15 += 1) /* same iter space */
                        {
                            arr_48 [i_0] [i_14] [i_15] [i_11] = ((-((0 ? 1 : 18324589141183203588))));
                            var_42 = var_2;
                            var_43 *= (min(0, 1));
                        }
                        for (int i_16 = 0; i_16 < 19;i_16 += 1) /* same iter space */
                        {
                            var_44 = min(var_9, ((min((((arr_26 [i_0] [i_1] [18]) ? var_10 : (arr_4 [i_11] [i_11] [i_16]))), ((-(arr_28 [i_0 + 1] [i_1])))))));
                            var_45 = (arr_51 [4] [i_0] [17] [i_11] [i_14] [i_16] [i_16]);
                            var_46 = var_3;
                            var_47 = (arr_27 [i_0] [i_1] [10] [i_14] [i_16]);
                        }
                    }
                    /* vectorizable */
                    for (int i_17 = 0; i_17 < 19;i_17 += 1) /* same iter space */
                    {

                        for (int i_18 = 0; i_18 < 19;i_18 += 1)
                        {
                            var_48 = var_9;
                            var_49 = -1;
                        }
                        var_50 = (arr_54 [i_1 - 1] [i_0] [i_0 - 1] [i_1]);
                        arr_57 [i_0] = var_12;
                        var_51 = ((-(arr_49 [0] [9] [i_1 - 2] [i_11] [3])));
                    }
                    var_52 = (arr_11 [i_0] [3] [i_11]);
                    arr_58 [i_0] [i_1] = ((!(arr_24 [i_0] [i_0 - 1] [i_1] [i_1] [i_0] [i_1 - 1] [7])));
                    var_53 -= (-(((arr_54 [i_0] [i_0] [3] [i_11]) ? ((var_10 ? (arr_2 [i_0] [i_1 + 1]) : (arr_56 [i_0] [9] [i_11] [i_11] [i_11]))) : (((~(arr_50 [i_0 - 1] [i_0] [i_1] [i_1 + 1] [i_11])))))));
                }
            }
        }
    }
    var_54 = -122154932526348027;
    #pragma endscop
}
