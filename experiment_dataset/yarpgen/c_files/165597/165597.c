/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 165597
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=165597 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/165597
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 0; i_0 < 15;i_0 += 1) /* same iter space */
    {
        var_18 = ((-229121595 ? (arr_0 [i_0]) : ((2147483647 ? -var_10 : (((-(arr_2 [8] [i_0]))))))));
        var_19 &= ((!(((5016927450674483517 ? -17 : (max((arr_1 [i_0]), (arr_0 [i_0]))))))));
        var_20 = ((((8618631137548053019 == ((9788220716785002294 - (arr_2 [i_0] [i_0]))))) ? (((286 + 72) ? ((((arr_1 [13]) ? (arr_2 [i_0] [i_0]) : 14101))) : (arr_1 [i_0]))) : ((((-7 | var_2) ^ (max(632540676, -14102)))))));

        /* vectorizable */
        for (int i_1 = 0; i_1 < 1;i_1 += 1)
        {

            for (int i_2 = 1; i_2 < 14;i_2 += 1)
            {
                var_21 -= ((-14102 ? 2063443258 : 25));
                var_22 = (((((38 ? (arr_6 [i_0] [i_1] [i_2 - 1]) : (arr_8 [i_0] [i_0] [i_0])))) ? 88 : 8658523356924549335));
            }
            var_23 = 17969250898704841901;
        }
        /* vectorizable */
        for (int i_3 = 4; i_3 < 12;i_3 += 1)
        {
            var_24 = (arr_1 [14]);
            var_25 = ((~(arr_3 [i_3 - 1])));
        }
        for (int i_4 = 3; i_4 < 12;i_4 += 1)
        {
            var_26 = (min(0, ((~(max((arr_7 [i_0] [1] [i_0] [i_4]), 8022))))));
            var_27 = -2853;
        }
        var_28 |= 0;
    }
    for (int i_5 = 0; i_5 < 15;i_5 += 1) /* same iter space */
    {
        var_29 ^= (((~(arr_10 [i_5] [2] [1]))) | (arr_10 [12] [i_5] [2]));
        var_30 |= (max(17969250898704841912, ((((max(-90, var_0)) - ((8658523356924549322 ? var_0 : -2853)))))));
        arr_15 [i_5] = ((14101 ? (((((((arr_14 [i_5]) - (arr_3 [i_5])))) ? ((max(var_5, 32580))) : 55775))) : (((arr_12 [i_5] [i_5] [i_5]) + (arr_12 [i_5] [i_5] [i_5])))));
    }
    for (int i_6 = 2; i_6 < 18;i_6 += 1)
    {
        var_31 = ((var_17 ? var_2 : ((~(arr_17 [i_6 + 2])))));
        var_32 = (((((!(((var_13 / (arr_18 [i_6]))))))) >= (arr_17 [i_6 + 2])));
        var_33 = ((((max((((arr_18 [i_6]) ? var_8 : 73)), 1))) ? (((arr_18 [i_6 - 1]) ? (arr_18 [i_6 + 1]) : (arr_18 [i_6 - 1]))) : 0));
    }
    var_34 = (3066397143 | var_11);
    var_35 += ((var_17 ? (-14102 / 8388608) : ((((!(-127 - 1))) ? ((var_11 ? 545816573 : var_2)) : (var_16 || var_3)))));
    #pragma endscop
}
