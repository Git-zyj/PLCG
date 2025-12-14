/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 130804
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=130804 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/130804
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_10 *= var_6;

    for (int i_0 = 2; i_0 < 17;i_0 += 1)
    {
        var_11 *= ((4294967295 % (arr_1 [i_0] [i_0])));
        arr_2 [i_0] = var_8;
    }
    for (int i_1 = 4; i_1 < 9;i_1 += 1)
    {
        arr_6 [i_1] [i_1] = var_9;

        /* vectorizable */
        for (int i_2 = 0; i_2 < 10;i_2 += 1) /* same iter space */
        {
            arr_10 [i_2] [i_1] [i_1] = (arr_4 [i_1 + 1]);
            var_12 = (((arr_9 [i_1] [i_1] [i_1 - 2]) * (arr_0 [i_1 - 1])));
        }
        for (int i_3 = 0; i_3 < 10;i_3 += 1) /* same iter space */
        {
            arr_13 [i_1] = min(4294967295, (((arr_8 [i_1]) ? (arr_5 [i_1 - 2] [7]) : var_3)));
            arr_14 [i_1] [i_3] = (((arr_12 [i_1] [i_1] [i_1]) ? (max(var_4, (arr_12 [0] [i_1 - 1] [i_3]))) : var_4));
        }
        for (int i_4 = 0; i_4 < 1;i_4 += 1)
        {
            /* LoopNest 2 */
            for (int i_5 = 0; i_5 < 10;i_5 += 1)
            {
                for (int i_6 = 0; i_6 < 10;i_6 += 1)
                {
                    {
                        arr_23 [6] [i_1] [8] [i_5] [i_6] [7] = (arr_16 [i_1 - 2] [i_4]);
                        arr_24 [i_1] [i_1] [i_1] [i_4] [3] [i_6] = var_0;
                        arr_25 [i_1 - 1] [i_4] [i_5] [i_6] = (-((max((arr_17 [0] [i_5]), (arr_17 [i_1] [i_1 - 4])))));
                    }
                }
            }
            /* LoopNest 2 */
            for (int i_7 = 0; i_7 < 10;i_7 += 1)
            {
                for (int i_8 = 0; i_8 < 1;i_8 += 1)
                {
                    {
                        var_13 = (max(var_13, (min((((arr_4 [i_1]) || (var_7 == var_1))), (!var_7)))));
                        arr_33 [i_8] = ((((max(var_2, (arr_11 [i_1] [i_7] [i_1 - 4])))) << (!1641830544)));

                        for (int i_9 = 3; i_9 < 8;i_9 += 1)
                        {
                            var_14 = (max((((arr_31 [i_8] [i_1 + 1] [i_9 - 2] [i_9 - 1]) ? (arr_31 [i_8] [i_1 + 1] [i_9 + 1] [i_9 + 2]) : var_1)), (((arr_31 [i_8] [i_1 - 2] [i_9 - 3] [i_9 - 3]) ? var_9 : (arr_31 [i_8] [i_1 - 2] [i_9 - 1] [i_9 + 2])))));
                            var_15 = (min(var_15, var_2));
                        }
                        var_16 = (arr_9 [i_1 + 1] [i_1 - 1] [i_1 - 2]);
                    }
                }
            }
            arr_37 [i_1] [i_4] = -var_4;
        }
        arr_38 [0] = ((-(max((arr_15 [1]), (arr_29 [i_1] [i_1 - 3] [i_1 - 3])))));
        /* LoopNest 2 */
        for (int i_10 = 1; i_10 < 1;i_10 += 1)
        {
            for (int i_11 = 0; i_11 < 10;i_11 += 1)
            {
                {
                    var_17 += (((min((var_4 * var_1), -var_8)) * ((min(2151238673, -var_1)))));
                    var_18 = var_1;
                    /* LoopNest 2 */
                    for (int i_12 = 0; i_12 < 10;i_12 += 1)
                    {
                        for (int i_13 = 0; i_13 < 10;i_13 += 1)
                        {
                            {
                                var_19 = (max(var_19, ((max(var_1, (((max(4428318904714470297, 189)) * 1)))))));
                                arr_54 [i_1] [i_12] [i_11] [i_10] [4] [i_10 - 1] [i_13] |= (arr_42 [4] [i_12] [4]);
                            }
                        }
                    }
                }
            }
        }
    }
    var_20 -= ((-((max(var_3, var_3)))));
    #pragma endscop
}
