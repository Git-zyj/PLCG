/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 113199
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=113199 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/113199
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_15 = (min(var_15, var_13));

    for (int i_0 = 4; i_0 < 8;i_0 += 1)
    {
        arr_2 [i_0] = -39;
        arr_3 [i_0] = ((((!var_8) ? (arr_1 [i_0 + 2] [0]) : (var_9 * 0))));

        for (int i_1 = 0; i_1 < 10;i_1 += 1)
        {
            arr_7 [i_0] [i_0] [1] = 2298519436;
            var_16 = ((160 ? 4194303 : 18446744073705357331));
            arr_8 [i_0] [1] [i_1] = (max((arr_5 [i_0 - 2] [i_0] [i_0]), (((32 ? 4194284 : var_7)))));
        }
        /* vectorizable */
        for (int i_2 = 0; i_2 < 10;i_2 += 1) /* same iter space */
        {
            var_17 = (18446744073705357331 ? (((arr_1 [i_2] [i_2]) ? 11291966762479056462 : 454494405)) : (arr_0 [i_2] [i_0 - 2]));
            arr_13 [i_0 - 2] [i_0] [i_2] = arr_6 [i_0 - 3] [i_0 - 3] [i_0 + 1];
            var_18 |= ((!(-29 || var_14)));
        }
        for (int i_3 = 0; i_3 < 10;i_3 += 1) /* same iter space */
        {
            arr_16 [i_0] [i_3] = (max(-126, (((arr_14 [i_0 + 1] [i_0]) ? 2699744705568026454 : (arr_12 [i_0])))));
            arr_17 [i_0] [2] [i_0] = var_0;
            arr_18 [i_3] [i_0] = 16397328430516216607;
        }
    }
    /* vectorizable */
    for (int i_4 = 4; i_4 < 12;i_4 += 1)
    {
        var_19 = (min(var_19, (!18446744073705357355)));
        arr_21 [i_4] = ((!((((arr_20 [i_4 - 3]) >> (((arr_20 [i_4]) - 2215289365)))))));
        arr_22 [i_4] = ((~(arr_20 [i_4 - 4])));
        arr_23 [i_4] = (arr_20 [i_4]);
    }
    for (int i_5 = 0; i_5 < 14;i_5 += 1)
    {
        arr_26 [i_5] = ((((max(65, (22 & 18446744073705357312)))) ? ((0 ? -56 : 2792925960)) : 41));
        var_20 = arr_25 [i_5];
        var_21 = ((!200) + var_2);
        var_22 ^= -96;
        var_23 |= (((max(var_2, (arr_24 [i_5]))) < ((((!(((82410900 ? var_13 : 18446744073705357312)))))))));
    }
    for (int i_6 = 1; i_6 < 11;i_6 += 1)
    {
        arr_30 [i_6] = max(6, (70351564308480 % 18446744073705357345));
        var_24 = ((((0 >= (arr_27 [i_6])))) << ((((min(15893055363792734197, 9160867734751762498))) - 473389106)));
        arr_31 [i_6] = ((2949633884 ? ((((!(arr_24 [i_6 - 1]))) ? (arr_25 [i_6 + 2]) : 4194306)) : (((((18446744073705357312 ? (arr_28 [2]) : 64))) ? (min((arr_25 [3]), 534773760)) : 90))));
        var_25 = ((!((!(arr_27 [i_6])))));
        var_26 = (max((arr_24 [i_6]), (((!var_8) ^ ((18446744073709551615 ? (arr_24 [i_6]) : var_10))))));
    }
    #pragma endscop
}
