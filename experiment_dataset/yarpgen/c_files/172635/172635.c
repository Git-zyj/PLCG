/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 172635
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=172635 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/172635
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 0; i_0 < 21;i_0 += 1)
    {
        arr_3 [i_0] [19] = arr_1 [i_0];
        arr_4 [i_0] [i_0] = (max(((((arr_2 [i_0] [i_0]) ? (arr_2 [i_0] [i_0]) : (arr_2 [14] [i_0])))), (((((arr_0 [i_0] [i_0]) << (var_11 - 223008116120977785))) / var_6))));
    }
    for (int i_1 = 3; i_1 < 11;i_1 += 1)
    {
        arr_7 [i_1] [i_1] = (((((((-1226632166364085870 ? var_7 : (arr_6 [i_1])))) ? ((((arr_0 [i_1] [i_1]) ? (arr_5 [i_1]) : 4294967274))) : var_1)) < (((-(arr_2 [16] [i_1 - 1]))))));

        for (int i_2 = 0; i_2 < 13;i_2 += 1)
        {
            var_17 = (min(var_17, var_1));
            arr_11 [i_2] [i_1] = (arr_9 [i_1]);
            /* LoopNest 2 */
            for (int i_3 = 0; i_3 < 13;i_3 += 1)
            {
                for (int i_4 = 0; i_4 < 13;i_4 += 1)
                {
                    {
                        var_18 ^= var_1;
                        var_19 += (21203 ? (((min((arr_9 [i_3]), (arr_18 [i_1] [i_1 + 2] [i_1 + 2] [i_1 - 1] [i_1]))))) : (max((var_3 | 127), var_16)));

                        for (int i_5 = 1; i_5 < 11;i_5 += 1) /* same iter space */
                        {
                            var_20 += (((((arr_1 [i_1]) >> (((min((arr_6 [i_1]), 4294967262)) - 151141222)))) >= ((((max(4294967247, 38046))) ? var_4 : (((var_7 ? 21182 : (arr_6 [6]))))))));
                            arr_22 [i_1] [6] [i_4] [i_5] = (arr_20 [i_1]);
                        }
                        /* vectorizable */
                        for (int i_6 = 1; i_6 < 11;i_6 += 1) /* same iter space */
                        {
                            var_21 = 18446744073709551597;
                            var_22 |= (((var_3 ? 41 : (arr_5 [i_1 + 2]))));
                            arr_27 [i_1] [i_2] [0] [i_4] [0] [i_4] [i_6] = (arr_9 [i_1]);
                        }
                        for (int i_7 = 1; i_7 < 11;i_7 += 1) /* same iter space */
                        {
                            arr_31 [i_1] [i_1] [3] [10] [i_1] [i_1] [i_1] = ((((((var_13 ? (arr_26 [i_1] [2] [2] [i_1 - 2] [i_1] [8] [i_1]) : var_15)))) ? ((~(((arr_29 [i_1 + 1] [i_2] [i_2] [i_3] [i_4] [i_7]) ? var_13 : var_8)))) : 144115188075855840));
                            arr_32 [12] [12] [i_3] [2] [i_3] [i_1] = 10704962157881815182;
                            var_23 += (max(var_7, 1514950674));
                        }
                        for (int i_8 = 2; i_8 < 12;i_8 += 1)
                        {
                            var_24 = (min(var_24, (((((min(var_2, (arr_9 [i_3])))) ? (arr_34 [0] [i_4] [i_3] [4] [10]) : ((var_14 * (arr_24 [i_4] [i_4] [5] [i_4]))))))));
                            arr_36 [i_1] [i_8 - 2] = ((0 ? (arr_20 [i_1]) : (((arr_10 [8]) ? (arr_34 [i_2] [i_4] [i_1] [i_2] [i_1]) : (((arr_19 [i_1] [i_2] [i_1] [i_4] [i_1] [i_3] [i_3]) ? (arr_23 [i_1] [i_3] [i_1 - 1] [i_1]) : var_10))))));
                        }
                    }
                }
            }
            var_25 = (max(var_25, ((((var_8 ? var_4 : var_5))))));
            arr_37 [i_1] = ((var_2 >> (min((4853135599141682731 == var_15), (var_7 * var_2)))));
        }
        for (int i_9 = 4; i_9 < 12;i_9 += 1)
        {
            var_26 = (min(var_26, ((((((((~(arr_23 [i_1] [8] [i_1] [12])))) ? ((var_5 ? 21208 : var_14)) : 11701)) ^ (((arr_23 [i_1] [i_1] [i_1] [8]) & (((arr_1 [i_9]) << (var_11 - 223008116120977745))))))))));
            var_27 = var_13;
        }
    }
    var_28 = var_1;
    #pragma endscop
}
