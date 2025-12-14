/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 134875
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=134875 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/134875
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 0; i_0 < 1;i_0 += 1) /* same iter space */
    {
        var_16 = ((~(min((((arr_0 [i_0]) >> (var_8 - 23449))), (!var_10)))));
        arr_2 [i_0] = ((((max(var_13, (arr_0 [i_0])))) ? (arr_0 [i_0]) : ((~(arr_0 [i_0])))));
        arr_3 [i_0] = (~(arr_0 [i_0]));
    }
    for (int i_1 = 0; i_1 < 1;i_1 += 1) /* same iter space */
    {
        arr_8 [i_1] = (~(arr_4 [i_1] [i_1]));

        /* vectorizable */
        for (int i_2 = 0; i_2 < 21;i_2 += 1)
        {
            var_17 = (((arr_1 [i_2]) >> ((((arr_11 [i_1]) <= var_0)))));
            var_18 = ((~(arr_0 [i_2])));
        }
        for (int i_3 = 0; i_3 < 21;i_3 += 1) /* same iter space */
        {
            /* LoopNest 2 */
            for (int i_4 = 0; i_4 < 21;i_4 += 1)
            {
                for (int i_5 = 0; i_5 < 21;i_5 += 1)
                {
                    {
                        arr_22 [i_1] [i_3] [i_4] |= (~((-(~var_3))));
                        arr_23 [i_5] [i_4] [i_3] = (arr_5 [i_1]);
                        arr_24 [i_1] [i_1] [i_1] [i_4] [i_4] [i_5] = (((((var_11 * var_6) == (arr_16 [i_1] [i_1] [i_1] [i_1]))) ? var_14 : ((-(((arr_9 [i_4]) ? (arr_18 [i_1]) : (arr_4 [i_3] [20])))))));
                        var_19 = (arr_15 [i_5] [8] [8] [i_1]);
                    }
                }
            }
            /* LoopNest 2 */
            for (int i_6 = 2; i_6 < 20;i_6 += 1)
            {
                for (int i_7 = 0; i_7 < 21;i_7 += 1)
                {
                    {
                        arr_30 [i_1] [i_3] [i_3] [i_7] [i_1] [i_6] = (arr_14 [i_1] [i_3]);
                        var_20 = (arr_25 [i_6] [i_6] [i_6]);
                        var_21 &= ((((var_4 && 2165971760) && (((var_10 ? (arr_12 [i_1] [18]) : (arr_7 [i_1])))))));
                    }
                }
            }
            arr_31 [i_1] = 46055;

            for (int i_8 = 4; i_8 < 17;i_8 += 1)
            {
                var_22 -= (max(var_8, (max(((var_1 ? (arr_14 [i_1] [7]) : var_13)), (((var_2 <= (arr_32 [i_1] [i_1] [i_8 + 3] [i_8]))))))));
                /* LoopNest 2 */
                for (int i_9 = 1; i_9 < 20;i_9 += 1)
                {
                    for (int i_10 = 0; i_10 < 1;i_10 += 1)
                    {
                        {
                            var_23 = ((var_9 % (((max(((-9 || (arr_20 [i_1] [i_3] [i_8] [i_9]))), (((arr_32 [i_3] [i_3] [i_8] [i_3]) >= (arr_27 [i_1] [i_3] [i_9] [i_3])))))))));
                            arr_39 [i_1] [i_3] [8] [i_1] [i_1] [i_9] [i_10] = (arr_19 [i_1] [i_9 + 1] [i_8 + 2] [11]);
                        }
                    }
                }
                /* LoopNest 2 */
                for (int i_11 = 4; i_11 < 20;i_11 += 1)
                {
                    for (int i_12 = 3; i_12 < 18;i_12 += 1)
                    {
                        {
                            arr_45 [i_12 + 1] = ((~(((arr_28 [i_8 - 2] [i_11] [i_8] [i_11 - 2] [i_12] [i_11 - 2]) ? var_4 : (arr_28 [i_8 + 2] [i_3] [i_1] [i_11] [20] [i_12])))));
                            arr_46 [i_1] [i_1] [i_8] [i_11] = (arr_44 [i_1] [i_3] [i_8] [i_8 - 3] [i_11] [i_12]);
                        }
                    }
                }
                var_24 *= (arr_4 [i_3] [i_3]);
            }
        }
        for (int i_13 = 0; i_13 < 21;i_13 += 1) /* same iter space */
        {
            arr_49 [19] [i_13] [i_13] = (-17 == 725844441);
            arr_50 [i_1] [i_13] [1] = var_12;
            arr_51 [i_1] = ((-(((!(arr_17 [i_13]))))));
        }
        var_25 = (arr_35 [i_1] [i_1] [i_1] [i_1]);
    }
    var_26 = ((-(((max(var_4, var_9)) - -var_7))));
    var_27 = (var_4 ? (((!var_12) + (~var_4))) : (((!(((var_7 ? var_13 : var_7)))))));
    #pragma endscop
}
