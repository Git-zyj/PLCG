/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 114426
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=114426 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/114426
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_20 = (min(-8179, 5749));
    var_21 &= ((var_12 <= ((2147483136 ? var_1 : (((min(var_9, -4))))))));

    /* vectorizable */
    for (int i_0 = 0; i_0 < 25;i_0 += 1)
    {
        arr_2 [i_0] [i_0] = (((var_8 ^ var_6) && (arr_1 [i_0] [2])));
        var_22 = (arr_1 [i_0] [i_0]);
        var_23 -= (((arr_1 [i_0] [i_0]) ? var_9 : -3675212187599680323));

        for (int i_1 = 0; i_1 < 25;i_1 += 1)
        {
            var_24 = ((451358023370428497 && (arr_0 [i_0] [i_0])));

            for (int i_2 = 0; i_2 < 1;i_2 += 1)
            {
                var_25 ^= (((((var_15 ? -1 : var_0))) ? var_18 : (arr_1 [i_1] [i_0])));
                var_26 = (((arr_5 [i_0] [i_1] [i_0]) << (var_13 - 2568413157)));
                arr_10 [i_0] = -0;
                var_27 = (min(var_27, ((((arr_7 [i_1] [i_1] [i_1] [i_0]) << (arr_8 [i_0] [i_1] [i_1]))))));
            }
        }
        for (int i_3 = 3; i_3 < 24;i_3 += 1)
        {
            var_28 = ((var_3 ? (arr_11 [i_3 - 2] [i_3 + 1]) : (arr_12 [i_3 - 3] [i_3 + 1] [i_3 - 2])));
            /* LoopNest 2 */
            for (int i_4 = 0; i_4 < 25;i_4 += 1)
            {
                for (int i_5 = 0; i_5 < 25;i_5 += 1)
                {
                    {
                        arr_18 [i_5] [1] [i_4] [i_0] [i_5] [i_4] = (arr_0 [i_3] [i_0]);
                        arr_19 [i_0] = (((arr_6 [17] [i_3] [i_0] [i_3 - 3]) ? -95 : (arr_6 [i_0] [i_3] [i_0] [i_3 + 1])));
                        arr_20 [i_0] [i_0] [1] [i_0] = (((((var_15 & (arr_1 [i_0] [i_0])))) ? 1 : -451358023370428496));
                    }
                }
            }
            var_29 *= ((((((arr_9 [8]) ? var_3 : -26618))) ? -26639 : 27992));
            /* LoopNest 2 */
            for (int i_6 = 2; i_6 < 23;i_6 += 1)
            {
                for (int i_7 = 0; i_7 < 1;i_7 += 1)
                {
                    {
                        arr_28 [i_7] [i_0] [i_0] [i_0] = 14922198818969339935;
                        var_30 = (((arr_5 [i_3] [i_3 + 1] [i_0]) <= 4));
                    }
                }
            }
        }
    }
    for (int i_8 = 1; i_8 < 1;i_8 += 1)
    {
        var_31 = var_12;
        arr_32 [i_8] = (max(((max((arr_17 [i_8] [1] [i_8 - 1] [i_8 - 1]), (arr_17 [i_8] [2] [i_8 - 1] [i_8 - 1])))), (((min((arr_27 [16] [i_8]), (arr_29 [13]))) ? (max(var_4, (arr_27 [i_8] [5]))) : (~65535)))));
        arr_33 [i_8] [i_8] = max((((((var_0 ? 65535 : -26618))) ? (((max(-22853, var_17)))) : ((-86 ? (arr_3 [12] [i_8]) : var_0)))), 1);
    }
    for (int i_9 = 4; i_9 < 21;i_9 += 1)
    {
        arr_36 [i_9] = (min(((((arr_35 [i_9 - 4]) + (((!(arr_25 [i_9] [i_9] [i_9] [i_9] [i_9 - 2] [1]))))))), var_10));
        var_32 *= (((((2171451602 & 95) ? (var_14 & 523317674) : (min(var_13, (arr_1 [i_9] [7]))))) <= (((((arr_9 [i_9]) && var_1))))));
    }
    for (int i_10 = 2; i_10 < 19;i_10 += 1)
    {
        var_33 *= (((((((0 ? (arr_35 [i_10]) : (arr_11 [i_10 + 1] [9]))) << (((((arr_38 [12] [i_10 - 1]) + 94)) - 27))))) < (max((arr_22 [i_10 + 1] [i_10 - 2] [i_10]), ((29052 ? var_11 : -4401544944864164999))))));
        arr_41 [i_10 + 1] = ((~((min((arr_40 [i_10 + 1] [i_10 + 1]), (arr_40 [i_10 - 1] [i_10 + 2]))))));
        arr_42 [i_10] [i_10 + 1] = var_13;
    }
    #pragma endscop
}
