/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 119915
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=119915 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/119915
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_19 |= (min(var_14, var_5));

    for (int i_0 = 1; i_0 < 18;i_0 += 1)
    {
        arr_2 [7] = ((+((8034315082508395345 ? (arr_0 [i_0]) : (max(8034315082508395338, 40655))))));
        var_20 = (((-var_9 ? var_9 : (var_15 < 10412428991201156271))));
        /* LoopNest 3 */
        for (int i_1 = 0; i_1 < 21;i_1 += 1)
        {
            for (int i_2 = 1; i_2 < 19;i_2 += 1)
            {
                for (int i_3 = 1; i_3 < 20;i_3 += 1)
                {
                    {
                        var_21 = -32765;
                        arr_10 [i_3] [i_3] [i_1] [i_3] = ((-(min((arr_1 [i_2 + 2]), (arr_1 [i_2 - 1])))));
                        arr_11 [i_3] [i_1] [i_2] [i_1] = (arr_7 [i_3] [i_2]);

                        for (int i_4 = 0; i_4 < 21;i_4 += 1)
                        {
                            var_22 = (max((!var_1), 8034315082508395341));
                            var_23 = (!var_2);
                            var_24 = var_5;
                            arr_15 [i_3] = var_11;
                        }
                        for (int i_5 = 0; i_5 < 21;i_5 += 1)
                        {
                            arr_20 [i_2] [i_3] = (arr_7 [i_0] [16]);
                            arr_21 [i_3] [16] [10] [i_3] = ((110 ? (min((arr_4 [i_0] [i_1] [i_0]), 4294967295)) : (((min(var_1, 4294967295)) / 63963))));
                        }
                        for (int i_6 = 1; i_6 < 19;i_6 += 1)
                        {
                            arr_25 [i_0] [i_1] [i_3] [i_3] [i_6] = arr_8 [i_3] [i_1] [i_1] [i_1] [i_1];
                            var_25 *= ((!((min((max(var_1, (arr_18 [i_0] [i_1] [6] [i_1] [i_0] [6] [i_1]))), var_6)))));
                        }
                    }
                }
            }
        }
    }
    /* vectorizable */
    for (int i_7 = 1; i_7 < 18;i_7 += 1)
    {
        var_26 *= var_0;
        var_27 ^= (((~var_6) | -32768));
        var_28 = var_6;

        for (int i_8 = 2; i_8 < 16;i_8 += 1)
        {
            var_29 *= ((((((arr_24 [i_7] [14] [i_8] [i_7 + 1] [i_7 + 1]) ? (arr_7 [i_7] [i_7]) : (arr_26 [i_8])))) ? (arr_8 [i_8] [i_7] [0] [i_7 + 1] [0]) : (arr_28 [i_7 - 1] [i_8])));
            /* LoopNest 2 */
            for (int i_9 = 0; i_9 < 19;i_9 += 1)
            {
                for (int i_10 = 2; i_10 < 18;i_10 += 1)
                {
                    {
                        arr_36 [14] [18] [i_9] [i_10] [i_7] = (!-87);
                        arr_37 [i_7 - 1] [i_8] [i_10] &= var_2;
                    }
                }
            }
            arr_38 [i_7] = 1420676942375617012;

            for (int i_11 = 0; i_11 < 19;i_11 += 1)
            {
                var_30 = (arr_32 [i_7] [i_8 - 1] [i_8]);

                for (int i_12 = 4; i_12 < 17;i_12 += 1)
                {
                    arr_46 [i_7] [i_7] [4] [i_7] = ((53815 >> (31665 - 31645)));
                    arr_47 [3] [i_7] = (arr_3 [i_8 - 2]);

                    for (int i_13 = 4; i_13 < 17;i_13 += 1)
                    {
                        arr_50 [i_7] [i_7] = 0;
                        arr_51 [i_7] = (((arr_22 [i_7 + 1] [i_7] [4] [i_7] [i_7 + 1] [i_7 + 1]) ? (arr_22 [14] [i_7] [i_7] [i_7] [i_7 + 1] [i_11]) : (arr_41 [i_13] [i_13] [i_7 + 1])));
                        arr_52 [i_7] [i_13] [i_13] [i_7] [12] [i_13 + 2] [i_8] = var_10;
                        var_31 = ((~(arr_48 [i_13 + 2] [i_13] [i_13 + 1] [i_13 - 1] [i_13 + 2])));
                        arr_53 [i_7] [i_7] [i_7] [i_11] [i_12] [15] = 1;
                    }
                }
                for (int i_14 = 1; i_14 < 18;i_14 += 1)
                {
                    var_32 = ((!((((arr_0 [17]) ? var_4 : 47859)))));
                    arr_58 [i_7] [0] = ((arr_8 [i_7] [i_8 - 1] [i_7 + 1] [i_7] [i_7]) ? (arr_8 [i_7] [i_8 + 1] [i_7 - 1] [i_7] [i_7]) : 517254912);
                    var_33 = ((~((~(arr_41 [16] [i_8] [i_7])))));
                }
            }
        }
    }
    var_34 = ((-(min((-81 / 951776967), ((min(var_0, var_1)))))));
    var_35 = var_9;
    #pragma endscop
}
