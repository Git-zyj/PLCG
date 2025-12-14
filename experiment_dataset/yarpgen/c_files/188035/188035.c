/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 188035
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=188035 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/188035
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_19 = (((((min(var_11, 14363039826668566619)) != (var_14 * var_1))) ? ((2097151 ? var_14 : ((var_5 ? 4168185917 : var_15)))) : var_15));

    /* vectorizable */
    for (int i_0 = 0; i_0 < 22;i_0 += 1) /* same iter space */
    {
        /* LoopNest 2 */
        for (int i_1 = 0; i_1 < 22;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 0;i_2 += 1)
            {
                {
                    var_20 &= var_16;
                    /* LoopNest 2 */
                    for (int i_3 = 2; i_3 < 21;i_3 += 1)
                    {
                        for (int i_4 = 0; i_4 < 22;i_4 += 1)
                        {
                            {
                                var_21 = var_1;
                                arr_11 [i_0] [i_3 + 1] [i_2 + 1] [i_1] [i_1] [i_0] = ((~((4128607379 ? var_17 : 4083704247040984992))));
                            }
                        }
                    }
                    var_22 |= (((var_8 != var_14) ? (((arr_8 [i_1]) ^ 18446744073709551615)) : var_12));
                }
            }
        }
        var_23 = var_9;
    }
    /* vectorizable */
    for (int i_5 = 0; i_5 < 22;i_5 += 1) /* same iter space */
    {
        var_24 &= (arr_8 [i_5]);
        var_25 -= arr_7 [i_5] [18] [18] [i_5];
        var_26 &= ((var_6 || (arr_14 [i_5])));
        arr_15 [i_5] = (arr_4 [i_5] [i_5]);
    }
    var_27 = ((((((!(((4168185930 ? 1 : -414464859))))))) > var_3));
    var_28 = 2026023993;
    #pragma endscop
}
