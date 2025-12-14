/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 181704
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=181704 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/181704
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 0; i_0 < 24;i_0 += 1)
    {
        var_12 = ((~(arr_1 [i_0] [i_0])));
        var_13 = (min(var_13, 13706927195505104593));
        var_14 = (min(var_14, ((((((-(-12133 * 1)))) > ((-(1 & 13929084306585667751))))))));
        /* LoopNest 3 */
        for (int i_1 = 0; i_1 < 24;i_1 += 1)
        {
            for (int i_2 = 2; i_2 < 22;i_2 += 1)
            {
                for (int i_3 = 1; i_3 < 22;i_3 += 1)
                {
                    {
                        var_15 = (arr_2 [i_0] [i_0] [i_0]);
                        arr_9 [i_0] [8] [i_0] = (-(min(24, 1941934238865014767)));
                        var_16 = 7601822041501913052;
                    }
                }
            }
        }
    }
    /* vectorizable */
    for (int i_4 = 0; i_4 < 10;i_4 += 1)
    {
        var_17 = (((((arr_10 [5]) == (arr_10 [i_4])))) <= 10);

        for (int i_5 = 0; i_5 < 10;i_5 += 1)
        {
            /* LoopNest 3 */
            for (int i_6 = 0; i_6 < 1;i_6 += 1)
            {
                for (int i_7 = 0; i_7 < 10;i_7 += 1)
                {
                    for (int i_8 = 2; i_8 < 9;i_8 += 1)
                    {
                        {
                            var_18 |= -15;
                            var_19 = ((-5067328006236632466 || (7 == -11)));
                            var_20 = (max(var_20, ((((-(arr_2 [10] [17] [14])))))));
                        }
                    }
                }
            }

            for (int i_9 = 1; i_9 < 9;i_9 += 1)
            {
                var_21 = 21;
                var_22 *= (arr_15 [6]);
            }
            for (int i_10 = 0; i_10 < 10;i_10 += 1) /* same iter space */
            {
                /* LoopNest 2 */
                for (int i_11 = 0; i_11 < 10;i_11 += 1)
                {
                    for (int i_12 = 2; i_12 < 9;i_12 += 1)
                    {
                        {
                            arr_34 [i_4] [i_4] = ((((-(arr_25 [1] [1] [7]))) >= 10));
                            var_23 |= ((((((arr_20 [i_4] [i_4] [8] [1] [i_4] [i_4]) % (arr_32 [8] [i_4] [0] [i_4] [i_4])))) < (arr_14 [1] [i_5])));
                            arr_35 [i_4] [i_4] [0] [i_4] [i_4] [0] = ((((((arr_3 [i_4] [i_4] [i_4]) < 0))) == (arr_32 [9] [i_11] [i_11] [i_11] [0])));
                        }
                    }
                }

                for (int i_13 = 0; i_13 < 10;i_13 += 1)
                {
                    var_24 = -11;
                    var_25 = -0;
                    arr_39 [i_4] [i_5] [i_10] [i_5] [i_4] = 2459662857;
                }
            }
            for (int i_14 = 0; i_14 < 10;i_14 += 1) /* same iter space */
            {
                var_26 = 63;
                arr_43 [i_4] = ((-(~-32)));
                /* LoopNest 2 */
                for (int i_15 = 0; i_15 < 10;i_15 += 1)
                {
                    for (int i_16 = 0; i_16 < 10;i_16 += 1)
                    {
                        {
                            var_27 = 45757;
                            var_28 = ((((!(arr_8 [i_4] [1] [2] [10] [i_16])))));
                        }
                    }
                }
            }
            var_29 = (arr_27 [i_5]);
            /* LoopNest 3 */
            for (int i_17 = 0; i_17 < 10;i_17 += 1)
            {
                for (int i_18 = 0; i_18 < 10;i_18 += 1)
                {
                    for (int i_19 = 0; i_19 < 10;i_19 += 1)
                    {
                        {
                            var_30 = -5;
                            var_31 -= ((2147483634 <= (((arr_3 [i_4] [i_5] [1]) + 63540))));
                            var_32 = (arr_45 [6] [i_19]);
                        }
                    }
                }
            }
        }
        for (int i_20 = 0; i_20 < 10;i_20 += 1)
        {
            var_33 = (arr_18 [i_4] [i_4] [i_4] [i_4]);
            var_34 = (-((((arr_54 [i_20] [i_4] [i_20]) == -10))));
        }
    }
    var_35 -= ((((~-56) <= (var_10 > var_1))));
    #pragma endscop
}
