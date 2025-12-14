/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 165539
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=165539 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/165539
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_18 = (min(var_13, -675088344));

    for (int i_0 = 0; i_0 < 11;i_0 += 1)
    {
        arr_2 [i_0] [i_0] = (arr_0 [i_0]);
        var_19 = (min(var_19, (arr_1 [2] [i_0])));
        var_20 = (((arr_0 [i_0]) ? (min((arr_0 [4]), ((var_15 - (arr_1 [10] [i_0]))))) : var_3));
        var_21 = (arr_1 [i_0] [i_0]);
    }
    for (int i_1 = 0; i_1 < 13;i_1 += 1)
    {
        var_22 = (+((+((min((arr_4 [8] [i_1]), (arr_4 [i_1] [i_1])))))));

        for (int i_2 = 0; i_2 < 1;i_2 += 1)
        {
            /* LoopNest 2 */
            for (int i_3 = 1; i_3 < 10;i_3 += 1)
            {
                for (int i_4 = 0; i_4 < 13;i_4 += 1)
                {
                    {
                        var_23 = (min(var_23, (arr_10 [i_1] [i_2] [i_4])));
                        var_24 = ((((min((arr_14 [i_2] [i_3] [i_3 + 2]), (arr_14 [i_3 + 1] [i_3] [i_3 + 1])))) ? (arr_15 [i_3] [i_3] [i_3 + 1] [i_3 + 2]) : var_10));
                        var_25 |= ((1 ? 1 : 1));
                        var_26 = (~var_3);
                    }
                }
            }
            var_27 = (max(var_27, ((min(((((((arr_12 [i_1] [i_2] [i_2]) ? var_6 : -4221365105808576305))) ? ((4221365105808576303 >> (8420 - 8368))) : (arr_11 [7] [7] [i_1] [i_1]))), ((((arr_10 [i_2] [0] [i_1]) ? (arr_10 [i_1] [10] [1]) : (arr_10 [i_1] [i_2] [i_2])))))))));
            /* LoopNest 2 */
            for (int i_5 = 0; i_5 < 1;i_5 += 1)
            {
                for (int i_6 = 1; i_6 < 12;i_6 += 1)
                {
                    {
                        arr_22 [1] [i_2] [i_6] [i_6] = (arr_6 [i_5] [7] [7]);

                        for (int i_7 = 0; i_7 < 1;i_7 += 1)
                        {
                            var_28 = ((var_9 ? 176 : (arr_5 [i_1])));
                            var_29 = var_14;
                        }
                        for (int i_8 = 0; i_8 < 13;i_8 += 1)
                        {
                            var_30 = (arr_27 [i_5] [i_8]);
                            arr_29 [i_1] [1] [i_1] [i_6] [8] = ((~(((arr_7 [i_1] [i_1]) ? (max((arr_3 [7]), (arr_28 [9] [i_2] [6] [8] [i_8] [9] [i_6]))) : (((~(arr_3 [9]))))))));
                            arr_30 [i_1] [i_1] [i_6] [i_6] [i_8] = ((!(((~((min(-31992, 1))))))));
                        }
                        var_31 = (8398 == -20);
                    }
                }
            }
        }
        for (int i_9 = 1; i_9 < 10;i_9 += 1)
        {
            var_32 = (arr_31 [i_1] [i_9]);
            arr_33 [i_1] = (((arr_13 [i_9] [i_9] [i_9 + 2] [i_9 + 1] [i_9 + 1] [i_9]) ? 1266665965 : (((167 ? 32002 : 4200000519)))));
        }
    }
    for (int i_10 = 0; i_10 < 0;i_10 += 1)
    {
        var_33 += (arr_32 [i_10 + 1] [i_10 + 1]);
        arr_36 [i_10] = ((!(-2147483647 - 1)));
        var_34 = (arr_23 [i_10] [i_10]);
    }
    #pragma endscop
}
