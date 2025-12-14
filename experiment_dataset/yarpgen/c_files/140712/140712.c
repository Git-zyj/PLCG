/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 140712
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=140712 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/140712
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_16 = var_6;
    var_17 = -18942;

    /* vectorizable */
    for (int i_0 = 2; i_0 < 12;i_0 += 1) /* same iter space */
    {
        arr_2 [i_0 - 2] = (((arr_1 [i_0 - 2]) != (arr_1 [i_0 - 1])));
        arr_3 [i_0 - 1] [i_0 + 1] = ((((((arr_1 [i_0 + 1]) ^ (arr_0 [i_0])))) ^ 14733516560585067296));
        var_18 = ((16384 ^ (((-2147483647 - 1) ? (arr_1 [i_0]) : (arr_0 [i_0])))));
        var_19 = 0;

        for (int i_1 = 0; i_1 < 13;i_1 += 1)
        {
            var_20 -= (0 / 1073741824);
            var_21 = ((arr_4 [i_0 - 1] [i_0 - 1]) ? 165 : (arr_4 [i_0 - 1] [i_0 + 1]));
            arr_7 [i_1] [i_0] [i_0] = (2097151 ? (arr_0 [i_1]) : -76);
        }
    }
    /* vectorizable */
    for (int i_2 = 2; i_2 < 12;i_2 += 1) /* same iter space */
    {
        var_22 += ((133955584 ? (((!(arr_5 [i_2 - 1])))) : (((arr_0 [i_2]) ? (arr_6 [i_2] [i_2]) : 29109))));
        var_23 |= ((((arr_6 [i_2] [i_2]) ? (arr_9 [i_2] [i_2]) : 829281581)));

        for (int i_3 = 2; i_3 < 10;i_3 += 1)
        {
            arr_12 [i_2] = ((((arr_4 [i_2 - 1] [i_2 - 1]) ? (arr_9 [i_2 - 1] [i_2]) : 32)));
            var_24 = ((3337205576 ? (arr_11 [i_3 - 1]) : -1073741825));
        }
        for (int i_4 = 0; i_4 < 13;i_4 += 1)
        {
            arr_15 [i_2] [i_4] = 80;
            var_25 ^= (arr_8 [i_2 - 2]);
        }
        for (int i_5 = 0; i_5 < 13;i_5 += 1)
        {
            arr_18 [i_2] [i_5] = (((arr_16 [i_2 - 1] [i_2 - 1] [i_5]) > 127));
            var_26 = (((arr_10 [i_2 - 1]) ? (arr_5 [i_2 + 1]) : 7673565777885330184));
            arr_19 [i_2 + 1] [i_5] = (0 > 9963361170877337818);
        }
        arr_20 [i_2] [i_2] = arr_1 [i_2];
    }
    /* vectorizable */
    for (int i_6 = 1; i_6 < 12;i_6 += 1)
    {
        var_27 = ((((!(arr_22 [i_6 + 1]))) ? (arr_21 [i_6 - 1]) : 255));
        var_28 = ((!(arr_22 [i_6])));
    }
    #pragma endscop
}
