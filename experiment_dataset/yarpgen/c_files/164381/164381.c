/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 164381
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=164381 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/164381
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 0; i_0 < 14;i_0 += 1)
    {
        /* LoopNest 2 */
        for (int i_1 = 4; i_1 < 12;i_1 += 1)
        {
            for (int i_2 = 2; i_2 < 13;i_2 += 1)
            {
                {
                    var_14 = (max(var_14, (arr_3 [i_1])));

                    /* vectorizable */
                    for (int i_3 = 0; i_3 < 1;i_3 += 1)
                    {
                        var_15 += ((arr_9 [i_0] [i_0] [i_0] [i_2]) / 102);
                        var_16 = var_3;
                        var_17 = (max(var_17, ((((arr_9 [8] [i_1 - 2] [6] [i_1]) / (arr_9 [i_0] [i_1 + 1] [i_2] [i_2]))))));
                        var_18 = ((((~(arr_9 [i_0] [i_0] [i_2] [i_3]))) > (arr_7 [i_0] [i_1] [i_3] [i_1 - 3] [3] [i_2 + 1])));
                    }
                    arr_11 [i_0] [i_0] [i_0] |= (arr_10 [1] [i_1 - 1] [i_1] [i_1] [i_1 - 1] [i_1]);
                    var_19 = var_6;
                    var_20 += ((~(((arr_8 [i_0] [i_1 + 1] [i_2] [i_0] [i_0] [i_0]) ? ((var_11 ? var_7 : (arr_7 [i_0] [6] [i_2] [i_0] [6] [i_0]))) : (!8950)))));
                }
            }
        }
        /* LoopNest 2 */
        for (int i_4 = 0; i_4 < 14;i_4 += 1)
        {
            for (int i_5 = 0; i_5 < 14;i_5 += 1)
            {
                {
                    var_21 = (max(var_21, (((+(((((arr_1 [i_5] [i_0]) + 2147483647)) >> (((arr_1 [i_0] [i_4]) + 21791)))))))));
                    var_22 = ((min(-35581503, (arr_3 [i_5]))));
                    var_23 = 4294967295;
                }
            }
        }
        var_24 = (min(var_24, (((~(max((arr_0 [i_0]), (min(-8951, 3)))))))));
        /* LoopNest 2 */
        for (int i_6 = 0; i_6 < 14;i_6 += 1)
        {
            for (int i_7 = 0; i_7 < 14;i_7 += 1)
            {
                {
                    arr_21 [i_0] = (max(((min((arr_1 [i_0] [i_6]), (-127 - 1)))), (min((min((arr_14 [i_6] [i_6]), var_0)), ((((arr_3 [i_0]) == (arr_14 [i_0] [i_0]))))))));
                    var_25 = arr_5 [1];
                    var_26 = (min((arr_3 [i_0]), (((!(arr_15 [i_0] [1]))))));

                    /* vectorizable */
                    for (int i_8 = 1; i_8 < 12;i_8 += 1)
                    {
                        var_27 = var_13;
                        arr_25 [i_6] [i_7] [i_6] [i_6] [i_6] [i_6] |= (arr_22 [i_8 - 1] [i_8 - 1] [i_7] [i_8] [i_8]);
                        var_28 = (arr_10 [8] [i_0] [i_6] [1] [i_7] [i_8]);
                    }
                    for (int i_9 = 0; i_9 < 14;i_9 += 1)
                    {
                        arr_28 [i_0] [i_7] [i_6] [i_0] [i_0] = (min(24, 8951));
                        var_29 = (max(var_29, (arr_9 [i_0] [i_6] [i_0] [i_7])));

                        /* vectorizable */
                        for (int i_10 = 0; i_10 < 14;i_10 += 1)
                        {
                            var_30 = var_8;
                            arr_31 [i_0] [5] [i_0] [i_0] [i_0] = ((((((arr_3 [11]) ^ 1))) ? -8940 : (arr_17 [i_10] [i_6] [i_0])));
                            var_31 = 146;
                            var_32 = var_8;
                        }
                        arr_32 [i_9] [i_7] [i_6] [5] = (arr_9 [i_0] [i_6] [i_7] [i_0]);
                    }
                }
            }
        }
    }
    for (int i_11 = 0; i_11 < 20;i_11 += 1)
    {
        var_33 = (min((min(((((arr_34 [i_11]) > (arr_33 [4])))), (4548246379528667416 ^ 1))), (arr_36 [i_11])));
        var_34 = ((-(min(((var_5 ? -5984866206628340724 : 1)), (!var_6)))));
    }
    var_35 = (((((!((max(var_6, var_8)))))) | (min(var_1, 8191))));
    #pragma endscop
}
