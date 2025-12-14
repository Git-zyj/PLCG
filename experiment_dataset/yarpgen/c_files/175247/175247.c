/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 175247
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=175247 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/175247
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 3; i_0 < 10;i_0 += 1)
    {
        var_16 = ((((min(var_10, (max((arr_0 [i_0]), var_13))))) ? (((((((-9223372036854775807 - 1) + 9223372036854775807)) + 9223372036854775807)) << (((-124 + 142) - 18)))) : ((((((arr_0 [i_0]) * 123)) + 2853)))));
        var_17 = (~var_12);
        arr_2 [0] [0] |= (arr_1 [0] [0]);
    }
    for (int i_1 = 0; i_1 < 21;i_1 += 1)
    {
        /* LoopNest 2 */
        for (int i_2 = 0; i_2 < 21;i_2 += 1)
        {
            for (int i_3 = 0; i_3 < 21;i_3 += 1)
            {
                {
                    var_18 = (arr_6 [i_1] [i_1]);
                    arr_11 [i_1] = (((arr_4 [i_3]) | ((((var_0 ? var_7 : var_12)) ^ (arr_5 [i_1])))));
                    var_19 = (min((var_6 / var_3), var_0));
                }
            }
        }
        arr_12 [i_1] = (((((var_1 ? var_13 : (min(var_8, var_12))))) ? (var_9 - -var_14) : ((((var_3 % -124) & (min((arr_4 [i_1]), var_2)))))));
        arr_13 [i_1] = 5962269876303674547;
    }

    /* vectorizable */
    for (int i_4 = 1; i_4 < 11;i_4 += 1)
    {
        var_20 = (((-20951 ? -123 : -4)));
        var_21 = ((124 ^ (arr_7 [i_4])));
        arr_16 [i_4] = (((var_5 + 2147483647) << (var_12 - 321)));
        var_22 = ((!(arr_9 [i_4 + 1] [i_4 + 1] [i_4 + 1])));
        var_23 |= var_8;
    }
    for (int i_5 = 0; i_5 < 21;i_5 += 1)
    {
        /* LoopNest 2 */
        for (int i_6 = 3; i_6 < 19;i_6 += 1)
        {
            for (int i_7 = 0; i_7 < 21;i_7 += 1)
            {
                {

                    for (int i_8 = 0; i_8 < 1;i_8 += 1)
                    {
                        var_24 = ((var_14 ? ((-(((arr_18 [i_5]) ? (arr_25 [i_5] [i_5] [i_5] [i_5]) : 41864)))) : (2422462381768781378 - 0)));
                        var_25 = (min((((!(((var_3 ? var_3 : 23098)))))), var_7));
                    }
                    arr_29 [i_5] [i_5] [i_5] [i_6] = (max(var_3, (arr_9 [i_6 + 2] [i_6 + 2] [i_6 + 2])));
                    var_26 = (max(var_26, (((var_13 ? (1 < 0) : (arr_27 [12]))))));
                    var_27 = (((-var_3 ? 127 : var_7)));
                }
            }
        }
        /* LoopNest 2 */
        for (int i_9 = 0; i_9 < 21;i_9 += 1)
        {
            for (int i_10 = 0; i_10 < 21;i_10 += 1)
            {
                {
                    var_28 = (((((var_3 | (arr_26 [i_5] [i_5] [i_5])))) ? (arr_32 [i_5] [i_5] [i_5] [i_5]) : ((max(var_13, var_13)))));
                    arr_34 [i_5] [i_5] [i_5] &= ((15897502914721059580 ? (min(((var_9 ? var_12 : 12455984326250949804)), (var_5 & var_1))) : (124 / 3458)));
                    var_29 = (max(var_29, ((((((arr_10 [i_10] [i_10] [i_10] [i_10]) ? var_6 : (arr_10 [i_5] [i_9] [i_5] [i_5]))) & var_12)))));
                    /* LoopNest 2 */
                    for (int i_11 = 0; i_11 < 21;i_11 += 1)
                    {
                        for (int i_12 = 1; i_12 < 1;i_12 += 1)
                        {
                            {
                                var_30 ^= (max((var_11 * var_1), var_0));
                                arr_41 [i_5] [i_12] [i_5] [i_5] [i_5] [i_12] [i_5] = var_7;
                            }
                        }
                    }
                    arr_42 [i_5] [i_5] [i_5] [i_5] = max(((max((arr_40 [i_5] [i_10]), var_10))), ((var_6 ? -4380644078071759595 : var_7)));
                }
            }
        }
    }
    var_31 = var_2;
    var_32 = (var_2 < -3992639036735748264);
    #pragma endscop
}
