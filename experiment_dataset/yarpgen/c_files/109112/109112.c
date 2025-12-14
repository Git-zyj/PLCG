/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 109112
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=109112 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/109112
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_17 = var_14;
    var_18 = 2147483647;

    /* vectorizable */
    for (int i_0 = 1; i_0 < 1;i_0 += 1)
    {
        var_19 = 63963;
        var_20 = (((!var_3) <= (arr_0 [i_0 - 1] [i_0 - 1])));
        /* LoopNest 2 */
        for (int i_1 = 0; i_1 < 23;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 23;i_2 += 1)
            {
                {
                    var_21 = ((~(((arr_4 [i_1]) + 1))));
                    arr_7 [i_1] &= ((21848 ? ((var_14 ? 1252266110 : (arr_1 [i_0 - 1]))) : (arr_3 [i_0 - 1])));
                }
            }
        }
    }
    /* vectorizable */
    for (int i_3 = 0; i_3 < 16;i_3 += 1)
    {
        var_22 = ((((((arr_0 [i_3] [i_3]) * var_15))) ? (arr_8 [i_3]) : ((-(arr_2 [i_3] [i_3])))));

        for (int i_4 = 1; i_4 < 14;i_4 += 1)
        {
            var_23 = ((var_12 == (((var_16 ^ (arr_9 [i_3]))))));
            var_24 = (((-2147483647 - 1) % var_11));
        }
        for (int i_5 = 0; i_5 < 16;i_5 += 1)
        {
            var_25 = ((13325000562154865281 ? -29 : 21550));
            arr_17 [i_3] [i_5] [i_3] = 250;
            var_26 = var_15;
        }
    }
    for (int i_6 = 0; i_6 < 19;i_6 += 1)
    {
        var_27 &= ((-((((((arr_4 [i_6]) ? 18446744073709551615 : (arr_0 [i_6] [i_6])))) ? -2 : (18446744073709551605 != var_2)))));
        arr_20 [i_6] [i_6] = (max((max((arr_18 [i_6]), -53)), (((arr_4 [i_6]) ? (arr_4 [i_6]) : 1))));

        for (int i_7 = 4; i_7 < 18;i_7 += 1)
        {
            var_28 = ((((min(((18134058637546149707 ? var_7 : var_2)), var_12))) ? ((1 + (arr_0 [i_6] [i_7 - 2]))) : 63963));
            var_29 = (((((arr_1 [i_7 - 4]) && (arr_1 [i_7 - 4]))) ? (((((min((arr_22 [i_6] [i_7 - 2]), (arr_21 [i_6] [i_7 - 1] [i_6])))) ? (arr_3 [i_7 - 2]) : ((min(var_14, var_14)))))) : (max(11, (arr_0 [i_7 + 1] [i_7 - 4])))));
        }
        for (int i_8 = 4; i_8 < 18;i_8 += 1)
        {
            var_30 = (max((((arr_25 [i_8 - 1] [i_8 - 2]) ? (arr_25 [i_8 - 2] [i_8 - 2]) : (arr_6 [i_8 + 1] [i_8 - 2]))), (arr_27 [i_6])));
            var_31 = (((min((arr_21 [i_8 - 4] [i_8 + 1] [i_8 - 4]), (arr_21 [i_8 + 1] [i_8 - 3] [i_8 + 1]))) ? (((!(arr_21 [i_8 + 1] [i_8 - 4] [i_8 - 2])))) : (((arr_21 [i_8 + 1] [i_8 - 2] [i_8 + 1]) ? (arr_21 [i_8 - 1] [i_8 - 2] [i_8 - 3]) : (arr_21 [i_8 + 1] [i_8 - 4] [i_8 + 1])))));
            var_32 = ((~((((((arr_2 [i_6] [i_6]) + 1288251299))) ? ((10622 - (arr_21 [i_6] [i_6] [i_8 + 1]))) : (((arr_6 [i_8 - 2] [i_6]) - 6597))))));
            arr_28 [i_6] [i_6] [i_6] = ((((max(65535, var_0))) % 775953311));
        }
        for (int i_9 = 2; i_9 < 18;i_9 += 1)
        {
            var_33 = ((18446744073709551615 ? (((var_4 * (arr_19 [i_9 + 1])))) : (((arr_24 [i_6] [i_9 - 2]) ? (arr_24 [i_6] [i_9 + 1]) : (arr_24 [i_9 + 1] [i_6])))));
            var_34 = (max(var_34, (((-((-var_6 ? (arr_31 [i_9 + 1] [i_9 - 2]) : var_8)))))));
            arr_33 [i_6] [i_6] [i_9 + 1] = (((((((2293538256 >> (2147483619 - 2147483616))) / (62 && 1073741824)))) ? (0 | 17451036570614855621) : -1858347521));
        }
    }
    var_35 = (((-((var_13 ? var_7 : var_16)))));
    #pragma endscop
}
