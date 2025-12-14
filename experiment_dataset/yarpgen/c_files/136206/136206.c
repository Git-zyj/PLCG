/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 136206
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=136206 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/136206
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 3; i_0 < 13;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 16;i_1 += 1)
        {
            {
                var_20 = ((((((arr_3 [i_1] [i_0 - 1]) ? var_3 : (arr_1 [i_0]))) * (arr_3 [i_0] [i_1]))));
                var_21 = ((((min((arr_5 [i_0] [i_0 + 2]), (arr_2 [i_0])))) || (~var_16)));
                /* LoopNest 2 */
                for (int i_2 = 1; i_2 < 13;i_2 += 1)
                {
                    for (int i_3 = 1; i_3 < 12;i_3 += 1)
                    {
                        {
                            var_22 = ((((((arr_0 [i_0]) - ((((arr_7 [2]) + (arr_5 [i_0] [i_0]))))))) && (arr_6 [i_0])));

                            for (int i_4 = 3; i_4 < 15;i_4 += 1)
                            {
                                var_23 = (((arr_4 [i_0 - 1] [i_2 + 1]) ? (arr_4 [i_0 - 1] [i_2 + 1]) : (max((arr_4 [i_0 + 3] [i_2 + 1]), (arr_4 [i_0 + 1] [i_2 - 1])))));
                                var_24 = (arr_10 [i_0]);
                                var_25 = (max((((arr_3 [i_0 - 1] [i_3 + 3]) ? var_19 : ((max((arr_5 [i_0] [1]), var_2))))), (((-((var_3 >> (var_14 - 14425915291087846418))))))));
                            }
                            for (int i_5 = 1; i_5 < 13;i_5 += 1) /* same iter space */
                            {
                                var_26 = (min((min(((var_19 ? (arr_3 [i_0 - 3] [i_2]) : (arr_7 [i_3 + 3]))), (arr_15 [i_5] [i_5 + 2] [i_5] [i_0] [i_5]))), (arr_15 [i_2] [i_0] [i_2 + 1] [i_0] [i_0 - 1])));
                                var_27 = (min(((((arr_12 [i_2 + 2] [i_1] [i_2] [i_0 - 3] [i_5] [i_2]) == (arr_12 [i_2 - 1] [8] [i_2] [i_0 - 2] [i_5 + 1] [i_3])))), (min((arr_12 [i_2 + 3] [i_1] [i_1] [i_0 - 1] [i_5] [i_2 + 3]), var_18))));
                            }
                            for (int i_6 = 1; i_6 < 13;i_6 += 1) /* same iter space */
                            {
                                var_28 = (arr_0 [i_0]);
                                var_29 = ((max((arr_17 [i_0] [i_0 + 3] [i_0 + 2] [i_0 + 1] [i_0] [i_0]), (arr_16 [i_0] [i_0] [i_0] [i_0]))) & var_1);
                            }
                            /* vectorizable */
                            for (int i_7 = 4; i_7 < 14;i_7 += 1)
                            {
                                var_30 = var_9;
                                var_31 = (arr_13 [12] [12] [i_2] [i_2] [9] [i_2] [12]);
                            }
                        }
                    }
                }
                var_32 = (max((((arr_5 [i_0 + 1] [i_0]) ? var_13 : (arr_5 [i_0 + 1] [i_0]))), (max(var_5, (arr_5 [i_0 + 1] [11])))));
            }
        }
    }
    var_33 = var_5;

    for (int i_8 = 0; i_8 < 1;i_8 += 1)
    {
        arr_22 [i_8] [i_8] = ((var_11 ^ (arr_21 [i_8])));
        arr_23 [i_8] = (max((((arr_20 [i_8]) ? (arr_20 [i_8]) : (arr_20 [i_8]))), ((var_17 & (((var_12 ? var_3 : var_15)))))));
        var_34 = var_6;
        arr_24 [i_8] = ((((((min(var_7, var_7))))) != ((((max(var_3, (arr_20 [i_8])))) ? (arr_20 [i_8]) : (arr_20 [i_8])))));
    }
    var_35 = (var_7 | var_3);
    #pragma endscop
}
