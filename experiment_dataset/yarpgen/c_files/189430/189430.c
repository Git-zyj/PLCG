/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 189430
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=189430 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/189430
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 4; i_0 < 15;i_0 += 1)
    {
        for (int i_1 = 4; i_1 < 17;i_1 += 1)
        {
            {
                /* LoopNest 3 */
                for (int i_2 = 3; i_2 < 17;i_2 += 1)
                {
                    for (int i_3 = 0; i_3 < 19;i_3 += 1)
                    {
                        for (int i_4 = 0; i_4 < 19;i_4 += 1)
                        {
                            {
                                arr_13 [5] [i_2 - 2] [i_2] [i_2 - 1] [i_0] [i_2] [i_2 - 3] = var_6;
                                arr_14 [i_0] [10] [i_2] [i_0] [i_4] = var_2;
                            }
                        }
                    }
                }

                for (int i_5 = 0; i_5 < 19;i_5 += 1)
                {
                    var_15 = ((~(((max(var_11, (arr_11 [i_0] [i_0] [i_5] [i_0 - 4] [5]))) ^ var_4))));
                    arr_17 [i_0] [i_0] [0] = ((((((var_9 ? (arr_12 [i_0] [i_0] [i_0] [i_0] [i_0] [i_5]) : var_12)))) < var_13));

                    /* vectorizable */
                    for (int i_6 = 0; i_6 < 1;i_6 += 1) /* same iter space */
                    {
                        arr_20 [i_0] [i_1] [i_5] [i_5] = (((((var_5 ? 5870 : var_3))) && (var_4 % var_3)));
                        var_16 = (arr_4 [i_1] [i_1] [i_0]);
                    }
                    /* vectorizable */
                    for (int i_7 = 0; i_7 < 1;i_7 += 1) /* same iter space */
                    {
                        var_17 = var_12;
                        var_18 = ((!(arr_4 [i_1 - 4] [i_1 - 4] [i_0])));
                        arr_24 [i_0] [i_0] [i_5] [i_7] [i_7] = (~-744416469391193264);
                        var_19 &= -23232;
                        var_20 = (var_11 < 1111933426);
                    }
                    /* vectorizable */
                    for (int i_8 = 3; i_8 < 15;i_8 += 1)
                    {
                        var_21 = (arr_5 [i_0]);
                        var_22 = ((var_8 ? (!var_13) : (((var_3 + 2147483647) << (var_11 - 13835309961757848486)))));
                    }
                }
                for (int i_9 = 0; i_9 < 19;i_9 += 1)
                {
                    arr_30 [i_0] = (var_0 ^ var_11);
                    arr_31 [i_0] [9] [i_0] = (!((max((arr_6 [i_0] [i_0]), (arr_11 [i_0] [1] [i_9] [i_9] [i_9])))));
                }
            }
        }
    }
    var_23 = ((var_11 + (!var_11)));
    var_24 = var_4;
    /* LoopNest 3 */
    for (int i_10 = 0; i_10 < 19;i_10 += 1)
    {
        for (int i_11 = 0; i_11 < 19;i_11 += 1)
        {
            for (int i_12 = 3; i_12 < 16;i_12 += 1)
            {
                {
                    arr_40 [i_11] [i_11] [i_11] [i_11] = (arr_2 [i_12]);
                    arr_41 [i_11] = var_11;
                    /* LoopNest 2 */
                    for (int i_13 = 0; i_13 < 19;i_13 += 1)
                    {
                        for (int i_14 = 0; i_14 < 19;i_14 += 1)
                        {
                            {
                                var_25 += (((var_2 / var_6) + var_2));
                                arr_48 [i_10] [i_11] [2] [i_11] [i_11] = var_1;
                            }
                        }
                    }
                    /* LoopNest 2 */
                    for (int i_15 = 0; i_15 < 1;i_15 += 1)
                    {
                        for (int i_16 = 0; i_16 < 19;i_16 += 1)
                        {
                            {
                                var_26 = ((!((((var_9 ? var_10 : 2898553795908490573))))));
                                var_27 = (min(0, var_13));
                            }
                        }
                    }

                    for (int i_17 = 3; i_17 < 18;i_17 += 1)
                    {
                        var_28 = var_6;
                        var_29 = (min(0, 6017371852022307370));
                        var_30 ^= ((~(((0 < (var_0 >= 1))))));

                        for (int i_18 = 2; i_18 < 16;i_18 += 1) /* same iter space */
                        {
                            var_31 = 1;
                            var_32 = ((!((((((var_12 ? var_8 : var_8))) ? var_7 : (var_7 >> var_2))))));
                        }
                        for (int i_19 = 2; i_19 < 16;i_19 += 1) /* same iter space */
                        {
                            arr_63 [i_19] [i_11] [i_11] [i_11] = (!0);
                            var_33 = (~8586514829634829429);
                            arr_64 [i_10] [i_11] [i_12] [i_17 + 1] [i_19] = ((-(((0 && (-127 - 1))))));
                            var_34 = ((var_2 ? var_8 : (arr_25 [i_11])));
                            arr_65 [i_10] [i_11] [i_10] [i_10] [1] = ((min((var_6 | -2898553795908490589), 8128)));
                        }
                        for (int i_20 = 2; i_20 < 16;i_20 += 1) /* same iter space */
                        {
                            arr_69 [i_11] [i_11] [13] [13] [i_20] = (((var_5 ? var_9 : (!var_13))));
                            arr_70 [i_10] [i_11] [i_12] [i_10] [14] [i_11] = var_1;
                        }
                    }
                    for (int i_21 = 4; i_21 < 17;i_21 += 1)
                    {
                        arr_73 [15] [i_11] [i_21] [i_11] = ((arr_28 [14] [i_21 - 3] [i_12 + 1]) || (!var_14));
                        arr_74 [i_10] [i_11] [i_11] [i_21 + 1] [i_21] [i_21] = ((!7596636421489358389) ^ var_12);
                        var_35 = (!((((64 ? var_4 : var_10)))));
                    }
                }
            }
        }
    }
    #pragma endscop
}
