/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 180345
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=180345 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/180345
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_12 = var_6;

    for (int i_0 = 2; i_0 < 10;i_0 += 1)
    {
        var_13 = (arr_1 [i_0 - 2]);
        arr_2 [i_0] = ((((var_11 / var_2) / var_7)));
        arr_3 [i_0] = (~var_5);
        arr_4 [i_0] = var_3;
    }
    for (int i_1 = 1; i_1 < 20;i_1 += 1) /* same iter space */
    {
        var_14 = (max((((!(arr_5 [i_1] [i_1])))), (arr_5 [i_1] [i_1])));
        var_15 -= var_9;
        var_16 = (arr_6 [i_1]);
        /* LoopNest 2 */
        for (int i_2 = 0; i_2 < 1;i_2 += 1)
        {
            for (int i_3 = 3; i_3 < 20;i_3 += 1)
            {
                {
                    var_17 = (arr_6 [i_1]);
                    var_18 = var_4;
                    var_19 *= (max((min(var_6, (arr_6 [10]))), 1833211427));
                }
            }
        }
    }
    for (int i_4 = 1; i_4 < 20;i_4 += 1) /* same iter space */
    {
        var_20 = var_1;
        var_21 ^= (min(var_6, ((-(arr_9 [6] [i_4 + 1] [6])))));
        arr_15 [i_4] [i_4] = (-1833211427 / 1833211427);
        arr_16 [17] |= (min((arr_6 [14]), ((min(var_8, 31)))));
        /* LoopNest 2 */
        for (int i_5 = 2; i_5 < 20;i_5 += 1)
        {
            for (int i_6 = 2; i_6 < 20;i_6 += 1)
            {
                {
                    var_22 = (max(((~(var_1 < var_2))), ((~(arr_17 [i_4] [i_4])))));
                    var_23 = var_1;
                    arr_21 [i_4] [i_4] [i_5] [13] = 8497820373611738094;

                    for (int i_7 = 2; i_7 < 20;i_7 += 1)
                    {
                        var_24 -= var_10;
                        arr_24 [i_5] = (~1833211427);
                        var_25 -= var_2;
                        arr_25 [i_5] = ((~((+(((arr_23 [1] [i_5] [i_5] [i_4]) * var_5))))));
                    }

                    for (int i_8 = 1; i_8 < 19;i_8 += 1) /* same iter space */
                    {

                        for (int i_9 = 0; i_9 < 22;i_9 += 1)
                        {
                            arr_32 [i_4] [i_5] [i_5] [i_5] [4] [19] = var_2;
                            arr_33 [i_5] [i_9] = var_11;
                        }
                        for (int i_10 = 1; i_10 < 20;i_10 += 1)
                        {
                            arr_36 [i_5] [i_6] [i_5] [i_5] = ((-((min((arr_11 [i_5]), (arr_11 [i_5]))))));
                            arr_37 [i_4] [i_5] [i_5] [i_5] = ((~(max(var_1, (min((arr_22 [5] [i_4] [i_6] [0] [i_4]), (arr_14 [2] [i_8])))))));
                            var_26 = (min((((max(var_10, var_8)) / (~var_6))), (!var_3)));
                        }

                        /* vectorizable */
                        for (int i_11 = 3; i_11 < 20;i_11 += 1)
                        {
                            var_27 -= -var_11;
                            var_28 = (((var_8 >> (var_5 - 155))));
                        }
                        arr_40 [4] [i_5] [i_6] [4] = (((!(arr_6 [i_5]))));
                        var_29 = (max((arr_20 [i_8] [i_6 + 1] [15] [i_4]), var_9));
                    }
                    for (int i_12 = 1; i_12 < 19;i_12 += 1) /* same iter space */
                    {
                        var_30 = (min(-var_7, ((var_11 & (arr_27 [6] [15] [i_12 + 3] [13])))));
                        var_31 *= (!3864816584);
                        var_32 = (~0);
                    }
                    for (int i_13 = 0; i_13 < 22;i_13 += 1)
                    {
                        var_33 = var_10;

                        for (int i_14 = 2; i_14 < 21;i_14 += 1)
                        {
                            var_34 ^= -var_0;
                            arr_50 [1] [i_5] [14] [3] [20] [i_5] [21] = (min(var_9, (~var_7)));
                        }
                        for (int i_15 = 0; i_15 < 22;i_15 += 1)
                        {
                            var_35 = (arr_41 [i_5] [i_15] [i_13] [9] [13] [i_5]);
                            var_36 *= (!var_10);
                            var_37 *= var_0;
                        }
                        for (int i_16 = 1; i_16 < 21;i_16 += 1)
                        {
                            var_38 = ((!(arr_49 [i_6 - 2] [i_6 - 2] [16] [i_5] [6] [1])));
                            var_39 = (var_11 + 6);
                        }
                    }
                }
            }
        }
    }
    var_40 = (!var_7);
    var_41 = (((var_2 + 2147483647) << (!1)));
    #pragma endscop
}
