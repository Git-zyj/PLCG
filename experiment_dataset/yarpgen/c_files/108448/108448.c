/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 108448
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=108448 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/108448
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 0; i_0 < 20;i_0 += 1)
    {

        /* vectorizable */
        for (int i_1 = 0; i_1 < 20;i_1 += 1)
        {
            var_16 *= (54 ? 201 : 4281650511);
            var_17 = ((35927 ? 2047 : 14));
            var_18 = (((arr_2 [i_0]) ? 6263172126582734070 : (arr_2 [i_1])));
            arr_5 [i_0] [i_1] = 194;
        }
        for (int i_2 = 0; i_2 < 20;i_2 += 1)
        {
            var_19 = (arr_2 [i_0]);
            arr_8 [i_0] [i_0] [i_0] = ((((var_11 ? var_4 : var_9))));
        }
        for (int i_3 = 3; i_3 < 19;i_3 += 1)
        {
            var_20 = (min(var_20, ((((((-1 ? var_7 : 62))) ? (((arr_6 [i_0] [i_3 - 1]) ? (arr_4 [i_0] [i_3 - 1] [15]) : 3200034116)) : var_10)))));
            arr_12 [i_0] [i_0] = ((((((((4695664664179468332 ? 46001 : 65521))) ? 65535 : (arr_3 [i_3 - 3])))) ? ((var_5 ? 65521 : 69)) : var_3));
        }
        var_21 ^= var_5;
        var_22 = (max(var_22, (((45182 ? (arr_2 [i_0]) : (arr_2 [i_0]))))));
    }
    for (int i_4 = 0; i_4 < 24;i_4 += 1)
    {
        var_23 *= 201;

        /* vectorizable */
        for (int i_5 = 0; i_5 < 24;i_5 += 1)
        {
            var_24 *= (((arr_13 [13]) ? (arr_15 [i_5] [i_4]) : var_14));
            /* LoopNest 2 */
            for (int i_6 = 3; i_6 < 23;i_6 += 1)
            {
                for (int i_7 = 0; i_7 < 24;i_7 += 1)
                {
                    {
                        var_25 -= (arr_22 [i_6 - 2] [i_6 + 1]);
                        var_26 *= 65529;

                        for (int i_8 = 1; i_8 < 22;i_8 += 1)
                        {
                            var_27 = (min(var_27, (((2047 ? 12 : 31372)))));
                            arr_26 [23] [i_5] [6] [16] [i_8] [16] [i_8] = (((arr_19 [i_5] [i_6 - 1] [i_8 - 1]) ? 46011 : (arr_13 [i_8 + 2])));
                        }
                        for (int i_9 = 0; i_9 < 24;i_9 += 1)
                        {
                            var_28 = 19130;
                            var_29 = ((var_0 ? ((((arr_29 [i_7] [i_5]) ? var_14 : var_13))) : (arr_27 [15] [i_5] [2] [i_7] [i_6 + 1])));
                            arr_30 [i_4] [i_4] [i_4] [i_4] [i_9] = (arr_14 [i_6 - 3]);
                            var_30 = (max(var_30, (arr_21 [i_6] [i_6] [0] [4] [i_6] [i_6 - 2])));
                        }
                    }
                }
            }
            arr_31 [i_4] [i_5] [i_4] = ((var_15 ? var_3 : ((((arr_20 [i_4] [i_5] [i_5]) ? 65521 : (arr_19 [i_4] [i_4] [i_4]))))));
            var_31 *= ((((((arr_27 [5] [16] [16] [21] [16]) ? var_9 : (arr_28 [19] [i_5] [6] [i_5] [i_4] [i_5] [i_5])))) ? (((arr_22 [i_4] [3]) ? 65535 : var_2)) : (arr_29 [i_5] [i_4])));
        }
        for (int i_10 = 0; i_10 < 24;i_10 += 1)
        {
            arr_35 [i_10] = 63;
            arr_36 [i_10] [i_10] [i_4] = (((((38 ? 9 : 46006))) ? ((65535 ? var_13 : 11475)) : (arr_18 [i_10] [i_4] [i_4])));
            var_32 = (((((63053 ? var_12 : ((14 ? (arr_18 [19] [19] [19]) : 17993039371125844721))))) ? (arr_21 [i_4] [i_4] [i_4] [14] [i_10] [i_10]) : (((65524 ? ((65535 ? var_6 : (arr_29 [23] [i_4]))) : 228)))));
        }
        var_33 = ((65516 ? ((var_4 ? 157 : ((53 ? var_3 : (arr_14 [19]))))) : var_2));
    }
    var_34 = var_7;
    var_35 = var_12;
    #pragma endscop
}
