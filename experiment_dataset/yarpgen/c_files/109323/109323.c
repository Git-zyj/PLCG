/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 109323
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=109323 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/109323
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    /* vectorizable */
    for (int i_0 = 0; i_0 < 25;i_0 += 1)
    {

        for (int i_1 = 1; i_1 < 24;i_1 += 1)
        {
            var_18 = -1;
            var_19 = arr_5 [i_0] [i_1 - 1] [i_1 + 1];
            arr_6 [i_0] = 22347;
            arr_7 [23] = var_3;
        }
        /* LoopNest 2 */
        for (int i_2 = 1; i_2 < 22;i_2 += 1)
        {
            for (int i_3 = 0; i_3 < 25;i_3 += 1)
            {
                {

                    for (int i_4 = 0; i_4 < 25;i_4 += 1) /* same iter space */
                    {
                        arr_18 [i_2] [i_2] [i_3] [i_4] [24] [i_4] = ((var_3 ? (arr_16 [i_0] [i_2 - 1] [i_3] [i_4]) : (arr_16 [i_0] [i_2 + 3] [i_3] [i_4])));
                        var_20 = -28;
                        var_21 += (((((-(arr_5 [i_4] [i_2 + 1] [4])))) ? var_10 : 1));
                        arr_19 [i_2] [i_3] [i_2 + 1] [i_2] = 27;
                        var_22 = var_1;
                    }
                    for (int i_5 = 0; i_5 < 25;i_5 += 1) /* same iter space */
                    {
                        var_23 |= 7;
                        var_24 = (min(var_24, var_5));
                        var_25 = ((-(arr_11 [i_2 - 1] [i_2 + 1] [i_2 + 1])));
                    }
                    for (int i_6 = 0; i_6 < 25;i_6 += 1) /* same iter space */
                    {
                        var_26 = arr_5 [i_0] [0] [i_0];
                        var_27 = (!(arr_15 [i_2 + 2] [i_2 + 3] [i_2 + 2] [i_2 + 1] [i_2]));
                    }
                    var_28 = (((arr_8 [19] [i_2 + 2]) - (((-(arr_0 [i_0] [i_0]))))));
                    arr_24 [i_2] [i_2] [i_2] [i_0] = (arr_14 [i_2 + 2] [i_2 + 3]);
                    var_29 = (arr_10 [i_2] [i_3]);
                    var_30 = (((arr_10 [i_2 + 1] [i_2 + 1]) < (((arr_5 [i_0] [i_2] [i_3]) ? 3603735527244249901 : (arr_5 [i_0] [i_0] [i_0])))));
                }
            }
        }
    }
    /* vectorizable */
    for (int i_7 = 2; i_7 < 17;i_7 += 1) /* same iter space */
    {
        var_31 -= (((arr_15 [i_7] [i_7] [i_7 + 1] [1] [1]) ? (arr_15 [1] [i_7 - 2] [i_7 - 2] [i_7 - 2] [i_7 - 2]) : 32758));
        var_32 = (max(var_32, 1765413560));
        var_33 = ((1765413560 >> (245 - 223)));
    }
    /* vectorizable */
    for (int i_8 = 2; i_8 < 17;i_8 += 1) /* same iter space */
    {
        var_34 = (max(var_34, (((var_4 > (((var_17 ? var_12 : var_1))))))));
        var_35 = (arr_13 [i_8] [i_8 + 1]);

        for (int i_9 = 0; i_9 < 18;i_9 += 1)
        {
            var_36 = (arr_3 [i_8 + 1]);
            var_37 = (min(var_37, 1765413549));
            var_38 = (arr_9 [i_8] [9]);
        }
        for (int i_10 = 1; i_10 < 14;i_10 += 1)
        {
            var_39 = ((var_10 ? var_15 : var_0));
            var_40 = ((var_10 / (arr_13 [i_8] [i_8 - 1])));
        }
        for (int i_11 = 0; i_11 < 1;i_11 += 1)
        {
            arr_40 [i_8] [i_8] = ((~(~var_1)));
            var_41 = (min(var_41, var_6));
            var_42 ^= (1765413560 ? -1 : 47);
        }
    }
    var_43 = ((var_11 ? (((min(var_14, var_5)) + -var_13)) : var_14));
    var_44 = var_16;
    #pragma endscop
}
