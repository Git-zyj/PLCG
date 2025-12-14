/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 113374
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=113374 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/113374
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_10 *= (max((((((var_3 | var_5) + 9223372036854775807)) << (2047 - 2047))), (((1 ? 0 : 1)))));

    for (int i_0 = 1; i_0 < 18;i_0 += 1) /* same iter space */
    {
        var_11 = ((((var_4 >> (((~0) + 17)))) ^ var_9));
        arr_2 [8] |= ((var_6 ? (((~(24131 >= 0)))) : var_1));
    }
    for (int i_1 = 1; i_1 < 18;i_1 += 1) /* same iter space */
    {
        var_12 += ((var_3 && (((~(((var_7 + 2147483647) >> (var_2 - 22563))))))));
        arr_6 [i_1] = (3880343770 + 6926696897850088890);
        var_13 ^= (((!(arr_3 [i_1 + 1]))));
        var_14 = (((((var_2 ? (max(-99, var_8)) : (var_6 != var_0)))) / (~-5101760217110992749)));
        /* LoopNest 2 */
        for (int i_2 = 0; i_2 < 0;i_2 += 1)
        {
            for (int i_3 = 0; i_3 < 19;i_3 += 1)
            {
                {
                    arr_12 [i_1] = ((!(~3880343770)));
                    var_15 = (min(var_15, (0 ^ 2832171334)));
                }
            }
        }
    }
    for (int i_4 = 3; i_4 < 14;i_4 += 1)
    {
        arr_16 [13] [i_4] |= (max(((max(var_2, -31437))), (min(var_7, var_5))));
        var_16 = ((var_4 ? (((arr_5 [i_4 - 2]) ? ((var_8 * (arr_14 [16]))) : (((((arr_3 [i_4]) < var_2)))))) : ((var_5 ? (~var_8) : (arr_13 [i_4 + 4])))));
    }

    for (int i_5 = 2; i_5 < 23;i_5 += 1) /* same iter space */
    {
        var_17 = (max(var_2, (~var_4)));
        var_18 = (((5101760217110992747 | 42228) ? 0 : ((max((arr_18 [i_5] [i_5 + 2]), 1)))));
    }
    for (int i_6 = 2; i_6 < 23;i_6 += 1) /* same iter space */
    {
        var_19 = var_1;
        var_20 = ((+(((arr_21 [1]) * -0))));
    }
    for (int i_7 = 2; i_7 < 23;i_7 += 1) /* same iter space */
    {
        var_21 |= ((var_0 ? (arr_18 [i_7] [i_7]) : (max(1466845096, 18))));
        arr_26 [i_7] = var_4;
    }
    #pragma endscop
}
