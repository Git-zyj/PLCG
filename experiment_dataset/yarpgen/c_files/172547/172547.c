/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 172547
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=172547 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/172547
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 3 */
    for (int i_0 = 4; i_0 < 21;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 22;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 1;i_2 += 1)
            {
                {
                    var_18 = (max(var_18, (((arr_9 [1] [i_1]) || var_10))));
                    arr_10 [i_0] [1] [i_1] [i_2] = max((((var_1 * ((1 ? 0 : var_17))))), (min(524224, (arr_4 [i_0] [i_1]))));
                    var_19 = (!((((arr_1 [i_0]) & (((var_9 + 2147483647) << (25743 - 25743)))))));
                    var_20 *= (!(arr_2 [i_0 - 1]));
                }
            }
        }
    }
    var_21 = var_4;

    /* vectorizable */
    for (int i_3 = 0; i_3 < 22;i_3 += 1)
    {
        /* LoopNest 3 */
        for (int i_4 = 0; i_4 < 1;i_4 += 1)
        {
            for (int i_5 = 4; i_5 < 21;i_5 += 1)
            {
                for (int i_6 = 0; i_6 < 22;i_6 += 1)
                {
                    {
                        var_22 = var_8;
                        var_23 = (((arr_18 [i_3] [i_3] [i_3] [i_3]) == (arr_17 [i_4] [i_4] [i_4])));
                    }
                }
            }
        }
        arr_23 [1] [1] = ((!(~0)));
        var_24 *= arr_21 [i_3] [i_3] [i_3] [i_3] [i_3];
    }
    /* vectorizable */
    for (int i_7 = 0; i_7 < 21;i_7 += 1)
    {
        var_25 = var_8;
        var_26 = (!var_5);
        var_27 += ((-(((var_13 || (arr_21 [i_7] [i_7] [i_7] [i_7] [i_7]))))));
        /* LoopNest 2 */
        for (int i_8 = 0; i_8 < 21;i_8 += 1)
        {
            for (int i_9 = 0; i_9 < 21;i_9 += 1)
            {
                {
                    var_28 = (min(var_28, (((-((var_2 * (arr_15 [i_8]))))))));

                    for (int i_10 = 0; i_10 < 1;i_10 += 1)
                    {
                        var_29 = ((-(arr_7 [i_10])));

                        for (int i_11 = 0; i_11 < 1;i_11 += 1)
                        {
                            arr_38 [i_7] [i_7] [i_7] [i_7] [i_7] [i_7] = ((((((arr_34 [i_10] [i_9] [i_8] [i_7]) ? 4294443072 : (arr_17 [i_10] [i_8] [i_7])))) ? (((!(arr_2 [i_11])))) : var_5));
                            var_30 *= ((4294443072 ? 1 : 0));
                            var_31 = (((arr_9 [i_8] [i_8]) ? 1 : (arr_9 [1] [i_9])));
                            var_32 = (arr_27 [i_11] [i_10]);
                        }

                        for (int i_12 = 0; i_12 < 21;i_12 += 1) /* same iter space */
                        {
                            arr_41 [i_7] [i_7] [4] [i_10] |= ((~(arr_21 [1] [i_8] [i_9] [i_10] [i_12])));
                            var_33 = (~((741956964 ? 4294443071 : -15633)));
                            var_34 = (max(var_34, var_2));
                            var_35 = (max(var_35, var_7));
                            var_36 = (min(var_36, (((((arr_15 [i_9]) ? 4294967295 : (arr_0 [i_7])))))));
                        }
                        for (int i_13 = 0; i_13 < 21;i_13 += 1) /* same iter space */
                        {
                            var_37 = ((((4294967295 ? 1 : 4294443071)) < var_16));
                            var_38 = (arr_2 [i_9]);
                        }
                        for (int i_14 = 0; i_14 < 21;i_14 += 1) /* same iter space */
                        {
                            arr_48 [i_14] [i_8] [i_7] = var_0;
                            arr_49 [i_14] [i_10] [i_9] [i_8] [15] = (arr_42 [i_7] [6] [i_9] [i_10] [i_10] [i_10]);
                        }
                        for (int i_15 = 2; i_15 < 18;i_15 += 1)
                        {
                            var_39 = (max(var_39, (arr_37 [1] [i_15] [i_15 + 2] [i_15 - 1] [i_15 + 1])));
                            arr_53 [i_9] [i_15] [i_9] [i_10] [i_15] [i_9] = -var_15;
                            var_40 = ((~var_13) || (((4294967295 ? var_0 : 1))));
                        }
                        var_41 *= 0;
                    }
                }
            }
        }
    }
    for (int i_16 = 0; i_16 < 13;i_16 += 1)
    {
        var_42 = (min((arr_1 [i_16]), 1));
        var_43 = var_12;
    }
    var_44 ^= min(((var_13 ? (((var_6 ? var_17 : var_2))) : -var_8)), (((2360934985 ? ((var_7 ? var_10 : var_13)) : ((max(var_6, var_1)))))));
    #pragma endscop
}
