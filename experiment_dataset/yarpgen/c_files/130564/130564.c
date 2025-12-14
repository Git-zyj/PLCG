/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 130564
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=130564 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/130564
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_18 += (max(var_8, var_12));

    for (int i_0 = 0; i_0 < 23;i_0 += 1)
    {
        var_19 = (max((arr_0 [21] [i_0]), (min((max((arr_1 [i_0]), (arr_0 [i_0] [i_0]))), (max((arr_1 [i_0]), (arr_0 [3] [i_0])))))));
        var_20 += (max((max((arr_1 [i_0]), (arr_1 [i_0]))), (max((arr_0 [i_0] [i_0]), (max((arr_0 [i_0] [i_0]), (arr_0 [i_0] [4])))))));
    }

    /* vectorizable */
    for (int i_1 = 0; i_1 < 12;i_1 += 1)
    {
        var_21 = (((arr_3 [i_1]) >= (arr_2 [i_1])));
        var_22 = (((arr_4 [i_1]) || (arr_2 [i_1])));

        for (int i_2 = 0; i_2 < 12;i_2 += 1)
        {

            for (int i_3 = 0; i_3 < 1;i_3 += 1)
            {
                /* LoopNest 2 */
                for (int i_4 = 0; i_4 < 12;i_4 += 1)
                {
                    for (int i_5 = 0; i_5 < 1;i_5 += 1)
                    {
                        {
                            arr_17 [i_1] [i_2] [i_3] [i_1] [i_5] = (((arr_7 [i_1] [i_1] [i_3]) == (arr_1 [i_1])));
                            arr_18 [i_1] [i_1] [i_3] [i_1] [6] [i_4] = (arr_0 [i_5] [i_2]);
                            var_23 = (min(var_23, (arr_5 [i_5] [i_4] [i_3])));
                            arr_19 [i_1] [i_1] [i_1] [i_4] [i_5] = (arr_15 [i_1] [i_2] [i_1] [i_1] [i_3]);
                            arr_20 [i_1] [i_1] [i_2] = (((arr_13 [i_1] [i_2] [i_3] [i_4] [i_3]) & (arr_4 [i_1])));
                        }
                    }
                }
                /* LoopNest 2 */
                for (int i_6 = 1; i_6 < 10;i_6 += 1)
                {
                    for (int i_7 = 1; i_7 < 11;i_7 += 1)
                    {
                        {
                            var_24 += (arr_3 [i_2]);
                            var_25 = (arr_9 [i_1] [0] [i_2] [i_1]);
                        }
                    }
                }
                /* LoopNest 2 */
                for (int i_8 = 0; i_8 < 12;i_8 += 1)
                {
                    for (int i_9 = 0; i_9 < 12;i_9 += 1)
                    {
                        {
                            arr_30 [i_1] [i_2] [5] [i_2] [i_2] [i_2] [i_1] = (arr_7 [i_8] [i_1] [i_2]);
                            var_26 = (arr_3 [i_8]);
                        }
                    }
                }
            }
            var_27 += (arr_24 [i_2] [i_2] [i_2] [i_1] [i_1] [i_2] [i_1]);
        }
        for (int i_10 = 0; i_10 < 12;i_10 += 1)
        {

            for (int i_11 = 0; i_11 < 12;i_11 += 1) /* same iter space */
            {
                var_28 = (max(var_28, ((((arr_5 [i_1] [i_10] [i_10]) % (arr_0 [i_1] [i_10]))))));

                for (int i_12 = 0; i_12 < 12;i_12 += 1)
                {
                    var_29 = (arr_5 [i_1] [i_10] [i_1]);
                    var_30 += (arr_7 [i_12] [i_11] [i_1]);
                    arr_39 [i_1] [i_1] = arr_1 [0];
                    var_31 += (((arr_33 [i_12] [i_11] [i_10]) <= (arr_33 [i_12] [i_10] [i_1])));
                }
                for (int i_13 = 0; i_13 < 12;i_13 += 1) /* same iter space */
                {

                    for (int i_14 = 0; i_14 < 12;i_14 += 1)
                    {
                        arr_45 [i_1] [i_1] [i_14] = (arr_14 [i_14] [0] [0]);
                        var_32 = (((arr_33 [i_10] [0] [i_14]) - (arr_1 [i_13])));
                    }
                    for (int i_15 = 4; i_15 < 9;i_15 += 1)
                    {
                        var_33 = (max(var_33, ((((arr_41 [i_15 + 2] [i_15 + 3] [i_15] [i_15 + 1] [i_15 + 1]) <= (arr_15 [i_1] [i_15 - 3] [i_13] [i_11] [i_11]))))));
                        var_34 = (max(var_34, ((((((((arr_22 [i_10] [i_11]) + 9223372036854775807)) << (((((arr_33 [i_13] [i_10] [9]) + 145)) - 39)))) < (arr_11 [i_11]))))));
                    }
                    var_35 += (arr_1 [i_11]);
                    var_36 += ((arr_36 [i_13]) || (arr_36 [i_11]));
                }
                for (int i_16 = 0; i_16 < 12;i_16 += 1) /* same iter space */
                {
                    var_37 += (arr_10 [i_1] [i_10] [i_11] [i_16]);
                    arr_50 [i_1] [1] [i_10] [i_1] = (arr_46 [i_16] [i_11] [i_10] [i_1] [i_1] [6]);
                }
                var_38 = (max(var_38, ((((arr_29 [i_1] [i_1] [i_10] [i_11]) <= (arr_29 [10] [i_1] [i_10] [i_1]))))));
                var_39 &= (arr_27 [i_1] [i_1] [i_10] [i_1] [i_11] [i_1]);
            }
            for (int i_17 = 0; i_17 < 12;i_17 += 1) /* same iter space */
            {
                arr_53 [i_1] [3] = (arr_0 [i_10] [i_10]);
                var_40 = (((arr_42 [i_10] [i_1]) | (arr_14 [i_17] [i_10] [i_1])));
                arr_54 [i_17] [i_17] [i_17] [i_1] &= (arr_0 [i_10] [4]);
                /* LoopNest 2 */
                for (int i_18 = 3; i_18 < 10;i_18 += 1)
                {
                    for (int i_19 = 3; i_19 < 11;i_19 += 1)
                    {
                        {
                            var_41 += (arr_5 [i_19 + 1] [i_10] [i_17]);
                            arr_59 [i_19] [i_1] [6] [i_18] [i_17] [i_1] [i_1] = (((arr_31 [i_1] [i_18 - 2]) && (arr_37 [3] [i_1] [3] [i_18] [i_19] [i_18])));
                            var_42 = (((arr_57 [i_18 - 2]) <= (arr_57 [i_19 + 1])));
                            arr_60 [i_18] [i_17] [i_17] [i_18] [i_1] = (((arr_51 [i_18 + 2] [i_1] [i_1] [i_18 + 1]) <= (arr_51 [i_18 + 2] [i_1] [i_18 + 2] [i_18])));
                        }
                    }
                }
            }
            for (int i_20 = 0; i_20 < 12;i_20 += 1)
            {
                var_43 += (arr_36 [1]);
                /* LoopNest 2 */
                for (int i_21 = 0; i_21 < 12;i_21 += 1)
                {
                    for (int i_22 = 0; i_22 < 12;i_22 += 1)
                    {
                        {
                            var_44 = (((arr_28 [i_22] [i_21] [i_21] [2] [i_1] [i_10] [i_1]) >= (arr_25 [i_1] [i_10] [i_20] [i_21] [i_22])));
                            arr_69 [i_22] [i_1] [i_20] [i_1] [i_1] = (((arr_33 [i_22] [i_10] [i_20]) >= ((((arr_27 [i_22] [i_21] [i_20] [i_10] [i_1] [i_1]) && (arr_9 [2] [i_10] [i_1] [i_21]))))));
                            arr_70 [i_10] [i_1] [i_22] = (arr_2 [i_1]);
                            var_45 += (((arr_3 [i_1]) << (((arr_55 [i_22]) - 189))));
                            var_46 = (((arr_36 [i_1]) / (arr_36 [i_1])));
                        }
                    }
                }
                /* LoopNest 2 */
                for (int i_23 = 1; i_23 < 10;i_23 += 1)
                {
                    for (int i_24 = 2; i_24 < 11;i_24 += 1)
                    {
                        {
                            var_47 = ((arr_72 [i_1] [i_10] [i_23 + 2] [i_24] [i_24 - 2] [i_24 - 2]) - (((((arr_7 [i_20] [i_1] [i_24]) != (arr_13 [i_24] [i_1] [i_20] [i_10] [i_1]))))));
                            var_48 = arr_74 [i_20] [i_24] [i_24 - 2] [i_24] [i_24 - 2] [i_24];
                            var_49 = (arr_72 [i_1] [i_20] [6] [i_23 + 2] [i_23 + 1] [i_24 - 1]);
                        }
                    }
                }
            }
            var_50 = (arr_36 [i_1]);
            var_51 += (arr_2 [4]);
            var_52 = arr_48 [5] [i_10] [i_1];
            var_53 = (min(var_53, ((((arr_6 [i_10]) % (arr_6 [i_1]))))));
        }
        var_54 = (arr_23 [i_1] [i_1] [i_1] [i_1]);
        var_55 += (arr_49 [8] [6] [0] [0] [8]);
    }
    for (int i_25 = 0; i_25 < 20;i_25 += 1)
    {
        var_56 += (arr_0 [2] [i_25]);
        var_57 += ((((min((arr_77 [i_25]), (arr_77 [i_25])))) < (min((arr_76 [i_25] [i_25]), (max((arr_76 [i_25] [i_25]), (arr_1 [i_25])))))));
        var_58 = (max((arr_0 [i_25] [i_25]), (max((arr_77 [i_25]), (arr_77 [i_25])))));
    }
    var_59 = (max(var_59, ((min(var_13, (min((max(var_8, var_14)), ((max(var_6, var_14))))))))));
    var_60 += var_3;
    #pragma endscop
}
