/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 170134
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=170134 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/170134
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 0; i_0 < 14;i_0 += 1)
    {
        var_11 = (((max((arr_0 [i_0]), ((var_4 ? 228 : var_6)))) / (arr_1 [i_0] [i_0])));
        arr_2 [i_0] [i_0] = (((((((arr_0 [9]) > var_10)) ? 1 : -2076398170)) == (min(((1772203165 ? 39 : 232)), (min((arr_0 [i_0]), (arr_1 [i_0] [i_0])))))));
    }
    for (int i_1 = 0; i_1 < 14;i_1 += 1)
    {
        arr_5 [i_1] [10] = (((((max((arr_0 [i_1]), 48))) ? (min((arr_4 [i_1]), var_7)) : (max(0, var_7)))) <= var_9);
        var_12 = (arr_0 [i_1]);
    }
    /* vectorizable */
    for (int i_2 = 1; i_2 < 9;i_2 += 1)
    {
        var_13 -= ((arr_4 [i_2 + 3]) ? var_1 : (arr_4 [i_2 + 2]));
        var_14 -= -646322464;
        arr_8 [i_2] |= ((arr_7 [i_2] [1]) ? ((~(arr_3 [i_2]))) : (((arr_7 [i_2] [i_2]) * (arr_7 [i_2] [i_2 - 1]))));
    }
    /* vectorizable */
    for (int i_3 = 0; i_3 < 1;i_3 += 1)
    {
        arr_11 [i_3] [i_3] = ((-var_3 + 2147483647) << (((-1 + 32) - 31)));
        /* LoopNest 2 */
        for (int i_4 = 0; i_4 < 11;i_4 += 1)
        {
            for (int i_5 = 1; i_5 < 10;i_5 += 1)
            {
                {
                    var_15 *= ((((-2147483637 ? 27 : (arr_14 [i_4] [i_5]))) >= 123));
                    var_16 = (min(var_16, var_0));
                    arr_16 [9] [i_4] [i_3] = (16 * 23);
                    var_17 += ((228 * 228) <= 223);
                }
            }
        }
        var_18 -= (((536870911 << (((-536870908 + 536870919) - 10)))));
    }
    var_19 = (min(1, -924832451));

    for (int i_6 = 0; i_6 < 24;i_6 += 1)
    {
        var_20 = (min((((~0) & (((arr_18 [i_6]) ? (arr_17 [4]) : var_0)))), (arr_18 [i_6])));
        var_21 += ((~((46 ? (!0) : (max(var_1, 9))))));
    }
    /* vectorizable */
    for (int i_7 = 0; i_7 < 1;i_7 += 1)
    {
        arr_22 [i_7] [i_7] = (arr_19 [i_7]);
        arr_23 [i_7] [i_7] = 240;

        for (int i_8 = 2; i_8 < 12;i_8 += 1)
        {
            arr_27 [i_7] [i_8] [i_7] &= 62;
            var_22 = (((var_9 != var_8) == (((1962915022 && (arr_24 [i_7] [i_8] [i_8]))))));
        }
        for (int i_9 = 1; i_9 < 12;i_9 += 1)
        {
            arr_31 [i_7] [i_9] = ((-536870908 ? 166 : 1));
            arr_32 [i_9] = var_10;
        }
    }
    #pragma endscop
}
