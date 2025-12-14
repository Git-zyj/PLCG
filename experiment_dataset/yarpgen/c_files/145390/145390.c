/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 145390
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=145390 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/145390
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_11 = (((-7 | var_10) < var_6));

    for (int i_0 = 1; i_0 < 10;i_0 += 1)
    {
        arr_2 [i_0 + 1] [i_0 + 1] = (28767 & 65518);
        arr_3 [i_0 - 1] [i_0 - 1] = (((arr_1 [i_0 - 1]) <= (18446744073709551601 - -1901031256)));
        var_12 *= (min((arr_0 [i_0 + 1] [i_0 - 1]), (max((24688557 + var_6), (max(5199621684525682290, (arr_0 [i_0 + 1] [i_0 + 1])))))));
        var_13 = ((max((arr_0 [i_0 + 1] [i_0 - 1]), var_10)));
        arr_4 [i_0 - 1] = var_5;
    }
    for (int i_1 = 2; i_1 < 11;i_1 += 1)
    {
        var_14 = var_4;
        /* LoopNest 2 */
        for (int i_2 = 1; i_2 < 10;i_2 += 1)
        {
            for (int i_3 = 1; i_3 < 8;i_3 += 1)
            {
                {
                    var_15 ^= var_0;
                    var_16 |= ((max(71, ((-32746 ? (arr_13 [i_2 + 1]) : -15)))));
                    arr_15 [i_2] = min(var_7, var_0);
                    var_17 = (max(var_17, ((max(12392, (arr_10 [6]))))));
                }
            }
        }
        /* LoopNest 2 */
        for (int i_4 = 2; i_4 < 10;i_4 += 1)
        {
            for (int i_5 = 0; i_5 < 12;i_5 += 1)
            {
                {
                    var_18 = -65;
                    var_19 = (max(var_19, ((max((arr_10 [i_4]), (((arr_20 [i_1 - 1] [i_5] [i_5]) && (arr_17 [i_1 - 2]))))))));
                    arr_22 [i_1 - 1] [i_1 - 1] [i_1 - 2] = (~1821444522);
                }
            }
        }
    }
    /* vectorizable */
    for (int i_6 = 0; i_6 < 14;i_6 += 1)
    {
        var_20 = (min(var_20, (arr_24 [i_6] [i_6])));

        for (int i_7 = 0; i_7 < 14;i_7 += 1)
        {
            var_21 = (min(var_21, var_10));
            arr_29 [i_6] [i_7] [i_6] = (!251);
            var_22 = (arr_24 [i_7] [i_7]);
            var_23 = ((~((((arr_24 [i_6] [i_7]) && -10)))));
        }
    }
    for (int i_8 = 0; i_8 < 21;i_8 += 1)
    {
        var_24 = (min(var_24, ((((((arr_30 [i_8] [i_8]) ? (arr_30 [i_8] [i_8]) : (arr_30 [i_8] [i_8]))) != (min(((var_6 ? (arr_31 [i_8]) : var_2)), (((arr_30 [i_8] [i_8]) ? (arr_30 [i_8] [i_8]) : var_4)))))))));
        arr_32 [i_8] [i_8] = (((-4339590198162207480 && 226125263) && 42));
    }
    var_25 *= ((var_4 ? 8 : var_7));
    var_26 = (max(var_26, (max(var_3, (max((var_8 * var_7), ((var_0 ? var_3 : var_7))))))));
    #pragma endscop
}
