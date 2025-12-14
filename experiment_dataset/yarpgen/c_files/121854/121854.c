/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 121854
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=121854 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/121854
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    /* vectorizable */
    for (int i_0 = 0; i_0 < 13;i_0 += 1)
    {
        arr_2 [i_0] [i_0] = (arr_0 [i_0]);
        /* LoopNest 2 */
        for (int i_1 = 0; i_1 < 13;i_1 += 1)
        {
            for (int i_2 = 1; i_2 < 1;i_2 += 1)
            {
                {
                    var_13 = (min(var_13, 0));
                    var_14 = (((arr_5 [i_2 - 1] [i_2] [i_2 - 1] [i_2 - 1]) ? (arr_5 [i_2] [i_2 - 1] [0] [i_2 - 1]) : (arr_5 [i_1] [i_1] [i_1] [i_2 - 1])));
                }
            }
        }
    }
    var_15 = (min(var_10, (((-((max(var_12, -16))))))));

    for (int i_3 = 2; i_3 < 9;i_3 += 1)
    {
        var_16 = ((((min((arr_7 [i_3 - 1]), (arr_5 [i_3] [i_3] [i_3 - 1] [i_3 + 1])))) ? (-121 & -12631) : var_7));
        arr_9 [i_3] [i_3] = (!var_11);
    }
    for (int i_4 = 2; i_4 < 17;i_4 += 1)
    {
        arr_13 [4] = ((((var_7 / var_3) * -815276996)));
        var_17 += (((max((min(815276971, (arr_11 [i_4]))), (((arr_10 [i_4]) | (arr_11 [i_4]))))) * ((var_7 + ((171 ? 1 : (arr_10 [i_4 - 2])))))));

        for (int i_5 = 1; i_5 < 19;i_5 += 1)
        {
            arr_16 [i_4] [i_4 - 2] = (((((var_8 ? (arr_14 [i_5] [i_5 + 1]) : var_7))) ? ((((3293717222 == (arr_14 [i_5 - 1] [i_5 + 1]))))) : (min((arr_14 [i_5] [i_5 + 1]), (arr_14 [i_5 + 1] [i_5 + 1])))));
            var_18 = (min(var_8, ((((arr_14 [i_5 + 2] [i_5]) != ((max(var_4, var_10))))))));
            var_19 = (min(-2630090400168434131, ((((max(var_4, var_7))) ? -815276996 : (arr_14 [i_5 + 2] [i_5])))));
        }
        for (int i_6 = 0; i_6 < 21;i_6 += 1)
        {

            /* vectorizable */
            for (int i_7 = 1; i_7 < 17;i_7 += 1)
            {

                for (int i_8 = 3; i_8 < 19;i_8 += 1)
                {

                    for (int i_9 = 4; i_9 < 19;i_9 += 1)
                    {
                        var_20 = 16686;
                        arr_30 [i_7] = 1;
                        arr_31 [i_7] [i_6] [i_4 - 2] [i_4 - 2] [i_9] [i_4 + 1] = (arr_28 [i_7] [i_7]);
                    }

                    for (int i_10 = 0; i_10 < 21;i_10 += 1)
                    {
                        arr_34 [i_7] [i_7] = (((arr_14 [i_4 + 4] [i_4 + 2]) ? -7351347461397261086 : (arr_14 [i_4 - 1] [i_4 + 4])));
                        arr_35 [i_10] [i_7] [i_8] [i_7] [i_6] [i_7] [i_4] = 127;
                    }
                    arr_36 [i_4] [i_4] [i_4] [i_4] [i_4 + 3] [i_7] = (arr_25 [i_4] [i_6] [i_4] [i_8] [i_4 - 1]);
                    arr_37 [i_4 + 1] [i_6] [i_7] [i_7] = ((20 ? var_2 : (((arr_12 [i_4] [i_4 + 3]) ? (arr_14 [i_4] [i_4]) : 1001250083))));
                }
                var_21 = ((((((-2630090400168434131 + 9223372036854775807) << (((-1539284472 + 1539284477) - 5))))) != ((var_12 ? 6511321750674785048 : 1777322905))));
            }
            for (int i_11 = 0; i_11 < 21;i_11 += 1)
            {
                var_22 = (arr_19 [i_11]);
                arr_40 [i_4 + 2] [i_6] [i_11] = (max(52601, -815277003));
            }
            for (int i_12 = 0; i_12 < 21;i_12 += 1)
            {
                arr_44 [i_6] = ((+(max((arr_32 [i_4 + 4] [i_6] [i_6] [i_6] [i_4]), (arr_38 [i_4 - 1])))));
                var_23 = (min(var_23, ((max((-18831 * 15367), ((min(1, var_6))))))));
            }
            var_24 = var_9;
        }
        for (int i_13 = 4; i_13 < 17;i_13 += 1)
        {
            var_25 = (min(3293717223, -18860));
            var_26 |= (min((((arr_41 [i_4 + 2] [i_4] [i_4] [i_4 + 2]) ? (min(var_6, var_8)) : ((((arr_18 [i_4]) ? var_4 : -72))))), (((-((max((arr_23 [i_13]), var_12))))))));
            arr_49 [i_4] [i_4] = ((min((max(65535, 1)), (1 <= var_6))));
        }
        arr_50 [i_4 - 2] = ((((-111 > (~1))) ? 1 : (var_7 * var_12)));
        var_27 = 1228100976;
    }
    #pragma endscop
}
