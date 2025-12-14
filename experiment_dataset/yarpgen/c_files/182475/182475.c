/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 182475
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=182475 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/182475
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 1; i_0 < 21;i_0 += 1)
    {
        arr_4 [6] &= (arr_2 [14] [i_0 + 1]);

        for (int i_1 = 1; i_1 < 21;i_1 += 1)
        {

            for (int i_2 = 1; i_2 < 19;i_2 += 1)
            {
                arr_10 [i_0] [i_0] = var_7;

                for (int i_3 = 1; i_3 < 19;i_3 += 1)
                {
                    var_20 = (8731 <= 1);
                    var_21 = -29343;

                    for (int i_4 = 0; i_4 < 22;i_4 += 1)
                    {
                        arr_15 [i_0] [i_1] [i_1] [i_1] [i_1] [i_1] [18] = 9223372036854775807;
                        var_22 = ((~((((arr_3 [i_1 + 1]) <= var_3)))));
                        var_23 = -7726800207191065258;
                    }
                    for (int i_5 = 0; i_5 < 22;i_5 += 1)
                    {
                        arr_18 [i_0] [i_0 + 1] = (arr_17 [i_0] [i_0] [i_2 + 2] [i_0] [i_0]);
                        var_24 = 18446744073709551615;
                        var_25 *= var_3;
                        var_26 = (min(var_18, (min(((((arr_7 [i_0 + 1] [i_0] [i_0 - 1]) <= 3925833711))), var_18))));
                        var_27 -= (var_3 == var_11);
                    }
                }
                var_28 *= var_4;
            }
            var_29 *= (arr_13 [2] [2] [8] [i_1] [i_1 + 1]);
        }
        for (int i_6 = 1; i_6 < 21;i_6 += 1)
        {
            arr_23 [i_0] [i_0] [i_0] = ((~(((arr_2 [i_0] [i_6]) ? (((var_14 == (arr_13 [i_0] [i_0] [i_0] [i_0] [i_0])))) : var_19))));
            arr_24 [i_0] [i_6] [i_0] = (min(var_3, ((((((min((arr_2 [i_0] [11]), var_19)))) == (~0))))));
            arr_25 [i_6] [i_6] [i_0] = var_17;
        }
        for (int i_7 = 0; i_7 < 22;i_7 += 1)
        {
            /* LoopNest 3 */
            for (int i_8 = 0; i_8 < 22;i_8 += 1)
            {
                for (int i_9 = 0; i_9 < 1;i_9 += 1)
                {
                    for (int i_10 = 0; i_10 < 0;i_10 += 1)
                    {
                        {
                            arr_37 [i_8] [i_0] [i_8] [6] [i_8] = (((arr_31 [i_0 - 1] [i_0 - 1] [i_0] [15]) ? ((((7580369460327834150 | -282617008) | 7223039789719893703))) : (((arr_20 [i_0 + 1] [i_0]) << (((arr_34 [17] [17] [1] [17]) - 468940293))))));
                            var_30 &= ((var_17 ? ((((arr_2 [i_8] [i_9]) || 0))) : 1));
                        }
                    }
                }
            }
            /* LoopNest 2 */
            for (int i_11 = 1; i_11 < 21;i_11 += 1)
            {
                for (int i_12 = 0; i_12 < 22;i_12 += 1)
                {
                    {
                        arr_42 [i_0] = (arr_35 [i_0 + 1]);
                        arr_43 [15] [11] [i_7] [i_11] [i_0] = (((((!(arr_19 [i_0])))) < var_9));
                    }
                }
            }
        }

        for (int i_13 = 0; i_13 < 22;i_13 += 1)
        {
            var_31 = -45730;
            arr_47 [i_0] = 1;
        }
    }
    var_32 -= ((!(((var_12 ? 1596856523 : var_6)))));
    var_33 -= 934271068;
    var_34 = var_0;
    /* LoopNest 3 */
    for (int i_14 = 0; i_14 < 1;i_14 += 1)
    {
        for (int i_15 = 4; i_15 < 10;i_15 += 1)
        {
            for (int i_16 = 2; i_16 < 10;i_16 += 1)
            {
                {
                    var_35 *= ((!(((var_4 ? var_2 : (arr_2 [i_15] [i_16 - 1]))))));
                    var_36 = 2475;
                }
            }
        }
    }
    #pragma endscop
}
