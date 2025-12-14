/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 134601
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=134601 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/134601
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 10;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 10;i_1 += 1)
        {
            {
                var_15 = (arr_3 [i_0] [i_1]);
                var_16 = ((+((((arr_1 [i_1] [i_0]) < (arr_1 [i_0] [i_1]))))));
            }
        }
    }
    /* LoopNest 3 */
    for (int i_2 = 0; i_2 < 22;i_2 += 1)
    {
        for (int i_3 = 3; i_3 < 19;i_3 += 1)
        {
            for (int i_4 = 1; i_4 < 1;i_4 += 1)
            {
                {
                    var_17 = var_0;
                    /* LoopNest 2 */
                    for (int i_5 = 3; i_5 < 20;i_5 += 1)
                    {
                        for (int i_6 = 0; i_6 < 22;i_6 += 1)
                        {
                            {
                                var_18 = (min(var_18, (-6756809074227545083 / 255)));
                                var_19 = (min(var_19, ((max((arr_7 [i_3] [i_4] [i_6]), var_4)))));
                            }
                        }
                    }
                    var_20 = (max((((arr_5 [i_3 - 3]) * 0)), 1));

                    for (int i_7 = 1; i_7 < 20;i_7 += 1)
                    {
                        var_21 = var_10;
                        var_22 = (~18446744073709551615);
                        var_23 = (min((arr_7 [i_2] [i_3 + 1] [i_2]), (((arr_7 [i_7] [i_4 - 1] [1]) | (arr_7 [i_3 + 3] [i_3 + 1] [0])))));
                        var_24 = var_4;
                    }
                    for (int i_8 = 0; i_8 < 22;i_8 += 1)
                    {
                        var_25 = (min(var_25, ((((~(arr_12 [i_8] [i_3 - 1] [i_4 - 1] [i_8])))))));
                        var_26 = (arr_4 [i_8]);
                        var_27 *= ((((((((~(arr_21 [i_2] [i_3 + 1] [i_2] [i_2])))) ? (arr_16 [i_2] [i_8] [18]) : var_6))) ? (min(((((arr_17 [i_2] [i_3 - 1] [i_3 - 1] [i_8] [i_8]) ? 31 : (arr_7 [i_2] [i_3 + 1] [i_8])))), var_8)) : (arr_21 [i_2] [i_3 - 1] [i_8] [i_8])));
                    }
                    for (int i_9 = 0; i_9 < 22;i_9 += 1)
                    {

                        for (int i_10 = 0; i_10 < 22;i_10 += 1)
                        {
                            var_28 = (min(var_28, (arr_6 [i_9])));
                            var_29 = (min(var_29, (((+(((min((arr_25 [i_2] [i_2] [5] [2]), var_7)))))))));
                            var_30 = ((-13924 ? (max((arr_19 [i_2] [i_9] [i_4 - 1] [8] [8] [i_9]), (arr_14 [i_2] [14] [i_2] [i_2] [i_2] [10]))) : ((min(-var_11, -8359275666957639876)))));
                            var_31 = (((((max(var_3, var_9)))) - (max((((-(arr_7 [i_9] [i_3] [i_10])))), var_10))));
                            var_32 = (min(var_32, ((min(((((arr_11 [i_3] [i_3 - 1] [i_3] [i_3 + 3] [i_3]) | 16352))), ((((arr_7 [i_10] [9] [i_4]) | (arr_17 [i_9] [i_3 + 1] [i_4 - 1] [i_9] [i_10])))))))));
                        }
                        for (int i_11 = 0; i_11 < 22;i_11 += 1)
                        {
                            var_33 = (max((arr_10 [i_4] [i_3 - 1] [i_4] [i_4 - 1]), ((~(arr_10 [i_4] [i_3 + 3] [19] [i_4 - 1])))));
                            var_34 = ((~(53978 | 0)));
                        }
                        for (int i_12 = 0; i_12 < 22;i_12 += 1)
                        {
                            var_35 = ((((~(max((arr_5 [i_4 - 1]), var_7)))) ^ var_9));
                            var_36 = var_7;
                        }
                        var_37 = ((~((-(arr_31 [i_2] [i_2] [i_4] [21] [i_3 + 1] [i_9] [i_4])))));

                        /* vectorizable */
                        for (int i_13 = 3; i_13 < 19;i_13 += 1) /* same iter space */
                        {
                            var_38 = (arr_22 [3] [i_4] [i_4 - 1]);
                            var_39 *= ((((~(arr_26 [i_2] [14] [i_4] [i_9] [12])))) ? (arr_12 [i_2] [i_3 + 3] [16] [i_9]) : (arr_8 [i_3] [i_3 - 2]));
                            var_40 *= (((arr_25 [i_13 - 2] [20] [i_4] [i_3]) & (!20341)));
                            var_41 = (min(var_41, (arr_34 [i_9] [i_9] [10] [i_9] [i_9] [i_9])));
                        }
                        /* vectorizable */
                        for (int i_14 = 3; i_14 < 19;i_14 += 1) /* same iter space */
                        {
                            var_42 = (arr_37 [i_14] [i_4] [i_4] [i_4] [i_2]);
                            var_43 = (arr_37 [i_2] [i_4] [i_4] [i_9] [i_14]);
                            var_44 = (min(var_44, (arr_38 [i_2])));
                            var_45 = (-(arr_17 [i_4] [i_14 + 1] [i_4] [i_3 + 1] [i_4]));
                        }
                        for (int i_15 = 0; i_15 < 22;i_15 += 1)
                        {
                            var_46 = (min(var_46, (((((arr_22 [i_3] [i_2] [i_3 + 3]) | (arr_18 [i_4 - 1] [i_4 - 1] [i_3 + 3] [20])))))));
                            var_47 = (min(var_47, (arr_15 [4] [i_3 + 1] [i_2] [10] [10] [i_3] [i_3])));
                            var_48 &= (max((arr_30 [i_2] [i_3] [i_4 - 1] [i_9] [i_15]), ((~(arr_35 [7] [i_4 - 1] [1])))));
                            var_49 = (arr_27 [i_3 + 3] [i_4] [i_3 + 2] [i_3] [i_3 + 3] [i_4 - 1]);
                        }
                    }
                }
            }
        }
    }

    for (int i_16 = 0; i_16 < 24;i_16 += 1)
    {
        /* LoopNest 3 */
        for (int i_17 = 1; i_17 < 22;i_17 += 1)
        {
            for (int i_18 = 3; i_18 < 21;i_18 += 1)
            {
                for (int i_19 = 0; i_19 < 24;i_19 += 1)
                {
                    {
                        var_50 = (max(1, (arr_52 [i_16] [i_17 + 1] [9] [i_18 + 2] [i_19])));
                        var_51 |= var_12;
                        var_52 = (max(var_52, 18446744073709551589));
                    }
                }
            }
        }
        var_53 = (min((arr_44 [i_16]), (~var_6)));
        var_54 = ((+(max((arr_51 [i_16] [10] [14] [12]), (((arr_47 [i_16] [i_16]) & var_10))))));
    }
    var_55 = 1892824793;
    #pragma endscop
}
