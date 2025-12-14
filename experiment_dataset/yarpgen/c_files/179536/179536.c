/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 179536
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=179536 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/179536
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 0; i_0 < 10;i_0 += 1)
    {
        arr_3 [i_0] &= var_10;
        var_14 = (((min((arr_0 [i_0]), -29933)) % 29901));

        for (int i_1 = 0; i_1 < 10;i_1 += 1)
        {
            var_15 = ((((min((arr_4 [i_1] [i_0]), (-127 - 1)))) && ((((max(var_6, 29933)) & var_4)))));
            var_16 += (arr_1 [i_0]);
            /* LoopNest 3 */
            for (int i_2 = 0; i_2 < 10;i_2 += 1)
            {
                for (int i_3 = 3; i_3 < 9;i_3 += 1)
                {
                    for (int i_4 = 0; i_4 < 10;i_4 += 1)
                    {
                        {
                            arr_14 [i_4] [i_3] [i_2] [i_0] [i_0] = (max((-9223372036854775806 && 4006150066), (max(32767, (arr_12 [i_4] [1] [i_2] [i_1] [i_0])))));
                            arr_15 [i_0] [i_0] = (((((min(var_2, var_1)) / (min(var_8, (arr_13 [6] [i_1] [2] [i_0] [i_4] [i_0] [i_4]))))) * (((((arr_1 [i_3]) || var_5))))));
                            arr_16 [i_0] [i_0] [i_0] [i_0] [i_0] [i_0] = (max(7838, (max((arr_11 [i_1] [i_2] [i_3 + 1] [i_4]), 9223372036854775805))));
                            var_17 = ((((((arr_12 [i_3 - 3] [i_3 - 3] [1] [i_3] [i_3 - 2]) + 2147483647)) >> (-20124 + 20139))) * ((-(arr_12 [i_3 - 2] [i_3 + 1] [7] [i_3] [i_2]))));
                        }
                    }
                }
            }
        }
        /* vectorizable */
        for (int i_5 = 0; i_5 < 10;i_5 += 1)
        {
            var_18 += ((((126 >> (112 - 92))) & (29934 && var_0)));
            arr_19 [i_0] = (((arr_8 [i_5] [i_5] [i_0]) | ((15277863461753783493 ? var_13 : (arr_1 [6])))));
            var_19 &= (((arr_10 [i_0] [i_5]) / (arr_10 [i_0] [i_5])));
        }
    }
    for (int i_6 = 0; i_6 < 22;i_6 += 1)
    {
        var_20 -= -9223372036854775788;
        var_21 = (((var_6 ? ((max(var_7, (arr_21 [i_6])))) : (51 / var_10))));
        /* LoopNest 2 */
        for (int i_7 = 0; i_7 < 22;i_7 += 1)
        {
            for (int i_8 = 0; i_8 < 22;i_8 += 1)
            {
                {
                    var_22 = (max(var_22, (arr_20 [i_8])));
                    var_23 = (((((((-9223372036854775807 - 1) ^ (arr_22 [i_7])))) | ((19957 ? -8714565466329609534 : 17602961531324209194)))));
                    var_24 &= var_4;
                }
            }
        }
        var_25 = ((((arr_24 [i_6]) ? (max(var_3, (arr_24 [1]))) : var_9)));
        var_26 = (max(585744054, 9223372036854775799));
    }
    for (int i_9 = 3; i_9 < 7;i_9 += 1)
    {
        /* LoopNest 3 */
        for (int i_10 = 0; i_10 < 10;i_10 += 1)
        {
            for (int i_11 = 0; i_11 < 1;i_11 += 1)
            {
                for (int i_12 = 2; i_12 < 9;i_12 += 1)
                {
                    {
                        var_27 = ((((((var_11 << (var_9 - 40))) | (max((arr_36 [i_12] [i_11] [i_10] [i_9]), var_11))))) & (arr_2 [i_11] [i_12]));

                        for (int i_13 = 0; i_13 < 10;i_13 += 1)
                        {
                            var_28 = (~19);
                            var_29 = 8714565466329609534;
                        }
                    }
                }
            }
        }
        arr_40 [i_9] = (((var_10 ^ var_1) + -1791074098201453631));
    }
    for (int i_14 = 1; i_14 < 20;i_14 += 1)
    {
        var_30 = (max(var_30, (min(((var_4 >> (((arr_26 [i_14 - 1] [i_14] [i_14 + 2]) - 1677216271)))), (((arr_26 [i_14 - 1] [13] [i_14 - 1]) / var_4))))));
        var_31 = ((8041 << (69 - 68)));
    }
    var_32 = (max(var_32, ((min((~var_9), -47)))));
    var_33 = var_8;
    var_34 = (max(var_6, var_2));
    var_35 = ((var_8 ? ((((max(var_7, var_11))) ? var_13 : (min(var_12, var_1)))) : var_13));
    #pragma endscop
}
