/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 128330
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=128330 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/128330
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_11 = ((((min(var_2, var_8))) >> (-var_10 + 4660192629529204502)));
    /* LoopNest 2 */
    for (int i_0 = 3; i_0 < 24;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 25;i_1 += 1)
        {
            {
                var_12 = (max(var_12, (min((((!(((arr_4 [1]) && (arr_1 [i_1])))))), ((var_2 >> (var_10 - 4660192629529204454)))))));
                var_13 = (min(var_13, (((18943 <= (min((arr_3 [i_0 - 2] [12]), ((max((arr_4 [1]), (arr_1 [i_0 + 1])))))))))));

                /* vectorizable */
                for (int i_2 = 0; i_2 < 25;i_2 += 1)
                {
                    var_14 = (max(var_14, ((6911 ? 0 : (-6909 || -3024)))));
                    arr_7 [i_0] [i_1] [i_1] [i_2] = (arr_0 [i_0 - 1] [i_0 - 2]);
                }
                /* vectorizable */
                for (int i_3 = 2; i_3 < 21;i_3 += 1)
                {
                    var_15 = (max(var_15, (arr_3 [i_0 + 1] [8])));
                    var_16 = (!var_6);
                    var_17 -= ((var_10 ? (arr_1 [i_0 - 1]) : (arr_5 [i_0] [i_1] [i_3])));

                    for (int i_4 = 0; i_4 < 25;i_4 += 1)
                    {
                        arr_12 [i_4] [i_4] [i_4] [i_1] = (((~2171359755) + (arr_8 [i_0 - 1] [i_1] [i_4] [i_4])));
                        var_18 = (min(var_18, var_7));
                        var_19 = ((2171359772 ? 1 : 6915));

                        for (int i_5 = 0; i_5 < 25;i_5 += 1)
                        {
                            var_20 = (((arr_16 [i_0 - 3] [i_0 + 1] [i_0] [i_0 - 3] [i_0 - 1] [i_0] [i_0 - 2]) < (arr_16 [i_0 - 2] [i_0 - 3] [i_0 + 1] [i_0] [i_0 - 1] [18] [i_0 - 1])));
                            var_21 -= (arr_16 [1] [1] [i_4] [i_3 - 2] [i_1] [i_1] [i_0]);
                        }
                        for (int i_6 = 0; i_6 < 25;i_6 += 1)
                        {
                            arr_19 [i_6] [i_1] [i_3 + 2] [i_1] [i_1] [i_0] = (arr_8 [i_4] [i_1] [i_1] [i_0]);
                            var_22 = ((!(arr_13 [5] [i_0 - 1] [i_3 + 3] [5] [i_6] [i_3] [i_3])));
                            arr_20 [i_0] [i_1] [i_1] [i_4] [i_6] [i_3] [i_0] = 25193;
                            arr_21 [i_0] [i_1] [i_3] [i_1] [i_6] = ((var_5 ? var_6 : var_4));
                            var_23 *= (((((arr_10 [4] [i_4] [i_3 - 1] [i_6]) ^ var_2)) + (var_8 / var_2)));
                        }
                        var_24 = (arr_6 [i_1] [i_1] [13] [i_1]);
                    }
                    for (int i_7 = 1; i_7 < 22;i_7 += 1)
                    {
                        var_25 = ((1 ? 2171359772 : 0));
                        var_26 = (((arr_6 [i_1] [i_3] [i_0 - 2] [i_3 - 1]) ? (arr_4 [i_1]) : (arr_6 [i_1] [i_1] [i_0 - 2] [i_3 - 2])));
                        var_27 = ((~(arr_1 [i_0 - 2])));
                        var_28 -= ((((!(arr_17 [i_0] [i_0] [i_3] [i_7] [11] [i_1] [i_0]))) ? (!var_8) : (arr_16 [i_7 + 3] [i_7 + 1] [i_7] [i_7] [i_0 - 3] [i_0 - 2] [i_0])));
                        var_29 += (((((arr_23 [i_0] [i_0] [4] [10] [i_3] [i_7]) && var_3)) ? (arr_1 [i_0 - 1]) : (arr_13 [i_0] [i_7 + 1] [19] [i_7] [i_1] [i_0] [i_1])));
                    }
                    for (int i_8 = 0; i_8 < 25;i_8 += 1)
                    {
                        var_30 = var_7;
                        var_31 = (((var_6 || var_0) ? (arr_16 [1] [i_1] [i_1] [20] [i_3 + 4] [i_3] [11]) : (((((arr_5 [i_0] [i_1] [10]) || (arr_9 [i_0 - 1] [i_1] [i_3] [i_8])))))));
                        var_32 = var_7;
                        arr_26 [i_1] [i_1] [i_8] [i_1] = ((~(arr_17 [i_8] [i_0 - 2] [i_3] [i_3 + 1] [i_8] [i_3 + 1] [i_3])));
                    }
                    for (int i_9 = 2; i_9 < 23;i_9 += 1)
                    {
                        var_33 = (min(var_33, ((((arr_4 [20]) + var_0)))));
                        arr_29 [i_0 + 1] [i_1] [i_0 + 1] [i_1] [20] = ((~(arr_3 [i_9 - 1] [i_1])));
                    }
                    var_34 = var_6;
                }
                var_35 = (min(var_35, (!58465)));
            }
        }
    }
    #pragma endscop
}
