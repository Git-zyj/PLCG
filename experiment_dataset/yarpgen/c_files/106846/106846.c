/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 106846
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=106846 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/106846
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 0; i_0 < 17;i_0 += 1)
    {
        arr_2 [i_0] &= ((var_4 ? (~-487822856043485843) : 4084));
        var_19 = ((-(arr_0 [i_0])));
    }
    /* LoopNest 2 */
    for (int i_1 = 0; i_1 < 13;i_1 += 1)
    {
        for (int i_2 = 0; i_2 < 13;i_2 += 1)
        {
            {
                /* LoopNest 2 */
                for (int i_3 = 0; i_3 < 1;i_3 += 1)
                {
                    for (int i_4 = 3; i_4 < 10;i_4 += 1)
                    {
                        {
                            var_20 = (arr_12 [i_4] [i_4 + 3] [i_4] [i_4 - 3] [i_4 - 3]);

                            for (int i_5 = 0; i_5 < 13;i_5 += 1)
                            {
                                var_21 &= (min((((((max(2147483641, 1294186309))) ? (~18394) : 2147483641))), ((((((arr_7 [i_5] [i_5]) ? (arr_13 [i_5] [i_5]) : 0))) ? (arr_6 [i_2] [i_3] [i_2]) : 232))));
                                var_22 = (max(var_22, var_17));
                                arr_15 [i_1] [i_2] [i_1] [i_4] [i_1] [i_4] = ((2147483641 & (((((var_16 ? (arr_3 [i_1] [i_2]) : var_17))) ? ((var_1 ? (arr_14 [10] [10] [i_2] [12] [12] [6]) : (arr_3 [i_1] [12]))) : 1887758282))));
                                var_23 = ((!(arr_9 [i_4])));
                            }

                            for (int i_6 = 0; i_6 < 13;i_6 += 1) /* same iter space */
                            {
                                var_24 = (min(var_24, (((-(((!(arr_17 [i_6] [i_6] [i_1] [i_3] [i_3] [i_1] [i_1])))))))));
                                var_25 = ((var_13 * ((((arr_18 [i_4] [i_3]) <= (arr_18 [i_4] [i_4]))))));
                            }
                            /* vectorizable */
                            for (int i_7 = 0; i_7 < 13;i_7 += 1) /* same iter space */
                            {
                                var_26 &= 0;
                                var_27 = ((arr_4 [i_4]) + ((var_12 ? var_12 : (arr_13 [i_4] [i_4]))));
                                var_28 = (max(var_28, (((!(arr_19 [i_1] [i_2] [i_1] [i_4 + 2] [i_2] [i_1] [1]))))));
                            }
                            var_29 = (max(var_29, (arr_16 [i_4] [i_4] [i_2] [i_2] [i_1])));
                        }
                    }
                }
                /* LoopNest 2 */
                for (int i_8 = 0; i_8 < 1;i_8 += 1)
                {
                    for (int i_9 = 3; i_9 < 12;i_9 += 1)
                    {
                        {
                            var_30 &= (arr_7 [i_1] [i_2]);
                            var_31 ^= (max(7, (((!(arr_25 [i_9 - 1] [i_9] [i_8] [i_8] [i_2]))))));
                            var_32 -= (((arr_25 [i_1] [i_1] [i_1] [i_1] [i_1]) || (arr_12 [i_1] [i_2] [10] [i_9] [i_9])));

                            for (int i_10 = 0; i_10 < 13;i_10 += 1)
                            {
                                var_33 = 1887758282;
                                var_34 = (((~var_0) / ((-(arr_26 [i_2] [1] [i_9 + 1] [i_9] [7])))));
                                var_35 = (arr_25 [6] [i_9] [i_8] [i_2] [i_1]);
                            }
                            for (int i_11 = 0; i_11 < 13;i_11 += 1)
                            {
                                var_36 &= 10;
                                arr_30 [i_1] [i_2] [i_8] [i_9] [i_11] = var_0;
                                var_37 = ((-(((-(arr_14 [i_1] [i_2] [i_8] [i_8] [i_2] [0]))))));
                            }
                            for (int i_12 = 0; i_12 < 13;i_12 += 1)
                            {
                                var_38 -= ((((!((min(0, var_2))))) ? (((-((var_3 ? (arr_9 [i_1]) : (arr_25 [11] [i_2] [i_8] [i_2] [i_1])))))) : 13707));
                                var_39 ^= ((((arr_25 [i_1] [i_1] [12] [7] [i_1]) ? (arr_28 [8] [i_2] [i_8] [i_12] [8]) : ((-18409 ? 4611686018427387904 : var_16)))));
                                var_40 &= ((~(arr_0 [5])));
                                var_41 = arr_3 [i_2] [i_1];
                                var_42 &= var_18;
                            }
                            var_43 ^= ((+(min((arr_14 [1] [i_2] [i_8] [i_9] [i_9] [i_2]), ((min(1887758284, var_9)))))));
                        }
                    }
                }
                var_44 = (max(var_44, (arr_24 [i_1] [i_1] [i_2] [i_1])));
            }
        }
    }
    #pragma endscop
}
