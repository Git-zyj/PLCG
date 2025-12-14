/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 148045
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=148045 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/148045
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 1; i_0 < 10;i_0 += 1)
    {
        /* LoopNest 2 */
        for (int i_1 = 4; i_1 < 7;i_1 += 1)
        {
            for (int i_2 = 1; i_2 < 10;i_2 += 1)
            {
                {
                    /* LoopNest 2 */
                    for (int i_3 = 0; i_3 < 11;i_3 += 1)
                    {
                        for (int i_4 = 0; i_4 < 11;i_4 += 1)
                        {
                            {
                                arr_14 [i_0] [i_0] [i_0] [i_1] [i_4] [i_4] = (arr_3 [i_4]);
                                arr_15 [i_1 - 1] [i_1] [i_2] [i_3] [8] [i_1] [i_1] = (4276543056 % 4535);
                                arr_16 [i_1] [i_1] = min((arr_7 [i_1] [i_1]), -10749);
                            }
                        }
                    }
                    arr_17 [i_1] [i_2] [i_1] [i_1] = ((1 ? 1 : 220));
                    var_10 *= -80;
                    var_11 = (min(7717740659577320298, 220));
                    arr_18 [5] [i_1] [i_1] [5] = 15;
                }
            }
        }
        arr_19 [7] = 232;
    }
    for (int i_5 = 0; i_5 < 21;i_5 += 1)
    {

        for (int i_6 = 4; i_6 < 20;i_6 += 1)
        {
            var_12 = 1;
            arr_27 [i_6] = (arr_21 [i_5]);
            var_13 = ((((~(arr_21 [i_6 - 3]))) >> (-6375 + 6392)));
        }
        var_14 ^= ((((min(10757, (arr_26 [i_5] [i_5] [i_5])))) || 4276543045));
        var_15 &= (!var_0);
    }
    for (int i_7 = 0; i_7 < 10;i_7 += 1)
    {
        var_16 = (max(var_16, 9223372036854775807));
        var_17 = (((-32767 - 1) ? 1 : 8349));

        /* vectorizable */
        for (int i_8 = 0; i_8 < 10;i_8 += 1)
        {
            arr_33 [i_7] [i_7] [i_7] &= ((((705374945 ? 65531 : 1)) << (4276543059 - 4276543055)));
            var_18 += 65024;
            arr_34 [i_7] [i_8] [1] |= var_6;
        }
        /* vectorizable */
        for (int i_9 = 0; i_9 < 10;i_9 += 1)
        {
            arr_37 [i_7] [i_9] [i_7] = (-9165945647388862226 | -10749);
            var_19 += (arr_9 [10] [i_7] [i_7] [i_7] [i_7] [i_7]);
        }
    }
    for (int i_10 = 1; i_10 < 12;i_10 += 1)
    {
        /* LoopNest 2 */
        for (int i_11 = 0; i_11 < 13;i_11 += 1)
        {
            for (int i_12 = 4; i_12 < 12;i_12 += 1)
            {
                {
                    arr_46 [i_11] [1] [i_12] [11] = (~1);

                    for (int i_13 = 1; i_13 < 10;i_13 += 1)
                    {
                        arr_49 [i_12] [i_12] [i_10 + 1] = (arr_45 [i_13 + 2] [i_12] [0] [i_10]);

                        for (int i_14 = 0; i_14 < 13;i_14 += 1)
                        {
                            arr_52 [i_10] [i_10] [10] [10] [i_10] [i_14] [i_12] = min((max(228, 16383)), ((min((arr_41 [i_10 - 1] [4] [i_13]), 213))));
                            arr_53 [i_10] [i_10] [i_12] [i_14] [i_14] = (1 ^ 1);
                            var_20 = (max(var_20, ((max(var_9, 65198)))));
                        }
                        arr_54 [i_13] [8] [i_11] [i_11] [i_11] [0] = (arr_51 [i_11]);
                        var_21 = 119;
                        var_22 = (min(var_22, (arr_48 [1] [i_12 - 2] [i_12 - 4] [i_13] [i_12] [3])));
                    }
                }
            }
        }
        /* LoopNest 3 */
        for (int i_15 = 0; i_15 < 13;i_15 += 1)
        {
            for (int i_16 = 3; i_16 < 12;i_16 += 1)
            {
                for (int i_17 = 1; i_17 < 11;i_17 += 1)
                {
                    {
                        arr_63 [i_16] [i_16] = (arr_60 [i_15] [i_15] [12]);
                        arr_64 [i_16] [i_16] [i_16] = (~40864022);
                        arr_65 [4] [i_16] [4] [i_16] [i_10] = (min(((-((max(1, 20422))))), -10759));
                        arr_66 [1] [i_15] [i_16] [1] = (arr_57 [i_16] [i_15]);
                    }
                }
            }
        }
        arr_67 [i_10] = ((-2084448351 ? 0 : 46603));
    }
    var_23 = var_1;
    var_24 = (min(var_24, var_3));
    #pragma endscop
}
