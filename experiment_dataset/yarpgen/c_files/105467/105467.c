/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 105467
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=105467 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/105467
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 0; i_0 < 14;i_0 += 1)
    {
        var_14 = 26;
        arr_3 [7] = ((6815419421393458515 ? (((1 | -27) ? 26 : (arr_2 [i_0]))) : (arr_0 [i_0] [i_0])));
    }
    for (int i_1 = 1; i_1 < 1;i_1 += 1) /* same iter space */
    {
        var_15 = ((((14540 ? (-6 && var_13) : (!26))) * 0));
        var_16 = (arr_5 [i_1]);
    }
    for (int i_2 = 1; i_2 < 1;i_2 += 1) /* same iter space */
    {
        var_17 = 0;

        /* vectorizable */
        for (int i_3 = 0; i_3 < 23;i_3 += 1)
        {

            for (int i_4 = 0; i_4 < 23;i_4 += 1)
            {
                arr_12 [i_2 - 1] = (((arr_8 [i_2 - 1]) ? (arr_8 [i_2 - 1]) : (arr_8 [i_2 - 1])));
                arr_13 [3] [i_4] = (arr_8 [i_4]);
            }
            for (int i_5 = 4; i_5 < 21;i_5 += 1)
            {

                for (int i_6 = 0; i_6 < 23;i_6 += 1)
                {
                    var_18 = ((16 ? (arr_16 [1] [i_5 - 2] [i_2 - 1]) : 26));
                    var_19 = (((arr_4 [i_5 + 1] [1]) << (((arr_6 [i_5 - 2] [i_2 - 1]) - 1094653225))));
                    var_20 = (min(var_20, (((arr_7 [i_2 - 1]) & (arr_7 [i_2 - 1])))));
                }
                arr_19 [i_5 - 3] [1] [i_2 - 1] = 16;
                var_21 = (((arr_6 [i_5 - 1] [i_2 - 1]) ? (arr_4 [i_2] [7]) : (((arr_8 [i_2]) ? (arr_6 [i_2] [i_2]) : 62))));
            }
            /* LoopNest 3 */
            for (int i_7 = 4; i_7 < 22;i_7 += 1)
            {
                for (int i_8 = 0; i_8 < 1;i_8 += 1)
                {
                    for (int i_9 = 1; i_9 < 1;i_9 += 1)
                    {
                        {
                            arr_27 [i_9] [18] [12] [4] [i_7 - 4] [i_8] [i_9 - 1] = (~84);
                            arr_28 [i_3] [i_9] [i_7 + 1] [i_7 + 1] [i_9] = (((arr_24 [i_2 - 1] [1] [i_7 - 4] [i_9 - 1]) ? (arr_24 [i_8] [i_8] [i_7 - 3] [i_9 - 1]) : (arr_24 [i_9 - 1] [1] [i_7 - 2] [i_9 - 1])));
                        }
                    }
                }
            }

            for (int i_10 = 1; i_10 < 21;i_10 += 1)
            {
                var_22 = (min(var_22, 127));
                arr_31 [i_10] [i_3] [i_3] [i_10] = ((!(~2770543980)));
            }
            arr_32 [i_2] &= ((((arr_11 [i_3] [i_3] [20] [i_3]) + 1048568)));
        }
        for (int i_11 = 1; i_11 < 21;i_11 += 1)
        {
            var_23 |= ((min(529640040, (arr_9 [i_11 + 1]))));
            arr_35 [i_2 - 1] = (min((!-var_5), ((31135 * (arr_9 [i_11 + 1])))));
        }
        for (int i_12 = 2; i_12 < 19;i_12 += 1)
        {
            var_24 = ((((((arr_39 [i_12 + 3]) / (arr_39 [i_12 + 3])))) % (min((arr_22 [i_2 - 1]), (arr_39 [i_12 - 1])))));
            var_25 = (arr_38 [2] [i_12] [i_12]);
            var_26 = ((max((arr_37 [i_12 + 1] [i_2 - 1]), (arr_36 [i_2 - 1]))));
            arr_40 [i_2] [7] [i_12] = ((-(min((109 - 224), (arr_14 [i_2 - 1] [9] [i_2 - 1] [i_12])))));
        }
    }
    var_27 = (((-7 + 2147483647) << 0));
    #pragma endscop
}
