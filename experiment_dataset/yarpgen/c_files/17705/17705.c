/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 17705
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=17705 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/17705
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 20;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 20;i_1 += 1)
        {
            {
                arr_6 [i_1] [i_1] [i_0] = (max((!var_9), var_1));
                var_13 = ((~3194316397) >> (((max(1100650899, (arr_0 [i_1]))) - 1100650893)));
                var_14 = 3805;

                for (int i_2 = 1; i_2 < 19;i_2 += 1)
                {
                    var_15 = 1100650879;
                    arr_10 [9] [i_2] [9] = (min(74982273978565317, (((78 <= var_9) * (var_12 + 3194316380)))));
                }
                for (int i_3 = 1; i_3 < 17;i_3 += 1)
                {
                    var_16 = (min(var_16, var_2));
                    var_17 = (min(var_17, (arr_12 [i_3 + 3])));
                    var_18 = var_8;
                }
                for (int i_4 = 0; i_4 < 20;i_4 += 1)
                {
                    /* LoopNest 2 */
                    for (int i_5 = 0; i_5 < 20;i_5 += 1)
                    {
                        for (int i_6 = 0; i_6 < 20;i_6 += 1)
                        {
                            {
                                var_19 = var_10;
                                var_20 |= 1;
                                arr_21 [i_6] [i_6] = 9223372036854775807;
                            }
                        }
                    }
                    arr_22 [i_1] [6] = max((max((!1), (((arr_4 [i_4]) / var_10)))), -8138444744172011575);
                }
            }
        }
    }

    for (int i_7 = 0; i_7 < 12;i_7 += 1)
    {
        var_21 = (min(var_21, ((((((max((((arr_16 [i_7] [i_7] [9] [i_7]) == var_12)), ((var_1 > (arr_20 [i_7] [0] [i_7] [i_7] [i_7] [i_7] [i_7]))))))) >= var_3)))));

        /* vectorizable */
        for (int i_8 = 0; i_8 < 12;i_8 += 1)
        {
            var_22 = ((arr_1 [i_7]) & (3194316380 | 134217727));
            var_23 |= ((var_5 != (arr_15 [i_7])));
            /* LoopNest 3 */
            for (int i_9 = 0; i_9 < 12;i_9 += 1)
            {
                for (int i_10 = 1; i_10 < 11;i_10 += 1)
                {
                    for (int i_11 = 1; i_11 < 10;i_11 += 1)
                    {
                        {
                            var_24 = var_3;
                            var_25 = (((arr_35 [i_11] [i_11 - 1] [i_11] [i_11] [9]) | (arr_35 [i_11] [i_11 - 1] [i_11] [i_11] [i_11])));
                            arr_36 [0] [i_9] [i_9] [i_9] [i_9] [i_9] = (((arr_35 [i_7] [i_8] [1] [1] [i_11]) | (arr_18 [i_7] [i_8] [i_7] [i_7] [i_7])));
                            var_26 = (arr_15 [i_7]);
                            arr_37 [i_7] [i_8] [i_9] [i_10] [i_10 + 1] [i_11 - 1] = (arr_29 [i_11] [i_10] [i_9] [i_8]);
                        }
                    }
                }
            }
            var_27 = (+-35184372088824);
        }
        for (int i_12 = 2; i_12 < 10;i_12 += 1)
        {

            for (int i_13 = 0; i_13 < 12;i_13 += 1)
            {
                var_28 += var_10;
                var_29 = (!-3805);
            }
            var_30 = 2876252134128509299;
        }
        for (int i_14 = 0; i_14 < 1;i_14 += 1)
        {
            var_31 = (min(var_31, ((min((min(((max((arr_41 [i_7] [i_7]), var_7))), (max(40, 10261254881682366013)))), ((max(-1, 3194316380))))))));
            var_32 = (((((-(min(134217727, (arr_2 [i_7] [10])))))) && (arr_2 [i_7] [2])));
            /* LoopNest 3 */
            for (int i_15 = 0; i_15 < 12;i_15 += 1)
            {
                for (int i_16 = 0; i_16 < 12;i_16 += 1)
                {
                    for (int i_17 = 4; i_17 < 9;i_17 += 1)
                    {
                        {
                            var_33 = (min(18446744073709551609, 9223372036854775807));
                            arr_53 [i_17] [1] [i_16] [i_14] [i_14] [i_14] [i_17] &= var_8;
                            arr_54 [i_7] [1] [10] [i_17] [i_7] |= (arr_33 [i_14]);
                            arr_55 [i_15] [i_14] [i_14] [i_14] [8] = 1796838528;
                        }
                    }
                }
            }
        }
        arr_56 [i_7] [i_7] = (max((max(((min((arr_13 [i_7]), 1067588699))), (min((arr_11 [i_7] [1] [i_7] [4]), 18446744073709551609)))), var_0));
        arr_57 [i_7] = (((-2020904195 + -44) ? (((arr_51 [i_7] [i_7] [11] [i_7] [i_7] [i_7]) ? (arr_51 [i_7] [i_7] [2] [i_7] [i_7] [i_7]) : var_2)) : (arr_52 [i_7] [i_7] [i_7] [6] [i_7])));
        arr_58 [4] = (arr_25 [i_7]);
    }
    #pragma endscop
}
