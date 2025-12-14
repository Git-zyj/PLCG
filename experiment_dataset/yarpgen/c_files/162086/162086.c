/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 162086
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=162086 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/162086
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 1; i_0 < 20;i_0 += 1)
    {
        var_16 = max(((min(23965, (arr_0 [i_0] [i_0])))), (min((((!(arr_2 [i_0])))), (arr_1 [i_0] [i_0]))));

        for (int i_1 = 2; i_1 < 22;i_1 += 1) /* same iter space */
        {
            var_17 += (max(var_4, (min(-880547226, (arr_4 [i_0] [i_1 + 1] [i_1])))));
            /* LoopNest 2 */
            for (int i_2 = 3; i_2 < 21;i_2 += 1)
            {
                for (int i_3 = 0; i_3 < 23;i_3 += 1)
                {
                    {
                        arr_11 [i_0] [i_3] [i_0] [i_0] &= (((max((max(425093954, (arr_5 [i_0]))), 3584)) * ((max((arr_0 [i_0] [i_0]), ((var_2 ? 3584 : 1965890356)))))));
                        var_18 &= max((((!(-3585 >= 0)))), ((~(~924645250))));
                        arr_12 [i_0 - 1] [i_0] = (((((~(~-3588)))) ? (arr_8 [i_0] [i_0]) : ((min(((3564 << (((arr_5 [i_2]) + 17481)))), -3580)))));
                        var_19 = 243;
                        arr_13 [i_0] = (((max((arr_5 [i_0 + 1]), 1218067876)) & (~-3580)));
                    }
                }
            }
        }
        for (int i_4 = 2; i_4 < 22;i_4 += 1) /* same iter space */
        {
            var_20 -= (max(((var_3 ? ((((!(-2147483647 - 1))))) : (max(2194276266, 1141543562)))), (511056217 >= 724505601)));
            var_21 = (((((!(~-31780)))) - ((((max(var_13, 2100691030)) >= (((var_9 ? (arr_0 [i_0] [i_4]) : (arr_5 [i_4])))))))));
            var_22 += min((((arr_3 [i_0] [20]) ? (arr_6 [i_4] [4] [i_4]) : (max(16384, 511)))), ((max((6425780 & -1302754271), 3783911078))));
            var_23 = var_0;
        }
    }
    for (int i_5 = 0; i_5 < 10;i_5 += 1)
    {
        /* LoopNest 3 */
        for (int i_6 = 0; i_6 < 10;i_6 += 1)
        {
            for (int i_7 = 0; i_7 < 10;i_7 += 1)
            {
                for (int i_8 = 0; i_8 < 10;i_8 += 1)
                {
                    {
                        var_24 = 32;
                        var_25 -= ((var_9 ? (((((~(arr_20 [i_5] [5] [i_5])))) ? (max(89, var_6)) : var_4)) : (max((((-(arr_24 [0] [i_7] [i_6] [i_5] [i_5])))), 1534430681))));
                    }
                }
            }
        }

        for (int i_9 = 0; i_9 < 10;i_9 += 1)
        {
            var_26 |= (((arr_10 [i_5] [i_9] [i_9] [4]) - (arr_26 [i_5] [i_5])));
            var_27 ^= -1886729107;
            arr_30 [i_9] [i_5] [i_5] = var_14;
            var_28 *= max(1534430671, (min((max(var_11, (arr_3 [22] [i_9]))), ((((arr_23 [i_5] [i_5] [i_9]) & (arr_0 [i_5] [3])))))));
        }
        for (int i_10 = 0; i_10 < 10;i_10 += 1)
        {
            arr_35 [i_10] [i_10] [i_10] = (arr_24 [i_10] [i_10] [i_5] [i_5] [i_5]);
            var_29 &= (((((!((((arr_23 [i_10] [i_10] [i_10]) ^ -3764104988052841920)))))) ^ ((var_5 ? ((max((arr_4 [i_5] [i_10] [i_5]), var_4))) : ((var_1 ? var_7 : 393754522))))));
            var_30 -= ((1325503329 / ((max((((arr_20 [i_5] [i_10] [i_10]) / var_9)), 14928)))));
        }
        var_31 = ((((((max((arr_9 [i_5] [i_5] [i_5] [i_5]), 67))) ? -3764104988052841920 : 4132491437262691678)) < (((((((arr_31 [i_5] [4]) ? -288710751 : 1659709289)) > (arr_4 [i_5] [i_5] [i_5])))))));
    }
    var_32 = var_14;
    #pragma endscop
}
