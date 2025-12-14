/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 186808
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=186808 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/186808
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 1; i_0 < 20;i_0 += 1)
    {
        arr_2 [i_0] = (min((arr_1 [i_0]), var_10));
        var_12 = (~1);
        var_13 = (min(var_13, (arr_0 [14])));
        var_14 = (~184);
    }
    for (int i_1 = 0; i_1 < 1;i_1 += 1)
    {
        arr_5 [i_1] = (((arr_0 [i_1]) >> (((arr_0 [i_1]) - 169))));
        arr_6 [i_1] = (arr_3 [i_1]);
        var_15 = (min((((arr_0 [i_1]) ? var_1 : ((min(245, (arr_4 [i_1])))))), (arr_3 [i_1])));
        var_16 = ((~(((~(arr_1 [i_1]))))));

        for (int i_2 = 0; i_2 < 21;i_2 += 1)
        {
            arr_10 [i_1] [i_1] [i_1] = ((-(arr_0 [i_1])));

            for (int i_3 = 3; i_3 < 20;i_3 += 1)
            {

                for (int i_4 = 2; i_4 < 20;i_4 += 1)
                {
                    arr_18 [i_4] [i_1] [i_1] = ((((arr_16 [i_1]) ? var_8 : (arr_16 [i_1]))));
                    arr_19 [i_4] [i_4] [i_1] [i_1] [i_2] [i_1] = (((arr_1 [i_4 - 1]) ? (!var_11) : (arr_3 [i_1])));
                    var_17 = ((((((arr_4 [i_3 + 1]) * (arr_4 [i_3 + 1])))) + (min(-5473275179111200196, (arr_3 [i_1])))));
                }
                /* LoopNest 2 */
                for (int i_5 = 0; i_5 < 21;i_5 += 1)
                {
                    for (int i_6 = 2; i_6 < 19;i_6 += 1)
                    {
                        {
                            var_18 = (arr_17 [i_1]);
                            var_19 = 1;
                            arr_26 [i_6] [i_1] [i_3 - 2] [i_3] [i_2] [i_1] [i_1] = min(((-(arr_13 [i_1] [i_2] [i_3] [i_3 - 1]))), (arr_13 [i_3] [i_3] [i_3] [i_3 + 1]));
                        }
                    }
                }
                var_20 |= (arr_1 [i_3 - 1]);
                arr_27 [i_2] &= (min((((!(((arr_23 [i_3 + 1] [i_1] [i_1] [i_1] [i_2] [i_1] [i_1]) <= (-9223372036854775807 - 1)))))), 18446744073709551601));
            }
            /* vectorizable */
            for (int i_7 = 2; i_7 < 18;i_7 += 1)
            {
                var_21 = var_0;
                var_22 = 1055175961877394342;
            }
        }
        for (int i_8 = 3; i_8 < 20;i_8 += 1)
        {
            var_23 += arr_23 [i_1] [i_8] [i_1] [i_1] [i_1] [i_1] [i_1];
            var_24 = (min((min((arr_30 [i_1] [i_8 - 2]), (arr_29 [i_1] [i_1] [i_8] [i_8 - 2]))), (min((arr_29 [i_1] [i_8] [i_1] [i_1]), (arr_30 [i_8 - 3] [i_1])))));
            var_25 *= (min((min((arr_12 [i_1] [i_1] [1] [i_1]), (min(var_2, var_9)))), (arr_14 [i_1] [i_1] [i_8] [i_8 - 1])));
            var_26 = (min((arr_23 [i_8 - 1] [i_8 - 3] [i_8] [i_8 + 1] [i_8 - 2] [i_1] [i_1]), ((-481154316 ? (~var_9) : (arr_29 [i_8] [i_8 - 2] [i_8 - 3] [i_8 - 1])))));
            arr_32 [i_1] = ((~(!0)));
        }
        for (int i_9 = 0; i_9 < 21;i_9 += 1) /* same iter space */
        {
            var_27 = var_8;
            arr_35 [i_1] = ((min((arr_0 [i_1]), (var_8 % var_1))));
            arr_36 [i_1] = ((~(((arr_22 [i_1] [i_9] [i_1] [i_1] [i_1] [i_1]) ? 32512 : ((min(var_5, (arr_1 [i_1]))))))));
            arr_37 [i_1] [i_1] [i_1] = ((var_6 + ((((arr_8 [i_1]) != (arr_17 [i_1]))))));
        }
        /* vectorizable */
        for (int i_10 = 0; i_10 < 21;i_10 += 1) /* same iter space */
        {
            /* LoopNest 3 */
            for (int i_11 = 0; i_11 < 21;i_11 += 1)
            {
                for (int i_12 = 1; i_12 < 18;i_12 += 1)
                {
                    for (int i_13 = 3; i_13 < 20;i_13 += 1)
                    {
                        {
                            arr_48 [i_1] [i_1] [i_1] [i_1] [i_1] [i_1] [i_1] = (((arr_23 [i_1] [i_1] [i_1] [i_1] [i_1] [i_1] [i_1]) ^ (arr_23 [i_1] [i_10] [i_10] [i_11] [i_13 - 1] [i_1] [i_1])));
                            var_28 = ((0 <= (arr_0 [i_1])));
                            var_29 = ((!(arr_15 [i_1] [i_13 - 1] [i_12 - 1] [i_12 - 1])));
                            var_30 = (max(var_30, (((1 ? 1 : (arr_8 [i_11]))))));
                        }
                    }
                }
            }
            arr_49 [i_1] [i_10] = (arr_15 [i_1] [i_10] [i_1] [i_1]);
            var_31 = (arr_40 [i_1] [i_10]);
            var_32 = 109;
        }
    }
    for (int i_14 = 0; i_14 < 10;i_14 += 1)
    {
        arr_52 [i_14] = (((((((((arr_23 [i_14] [i_14] [i_14] [i_14] [i_14] [i_14] [i_14]) ? 1765848205436443285 : 8246182070447088462))) ? (min(480581306, 1940177014)) : (arr_4 [i_14])))) ? var_2 : (arr_40 [i_14] [i_14])));
        var_33 = (min(var_33, var_11));
        arr_53 [i_14] [i_14] = (min((arr_20 [i_14] [i_14] [i_14] [i_14] [i_14]), ((16680895868273108331 / (arr_47 [i_14] [i_14] [i_14] [i_14] [i_14])))));
        arr_54 [i_14] = 126;
    }
    for (int i_15 = 0; i_15 < 1;i_15 += 1)
    {
        arr_58 [i_15] = (((arr_39 [i_15]) ? ((var_6 ? -9223372036854775800 : (arr_39 [i_15]))) : (arr_16 [2])));
        arr_59 [i_15] [i_15] |= arr_38 [i_15] [i_15] [i_15];
    }
    var_34 = var_2;
    var_35 |= ((-((((var_0 ? var_7 : var_6)) / (~var_11)))));
    var_36 = var_0;
    #pragma endscop
}
