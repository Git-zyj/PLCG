/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 144552
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=144552 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/144552
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_10 = (min(var_10, ((((var_1 || ((min(var_2, 1)))))))));

    for (int i_0 = 0; i_0 < 25;i_0 += 1)
    {
        var_11 = (((arr_1 [i_0]) && ((!(arr_2 [i_0])))));
        arr_3 [i_0] &= ((((min((arr_0 [i_0]), (arr_0 [i_0])))) - (arr_2 [i_0])));
        var_12 = (min((((arr_2 [i_0]) + (arr_2 [i_0]))), ((min(var_0, (arr_1 [i_0]))))));
        var_13 = ((((min(1, (arr_2 [i_0]))) << (arr_1 [i_0]))));
    }
    for (int i_1 = 0; i_1 < 16;i_1 += 1)
    {
        var_14 = (arr_4 [i_1]);
        var_15 = (((arr_0 [i_1]) & ((max(0, ((((arr_2 [i_1]) && -1282876577))))))));

        for (int i_2 = 0; i_2 < 16;i_2 += 1)
        {

            /* vectorizable */
            for (int i_3 = 0; i_3 < 16;i_3 += 1)
            {
                var_16 = (min(var_16, (arr_7 [i_3] [i_2] [i_3])));
                var_17 = arr_1 [21];
                arr_11 [i_1] [i_1] [i_2] [5] = ((-(arr_2 [6])));
            }
            for (int i_4 = 0; i_4 < 16;i_4 += 1)
            {
                arr_15 [i_4] [i_2] [i_4] = (arr_1 [i_1]);

                /* vectorizable */
                for (int i_5 = 0; i_5 < 1;i_5 += 1)
                {
                    var_18 = (((arr_16 [i_1] [i_2] [i_1] [i_5]) && 19187));

                    for (int i_6 = 0; i_6 < 16;i_6 += 1)
                    {
                        var_19 *= (((arr_6 [i_5]) && (arr_1 [i_2])));
                        arr_21 [i_1] [i_1] = (((arr_8 [i_1] [i_2] [i_5] [i_6]) < ((((arr_20 [i_1] [i_2] [i_4] [11] [i_6]) || (arr_17 [i_2]))))));
                    }
                }
                /* vectorizable */
                for (int i_7 = 0; i_7 < 16;i_7 += 1)
                {
                    var_20 = ((-(arr_24 [i_1] [i_2] [i_4] [i_7] [i_2] [i_1])));
                    var_21 = ((((!(arr_9 [i_7] [i_4] [i_1] [i_1]))) ? (arr_4 [1]) : ((((arr_23 [i_1] [i_2] [i_4] [i_1] [4]) && (arr_14 [i_1] [11] [i_4] [i_7]))))));
                }
                arr_25 [i_4] [i_4] [i_4] = ((((min((((arr_4 [i_4]) ? (arr_20 [i_4] [i_2] [i_2] [i_1] [i_1]) : (arr_1 [i_1]))), (var_2 || var_9)))) || ((min(1, (((arr_14 [i_4] [i_1] [0] [i_1]) ? var_4 : 42881)))))));
            }
            /* vectorizable */
            for (int i_8 = 1; i_8 < 14;i_8 += 1)
            {
                var_22 = ((arr_20 [i_8 + 2] [i_8] [i_8] [i_8 + 2] [i_1]) < (arr_20 [i_8 + 2] [i_8 - 1] [i_8 + 2] [i_8 - 1] [i_1]));
                var_23 += (((((arr_14 [i_1] [i_2] [i_2] [9]) ^ var_9)) - ((((arr_27 [i_1] [i_1] [i_8 - 1] [i_8 + 2]) & 1)))));
                var_24 = (arr_9 [i_1] [i_2] [i_8] [i_2]);
            }
            for (int i_9 = 0; i_9 < 16;i_9 += 1)
            {
                var_25 = ((~(((-2725018199510750264 && (((var_2 ? (arr_5 [i_1]) : (arr_2 [5])))))))));
                arr_32 [i_9] [i_2] [i_9] [5] = (min(((((1 == (-9223372036854775807 - 1))) ? (15 - var_1) : (arr_20 [i_1] [i_2] [i_9] [i_2] [i_9]))), ((min((arr_22 [i_1] [i_2] [i_9] [i_1]), ((((arr_12 [i_9] [i_1]) == (arr_6 [i_1])))))))));
            }

            /* vectorizable */
            for (int i_10 = 0; i_10 < 16;i_10 += 1)
            {

                for (int i_11 = 0; i_11 < 16;i_11 += 1)
                {
                    var_26 = (!2725018199510750279);
                    var_27 = (arr_14 [i_2] [14] [i_2] [i_11]);
                    var_28 *= (((arr_6 [i_1]) ? (arr_31 [i_1] [i_2] [i_10] [i_11]) : 1));
                    var_29 *= var_8;
                }
                for (int i_12 = 0; i_12 < 16;i_12 += 1) /* same iter space */
                {
                    var_30 = (arr_2 [i_2]);
                    arr_41 [i_1] [i_2] [i_1] [i_12] = (((((arr_23 [11] [i_2] [11] [i_10] [i_2]) && (arr_5 [i_1]))) ? 2725018199510750279 : var_9));
                }
                for (int i_13 = 0; i_13 < 16;i_13 += 1) /* same iter space */
                {
                    var_31 -= ((arr_9 [i_1] [i_2] [i_10] [i_13]) - var_7);
                    arr_44 [i_2] [4] [i_13] = (((arr_28 [i_2] [i_2] [i_10] [i_13]) ? (((arr_37 [2] [i_2]) ? var_0 : (arr_26 [i_1]))) : 1));
                    arr_45 [15] [i_10] [i_10] [i_10] [i_2] [i_1] &= (((arr_34 [i_1] [i_2] [i_10]) ? var_1 : (arr_34 [i_13] [i_1] [i_1])));
                }
                /* LoopNest 2 */
                for (int i_14 = 0; i_14 < 16;i_14 += 1)
                {
                    for (int i_15 = 0; i_15 < 16;i_15 += 1)
                    {
                        {
                            var_32 = (((arr_39 [i_1] [i_2] [i_15] [i_14]) ? var_3 : var_6));
                            arr_52 [i_1] [i_1] [i_10] [i_10] [7] [i_1] [i_10] = var_7;
                        }
                    }
                }
                var_33 = (arr_31 [i_1] [i_1] [i_1] [i_2]);
            }
        }
    }
    #pragma endscop
}
