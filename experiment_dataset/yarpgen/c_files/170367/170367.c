/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 170367
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=170367 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/170367
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_14 ^= (-var_1 ? var_7 : (63 - -19));
    var_15 &= var_11;

    for (int i_0 = 0; i_0 < 14;i_0 += 1)
    {
        var_16 -= (max(476905232, (((((var_10 ? var_8 : (arr_1 [i_0])))) ? var_2 : (arr_0 [i_0])))));
        var_17 ^= (max((((arr_0 [i_0]) + (arr_1 [i_0]))), (((arr_1 [i_0]) ? ((2 ? 2191606111 : 65523)) : (((1 ? -11467 : (arr_1 [i_0]))))))));
        arr_2 [i_0] = ((1 <= (((-32765 ? ((18446744073709551607 ? -75 : (arr_0 [i_0]))) : var_8)))));
    }
    for (int i_1 = 0; i_1 < 16;i_1 += 1)
    {
        var_18 = (max(var_18, ((((((((((arr_4 [i_1] [i_1]) | var_10))) ? (max(var_4, var_9)) : (arr_4 [i_1] [i_1])))) ? (((arr_4 [i_1] [i_1]) % 1109842738)) : (arr_4 [i_1] [i_1]))))));

        for (int i_2 = 1; i_2 < 15;i_2 += 1)
        {

            for (int i_3 = 2; i_3 < 13;i_3 += 1) /* same iter space */
            {
                var_19 = ((~(((!(53763 && var_6))))));
                var_20 = (min((arr_6 [i_2 + 1] [i_2 + 1]), (((arr_5 [i_1] [i_2 - 1] [i_3]) & 20))));
            }
            for (int i_4 = 2; i_4 < 13;i_4 += 1) /* same iter space */
            {
                var_21 = (max((((arr_15 [i_4 + 1] [i_2 + 1] [i_2 - 1]) ? 1 : 4294967295)), 27275));
                var_22 = (max(((1109842736 - (arr_9 [i_2] [i_4 + 1] [i_2 - 1]))), ((max((arr_8 [i_4 - 1] [i_2 + 1] [i_1]), (arr_15 [i_4] [i_2 + 1] [i_1]))))));
            }
            for (int i_5 = 0; i_5 < 16;i_5 += 1)
            {
                var_23 = var_13;
                var_24 = (~-32747);
            }
            arr_19 [i_1] [i_1] [i_2 + 1] = (((((arr_15 [i_2] [i_2 + 1] [i_2 - 1]) - var_2)) >= (arr_15 [i_2 + 1] [i_2 + 1] [i_2 + 1])));
            arr_20 [i_1] = (max((((arr_3 [i_1]) | (((arr_3 [i_1]) ? (arr_17 [i_2 - 1]) : var_11)))), (((~(arr_3 [i_2 - 1]))))));
        }
    }
    #pragma endscop
}
