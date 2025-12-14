/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 159050
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=159050 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/159050
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_13 = var_12;

    for (int i_0 = 0; i_0 < 25;i_0 += 1) /* same iter space */
    {
        arr_4 [i_0] [i_0] = (arr_0 [i_0] [i_0]);
        var_14 = var_6;

        for (int i_1 = 0; i_1 < 25;i_1 += 1)
        {
            arr_7 [i_0] [i_0] = (max(var_9, (arr_0 [i_0] [i_1])));

            for (int i_2 = 0; i_2 < 1;i_2 += 1)
            {
                arr_11 [i_2] [i_2] [i_2] = ((((~(arr_10 [i_0] [i_1] [i_2] [12]))) != (((~var_6) | (arr_1 [14])))));

                /* vectorizable */
                for (int i_3 = 4; i_3 < 24;i_3 += 1)
                {

                    for (int i_4 = 0; i_4 < 25;i_4 += 1)
                    {
                        var_15 *= (~0);
                        arr_18 [i_2] [i_1] = (1 != 1);
                        arr_19 [i_0] [1] [1] [i_0] [1] [i_3] |= (((arr_12 [i_3 + 1] [i_3 - 2] [i_3 - 4] [i_3 - 4]) ? var_7 : var_5));
                        var_16 = var_6;
                        var_17 += (var_2 - var_7);
                    }
                    var_18 ^= ((+(((arr_17 [i_0] [i_0] [i_0] [i_0]) * 0))));
                    arr_20 [1] [i_2] [i_2] [1] [i_2] = (((arr_14 [i_3 - 1] [i_3 - 2] [i_3 - 3] [i_3 - 2]) ? (arr_9 [i_2] [i_3 + 1] [i_3]) : (arr_5 [i_0] [i_0] [1])));
                }
                for (int i_5 = 0; i_5 < 1;i_5 += 1)
                {
                    var_19 = ((((min((!1), ((1 ? var_6 : (arr_1 [i_0])))))) ? (((var_2 || 1) ? var_4 : ((4 ? 89 : var_10)))) : var_6));
                    var_20 = (((((-9 ? 1 : 1)) / ((max((arr_12 [i_0] [i_0] [i_0] [i_0]), var_4))))));
                }
                arr_25 [i_2] = ((+(((arr_24 [i_0] [i_0] [i_0] [i_0]) ? (arr_16 [i_0] [i_0] [i_1] [i_1] [i_0] [i_2]) : (arr_10 [i_0] [i_0] [i_2] [i_2])))));
            }
            for (int i_6 = 0; i_6 < 25;i_6 += 1)
            {
                var_21 = min(1, 1);
                var_22 = (max(var_22, (((((arr_8 [i_0] [i_0] [i_1] [i_0]) - (arr_8 [i_0] [i_0] [i_0] [i_0]))) <= (arr_1 [i_0])))));
                var_23 = ((((((arr_13 [i_0] [i_0] [i_1] [i_1] [i_0]) > (arr_13 [i_0] [i_0] [i_0] [i_0] [i_0])))) - ((-(((arr_23 [i_0] [13] [13] [i_0] [i_0]) + var_3))))));
            }
            for (int i_7 = 0; i_7 < 1;i_7 += 1)
            {
                var_24 = ((-((max((arr_3 [i_0]), (arr_3 [i_0]))))));
                arr_31 [i_0] [i_0] = ((1 * var_8) < (arr_8 [i_0] [i_0] [i_0] [i_0]));
                var_25 = max(((var_3 || (arr_13 [i_0] [i_0] [i_0] [i_7] [i_0]))), ((!((((arr_14 [i_0] [i_0] [1] [i_0]) ? var_11 : (arr_12 [i_0] [i_1] [i_0] [1])))))));
            }
            arr_32 [i_0] = arr_14 [1] [i_0] [i_0] [i_0];
            var_26 = ((((max((arr_22 [i_0] [i_0] [i_0] [i_0] [20] [i_0]), var_6))) == var_6));
        }
        /* vectorizable */
        for (int i_8 = 0; i_8 < 1;i_8 += 1) /* same iter space */
        {
            arr_36 [i_8] = (((arr_13 [i_0] [i_8] [i_8] [i_8] [i_8]) - (arr_13 [i_0] [i_8] [1] [1] [i_8])));
            var_27 -= (arr_10 [i_8] [i_8] [i_0] [i_8]);
        }
        for (int i_9 = 0; i_9 < 1;i_9 += 1) /* same iter space */
        {
            var_28 -= var_9;
            var_29 = (min(var_29, ((((~1) ? (arr_30 [i_0] [i_9] [i_9]) : (((arr_2 [i_9] [i_9]) | ((max(var_4, (arr_37 [i_9] [15])))))))))));
            var_30 -= ((((max((arr_27 [i_0] [i_0]), var_2))) & (((arr_27 [i_0] [i_0]) ? (arr_27 [i_0] [i_9]) : (arr_27 [i_9] [i_9])))));

            for (int i_10 = 0; i_10 < 1;i_10 += 1)
            {
                var_31 = arr_28 [i_0] [i_9] [i_10];
                arr_42 [i_9] [i_9] = var_4;
            }
        }
        arr_43 [i_0] |= (min((((arr_5 [i_0] [i_0] [i_0]) ? (var_10 | var_3) : (var_0 + var_8))), (arr_29 [i_0] [i_0] [i_0] [i_0])));
    }
    /* vectorizable */
    for (int i_11 = 0; i_11 < 25;i_11 += 1) /* same iter space */
    {
        var_32 = (max(var_32, (((1 ? 0 : 1)))));
        var_33 &= -0;
    }
    var_34 = ((~(1 != 1)));
    #pragma endscop
}
