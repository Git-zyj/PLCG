/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 129534
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=129534 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/129534
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 2; i_0 < 10;i_0 += 1)
    {
        arr_2 [i_0] = 34359607296;
        var_18 += (arr_0 [i_0]);
    }
    for (int i_1 = 1; i_1 < 11;i_1 += 1)
    {
        var_19 = (((arr_5 [i_1]) <= (((((arr_5 [i_1 + 2]) || (arr_5 [4])))))));

        /* vectorizable */
        for (int i_2 = 1; i_2 < 1;i_2 += 1) /* same iter space */
        {

            for (int i_3 = 1; i_3 < 1;i_3 += 1)
            {
                arr_10 [i_1] [i_3] [i_3] = var_2;
                var_20 += (arr_9 [i_1] [i_3] [12] [i_1]);
                arr_11 [i_1] [i_3] = ((~(~var_4)));
                var_21 = (arr_5 [i_2 - 1]);
                var_22 = (max(var_22, (arr_8 [8] [i_3] [i_3 - 1] [i_3])));
            }
            for (int i_4 = 3; i_4 < 12;i_4 += 1)
            {
                arr_14 [i_4] [i_4] [i_4] [1] = (((arr_12 [i_1] [i_2 - 1] [i_2 - 1]) ? (arr_12 [i_4 - 2] [0] [i_1 - 1]) : (arr_12 [i_2] [i_2] [i_4 + 2])));
                arr_15 [i_4] [i_2] [i_1] = -var_3;
                var_23 = (min(var_23, (arr_6 [i_1 - 1] [i_2 - 1] [i_2])));
            }
            var_24 = var_6;
            /* LoopNest 2 */
            for (int i_5 = 2; i_5 < 12;i_5 += 1)
            {
                for (int i_6 = 4; i_6 < 11;i_6 += 1)
                {
                    {
                        var_25 = (((arr_8 [i_6] [i_6] [i_2] [i_6]) / (arr_7 [i_6 - 3] [i_5 + 1] [i_1 + 3])));
                        var_26 = ((var_1 ? var_10 : (arr_4 [i_1 + 2])));
                    }
                }
            }
            var_27 = 0;
        }
        for (int i_7 = 1; i_7 < 1;i_7 += 1) /* same iter space */
        {
            arr_25 [i_1] [i_7] = var_7;
            var_28 ^= -118;
            arr_26 [i_1] [i_1] = (((arr_6 [i_1] [i_1] [6]) ? (arr_12 [i_7 - 1] [i_1] [i_1]) : ((((arr_22 [i_7] [i_7] [i_7 - 1] [i_1]) ? (arr_18 [i_1 + 3] [i_1]) : (arr_13 [i_1 + 1] [i_1] [i_7] [i_7]))))));
            var_29 = ((~(((arr_13 [i_7 - 1] [1] [i_1] [i_1]) ? (arr_6 [i_7] [i_1 + 1] [i_1]) : (arr_19 [i_7 - 1] [i_7 - 1] [i_7 - 1] [i_1 + 3])))));
            /* LoopNest 3 */
            for (int i_8 = 1; i_8 < 10;i_8 += 1)
            {
                for (int i_9 = 2; i_9 < 13;i_9 += 1)
                {
                    for (int i_10 = 2; i_10 < 13;i_10 += 1)
                    {
                        {
                            var_30 *= (arr_18 [i_7] [i_1]);
                            var_31 |= ((var_0 ? (var_17 / 41043) : (41043 + var_11)));
                            var_32 = (max(var_32, (((65535 < ((-((var_6 ? var_15 : var_16)))))))));
                            var_33 = ((var_4 ? (!var_7) : (((((var_16 ? var_1 : var_12))) ? (arr_19 [i_1] [i_1] [i_1] [i_1]) : var_12))));
                            var_34 = (((~var_15) | var_11));
                        }
                    }
                }
            }
        }
        var_35 = ((((min(var_12, 61541))) ? var_13 : ((var_3 ? 166 : -17348))));
    }
    var_36 = ((((~var_10) ? var_0 : ((var_13 ? var_0 : -32671)))));
    /* LoopNest 3 */
    for (int i_11 = 4; i_11 < 17;i_11 += 1)
    {
        for (int i_12 = 4; i_12 < 17;i_12 += 1)
        {
            for (int i_13 = 1; i_13 < 1;i_13 += 1)
            {
                {
                    var_37 = ((var_0 ? (((arr_35 [i_13] [i_13 - 1] [i_13 - 1]) ? (arr_39 [i_12] [i_13 - 1] [i_12]) : (arr_35 [18] [i_13 - 1] [i_13 - 1]))) : ((-(arr_35 [i_13 - 1] [i_13 - 1] [i_13 - 1])))));
                    var_38 *= (!(((((arr_36 [16]) & -32764)))));
                    var_39 = (!167);
                    /* LoopNest 2 */
                    for (int i_14 = 4; i_14 < 18;i_14 += 1)
                    {
                        for (int i_15 = 1; i_15 < 17;i_15 += 1)
                        {
                            {
                                arr_46 [i_11] [1] [i_12 - 4] [i_12] [i_13] [i_12] [i_15] = ((-(((arr_43 [i_11] [1] [i_12 - 4] [i_12] [i_15]) ? var_8 : 6))));
                                var_40 = ((((arr_35 [i_11 - 3] [i_11] [i_11]) && var_8)));
                            }
                        }
                    }
                }
            }
        }
    }
    var_41 = ((var_12 ? 1 : 37));
    #pragma endscop
}
