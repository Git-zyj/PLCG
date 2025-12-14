/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 120994
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=120994 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/120994
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 0; i_0 < 10;i_0 += 1)
    {

        for (int i_1 = 3; i_1 < 9;i_1 += 1)
        {
            /* LoopNest 3 */
            for (int i_2 = 2; i_2 < 9;i_2 += 1)
            {
                for (int i_3 = 3; i_3 < 6;i_3 += 1)
                {
                    for (int i_4 = 2; i_4 < 6;i_4 += 1)
                    {
                        {
                            arr_13 [i_0] [4] [i_4] [i_3] [i_2] [i_1 + 1] [i_2] = (((((415029826 ? var_3 : 241))) || 415029828));
                            var_20 += (arr_4 [i_0] [i_1] [i_2]);
                            arr_14 [i_0] [i_0] [i_2] [i_0] [i_2] [9] = (arr_9 [i_3 - 2] [i_3 - 2] [i_2] [i_1] [i_0] [i_0]);
                            arr_15 [i_0] [i_2] [i_1] [i_2] [6] [i_4] [i_4] = (((((min(83, (arr_6 [4] [i_2 + 1] [i_3 + 3] [i_4 + 2]))))) / (min(3879937468, (arr_6 [i_2] [i_2 + 1] [i_3 + 1] [i_4 - 1])))));
                            var_21 = (min(var_21, (((+(((arr_11 [i_3 - 1] [i_3 - 1] [i_3 - 1] [i_3] [i_3 - 3]) ? (arr_11 [i_3 - 1] [i_3 - 1] [i_3] [i_3] [i_3]) : (arr_11 [i_3 - 1] [i_3 - 1] [i_3] [i_3] [i_3]))))))));
                        }
                    }
                }
            }
            var_22 *= 2554400056;
            var_23 -= ((-9642 ? 18446744073709551615 : 52));
        }
        for (int i_5 = 0; i_5 < 10;i_5 += 1)
        {
            /* LoopNest 3 */
            for (int i_6 = 2; i_6 < 8;i_6 += 1)
            {
                for (int i_7 = 4; i_7 < 9;i_7 += 1)
                {
                    for (int i_8 = 3; i_8 < 8;i_8 += 1)
                    {
                        {
                            var_24 *= var_12;
                            var_25 = (arr_21 [i_7 + 1]);
                            var_26 *= var_7;
                        }
                    }
                }
            }
            arr_26 [i_0] [i_5] = -8697260437607818617;
        }
        var_27 = (((~var_0) ? (var_10 ^ var_4) : 195));
        arr_27 [i_0] [i_0] = (min((-4378811453690076321 / 1740567239), ((1054130997108398065 * (arr_25 [i_0] [i_0] [i_0] [i_0] [i_0])))));
        arr_28 [i_0] = ((((min((arr_20 [i_0] [i_0] [i_0]), 210))) || (arr_9 [i_0] [i_0] [i_0] [i_0] [i_0] [i_0])));
        arr_29 [i_0] = ((2554400057 - (max(var_5, (arr_18 [i_0] [i_0] [i_0])))));
    }

    for (int i_9 = 0; i_9 < 19;i_9 += 1)
    {
        var_28 = (min(((((arr_31 [i_9] [i_9]) || var_6))), (var_19 | -10511)));
        arr_33 [i_9] = -5264834279362422072;
        arr_34 [i_9] [i_9] = (!16482);
    }
    /* vectorizable */
    for (int i_10 = 3; i_10 < 11;i_10 += 1)
    {
        var_29 = (min(var_29, (96 || 9485226938860008666)));

        for (int i_11 = 0; i_11 < 14;i_11 += 1)
        {
            var_30 = 154;
            /* LoopNest 2 */
            for (int i_12 = 0; i_12 < 14;i_12 += 1)
            {
                for (int i_13 = 0; i_13 < 14;i_13 += 1)
                {
                    {
                        var_31 = arr_31 [0] [i_11];
                        var_32 = 3879937469;
                        arr_48 [i_12] [i_11] [5] [8] = 0;
                        arr_49 [i_10] [i_11] [i_12] [i_12] [i_11] [i_13] = 3879937470;
                    }
                }
            }
        }
    }
    var_33 = (max(var_33, ((var_16 * (var_11 / var_3)))));
    var_34 = (max(var_34, var_13));
    #pragma endscop
}
