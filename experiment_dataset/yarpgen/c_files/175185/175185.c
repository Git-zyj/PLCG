/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 175185
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=175185 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/175185
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 2; i_0 < 15;i_0 += 1)
    {
        var_14 = var_10;
        var_15 = (+((max((arr_0 [i_0 - 2]), (arr_0 [i_0 + 1])))));
    }
    for (int i_1 = 3; i_1 < 9;i_1 += 1)
    {
        var_16 = (max((arr_0 [i_1 - 1]), (arr_0 [i_1 + 2])));
        var_17 = (((~103) % (arr_1 [i_1 + 1])));
    }
    for (int i_2 = 2; i_2 < 22;i_2 += 1)
    {
        arr_8 [i_2] [i_2 + 2] = var_9;
        /* LoopNest 2 */
        for (int i_3 = 2; i_3 < 22;i_3 += 1)
        {
            for (int i_4 = 0; i_4 < 24;i_4 += 1)
            {
                {
                    arr_14 [i_2] [i_2] [i_2] = min((arr_6 [i_2 - 2]), var_9);
                    var_18 = ((((max(0, 41))) ? (arr_5 [i_3] [17]) : (32745 * var_4)));
                }
            }
        }
    }
    for (int i_5 = 3; i_5 < 16;i_5 += 1)
    {
        arr_17 [i_5] = (-127 - 1);

        for (int i_6 = 0; i_6 < 17;i_6 += 1)
        {
            var_19 = ((((((((((arr_5 [0] [1]) <= var_11)))) | var_5))) ? (((var_8 * 1) ? (var_2 < var_1) : 1153870002)) : (arr_15 [i_5] [i_6])));
            arr_20 [i_6] [i_5 - 3] = (arr_18 [i_5] [i_6]);

            /* vectorizable */
            for (int i_7 = 1; i_7 < 16;i_7 += 1)
            {
                arr_25 [i_5] [i_5] [i_6] [i_7] = ((~(arr_22 [i_7])));
                /* LoopNest 2 */
                for (int i_8 = 4; i_8 < 14;i_8 += 1)
                {
                    for (int i_9 = 2; i_9 < 16;i_9 += 1)
                    {
                        {
                            var_20 ^= (((var_11 % var_6) ? ((-17275 ? 153 : 153)) : (((arr_11 [i_6] [i_7] [i_9 + 1]) % (arr_23 [i_6] [i_6] [8] [i_5])))));
                            var_21 = (max(var_21, ((((arr_27 [i_9 + 1] [i_9] [i_9] [i_9] [i_9]) ? (arr_27 [i_9 - 2] [i_9 - 2] [i_6] [14] [i_9 + 1]) : (arr_27 [i_9 + 1] [i_9] [i_9] [i_9] [i_9]))))));
                            arr_33 [i_7] [7] = ((var_1 % (arr_9 [i_8] [i_7] [i_5])));
                        }
                    }
                }
                var_22 = (arr_28 [i_5] [i_6] [i_7]);
            }
            /* vectorizable */
            for (int i_10 = 0; i_10 < 1;i_10 += 1)
            {
                /* LoopNest 2 */
                for (int i_11 = 0; i_11 < 1;i_11 += 1)
                {
                    for (int i_12 = 0; i_12 < 17;i_12 += 1)
                    {
                        {
                            var_23 = ((((~(arr_35 [i_5 + 1]))) ^ var_8));
                            arr_42 [i_5] [i_5] [i_5] = ((!(((var_2 ? var_0 : var_12)))));
                        }
                    }
                }

                for (int i_13 = 0; i_13 < 1;i_13 += 1)
                {
                    arr_47 [i_13] = ((14353 ? (arr_16 [i_5 - 1] [i_5 - 2]) : var_2));
                    var_24 &= (((((arr_46 [i_5] [i_10] [i_13]) / var_7)) % (((var_10 ? (arr_36 [i_5] [i_6] [i_10] [i_6]) : 17275)))));
                    var_25 = -1162167753;

                    for (int i_14 = 0; i_14 < 17;i_14 += 1)
                    {
                        arr_50 [i_14] [i_13] [i_10] [13] [i_10] [i_6] [i_5] = ((((1153870018 ? var_9 : (arr_44 [i_5] [i_5] [i_13] [i_14]))) % -1162167753));
                        arr_51 [i_5] [i_6] [i_10] [i_14] = (var_10 ? (arr_18 [i_5 - 3] [i_5]) : (arr_18 [i_5 - 3] [i_5]));
                    }
                }
                for (int i_15 = 3; i_15 < 15;i_15 += 1)
                {
                    arr_54 [i_5] [i_6] [i_6] [i_15 - 3] [i_15] [i_15] = var_9;
                    var_26 = (arr_24 [i_5] [i_15 - 1] [i_15] [i_15]);
                    var_27 = (max(var_27, (89 % 1764232559)));
                }
            }
            var_28 = ((!((((arr_26 [i_5 - 3]) ? (arr_26 [i_5 - 3]) : var_12)))));
            arr_55 [i_5] = (1 * 1);
        }
    }
    var_29 |= (max(var_8, var_0));
    #pragma endscop
}
