/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 148630
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=148630 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/148630
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 0; i_0 < 24;i_0 += 1)
    {
        arr_2 [i_0] = ((((arr_0 [i_0]) ? var_0 : (arr_1 [i_0]))));
        var_11 = ((((((((1 ? 2044 : -2131571558))) ? ((-(arr_1 [i_0]))) : (arr_1 [i_0])))) ? (arr_0 [i_0]) : 1128));
        var_12 = (min(var_12, (((((((arr_0 [i_0]) ^ var_2))) ? ((0 ? ((1 ? var_9 : 0)) : ((4997171686491517027 ? 25022 : (arr_1 [13]))))) : (((arr_1 [i_0]) ? (arr_1 [i_0]) : (arr_1 [i_0]))))))));
        var_13 = var_3;
    }
    /* vectorizable */
    for (int i_1 = 0; i_1 < 1;i_1 += 1)
    {
        arr_7 [i_1] = ((0 ? -4997171686491517030 : 14965));
        var_14 = var_1;
    }
    for (int i_2 = 1; i_2 < 11;i_2 += 1)
    {
        var_15 = (max(var_15, (arr_1 [i_2])));

        for (int i_3 = 0; i_3 < 14;i_3 += 1)
        {
            var_16 = (arr_0 [i_2]);
            var_17 = arr_10 [i_3] [i_2] [9];
        }
        for (int i_4 = 0; i_4 < 14;i_4 += 1)
        {
            var_18 = (min(var_18, (((((((arr_10 [i_4] [i_4] [i_2]) >= var_8))) ^ (min(((var_3 ? (arr_11 [i_2 + 2] [1] [i_4]) : var_6)), var_5)))))));
            arr_14 [i_2 + 1] [i_2 + 2] [i_2 - 1] = (((((-((var_4 - (arr_8 [i_2] [i_4])))))) - ((0 ? (arr_0 [i_2]) : ((var_6 ? 17977452350476878762 : (arr_11 [i_2] [i_2] [i_4])))))));
        }
        for (int i_5 = 0; i_5 < 14;i_5 += 1)
        {
            var_19 = var_4;
            arr_18 [i_5] [i_2] = var_4;
        }
    }
    for (int i_6 = 3; i_6 < 23;i_6 += 1)
    {
        arr_21 [i_6] = ((((max(16769024, 159))) ? (arr_19 [i_6]) : (arr_1 [i_6])));
        var_20 = var_6;
    }
    /* LoopNest 2 */
    for (int i_7 = 0; i_7 < 12;i_7 += 1)
    {
        for (int i_8 = 0; i_8 < 12;i_8 += 1)
        {
            {
                var_21 = ((((arr_13 [i_7] [i_7] [i_8]) ? (arr_13 [i_7] [i_8] [i_7]) : (arr_13 [i_7] [i_7] [i_7]))));
                /* LoopNest 3 */
                for (int i_9 = 3; i_9 < 9;i_9 += 1)
                {
                    for (int i_10 = 1; i_10 < 11;i_10 += 1)
                    {
                        for (int i_11 = 0; i_11 < 12;i_11 += 1)
                        {
                            {
                                var_22 = (min(var_22, (((min(1, 1))))));
                                arr_34 [i_7] [6] [i_7] [1] [10] [i_7] [i_7] = ((min((max(1, 1)), ((-1683544013 && (arr_23 [i_9] [i_11]))))));
                                arr_35 [i_7] [i_8] [i_9] [i_10 + 1] [i_11] = (((((((((~(arr_13 [i_7] [i_7] [i_7])))) ? (arr_15 [i_9] [i_9] [i_11]) : 0)) + 2147483647)) << (((max((arr_3 [i_7]), (arr_12 [i_7] [i_8]))) - 14369950131410712784))));
                            }
                        }
                    }
                }
            }
        }
    }
    #pragma endscop
}
