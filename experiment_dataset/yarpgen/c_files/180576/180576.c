/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 180576
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=180576 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/180576
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_11 = ((var_1 * (var_0 / var_1)));

    /* vectorizable */
    for (int i_0 = 0; i_0 < 13;i_0 += 1)
    {
        var_12 = var_7;
        var_13 = (min(var_13, (-var_6 > var_2)));
        var_14 *= (((~5858) ? (arr_2 [i_0]) : (arr_1 [i_0])));
        var_15 = (0 % 11);
        arr_3 [i_0] [i_0] = ((64 ? ((-12 ? 24082 : 23)) : 23));
    }
    for (int i_1 = 1; i_1 < 13;i_1 += 1)
    {
        var_16 = var_10;
        var_17 = -248669431;
        var_18 = (((!(var_8 && var_0))));
    }
    for (int i_2 = 1; i_2 < 22;i_2 += 1)
    {
        arr_8 [15] [15] = ((-(((!(arr_7 [i_2 + 1]))))));
        /* LoopNest 2 */
        for (int i_3 = 1; i_3 < 22;i_3 += 1)
        {
            for (int i_4 = 4; i_4 < 22;i_4 += 1)
            {
                {
                    var_19 = 65535;
                    var_20 &= 2372487856;
                    var_21 = (min((((arr_6 [i_4 - 2] [i_2 + 1]) * var_7)), (1599222294 && var_8)));
                }
            }
        }
    }
    for (int i_5 = 3; i_5 < 14;i_5 += 1)
    {
        var_22 += (max(18446744073709551615, ((min(var_9, -397729781)))));
        arr_16 [i_5] = ((((arr_6 [i_5 - 1] [12]) | 2372487847)));

        for (int i_6 = 0; i_6 < 17;i_6 += 1)
        {
            var_23 -= (max(((((var_5 > 408832255) ? (-639197713 / var_0) : (!var_3)))), var_2));
            var_24 = (max(((((arr_18 [i_5] [i_5 + 3]) | 343417156))), ((var_5 - (65516 + 3773984309)))));
            var_25 = min(((((max(var_5, (arr_19 [16] [i_5])))) ? ((var_6 ? var_9 : 18446744073709551602)) : -121)), ((min(639197713, 0))));
        }
        for (int i_7 = 0; i_7 < 17;i_7 += 1)
        {
            arr_23 [i_5] [i_7] = (max(var_8, (((arr_18 [i_5] [i_5 + 2]) ? (arr_18 [i_5] [i_5 + 3]) : 3))));
            arr_24 [i_5] [i_5] = (min((((arr_14 [i_5 + 3]) >> (var_6 - 11754985728693798232))), (((arr_6 [i_5 + 1] [i_5 + 1]) ? 0 : (arr_6 [i_5 - 1] [i_5 - 1])))));
        }
    }
    var_26 = (min(var_26, ((max(((min(524287, var_6))), var_10)))));
    var_27 = (min(var_27, 2));
    #pragma endscop
}
