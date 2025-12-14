/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 14875
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=14875 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/14875
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_10 &= (max(13880001255211437625, -754471763));

    for (int i_0 = 0; i_0 < 1;i_0 += 1)
    {
        /* LoopNest 2 */
        for (int i_1 = 3; i_1 < 8;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 1;i_2 += 1)
            {
                {
                    var_11 = (max(var_11, ((min((arr_5 [i_0] [i_1 + 1] [i_2]), (((-16 != (max(var_3, 8341))))))))));
                    arr_8 [i_0] [i_0] [i_0] [i_0] &= ((arr_5 [i_2] [i_2] [i_2]) & var_3);
                }
            }
        }
        var_12 ^= ((-((min((arr_6 [i_0] [i_0] [i_0]), (arr_6 [i_0] [i_0] [i_0]))))));
        var_13 = (((arr_3 [i_0] [i_0]) ? (min(-16, (arr_7 [i_0] [i_0] [i_0]))) : (((arr_7 [i_0] [i_0] [i_0]) * (arr_2 [i_0])))));
        /* LoopNest 2 */
        for (int i_3 = 0; i_3 < 12;i_3 += 1)
        {
            for (int i_4 = 0; i_4 < 12;i_4 += 1)
            {
                {
                    var_14 = -7127628773411946686;
                    var_15 ^= 108;

                    for (int i_5 = 0; i_5 < 12;i_5 += 1)
                    {

                        /* vectorizable */
                        for (int i_6 = 0; i_6 < 1;i_6 += 1)
                        {
                            arr_19 [i_0] [i_3] [i_4] [i_4] [10] &= ((-(arr_9 [i_3])));
                            var_16 += -126;
                            arr_20 [i_0] [i_4] [i_0] = (-31612 | var_2);
                            arr_21 [i_0] [i_0] [i_0] = (arr_10 [i_5] [i_3] [i_5]);
                        }
                        for (int i_7 = 0; i_7 < 12;i_7 += 1)
                        {
                            var_17 = (min(((max(var_7, (1 > 1)))), var_1));
                            var_18 = (max(10275, 556972867));
                            var_19 = (max(var_19, ((max(((((var_8 * var_6) >= (arr_22 [i_0] [i_0] [3] [i_0] [i_0] [0])))), (arr_0 [i_4] [i_7]))))));
                        }
                        arr_25 [5] [i_3] [i_4] [i_5] [i_5] = arr_11 [i_0];
                        var_20 = -982062736;
                    }
                    for (int i_8 = 2; i_8 < 8;i_8 += 1)
                    {
                        arr_29 [i_0] [i_3] [i_4] [i_4] |= (max((((((((arr_5 [i_3] [i_4] [i_8]) <= var_1))) < (arr_0 [i_0] [i_0])))), var_1));
                        var_21 -= (arr_4 [i_3] [i_3] [i_3]);
                        var_22 |= (min(var_0, (arr_4 [i_0] [8] [i_4])));
                    }
                    var_23 -= ((~((((max(-31607, 18446744073709551611)) >= (arr_18 [i_0] [i_0] [i_3] [i_4] [i_3]))))));
                }
            }
        }
    }
    var_24 &= ((~((min(7, var_9)))));
    /* LoopNest 2 */
    for (int i_9 = 2; i_9 < 11;i_9 += 1)
    {
        for (int i_10 = 0; i_10 < 14;i_10 += 1)
        {
            {
                arr_34 [i_9] [i_9] = (min((arr_30 [13]), 1));
                var_25 -= ((!((min((arr_31 [i_9 - 1]), (arr_33 [i_9 + 1]))))));
            }
        }
    }
    #pragma endscop
}
