/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 187839
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=187839 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/187839
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 0; i_0 < 11;i_0 += 1)
    {
        var_10 = (((((arr_0 [i_0]) ? var_7 : var_7)) * ((((!(arr_0 [i_0])))))));
        var_11 = (-770792948 * 15864800761118960637);
        var_12 = (min(var_12, (((-(arr_1 [6]))))));

        for (int i_1 = 0; i_1 < 11;i_1 += 1)
        {
            var_13 |= ((((((((!(arr_0 [1])))) * ((~(arr_3 [1] [9] [i_0])))))) * ((-(arr_2 [i_0])))));
            var_14 = ((var_6 - (arr_2 [1])));
            var_15 = 3039442610524239996;
            arr_6 [i_0] [i_0] [i_1] = var_3;
        }
        for (int i_2 = 0; i_2 < 11;i_2 += 1)
        {
            arr_9 [i_0] [i_0] [i_0] = (max(-721357301, 63476));
            var_16 = (arr_8 [i_2] [i_0]);
            arr_10 [i_0] [i_0] [i_2] = (max((((arr_7 [i_0] [i_0] [i_2]) - var_4)), (arr_0 [i_0])));

            for (int i_3 = 3; i_3 < 10;i_3 += 1)
            {
                var_17 ^= ((~((min((arr_1 [0]), (arr_1 [4]))))));
                arr_13 [10] [i_2] [6] [i_2] &= var_9;
                var_18 = (((((((var_1 ? var_2 : 226))) ? (!var_2) : (((arr_1 [i_0]) - var_2)))) * (arr_3 [i_2] [i_3 - 3] [i_3 - 1])));
                var_19 = ((((((max((arr_1 [i_0]), (arr_2 [i_3]))) - 7942459168268975016))) ? (arr_1 [i_0]) : (((arr_5 [i_3 + 1] [i_3 + 1]) - (arr_5 [i_3 + 1] [i_3 - 3])))));
            }
        }
        var_20 = ((((min((((!(arr_8 [i_0] [i_0])))), (min(var_5, (arr_7 [5] [i_0] [10])))))) - (max((var_2 * var_6), 63476))));
    }
    /* vectorizable */
    for (int i_4 = 0; i_4 < 18;i_4 += 1)
    {
        var_21 ^= 0;
        arr_17 [i_4] &= (~226);

        for (int i_5 = 0; i_5 < 18;i_5 += 1)
        {
            var_22 = var_3;
            var_23 = (min(var_23, ((((arr_19 [2] [i_5] [i_5]) - (arr_19 [i_4] [i_4] [i_4]))))));
        }
        for (int i_6 = 1; i_6 < 14;i_6 += 1)
        {
            var_24 = (arr_19 [0] [i_6 + 2] [i_6 - 1]);
            var_25 = (arr_19 [i_6 + 3] [i_4] [i_4]);
            var_26 = (arr_14 [i_6]);
            arr_23 [i_4] [i_4] = ((-(((arr_18 [i_6 - 1] [10] [i_4]) ? (arr_14 [i_4]) : (arr_18 [4] [4] [i_6])))));
        }
        arr_24 [i_4] = (arr_16 [i_4] [i_4]);
        /* LoopNest 2 */
        for (int i_7 = 1; i_7 < 16;i_7 += 1)
        {
            for (int i_8 = 1; i_8 < 17;i_8 += 1)
            {
                {
                    var_27 = (max(var_27, (((var_3 ? (arr_28 [i_8 - 1] [i_7 + 1] [i_7] [i_7 - 1]) : (arr_28 [i_8 - 1] [i_7 + 1] [i_7 - 1] [i_7 - 1]))))));
                    arr_29 [i_8] [i_8] [i_8] = (!3);
                }
            }
        }
    }
    for (int i_9 = 0; i_9 < 20;i_9 += 1)
    {
        var_28 = (max((209 - -226), (max(184, (((arr_30 [i_9] [i_9]) - var_6))))));
        /* LoopNest 2 */
        for (int i_10 = 0; i_10 < 1;i_10 += 1)
        {
            for (int i_11 = 0; i_11 < 20;i_11 += 1)
            {
                {
                    var_29 = var_0;
                    var_30 ^= var_3;
                }
            }
        }
    }
    /* LoopNest 2 */
    for (int i_12 = 0; i_12 < 11;i_12 += 1)
    {
        for (int i_13 = 0; i_13 < 1;i_13 += 1)
        {
            {
                arr_44 [i_12] = ((1 * (arr_33 [i_13] [i_12])));
                arr_45 [i_12] = (((((max(184, 15))) ? (max((arr_16 [i_13] [0]), (arr_12 [i_13] [i_12] [i_13] [i_12]))) : (((arr_15 [i_13]) * var_8)))));
            }
        }
    }
    var_31 = var_7;
    #pragma endscop
}
