/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 175580
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=175580 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/175580
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 0; i_0 < 11;i_0 += 1)
    {
        arr_2 [i_0] = -122;
        var_11 = (arr_0 [0]);
        var_12 = var_8;
    }

    for (int i_1 = 3; i_1 < 14;i_1 += 1)
    {
        var_13 = ((((((arr_3 [10]) * (!var_4)))) ? var_6 : var_0));

        for (int i_2 = 0; i_2 < 16;i_2 += 1)
        {
            var_14 *= (((min(108, 2147483647))));
            arr_7 [i_1] |= var_10;
        }
        for (int i_3 = 3; i_3 < 15;i_3 += 1) /* same iter space */
        {
            var_15 = ((((arr_6 [i_1 - 3] [i_3 - 3] [i_3 - 1]) ? -1114317061 : var_8)));

            for (int i_4 = 0; i_4 < 16;i_4 += 1)
            {
                var_16 = (arr_9 [i_1]);
                var_17 = (arr_5 [i_1 + 1]);
            }
            var_18 -= (max((((min(1, var_7)))), (((-1618 * var_1) ? (arr_9 [i_3]) : -1114317064))));

            for (int i_5 = 0; i_5 < 16;i_5 += 1)
            {
                var_19 &= var_7;
                arr_14 [i_1] [i_3] [i_1] = (((((var_5 - var_1) != var_1)) ? 1 : (arr_12 [i_5] [i_3] [i_1])));

                /* vectorizable */
                for (int i_6 = 0; i_6 < 16;i_6 += 1)
                {
                    var_20 = (arr_3 [i_3 - 3]);
                    var_21 = var_4;
                    var_22 *= ((var_1 != (arr_16 [i_1] [i_1])));
                    var_23 *= ((-((var_0 ? (arr_16 [i_1] [i_3]) : (arr_4 [i_5])))));
                    var_24 |= (arr_10 [i_1 - 3] [i_3] [i_5] [i_6]);
                }
                var_25 = ((1 | ((var_3 % (arr_9 [i_5])))));
            }
            for (int i_7 = 1; i_7 < 14;i_7 += 1)
            {
                arr_19 [i_1] [4] [i_1] |= -var_2;
                var_26 = (~126);
                arr_20 [i_1] [i_7] [i_7] [i_7] = var_1;
                var_27 += ((max(var_1, var_3)));
            }
        }
        /* vectorizable */
        for (int i_8 = 3; i_8 < 15;i_8 += 1) /* same iter space */
        {
            arr_25 [i_8] [i_8] [i_8] = 1;
            arr_26 [i_1 + 2] &= (arr_22 [i_8 - 2]);
            arr_27 [i_1] = (arr_13 [i_1 - 1]);
            arr_28 [i_8] [i_8 - 3] [i_8] = (((arr_24 [i_1 - 2]) | var_1));
        }

        for (int i_9 = 2; i_9 < 14;i_9 += 1)
        {
            arr_32 [i_1 + 1] [i_9] [i_9] = ((var_1 > (((!(arr_3 [i_1 - 1]))))));
            arr_33 [i_1 - 3] [i_9 + 2] [i_9 - 2] = var_9;
        }
    }
    /* vectorizable */
    for (int i_10 = 0; i_10 < 24;i_10 += 1)
    {
        arr_36 [i_10] = (!1);
        var_28 = 107;
    }
    var_29 = ((((var_3 ? 3755692524 : var_8))) ? ((1 | ((1 ? 112 : var_6)))) : var_8);
    #pragma endscop
}
