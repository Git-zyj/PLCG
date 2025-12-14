/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 176224
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=176224 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/176224
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_11 = var_1;
    var_12 = var_0;
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 19;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 19;i_1 += 1)
        {
            {
                arr_6 [i_0] [5] [i_0] = 58684;
                arr_7 [4] = ((min((((arr_2 [11] [i_0]) - var_8)), (arr_2 [i_0] [i_1]))));

                for (int i_2 = 2; i_2 < 17;i_2 += 1)
                {

                    for (int i_3 = 0; i_3 < 19;i_3 += 1)
                    {
                        arr_12 [i_0] [i_0] [i_0] [i_0] [i_0] [i_0] = (((((min(var_0, (arr_8 [i_1] [10] [i_1]))) - ((min(var_5, var_7))))) - (((arr_8 [i_2 + 2] [i_2 + 1] [i_2 - 2]) - ((max(114, 156)))))));
                        var_13 = ((((min((max((arr_9 [i_0] [i_1] [6] [i_3]), (arr_9 [i_3] [i_2] [i_1] [i_0]))), (arr_8 [i_2 + 2] [i_2 - 1] [11])))) && var_8));
                        arr_13 [i_0] [i_0] [i_0] = (((min((arr_0 [i_2 - 1]), (arr_0 [i_2 - 1])))) ? (max((~var_10), ((max(var_9, (arr_5 [i_2] [8])))))) : ((((arr_10 [i_2 + 1] [i_2 - 1] [i_2 - 2]) >> (arr_11 [i_2 - 1] [i_2 - 2] [i_2 - 1] [i_2 - 1])))));
                    }
                    for (int i_4 = 0; i_4 < 19;i_4 += 1)
                    {
                        arr_16 [i_0] [i_0] [1] [6] = (((arr_14 [1] [i_2 + 1] [i_2 - 1]) & (((arr_14 [i_0] [i_2 - 1] [i_2 - 2]) ? (arr_14 [i_0] [i_2 + 2] [i_2 + 1]) : (arr_14 [i_0] [i_2 - 1] [i_2 - 2])))));
                        arr_17 [i_0] [i_1] [i_0] = (arr_2 [i_4] [i_1]);

                        for (int i_5 = 3; i_5 < 18;i_5 += 1)
                        {
                            arr_20 [i_5] [i_5] = ((+((min((arr_10 [i_2 - 2] [i_5] [i_2]), (arr_10 [i_2 + 1] [i_4] [i_2 + 1]))))));
                            arr_21 [14] [i_1] [14] [i_4] [i_5] = (arr_2 [17] [i_0]);
                            arr_22 [i_5] [9] [i_0] [i_4] [i_5] = ((~(arr_18 [i_5 - 2] [i_2] [i_5] [i_2] [i_2])));
                        }
                        arr_23 [8] [i_4] [i_2] [1] [2] [i_0] = ((((min((arr_5 [8] [i_0]), (max((arr_15 [9] [i_2] [i_1]), var_6))))) ? (max(var_10, (arr_2 [i_4] [i_4]))) : var_0));
                    }
                    for (int i_6 = 0; i_6 < 19;i_6 += 1) /* same iter space */
                    {

                        for (int i_7 = 0; i_7 < 19;i_7 += 1)
                        {
                            var_14 = (min(3, (min(((((arr_10 [i_0] [i_0] [i_7]) || var_0))), (((arr_14 [i_2] [i_1] [i_0]) >> (((arr_9 [i_1] [16] [11] [i_7]) - 32834))))))));
                            arr_30 [i_7] [i_6] [2] [i_2] [i_1] [i_0] = (((((((((arr_4 [i_1] [i_6] [i_1]) | var_5))) ^ var_3))) && ((!(arr_29 [i_7] [i_6] [1] [i_1] [i_0])))));
                        }
                        arr_31 [i_0] [i_0] [i_1] [i_0] = (min((min((arr_15 [i_2] [i_2 + 2] [i_2 + 2]), (((arr_1 [i_1]) ? var_3 : (arr_5 [i_6] [1]))))), ((var_2 * (arr_28 [i_2 - 2] [i_2] [i_2 - 2] [i_2] [i_2 - 2] [i_2 + 1])))));
                        arr_32 [9] [i_2] [i_1] [i_0] = (max((((arr_1 [i_2 + 2]) ? (arr_8 [i_2 + 1] [i_6] [i_6]) : (arr_8 [i_2 + 1] [i_2 + 1] [i_2]))), (arr_1 [i_2 + 1])));
                        var_15 = (min((((var_9 * (arr_8 [i_0] [15] [0])))), (arr_9 [i_6] [i_2 + 1] [i_1] [i_0])));
                    }
                    for (int i_8 = 0; i_8 < 19;i_8 += 1) /* same iter space */
                    {
                        arr_35 [i_8] [i_2 - 2] [i_1] [i_0] = ((((((arr_10 [i_2 + 2] [i_2 - 2] [i_2]) / (arr_29 [i_2 + 2] [i_2 - 2] [1] [i_2] [18])))) ? (-18 - 2922597912) : (max(((min(1, var_1))), (arr_3 [i_2 - 2])))));

                        for (int i_9 = 0; i_9 < 19;i_9 += 1) /* same iter space */
                        {
                            var_16 = (max(var_0, (arr_4 [i_2 + 2] [i_1] [i_2])));
                            arr_39 [i_9] [3] [i_2] = (arr_1 [6]);
                            arr_40 [i_9] [i_8] [i_9] = (min((((((arr_11 [i_0] [i_1] [i_1] [i_8]) ^ (arr_18 [i_9] [14] [1] [i_1] [i_0]))))), ((~((var_7 | (arr_28 [i_0] [i_1] [i_2 - 1] [i_2] [i_8] [13])))))));
                        }
                        /* vectorizable */
                        for (int i_10 = 0; i_10 < 19;i_10 += 1) /* same iter space */
                        {
                            var_17 = (arr_10 [i_0] [i_8] [i_10]);
                            var_18 = (((arr_18 [0] [7] [i_2] [i_2 - 1] [i_2 + 1]) || (arr_19 [i_2 - 2] [i_2 - 2] [i_2 + 1] [i_2 + 1] [i_10] [i_2 + 2] [i_2 - 1])));
                        }
                        /* vectorizable */
                        for (int i_11 = 0; i_11 < 19;i_11 += 1) /* same iter space */
                        {
                            arr_46 [i_11] [i_1] [i_2] [i_8] [i_11] = (((arr_24 [i_0] [i_2 - 2] [7] [i_2 - 2] [i_2 - 2]) / var_6));
                            arr_47 [i_8] [i_8] [i_11] [i_2 + 1] [i_1] [i_2] [i_2] = (arr_2 [i_2 + 1] [i_2 + 2]);
                            var_19 = ((1 & 58193) >> (var_7 > 7));
                        }
                    }
                    arr_48 [i_0] [10] [i_0] [i_2] = (max((max((((var_7 >> (((arr_37 [14] [i_1] [i_1] [i_2 - 1]) + 123))))), ((182 ? (arr_41 [i_0] [i_0] [2] [i_0] [i_2]) : (arr_15 [i_0] [i_0] [i_0]))))), ((((((arr_45 [i_1] [i_1] [i_1] [i_1]) + 9223372036854775807)) >> ((((max((arr_33 [i_1] [17]), (arr_19 [8] [i_1] [8] [i_1] [i_2] [i_1] [i_1])))) - 19050)))))));
                }
                var_20 = ((((+(min((arr_44 [i_1] [11] [8] [i_0] [11]), (arr_34 [i_0]))))) & (arr_33 [i_1] [i_0])));
                var_21 = (min(((min(((((arr_8 [i_0] [i_1] [i_1]) < var_0))), (arr_1 [2])))), ((var_2 << (var_3 - 5954475058763012736)))));
            }
        }
    }
    #pragma endscop
}
