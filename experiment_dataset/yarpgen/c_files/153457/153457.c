/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 153457
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=153457 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/153457
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 0; i_0 < 1;i_0 += 1)
    {
        arr_2 [i_0] [i_0] = ((((((arr_1 [i_0]) << (((arr_1 [i_0]) - 3684142517))))) ? -26525 : (arr_1 [i_0])));
        var_20 *= ((1 | (((arr_1 [i_0]) ^ (arr_1 [i_0])))));
    }
    for (int i_1 = 3; i_1 < 12;i_1 += 1)
    {
        arr_6 [i_1] = (((((arr_5 [6]) <= var_8))));
        arr_7 [i_1] [i_1] = (max(var_1, (min((arr_3 [i_1 + 2]), (arr_3 [i_1 + 1])))));
    }
    for (int i_2 = 0; i_2 < 25;i_2 += 1)
    {
        var_21 = (((max(var_8, var_19)) + (arr_9 [22])));
        var_22 = (arr_10 [i_2] [1]);
        var_23 -= ((!((min((-2147483647 - 1), 65535)))));
        arr_12 [i_2] = 1;
    }

    for (int i_3 = 1; i_3 < 14;i_3 += 1) /* same iter space */
    {
        arr_15 [i_3] = 0;
        arr_16 [i_3] = (((((var_18 ? 65535 : var_1)) << ((((max(var_7, (arr_11 [i_3] [6])))) - 51321)))));
        arr_17 [i_3] = ((((max((((120 ? var_10 : 9736))), (((arr_10 [i_3 + 1] [1]) ? 0 : var_15))))) ? ((var_18 ? 4294967288 : (((((arr_10 [i_3 - 1] [i_3]) && var_10)))))) : var_2));
        var_24 *= (max((arr_9 [i_3 - 1]), (((((arr_9 [i_3 - 1]) + 2147483647)) << (120 - 120)))));
    }
    for (int i_4 = 1; i_4 < 14;i_4 += 1) /* same iter space */
    {
        arr_20 [1] = ((max(7404282875519743914, var_3)) + (!var_19));
        var_25 *= ((((min(var_2, (arr_13 [1])))) * (18446744073709551615 < 1)));
    }
    for (int i_5 = 1; i_5 < 14;i_5 += 1) /* same iter space */
    {

        /* vectorizable */
        for (int i_6 = 0; i_6 < 15;i_6 += 1)
        {
            var_26 = (arr_9 [i_5 - 1]);
            arr_29 [i_5 - 1] [6] [i_6] &= (arr_24 [i_6]);
        }
        var_27 = (((arr_21 [i_5] [i_5]) ? ((min(var_8, var_17))) : (arr_26 [i_5])));
        var_28 ^= (63 < -1);
        arr_30 [i_5 - 1] [i_5] = (arr_23 [i_5] [i_5]);
    }
    #pragma endscop
}
