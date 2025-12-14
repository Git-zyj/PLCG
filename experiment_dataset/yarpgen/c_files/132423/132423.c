/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 132423
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=132423 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/132423
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_13 = (max(var_13, (((max(((var_6 ? 0 : var_0), (1 * 0))))))));

    /* vectorizable */
    for (int i_0 = 0; i_0 < 1;i_0 += 1)
    {
        arr_3 [i_0] = (~var_8);
        arr_4 [i_0] = var_11;
        /* LoopNest 2 */
        for (int i_1 = 1; i_1 < 1;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 1;i_2 += 1)
            {
                {
                    var_14 = (((arr_0 [i_1 - 1]) ^ 0));
                    var_15 = (max(var_15, (var_2 & 1)));
                }
            }
        }

        for (int i_3 = 0; i_3 < 1;i_3 += 1)
        {
            /* LoopNest 2 */
            for (int i_4 = 0; i_4 < 1;i_4 += 1)
            {
                for (int i_5 = 1; i_5 < 1;i_5 += 1)
                {
                    {
                        var_16 = ((arr_9 [i_0] [i_0] [i_0] [1]) >= var_0);
                        var_17 = ((1 * ((1 ? var_11 : (arr_14 [i_0])))));
                    }
                }
            }
            var_18 -= (~0);
        }
        for (int i_6 = 0; i_6 < 1;i_6 += 1)
        {
            var_19 = var_6;
            /* LoopNest 3 */
            for (int i_7 = 1; i_7 < 1;i_7 += 1)
            {
                for (int i_8 = 0; i_8 < 1;i_8 += 1)
                {
                    for (int i_9 = 0; i_9 < 1;i_9 += 1)
                    {
                        {
                            var_20 += (((arr_25 [1] [i_7 - 1] [i_7 - 1] [i_7]) ? 0 : ((var_8 ? 0 : 1))));
                            var_21 -= (1 == 1);
                        }
                    }
                }
            }
            var_22 = (max(var_22, 0));
            var_23 -= ((1 ? (1 - 0) : ((1 ? 1 : 1))));
            var_24 = (!(arr_22 [1] [i_0] [i_0] [1]));
        }
        /* LoopNest 2 */
        for (int i_10 = 1; i_10 < 1;i_10 += 1)
        {
            for (int i_11 = 0; i_11 < 1;i_11 += 1)
            {
                {
                    var_25 *= arr_18 [i_0] [i_0] [i_10] [i_11];
                    arr_33 [i_0] [i_10] = (!1);
                    arr_34 [1] &= (1 & 1);
                    arr_35 [i_0] [i_0] = (!1);
                    arr_36 [i_0] [i_0] [i_10] [i_0] = (1 >= 1);
                }
            }
        }
    }
    for (int i_12 = 0; i_12 < 1;i_12 += 1)
    {
        /* LoopNest 3 */
        for (int i_13 = 0; i_13 < 1;i_13 += 1)
        {
            for (int i_14 = 0; i_14 < 1;i_14 += 1)
            {
                for (int i_15 = 0; i_15 < 1;i_15 += 1)
                {
                    {
                        arr_46 [i_13] [i_13] [1] [i_13] [i_13] = 1;
                        arr_47 [i_13] = (min(0, (min((1 % 1), ((-(arr_17 [i_13] [i_13])))))));
                    }
                }
            }
        }
        var_26 = (max(var_26, (arr_16 [i_12] [i_12] [1])));
        arr_48 [i_12] [i_12] = var_6;
        var_27 ^= arr_30 [i_12] [i_12];
    }

    for (int i_16 = 0; i_16 < 1;i_16 += 1)
    {
        /* LoopNest 2 */
        for (int i_17 = 0; i_17 < 1;i_17 += 1)
        {
            for (int i_18 = 0; i_18 < 1;i_18 += 1)
            {
                {
                    /* LoopNest 2 */
                    for (int i_19 = 0; i_19 < 1;i_19 += 1)
                    {
                        for (int i_20 = 0; i_20 < 1;i_20 += 1)
                        {
                            {
                                var_28 = (((((1 ? 1 : var_7)))) || 1);
                                arr_64 [i_16] = ((1 ? 1 : 1));
                                arr_65 [i_16] [i_16] [0] [0] [i_16] [i_16] [i_16] = ((-((var_2 ? ((min(var_5, 1))) : (arr_54 [i_16])))));
                            }
                        }
                    }
                    var_29 = (min(((-1 ? 1 : 0)), var_4));
                    /* LoopNest 2 */
                    for (int i_21 = 0; i_21 < 1;i_21 += 1)
                    {
                        for (int i_22 = 0; i_22 < 1;i_22 += 1)
                        {
                            {
                                arr_73 [i_16] [i_21] [1] = 1;
                                arr_74 [i_16] [i_21] [i_16] [i_16] [i_16] = (((((1 & 1) < 1)) ? 1 : 0));
                            }
                        }
                    }
                }
            }
        }
        var_30 = (~-1);
        arr_75 [i_16] = (!1);
        arr_76 [0] [i_16] &= ((((((~(arr_29 [i_16]))) <= -0)) ? ((~((var_6 ? 1 : 0)))) : ((-(arr_17 [i_16] [i_16])))));
    }
    for (int i_23 = 0; i_23 < 1;i_23 += 1)
    {
        var_31 = (max(var_31, ((max((1 & 1), (((~1) ? 1 : -1)))))));
        var_32 = ((var_0 % (~-0)));
    }
    for (int i_24 = 0; i_24 < 1;i_24 += 1)
    {
        arr_81 [i_24] [i_24] = (((1 ? 0 : (1 % 1))));
        arr_82 [i_24] = ((1 ? ((-(arr_80 [i_24]))) : (max((1 * var_7), -1))));
        arr_83 [i_24] [i_24] = ((~(((-1 >= ((1 ? 1 : 1)))))));
        var_33 &= ((((((arr_79 [i_24]) || (arr_79 [i_24])))) % ((1 ? 1 : 0))));
        arr_84 [i_24] = arr_79 [i_24];
    }
    #pragma endscop
}
