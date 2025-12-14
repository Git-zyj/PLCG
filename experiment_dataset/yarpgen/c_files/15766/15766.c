/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 15766
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=15766 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/15766
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_16 = (max(var_16, ((((((-1286260924 - 10541) | var_14)) / -1)))));

    for (int i_0 = 3; i_0 < 10;i_0 += 1)
    {
        var_17 = (min(var_17, 226));
        /* LoopNest 2 */
        for (int i_1 = 2; i_1 < 10;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 1;i_2 += 1)
            {
                {

                    for (int i_3 = 2; i_3 < 12;i_3 += 1)
                    {
                        var_18 = (min(var_18, (arr_4 [i_0 + 1] [5])));

                        for (int i_4 = 4; i_4 < 12;i_4 += 1)
                        {
                            var_19 = (min(var_19, ((0 ? 1 : -1))));
                            var_20 = max(-938150480, 0);
                        }
                        for (int i_5 = 0; i_5 < 13;i_5 += 1)
                        {
                            var_21 = (0 + 9362587966729617740);
                            var_22 = ((var_14 ? (max(((var_7 ? (arr_13 [i_1] [i_1 + 3] [i_1]) : var_1)), ((((arr_8 [i_0] [2] [i_2] [i_3 - 2]) - var_14))))) : ((((0 + 528630722) ? -47 : ((1 ? 151 : 234)))))));
                            var_23 = ((-13958 >= (((((((arr_15 [i_0] [i_5] [i_2] [i_3] [i_0]) != (arr_6 [i_5] [12] [i_2]))))) + ((var_15 >> (var_5 + 253808043097644707)))))));
                            var_24 = var_4;
                        }
                    }
                    /* vectorizable */
                    for (int i_6 = 3; i_6 < 10;i_6 += 1)
                    {
                        var_25 = (arr_3 [i_1] [i_6]);
                        var_26 = (((((arr_15 [i_0] [i_6] [i_2] [i_2] [i_6]) / 15)) - var_3));
                        var_27 = ((13958 ? 15628 : 692500287214727093));
                    }

                    for (int i_7 = 0; i_7 < 13;i_7 += 1)
                    {
                        var_28 = (max(var_28, 987932141));

                        for (int i_8 = 1; i_8 < 11;i_8 += 1) /* same iter space */
                        {
                            var_29 = (min(var_29, ((max(((13962 - (arr_7 [i_0] [i_0] [1] [i_7]))), ((min((arr_12 [i_8 + 1]), (arr_12 [i_8 - 1])))))))));
                            var_30 = (((arr_21 [i_0] [i_1 - 2] [i_2] [i_8 + 2]) / var_14));
                            var_31 = (((((1 ? (arr_3 [i_0 + 3] [i_1 - 1]) : var_9))) ? (13987 - -1057379877) : (min((arr_7 [i_0] [i_1 - 1] [i_7] [i_1 - 1]), (arr_3 [i_0 + 2] [i_1 - 2])))));
                        }
                        for (int i_9 = 1; i_9 < 11;i_9 += 1) /* same iter space */
                        {
                            var_32 = (max(var_32, (max(8192, 1134928819))));
                            var_33 = (max(var_33, ((((var_4 ? (arr_24 [i_0 - 1] [i_0 - 3] [i_0] [i_0 - 1] [i_0 - 1] [i_0]) : (arr_7 [i_1 - 2] [i_1 + 1] [i_1 + 3] [i_1 + 1])))))));
                            var_34 = ((((var_2 && (arr_18 [i_9] [i_9 - 1] [i_9] [9] [i_9]))) ? (~var_1) : (arr_18 [i_9 - 1] [i_9 - 1] [9] [i_9] [i_9])));
                        }
                    }
                    for (int i_10 = 4; i_10 < 11;i_10 += 1)
                    {

                        for (int i_11 = 0; i_11 < 13;i_11 += 1)
                        {
                            var_35 = ((((((((4995 ? (arr_32 [i_0] [i_0] [i_1 + 3] [12] [i_10] [12] [i_11]) : -75393841))) ? (102 >= var_4) : (((arr_12 [i_0]) ? var_5 : var_5))))) ? ((-1 - (((arr_26 [i_0 - 1] [i_0 - 1] [i_2] [i_1] [i_0 - 1]) | 15)))) : ((((arr_8 [i_11] [i_0] [i_0] [i_0]) ? (arr_25 [i_11] [i_10] [i_2] [i_1] [i_0]) : -var_0)))));
                            var_36 = (min(var_36, (arr_21 [10] [i_1] [i_1] [2])));
                        }
                        var_37 = (arr_24 [0] [1] [i_2] [i_1] [1] [i_1 + 1]);
                    }
                    var_38 = (max((arr_13 [2] [i_1 + 1] [i_1 + 1]), ((((var_3 >> var_1) < (arr_7 [i_0 + 1] [i_2] [i_0 + 1] [i_1]))))));
                }
            }
        }
        var_39 = (max(1943, (arr_1 [i_0])));
    }
    #pragma endscop
}
