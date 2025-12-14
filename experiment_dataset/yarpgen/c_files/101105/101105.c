/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 101105
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=101105 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/101105
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_16 = (max(var_16, var_7));

    for (int i_0 = 0; i_0 < 19;i_0 += 1)
    {

        for (int i_1 = 0; i_1 < 19;i_1 += 1)
        {
            arr_4 [i_0] [i_1] = ((-(arr_2 [i_1] [i_0] [i_0])));
            /* LoopNest 3 */
            for (int i_2 = 1; i_2 < 16;i_2 += 1)
            {
                for (int i_3 = 0; i_3 < 19;i_3 += 1)
                {
                    for (int i_4 = 0; i_4 < 19;i_4 += 1)
                    {
                        {
                            var_17 = ((((((!(arr_1 [i_2]))))) ? (arr_0 [i_2 + 1]) : (((-((var_15 * (arr_12 [i_0]))))))));
                            var_18 = ((~(arr_5 [i_2 + 1])));
                            arr_15 [i_0] [i_2] = (((~var_12) ? (((arr_6 [i_2 + 2]) ^ (arr_9 [i_2 + 1] [i_2 + 3] [i_2 + 1] [i_2 - 1] [i_2 + 1] [i_0]))) : (arr_9 [i_2 - 1] [i_2 + 1] [i_2 + 2] [i_2] [i_2 - 1] [i_1])));
                            var_19 = ((!((var_5 <= (var_15 / var_8)))));
                        }
                    }
                }
            }
        }
        for (int i_5 = 0; i_5 < 19;i_5 += 1) /* same iter space */
        {
            var_20 = ((((min(var_2, (arr_9 [i_5] [i_5] [i_5] [i_5] [i_5] [i_0])))) ? var_15 : (arr_10 [i_0] [i_0] [i_0] [i_0] [i_5] [i_5])));
            var_21 &= (~(((arr_16 [9]) ? (arr_0 [i_5]) : (arr_0 [i_5]))));
        }
        for (int i_6 = 0; i_6 < 19;i_6 += 1) /* same iter space */
        {
            var_22 = var_14;
            /* LoopNest 2 */
            for (int i_7 = 2; i_7 < 15;i_7 += 1)
            {
                for (int i_8 = 1; i_8 < 18;i_8 += 1)
                {
                    {
                        arr_26 [i_6] [i_7 - 1] [i_8 + 1] = ((~(arr_10 [i_0] [i_0] [i_7] [i_7] [i_7] [11])));
                        var_23 = (min(var_23, ((((arr_9 [i_0] [i_0] [i_6] [i_7] [i_0] [i_8 - 1]) * (arr_2 [i_0] [i_0] [i_0]))))));
                        arr_27 [i_0] [i_0] [i_6] [i_7] [i_7] [i_8 - 1] = var_7;
                    }
                }
            }
            var_24 = (min(var_24, ((max((arr_0 [i_0]), (arr_14 [i_0] [i_0] [i_0] [i_0]))))));
        }
        arr_28 [i_0] |= ((-((-(arr_1 [i_0])))));
        var_25 = (((min(var_11, (arr_12 [i_0])))) ? var_11 : (((arr_9 [i_0] [i_0] [i_0] [i_0] [i_0] [i_0]) ? ((47690 ? 2257020747767570179 : 0)) : ((((arr_11 [i_0] [i_0] [7] [i_0]) ? var_3 : var_2))))));

        for (int i_9 = 2; i_9 < 15;i_9 += 1)
        {
            arr_31 [i_0] [i_0] = var_5;
            /* LoopNest 3 */
            for (int i_10 = 0; i_10 < 19;i_10 += 1)
            {
                for (int i_11 = 2; i_11 < 16;i_11 += 1)
                {
                    for (int i_12 = 0; i_12 < 19;i_12 += 1)
                    {
                        {
                            var_26 = (~var_1);
                            var_27 ^= var_14;
                            var_28 = min(((((arr_3 [i_11 - 1]) ? (arr_3 [i_11 + 1]) : var_0))), (arr_21 [i_0] [i_0] [i_10] [i_0]));
                        }
                    }
                }
            }
            arr_40 [i_9 + 3] [i_9] [i_9 + 3] = ((min(var_9, var_2)));
        }
        for (int i_13 = 0; i_13 < 19;i_13 += 1)
        {
            arr_43 [i_0] = -var_8;
            var_29 = (!var_13);
        }
        /* vectorizable */
        for (int i_14 = 0; i_14 < 19;i_14 += 1)
        {
            var_30 = var_2;
            var_31 = (min(var_31, (arr_18 [i_14] [i_14] [i_0])));
            arr_48 [18] [i_0] [i_0] = var_13;
        }
    }
    var_32 = (min(var_32, var_14));
    #pragma endscop
}
