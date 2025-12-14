/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 142442
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=142442 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/142442
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 0; i_0 < 10;i_0 += 1)
    {
        arr_2 [i_0] = (arr_0 [i_0]);
        arr_3 [i_0] [i_0] = (min((((arr_1 [i_0]) ? ((((!(arr_1 [i_0]))))) : (max((arr_0 [i_0]), 1456936670)))), (~0)));
    }
    for (int i_1 = 1; i_1 < 19;i_1 += 1)
    {
        /* LoopNest 3 */
        for (int i_2 = 0; i_2 < 20;i_2 += 1)
        {
            for (int i_3 = 0; i_3 < 20;i_3 += 1)
            {
                for (int i_4 = 0; i_4 < 20;i_4 += 1)
                {
                    {
                        var_19 ^= (min((arr_5 [6]), (((!((((arr_12 [i_3]) ? 268435454 : (arr_6 [2])))))))));
                        arr_13 [i_1] [i_2] [i_3] [i_1] = (((32767 != 1) ? ((((((-(arr_6 [i_1])))) ? (arr_10 [i_1]) : (((arr_11 [5] [i_4] [3] [16] [i_1 + 1] [i_1 + 1]) ? (arr_10 [i_1]) : (arr_12 [1])))))) : ((-(arr_4 [i_2])))));
                    }
                }
            }
        }
        arr_14 [i_1] = (~((((18446744073709551615 ? (arr_10 [i_1]) : -20)))));
        arr_15 [i_1] = ((((((min((arr_5 [i_1]), 268435450))) ? (arr_7 [i_1] [i_1] [i_1]) : (((-2147483647 - 1) ? 59439 : (arr_12 [i_1]))))) <= (arr_12 [i_1 + 1])));
    }

    /* vectorizable */
    for (int i_5 = 1; i_5 < 18;i_5 += 1)
    {
        arr_19 [i_5] = 1;
        arr_20 [i_5] [0] = ((10855538669456433400 ? (((arr_16 [i_5] [i_5]) & (arr_10 [i_5]))) : ((~(arr_8 [16] [i_5] [16] [i_5])))));
    }
    for (int i_6 = 0; i_6 < 23;i_6 += 1)
    {
        arr_23 [i_6] = (227 ? 2838030626 : (((arr_22 [i_6] [i_6]) ? ((~(arr_21 [i_6]))) : (min((arr_21 [i_6]), 0)))));
        var_20 = (arr_21 [i_6]);
        var_21 = (((((((min((arr_22 [i_6] [i_6]), (arr_22 [i_6] [i_6])))) ? (!-20) : -268435455))) ? (((0 << (((arr_22 [2] [i_6]) - 119))))) : (((((min((arr_22 [i_6] [i_6]), 1))) ? (((arr_21 [i_6]) ? (arr_22 [i_6] [8]) : (arr_22 [1] [1]))) : -1)))));
        arr_24 [4] |= (((min((!0), ((268435452 ? 121 : 268435454)))) < (arr_22 [i_6] [i_6])));
    }
    for (int i_7 = 2; i_7 < 13;i_7 += 1) /* same iter space */
    {
        arr_29 [i_7] [i_7] = ((17 ? 268435454 : 2060574481));
        var_22 -= -7293788465134934576;
    }
    for (int i_8 = 2; i_8 < 13;i_8 += 1) /* same iter space */
    {
        var_23 = (min(var_23, (~0)));
        arr_34 [i_8] = (max(-1293126750, 18441403468889766290));
        arr_35 [i_8] = ((((((((arr_30 [i_8]) ? (arr_6 [0]) : (arr_32 [i_8 - 1])))) ? (arr_9 [i_8] [i_8] [i_8] [i_8]) : (arr_17 [i_8]))) - (arr_12 [i_8])));
        var_24 += ((1456936665 != (arr_4 [i_8])));
    }
    var_25 |= ((min((~1606429702), ((14679693278215077984 ? 2060574482 : 9201822260046263884)))));
    var_26 = ((((692839759 + var_3) >> (!1293126750))));
    #pragma endscop
}
