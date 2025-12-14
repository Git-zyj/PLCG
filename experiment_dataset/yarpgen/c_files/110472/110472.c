/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 110472
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=110472 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/110472
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 0; i_0 < 21;i_0 += 1)
    {
        arr_2 [i_0] = (((((((((arr_1 [14] [i_0]) & 65520)) == (arr_0 [i_0] [i_0]))))) ^ 3093817440));
        var_19 ^= ((((arr_1 [i_0] [i_0]) ? (min(var_7, var_3)) : var_8)));
    }
    for (int i_1 = 0; i_1 < 14;i_1 += 1)
    {
        arr_6 [i_1] [i_1] = (((((-((((arr_5 [i_1] [i_1]) && var_12)))))) ? ((((var_0 < (arr_5 [i_1] [i_1]))))) : 61288));

        for (int i_2 = 0; i_2 < 0;i_2 += 1)
        {
            var_20 &= var_11;
            var_21 = ((var_6 ? (((~(~var_9)))) : 63));
        }
        for (int i_3 = 0; i_3 < 14;i_3 += 1)
        {
            arr_13 [i_1] = (((~(arr_7 [i_3] [i_1]))));
            arr_14 [i_1] [i_1] = ((((((~(arr_7 [i_1] [i_1]))))) == ((((arr_4 [i_3]) < ((var_17 / (arr_11 [i_3]))))))));
            var_22 = ((-((var_6 ? ((((arr_3 [i_1]) >> (((arr_4 [i_3]) + 65))))) : (~6236849920365323500)))));
        }
        for (int i_4 = 1; i_4 < 13;i_4 += 1)
        {
            var_23 = min((var_16 & 26891), (arr_10 [i_4] [i_4 - 1]));
            var_24 = (min(var_24, (var_9 ^ var_17)));
        }
    }
    for (int i_5 = 0; i_5 < 23;i_5 += 1) /* same iter space */
    {
        arr_21 [10] = ((min(((((arr_17 [i_5]) ? 0 : var_17))), -901346504)));
        var_25 = (arr_18 [i_5] [i_5]);
        arr_22 [i_5] [i_5] = (arr_19 [i_5]);
    }
    for (int i_6 = 0; i_6 < 23;i_6 += 1) /* same iter space */
    {
        var_26 = ((((arr_23 [i_6]) * (((arr_23 [i_6]) / (arr_20 [i_6]))))));
        /* LoopNest 2 */
        for (int i_7 = 2; i_7 < 19;i_7 += 1)
        {
            for (int i_8 = 0; i_8 < 23;i_8 += 1)
            {
                {
                    var_27 = (!((min(var_8, var_11))));
                    arr_31 [i_6] [10] [10] = (((var_14 ? (((!(arr_27 [1] [18]))) : var_7))));
                }
            }
        }
        var_28 = var_13;
        /* LoopNest 3 */
        for (int i_9 = 0; i_9 < 23;i_9 += 1)
        {
            for (int i_10 = 2; i_10 < 21;i_10 += 1)
            {
                for (int i_11 = 2; i_11 < 22;i_11 += 1)
                {
                    {
                        var_29 = var_15;
                        var_30 = ((((var_9 >= (arr_28 [i_9]))) || (((var_6 ? (arr_19 [i_10 - 2]) : (arr_25 [i_10] [i_10] [i_10 - 1]))))));

                        for (int i_12 = 3; i_12 < 22;i_12 += 1)
                        {
                            var_31 = ((max((arr_35 [i_10]), (arr_35 [i_10]))));
                            var_32 = (arr_39 [i_10]);
                        }
                        /* vectorizable */
                        for (int i_13 = 0; i_13 < 23;i_13 += 1)
                        {
                            arr_47 [i_6] [i_10] [i_6] [i_11] [i_6] = ((((var_17 ? (arr_28 [i_10]) : 65527)) ^ (arr_17 [i_13])));
                            var_33 = (arr_40 [i_10]);
                        }
                        for (int i_14 = 1; i_14 < 22;i_14 += 1)
                        {
                            var_34 = ((min(var_14, -14871)));
                            var_35 = ((((arr_32 [i_14]) == (arr_35 [i_10]))));
                        }
                    }
                }
            }
        }
        var_36 = (((~(arr_38 [i_6] [i_6] [i_6] [9] [i_6]))));
    }
    var_37 = var_2;
    /* LoopNest 2 */
    for (int i_15 = 2; i_15 < 23;i_15 += 1)
    {
        for (int i_16 = 0; i_16 < 24;i_16 += 1)
        {
            {
                var_38 ^= (max((arr_53 [i_16] [i_16] [i_16]), var_14));
                var_39 = (((!var_16) || (((min(15773185010343107520, 4294967291))))));
            }
        }
    }
    #pragma endscop
}
