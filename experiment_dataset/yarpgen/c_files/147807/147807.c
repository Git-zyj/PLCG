/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 147807
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=147807 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/147807
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 3 */
    for (int i_0 = 0; i_0 < 25;i_0 += 1)
    {
        for (int i_1 = 1; i_1 < 1;i_1 += 1)
        {
            for (int i_2 = 2; i_2 < 22;i_2 += 1)
            {
                {
                    arr_8 [i_0] [i_1] = var_2;
                    var_20 = ((((var_12 ? ((-59 ? var_14 : var_7)) : ((63 ? var_6 : var_19)))) ^ ((((((arr_5 [i_1] [i_0] [i_1]) ? -49 : (arr_1 [i_2]))) | ((~(arr_1 [12]))))))));

                    for (int i_3 = 2; i_3 < 22;i_3 += 1)
                    {
                        var_21 -= 1;
                        var_22 &= min(var_13, (min((((var_12 ? var_5 : -74))), 1077443665)));
                    }
                    /* vectorizable */
                    for (int i_4 = 3; i_4 < 24;i_4 += 1)
                    {
                        arr_15 [i_1] [i_1] [i_1] [i_4] [i_4 - 1] [i_1] = ((((-(arr_5 [i_1] [i_0] [i_1]))) == (arr_2 [i_1] [i_1 - 1] [i_4 - 2])));
                        var_23 = (min(var_23, var_8));
                    }
                    /* LoopNest 2 */
                    for (int i_5 = 0; i_5 < 25;i_5 += 1)
                    {
                        for (int i_6 = 0; i_6 < 25;i_6 += 1)
                        {
                            {
                                arr_23 [i_0] [i_1 - 1] [i_1] [i_5] [0] = ((((min((max(-12, 3619299189)), 31))) ? ((((-59 ? -29 : 41)) / ((var_12 ? 59 : 58)))) : var_15));
                                var_24 += var_7;
                                var_25 ^= min((max(4671535402530667950, 814723193)), (arr_11 [i_0] [i_0] [i_2 + 2] [i_5] [i_2]));
                                var_26 = (min(((-59 ? (((~(arr_20 [i_2 - 1] [i_2 - 1] [i_2 + 1])))) : (var_19 / var_19))), ((-((-85 ? -1247233449 : (arr_11 [i_0] [i_0] [i_2] [i_5] [i_1])))))));
                                var_27 = (min(var_27, ((((((-2773184244710319153 ? ((450535395 ? 58 : -1551035647)) : (arr_3 [i_5] [i_5])))) ? (((57 ? -1551035647 : -1551035647))) : ((((min((arr_18 [i_0] [i_1 - 1] [16]), var_5))) ? (~var_10) : ((var_1 ? -4671535402530667951 : (arr_0 [i_0]))))))))));
                            }
                        }
                    }
                    var_28 = (min(var_28, (((max((arr_22 [i_2 - 1] [13] [i_1 - 1] [i_0] [i_0]), (var_9 / -79)))))));
                }
            }
        }
    }

    /* vectorizable */
    for (int i_7 = 3; i_7 < 21;i_7 += 1)
    {
        arr_27 [i_7] = (var_14 * (var_7 <= var_9));
        var_29 = (((arr_19 [18] [i_7 - 3] [2] [24] [2]) ? var_1 : ((-4671535402530667950 ? -788653235361454952 : (arr_22 [1] [i_7 + 2] [1] [i_7] [1])))));
        var_30 = (min(var_30, ((((-113 + 2147483647) << var_10)))));
    }
    for (int i_8 = 0; i_8 < 22;i_8 += 1)
    {
        var_31 = (max(var_31, 0));
        var_32 = (((((!(arr_9 [2] [i_8] [i_8] [i_8] [i_8] [20])))) <= var_7));
    }
    for (int i_9 = 1; i_9 < 21;i_9 += 1)
    {
        arr_34 [i_9] = ((((var_13 >> (((min(116, 1608189667)) - 102))))) ? (max(((min(var_12, var_13))), 4671535402530667950)) : ((3479046962 ? 4183682037106749627 : 1551035656)));
        var_33 = var_17;
        var_34 = (57 <= -27939);
        /* LoopNest 2 */
        for (int i_10 = 0; i_10 < 24;i_10 += 1)
        {
            for (int i_11 = 0; i_11 < 24;i_11 += 1)
            {
                {
                    var_35 = ((var_15 ? (((var_12 && -5) ? var_9 : (((min(1, (arr_10 [i_9 + 3] [i_9 + 2] [i_9] [8]))))))) : (69 > -var_12)));
                    arr_39 [i_9 + 3] [10] [i_9] = (min((((arr_13 [i_9 + 1] [i_9] [i_11]) ? (arr_13 [i_9 + 2] [i_9] [i_11]) : (arr_13 [i_9 - 1] [i_9] [i_9]))), var_15));
                    arr_40 [i_9] [i_10] [17] [3] = ((max(var_9, var_4)) / -78);
                }
            }
        }
    }
    #pragma endscop
}
