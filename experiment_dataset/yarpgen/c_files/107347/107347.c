/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 107347
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=107347 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/107347
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_18 = ((((!((max(var_15, 2452726927))))) ? (((((0 ? 134217216 : 511))) ? var_16 : ((min(var_9, 4294967295))))) : var_10));

    for (int i_0 = 0; i_0 < 11;i_0 += 1)
    {
        var_19 = ((-(arr_1 [i_0] [i_0])));
        var_20 = (max((((arr_1 [i_0] [i_0]) ? (arr_0 [i_0]) : (arr_1 [i_0] [i_0]))), (((17 ? 12 : 521)))));

        for (int i_1 = 1; i_1 < 7;i_1 += 1)
        {
            arr_5 [i_0] [i_0] [i_1] = 537;
            arr_6 [i_0] = max((min((arr_4 [i_1 - 1] [i_1 + 3]), (arr_0 [i_1 - 1]))), ((max((arr_3 [i_0] [i_1 + 4]), (min(2517578553, 134217195))))));
            var_21 = (max(var_21, (((!(((((arr_4 [i_0] [i_0]) ? 3949349305 : var_11)))))))));
        }
        for (int i_2 = 1; i_2 < 9;i_2 += 1)
        {
            var_22 ^= ((2517578553 ? (((((min((arr_10 [i_0]), 42272))) && var_11))) : 4294967295));
            arr_11 [7] = (min(((~(arr_7 [i_2 + 2] [8] [i_2]))), var_9));
        }
        for (int i_3 = 1; i_3 < 10;i_3 += 1)
        {
            arr_16 [i_0] = (((((arr_13 [i_0] [i_0] [i_3 + 1]) ? 0 : (arr_13 [i_3] [i_3] [i_3 + 1]))) % ((var_7 * ((var_16 ? var_4 : 21))))));
            var_23 = (min(var_23, (((var_10 ? (min(44735, var_2)) : (((((12 * 1842240369) && var_13)))))))));
            var_24 = (min(((min(150554308, (((arr_15 [i_3 - 1] [i_3]) ? var_4 : var_15))))), var_2));
            arr_17 [i_0] [i_0] [i_0] = (((183 && ((max(57956, (arr_4 [i_0] [i_0])))))));
            var_25 -= (max((((6967542735578257279 ? var_1 : 2047))), (min((((arr_1 [i_3 - 1] [i_0]) ? var_4 : (arr_10 [i_0]))), (((arr_15 [i_0] [i_3]) % var_13))))));
        }
    }
    for (int i_4 = 1; i_4 < 22;i_4 += 1)
    {
        arr_22 [i_4] |= (((((((var_3 % (arr_20 [i_4 - 1] [i_4 - 1]))) * 3639559264503430843))) ? ((2474 % (max((arr_18 [i_4]), var_0)))) : ((max(2047, ((max(var_15, (arr_21 [i_4 + 1])))))))));
        arr_23 [11] = (arr_21 [i_4]);
        arr_24 [i_4] |= ((-8774179591573443533 ? (arr_18 [i_4 - 1]) : (var_7 * var_11)));
        var_26 = (max(var_26, var_12));
    }
    for (int i_5 = 3; i_5 < 20;i_5 += 1)
    {
        arr_28 [i_5] [i_5] = ((~(134217216 * 4)));
        arr_29 [i_5] = ((!(~3865216302)));
        /* LoopNest 2 */
        for (int i_6 = 0; i_6 < 23;i_6 += 1)
        {
            for (int i_7 = 0; i_7 < 23;i_7 += 1)
            {
                {
                    var_27 = (((((arr_31 [i_5 + 2] [i_5 - 3] [i_5 + 2]) % 3281176838)) % ((max(1152921504606846972, 0)))));
                    var_28 = 18446744073709551612;
                }
            }
        }
        var_29 = ((((((arr_35 [i_5 - 1] [i_5] [i_5] [i_5 + 2]) && (arr_26 [i_5 - 1] [7])))) % ((max((arr_26 [i_5 - 3] [i_5]), (arr_26 [i_5 + 2] [i_5]))))));
    }

    for (int i_8 = 0; i_8 < 1;i_8 += 1)
    {
        var_30 = (575363379 % 1);
        var_31 = (max(1, 134217727));
        arr_40 [11] [i_8] |= (min(((~(arr_35 [i_8] [i_8] [i_8] [i_8]))), (max((arr_35 [i_8] [i_8] [i_8] [i_8]), (arr_35 [6] [i_8] [i_8] [i_8])))));
    }
    var_32 = var_14;
    var_33 = var_14;
    #pragma endscop
}
